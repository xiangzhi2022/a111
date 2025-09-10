#include "VitsCustomRuntime.h"

#include "Misc/Paths.h"
#include "HAL/PlatformFilemanager.h"
#include "VitsTypes.h"
#include "Misc/FileHelper.h"

#include "onnxruntime_c_api.h"
#include "onnxruntime_cxx_api.h"

static std::wstring ToWide(const FString& S)
{
    return std::wstring(*S, S.Len());
}

FVitsCustomRuntime& FVitsCustomRuntime::Get()
{
    static FVitsCustomRuntime Instance;
    return Instance;
}

bool FVitsCustomRuntime::InitializeOrt(int32 IntraOpThreads, int32 InterOpThreads)
{
    if (!Env)
    {
        try
        {
            Env = std::make_unique<Ort::Env>(ORT_LOGGING_LEVEL_WARNING, "vits_custom");
        }
        catch (...)
        {
            return false;
        }
    }

    if (!Options)
    {
        try
        {
            Options = std::make_unique<Ort::SessionOptions>();
            if (IntraOpThreads > 0) Options->SetIntraOpNumThreads(IntraOpThreads);
            if (InterOpThreads > 0) Options->SetInterOpNumThreads(InterOpThreads);
            Options->SetGraphOptimizationLevel(GraphOptimizationLevel::ORT_ENABLE_EXTENDED);
            CurrentProvider = EOrtProvider::CPU; // default CPU until EP appended successfully
        }
        catch (...)
        {
            Options.reset();
            return false;
        }
    }

    return true;
}

bool FVitsCustomRuntime::EnableCudaProvider(int32 DeviceId)
{
    if (!Options)
    {
        if (!InitializeOrt(1, 1)) return false;
    }
    try
    {
        auto& Api = Ort::GetApi();
        OrtCUDAProviderOptionsV2* CudaOpts = nullptr;
        OrtStatus* st = Api.CreateCUDAProviderOptions(&CudaOpts);
        if (st != nullptr)
        {
            Api.ReleaseStatus(st);
            return false;
        }
        std::string DevStr = std::to_string((int)DeviceId);
        const char* keys[] = { "device_id" };
        const char* values[] = { DevStr.c_str() };
        st = Api.UpdateCUDAProviderOptions(CudaOpts, keys, values, 1);
        if (st != nullptr)
        {
            Api.ReleaseCUDAProviderOptions(CudaOpts);
            Api.ReleaseStatus(st);
            return false;
        }

        st = Api.SessionOptionsAppendExecutionProvider_CUDA_V2((*Options), CudaOpts);
        Api.ReleaseCUDAProviderOptions(CudaOpts);
        if (st != nullptr)
        {
            Api.ReleaseStatus(st);
            return false;
        }
        CurrentProvider = EOrtProvider::CUDA;
        return true;
    }
    catch (...)
    {
        return false;
    }
}

static void ExpandSequence192(const TArray<float>& In, int32 L, const TArray<int32>& Durations, TArray<float>& Out)
{
    // In shape: [1,192,L] flattened as 192*L
    int32 T = 0; for (int32 d : Durations) T += FMath::Max(0, d);
    Out.SetNumZeroed(192 * T);
    int32 outPos = 0;
    for (int32 t = 0; t < L; ++t)
    {
        int32 rep = FMath::Max(0, Durations[t]);
        const float* src = In.GetData() + t * 192;
        for (int32 r = 0; r < rep; ++r)
        {
            FMemory::Memcpy(Out.GetData() + outPos * 192, src, sizeof(float) * 192);
            outPos++;
        }
    }
}

static void MakeOnesMask(TArray<float>& Mask, int32 T)
{
    Mask.SetNumUninitialized(T);
    for (int32 i = 0; i < T; ++i) Mask[i] = 1.0f;
}

static void BoxMullerNoise(int32 Count, TArray<float>& Out, uint32 Seed)
{
    Out.SetNumUninitialized(Count);
    FRandomStream R(Seed);
    for (int32 i = 0; i < Count; i += 2)
    {
        float U1 = FMath::Max(1e-7f, R.FRand());
        float U2 = R.FRand();
        float mag = FMath::Sqrt(-2.0f * FMath::Loge(U1));
        float Z0 = mag * FMath::Cos(2.0f * PI * U2);
        float Z1 = mag * FMath::Sin(2.0f * PI * U2);
        Out[i] = Z0;
        if (i + 1 < Count) Out[i + 1] = Z1;
    }
}

bool FVitsCustomRuntime::SynthesizeChineseFromIds(const TArray<int64>& TokenIds,
                                                  float LengthScale,
                                                  float NoiseScale,
                                                  float NoiseScaleW,
                                                  int32 SampleRate,
                                                  TArray<float>& OutPcm)
{
    OutPcm.Reset();
    if (TokenIds.Num() <= 0) return false;
    // Ensure sessions exist
    auto Need = { TEXT("cn_enc_p"), TEXT("cn_dp"), TEXT("cn_flow"), TEXT("cn_dec") };
    bool allOk = true;
    for (auto& A : Need) allOk &= IsModelLoadedNamed(A);
    if (!allOk)
    {
        // Auto load from sibling plugin path without using IPluginManager
        const FString VitsNativeDir = FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("vits_native"));
        const FString Base = FPaths::Combine(VitsNativeDir, TEXT("Chinese_model"));
        if (!LoadModelNamed(TEXT("cn_enc_p"), FPaths::Combine(Base, TEXT("enc_p.onnx")))) return false;
        if (!LoadModelNamed(TEXT("cn_dp"),   FPaths::Combine(Base, TEXT("dp.onnx")))) return false;
        if (!LoadModelNamed(TEXT("cn_flow"), FPaths::Combine(Base, TEXT("flow.onnx")))) return false;
        if (!LoadModelNamed(TEXT("cn_dec"),  FPaths::Combine(Base, TEXT("dec.onnx")))) return false;
    }

    const int32 L = TokenIds.Num();
    // 1) enc_p
    FOrtTensorInt64 X; X.Name = TEXT("x"); X.Shape = {1, L}; X.Data = TokenIds;
    FOrtTensorInt64 XL; XL.Name = TEXT("x_lengths"); XL.Shape = {1}; XL.Data = { (int64)L };
    TArray<FOrtTensorFloat> EncOut;
    if (!RunMixedNamed(TEXT("cn_enc_p"), {}, { XL, X }, {}, { TEXT("xout"), TEXT("m_p"), TEXT("logs_p"), TEXT("x_mask") }, EncOut))
        return false;

    auto FindByName = [](const TArray<FOrtTensorFloat>& Arr, const FString& Name)->const FOrtTensorFloat*
    {
        for (const auto& T : Arr) if (T.Name == Name) return &T; return nullptr;
    };
    const FOrtTensorFloat* XOut = FindByName(EncOut, TEXT("xout"));
    const FOrtTensorFloat* MP   = FindByName(EncOut, TEXT("m_p"));
    const FOrtTensorFloat* Logs = FindByName(EncOut, TEXT("logs_p"));
    const FOrtTensorFloat* XMask= FindByName(EncOut, TEXT("x_mask"));
    if (!XOut || !MP || !Logs || !XMask) return false;

    // Flatten encoder outputs to [192,L]
    if (XOut->Shape.Num() < 3 || MP->Shape.Num() < 3 || Logs->Shape.Num() < 3) return false;
    const int32 C = 192;
    const int32 Lenc = XOut->Shape.Last();
    auto FlattenFeature = [&](const FOrtTensorFloat* T)->TArray<float>
    {
        // Assume shape [1,192,L]
        TArray<float> R; R.SetNumUninitialized(C * Lenc);
        FMemory::Memcpy(R.GetData(), T->Data.GetData(), sizeof(float)*C*Lenc);
        return R;
    };
    TArray<float> FeatX = FlattenFeature(XOut);
    TArray<float> FeatM = FlattenFeature(MP);
    TArray<float> FeatS = FlattenFeature(Logs);

    // 2) dp: need zin [1,2,L]
    FOrtTensorFloat Zin; Zin.Name=TEXT("zin"); Zin.Shape={1,2,Lenc};
    Zin.Data.SetNumZeroed(2 * Lenc);
    FOrtTensorFloat Xf; Xf.Name=TEXT("x"); Xf.Shape={1, C, Lenc}; Xf.Data = FeatX; // reuse encoder xout
    FOrtTensorFloat Xm; Xm.Name=TEXT("x_mask"); Xm.Shape={1,1,Lenc}; Xm.Data = XMask->Data; // copy mask
    TArray<FOrtTensorFloat> DpOut;
    if (!RunMixedNamed(TEXT("cn_dp"), { Xf, Xm, Zin }, {}, {}, { TEXT("logw") }, DpOut)) return false;
    if (DpOut.Num() == 0 || DpOut[0].Data.Num() < Lenc) return false;

    // durations from logw
    TArray<int32> Dur; Dur.SetNumUninitialized(Lenc);
    for (int32 i = 0; i < Lenc; ++i)
    {
        float w = FMath::Exp(DpOut[0].Data[i]) * LengthScale;
        int32 d = FMath::Max(1, (int32)FMath::RoundToInt(w));
        Dur[i] = d;
    }
    int32 T = 0; for (int32 d : Dur) T += d;

    // 3) length regulate: expand m_p and logs_p to time axis T
    TArray<float> Mexp, Sexp; // [192*T]
    ExpandSequence192(FeatM, Lenc, Dur, Mexp);
    ExpandSequence192(FeatS, Lenc, Dur, Sexp);

    // build z_p = m_p + noiseScale * exp(s_p) * N(0,1)
    TArray<float> Noise; BoxMullerNoise(192*T, Noise, 12345);
    TArray<float> Zp; Zp.SetNumUninitialized(192*T);
    for (int32 t = 0; t < T; ++t)
    {
        for (int32 c = 0; c < C; ++c)
        {
            int32 idx = t* C + c;
            float sigma = FMath::Exp(Sexp[idx]);
            Zp[idx] = Mexp[idx] + NoiseScale * sigma * Noise[idx];
        }
    }
    TArray<float> Ymask; MakeOnesMask(Ymask, T);

    // 4) flow: z = flow(z_p, y_mask)
    FOrtTensorFloat ZpT; ZpT.Name=TEXT("z_p"); ZpT.Shape={1,C,T}; ZpT.Data=Zp;
    FOrtTensorFloat YmaskT; YmaskT.Name=TEXT("y_mask"); YmaskT.Shape={1,1,T}; YmaskT.Data=Ymask;
    TArray<FOrtTensorFloat> FlowOut;
    if (!RunMixedNamed(TEXT("cn_flow"), { ZpT, YmaskT }, {}, {}, { TEXT("z") }, FlowOut)) return false;
    if (FlowOut.Num() == 0) return false;

    // 5) dec: o = dec(z)
    FOrtTensorFloat ZIn; ZIn.Name=TEXT("z_in"); ZIn.Shape={1,C,T}; ZIn.Data = FlowOut[0].Data;
    TArray<FOrtTensorFloat> DecOut;
    if (!RunMixedNamed(TEXT("cn_dec"), { ZIn }, {}, {}, { TEXT("o") }, DecOut)) return false;
    if (DecOut.Num() == 0) return false;
    // o shape [1,1,T]
    OutPcm = DecOut[0].Data; // already flattened length T
    // Clamp safety
    for (float& v : OutPcm) v = FMath::Clamp(v, -1.0f, 1.0f);
    return true;
}

bool FVitsCustomRuntime::SynthesizeChineseFromIdsDetailed(const TArray<int64>& TokenIds,
                                                         float LengthScale,
                                                         float NoiseScale,
                                                         float NoiseScaleW,
                                                         int32 SampleRate,
                                                         TArray<float>& OutPcm,
                                                         TArray<FTimedToken>& OutTimeline)
{
    OutTimeline.Reset();
    OutPcm.Reset();
    if (TokenIds.Num() <= 0) return false;

    // Ensure sessions exist (same aliases as simple path)
    auto Need = { TEXT("cn_enc_p"), TEXT("cn_dp"), TEXT("cn_flow"), TEXT("cn_dec") };
    bool allOk = true;
    for (auto& A : Need) allOk &= IsModelLoadedNamed(A);
    if (!allOk)
    {
        const FString VitsNativeDir = FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("vits_native"));
        const FString Base = FPaths::Combine(VitsNativeDir, TEXT("Chinese_model"));
        if (!LoadModelNamed(TEXT("cn_enc_p"), FPaths::Combine(Base, TEXT("enc_p.onnx")))) return false;
        if (!LoadModelNamed(TEXT("cn_dp"),   FPaths::Combine(Base, TEXT("dp.onnx")))) return false;
        if (!LoadModelNamed(TEXT("cn_flow"), FPaths::Combine(Base, TEXT("flow.onnx")))) return false;
        if (!LoadModelNamed(TEXT("cn_dec"),  FPaths::Combine(Base, TEXT("dec.onnx")))) return false;
    }

    const int32 L = TokenIds.Num();
    // 1) enc_p
    FOrtTensorInt64 X; X.Name = TEXT("x"); X.Shape = {1, L}; X.Data = TokenIds;
    FOrtTensorInt64 XL; XL.Name = TEXT("x_lengths"); XL.Shape = {1}; XL.Data = { (int64)L };
    TArray<FOrtTensorFloat> EncOut;
    if (!RunMixedNamed(TEXT("cn_enc_p"), {}, { XL, X }, {}, { TEXT("xout"), TEXT("m_p"), TEXT("logs_p"), TEXT("x_mask") }, EncOut))
        return false;

    auto FindByName = [](const TArray<FOrtTensorFloat>& Arr, const FString& Name)->const FOrtTensorFloat*
    {
        for (const auto& T : Arr) if (T.Name == Name) return &T; return nullptr;
    };
    const FOrtTensorFloat* XOut = FindByName(EncOut, TEXT("xout"));
    const FOrtTensorFloat* MP   = FindByName(EncOut, TEXT("m_p"));
    const FOrtTensorFloat* Logs = FindByName(EncOut, TEXT("logs_p"));
    const FOrtTensorFloat* XMask= FindByName(EncOut, TEXT("x_mask"));
    if (!XOut || !MP || !Logs || !XMask) return false;

    // Flatten encoder outputs to [192,L]
    if (XOut->Shape.Num() < 3 || MP->Shape.Num() < 3 || Logs->Shape.Num() < 3) return false;
    const int32 C = 192;
    const int32 Lenc = XOut->Shape.Last();
    auto FlattenFeature = [&](const FOrtTensorFloat* T)->TArray<float>
    {
        TArray<float> R; R.SetNumUninitialized(C * Lenc);
        FMemory::Memcpy(R.GetData(), T->Data.GetData(), sizeof(float)*C*Lenc);
        return R;
    };
    TArray<float> FeatX = FlattenFeature(XOut);
    TArray<float> FeatM = FlattenFeature(MP);
    TArray<float> FeatS = FlattenFeature(Logs);

    // 2) dp: need zin [1,2,L]
    FOrtTensorFloat Zin; Zin.Name=TEXT("zin"); Zin.Shape={1,2,Lenc};
    Zin.Data.SetNumZeroed(2 * Lenc);
    FOrtTensorFloat Xf; Xf.Name=TEXT("x"); Xf.Shape={1, C, Lenc}; Xf.Data = FeatX;
    FOrtTensorFloat Xm; Xm.Name=TEXT("x_mask"); Xm.Shape={1,1,Lenc}; Xm.Data = XMask->Data;

    TArray<FOrtTensorFloat> DpOut;
    if (!RunMixedNamed(TEXT("cn_dp"), { Xf, Xm, Zin }, {}, {}, { TEXT("logw") }, DpOut)) return false;
    if (DpOut.Num() == 0 || DpOut[0].Data.Num() < Lenc) return false;

    // durations from logw
    TArray<int32> Dur; Dur.SetNumUninitialized(Lenc);
    for (int32 i = 0; i < Lenc; ++i)
    {
        float w = FMath::Exp(DpOut[0].Data[i]) * LengthScale;
        int32 d = FMath::Max(0, (int32)FMath::RoundToInt(w));
        Dur[i] = d;
    }
    int32 T = 0; for (int32 d : Dur) T += d;

    // 3) expand features to T
    TArray<float> Mexp, Sexp; Mexp.Reserve(C * FMath::Max(1, T)); Sexp.Reserve(C * FMath::Max(1, T));
    ExpandSequence192(FeatM, Lenc, Dur, Mexp);
    ExpandSequence192(FeatS, Lenc, Dur, Sexp);

    // 3.1) sample z_p and y_mask
    TArray<float> Ymask; MakeOnesMask(Ymask, T);
    // noise
    TArray<float> Noise; BoxMullerNoise(C * T, Noise, 12345);
    for (int32 i = 0; i < C * T; ++i)
    {
        Noise[i] *= NoiseScale;
    }
    // z_p = m + exp(s) * noise
    TArray<float> Zp; Zp.SetNumUninitialized(C * T);
    for (int32 i = 0; i < C * T; ++i)
    {
        Zp[i] = Mexp[i] + FMath::Exp(Sexp[i]) * Noise[i];
    }

    FOrtTensorFloat ZpT; ZpT.Name=TEXT("z_p"); ZpT.Shape={1,C,T}; ZpT.Data = Zp;
    FOrtTensorFloat YmaskT; YmaskT.Name=TEXT("y_mask"); YmaskT.Shape={1,1,T}; YmaskT.Data = Ymask;

    // 4) flow
    TArray<FOrtTensorFloat> FlowOut;
    if (!RunMixedNamed(TEXT("cn_flow"), { ZpT, YmaskT }, {}, {}, { TEXT("z") }, FlowOut)) return false;
    if (FlowOut.Num() == 0) return false;

    // 5) dec -> audio
    FOrtTensorFloat ZIn; ZIn.Name=TEXT("z_in"); ZIn.Shape={1,C,T}; ZIn.Data = FlowOut[0].Data;
    TArray<FOrtTensorFloat> DecOut;
    if (!RunMixedNamed(TEXT("cn_dec"), { ZIn }, {}, {}, { TEXT("o") }, DecOut)) return false;
    if (DecOut.Num() == 0) return false;
    OutPcm = DecOut[0].Data;

    // Build token timeline in seconds
    const int32 TotalSamples = OutPcm.Num();
    const float TotalSeconds = (SampleRate > 0) ? (float)TotalSamples / (float)SampleRate : 0.f;
    const int32 TotalUnits = FMath::Max(1, T);
    const float SecondsPerUnit = (TotalSeconds > 0.f) ? (TotalSeconds / (float)TotalUnits) : 0.f;

    // Reverse dictionary (id->token) if available
    TMap<int64, FString> Rev;
    if (bZhDictLoaded && ZhDict.Num() > 0)
    {
        for (const auto& Kvp : ZhDict)
        {
            Rev.Add(Kvp.Value, Kvp.Key);
        }
    }

    OutTimeline.Reserve(Lenc);
    int32 acc = 0;
    for (int32 i = 0; i < Lenc; ++i)
    {
        FTimedToken Ev;
        Ev.TokenId = (i < TokenIds.Num()) ? (int32)TokenIds[i] : -1;
        if (Rev.Num() > 0 && TokenIds.IsValidIndex(i))
        {
            if (const FString* Label = Rev.Find(TokenIds[i])) Ev.Token = *Label;
        }
        const int32 d = FMath::Max(0, Dur[i]);
        Ev.StartTime = SecondsPerUnit * (float)acc;
        Ev.Duration  = SecondsPerUnit * (float)d;
        acc += d;
        OutTimeline.Add(Ev);
    }

    return true;
}

bool FVitsCustomRuntime::LoadChineseDictionary()
{
    if (bZhDictLoaded && ZhDict.Num() > 0) return true;
    ZhDict.Reset();
    bZhDictLoaded = false;

    // Preferred locations
    const FString SelfBin = FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("vits_custom"), TEXT("Binaries"), TEXT("Win64"));
    const FString NativeBin = FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("vits_native"), TEXT("Binaries"), TEXT("Win64"));
    const FString NativeSrcDict = FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("vits_native"), TEXT("Source"), TEXT("vits_native"), TEXT("dictionary"));
    TArray<FString> Candidates;
    Candidates.Add(FPaths::Combine(SelfBin, TEXT("dictionary.txt")));
    Candidates.Add(FPaths::Combine(SelfBin, TEXT("dictionary2.txt")));
    Candidates.Add(FPaths::Combine(NativeBin, TEXT("dictionary.txt")));
    Candidates.Add(FPaths::Combine(NativeBin, TEXT("dictionary2.txt")));
    Candidates.Add(FPaths::Combine(NativeSrcDict, TEXT("dictionary.txt")));
    Candidates.Add(FPaths::Combine(NativeSrcDict, TEXT("dictionary2.txt")));

    FString PathFound;
    IPlatformFile& PF = FPlatformFileManager::Get().GetPlatformFile();
    for (const FString& P : Candidates)
    {
        if (PF.FileExists(*P)) { PathFound = P; break; }
    }
    if (PathFound.IsEmpty())
    {
        UE_LOG(LogTemp, Warning, TEXT("[vits_custom] No dictionary file found in %s or %s"), *SelfBin, *NativeBin);
        return false;
    }

    ZhDictPathLoaded = PathFound;
    FString Content;
    if (!FFileHelper::LoadFileToString(Content, *PathFound))
    {
        UE_LOG(LogTemp, Warning, TEXT("[vits_custom] Failed to read dictionary: %s"), *PathFound);
        return false;
    }
    TArray<FString> Lines;
    Content.ParseIntoArrayLines(Lines);
    int64 AutoId = 0;
    for (const FString& L : Lines)
    {
        FString Line = L.TrimStartAndEnd();
        if (Line.IsEmpty() || Line.StartsWith(TEXT("#"))) continue;
        // Try several split styles: whitespace, comma, tab, colon, equal
        FString Token; FString IdStr;
        bool Parsed = false;
        {
            // 1) whitespace
            TArray<FString> Parts; Line.ParseIntoArrayWS(Parts);
            if (Parts.Num() >= 2) { Token = Parts[0]; IdStr = Parts.Last(); Parsed = true; }
        }
        if (!Parsed)
        {
            // 2) comma
            TArray<FString> Parts; Line.ParseIntoArray(Parts, TEXT(","));
            if (Parts.Num() >= 2) { Token = Parts[0].TrimStartAndEnd(); IdStr = Parts.Last().TrimStartAndEnd(); Parsed = true; }
        }
        if (!Parsed)
        {
            // 3) colon or equals
            int32 idx = INDEX_NONE;
            if (Line.FindChar(TEXT(':'), idx) || Line.FindChar(TEXT('='), idx))
            {
                Token = Line.Left(idx).TrimStartAndEnd();
                IdStr = Line.Mid(idx+1).TrimStartAndEnd();
                Parsed = true;
            }
        }

        if (Parsed)
        {
            int64 Id = 0;
            if (!LexTryParseString<int64>(Id, *IdStr))
            {
                continue; // malformed id
            }
            if (!Token.IsEmpty())
            {
                ZhDict.Add(Token, Id);
            }
        }
        else
        {
            // single token per line → assign auto-increment id
            FString Single = Line;
            if (!Single.IsEmpty())
            {
                ZhDict.Add(Single, AutoId++);
            }
        }
    }
    // compute max token len (in TCHAR units)
    ZhDictMaxTokenLen = 1;
    for (const auto& Kvp : ZhDict)
    {
        ZhDictMaxTokenLen = FMath::Max(ZhDictMaxTokenLen, Kvp.Key.Len());
    }
    bZhDictLoaded = ZhDict.Num() > 0;
    UE_LOG(LogTemp, Log, TEXT("[vits_custom] Loaded dictionary entries: %d (max token len %d) from %s"), ZhDict.Num(), ZhDictMaxTokenLen, *ZhDictPathLoaded);
    return bZhDictLoaded;
}

void FVitsCustomRuntime::UnloadChineseDictionary()
{
    ZhDict.Reset();
    bZhDictLoaded = false;
    ZhDictPathLoaded.Reset();
}

bool FVitsCustomRuntime::TextToTokenIds(const FString& Text, TArray<int64>& OutIds, int64 OOVId)
{
    OutIds.Reset();
    if (!bZhDictLoaded)
    {
        if (!LoadChineseDictionary()) return false;
    }
    // Greedy longest-match segmentation using dictionary tokens
    int32 i = 0;
    while (i < Text.Len())
    {
        const TCHAR ch = Text[i];
        if (FChar::IsWhitespace(ch)) { ++i; continue; }
        int32 matchedLen = 0; int64 matchedId = OOVId;
        const int32 tryMax = FMath::Min(ZhDictMaxTokenLen, Text.Len() - i);
        for (int32 len = tryMax; len >= 1; --len)
        {
            FString key = Text.Mid(i, len);
            if (const int64* id = ZhDict.Find(key))
            {
                matchedLen = len; matchedId = *id; break;
            }
        }
        OutIds.Add(matchedId);
        i += (matchedLen > 0) ? matchedLen : 1;
    }
    return OutIds.Num() > 0;
}

bool FVitsCustomRuntime::LoadChineseDictionaryFromPath(const FString& AbsolutePath)
{
    ZhDict.Reset(); bZhDictLoaded = false; ZhDictMaxTokenLen = 1; ZhDictPathLoaded.Reset();
    IPlatformFile& PF = FPlatformFileManager::Get().GetPlatformFile();
    if (!PF.FileExists(*AbsolutePath))
    {
        UE_LOG(LogTemp, Warning, TEXT("[vits_custom] Dictionary not found: %s"), *AbsolutePath);
        return false;
    }
    ZhDictPathLoaded = AbsolutePath;
    FString Content;
    if (!FFileHelper::LoadFileToString(Content, *AbsolutePath))
    {
        UE_LOG(LogTemp, Warning, TEXT("[vits_custom] Failed to read dictionary: %s"), *AbsolutePath);
        return false;
    }
    TArray<FString> Lines; Content.ParseIntoArrayLines(Lines);
    int64 AutoId = 0;
    for (const FString& L : Lines)
    {
        FString Line = L.TrimStartAndEnd(); if (Line.IsEmpty() || Line.StartsWith(TEXT("#"))) continue;
        FString Token; FString IdStr; bool Parsed = false;
        { TArray<FString> Parts; Line.ParseIntoArrayWS(Parts); if (Parts.Num() >= 2) { Token=Parts[0]; IdStr=Parts.Last(); Parsed=true; } }
        if (!Parsed) { TArray<FString> Parts; Line.ParseIntoArray(Parts, TEXT(",")); if (Parts.Num() >= 2) { Token=Parts[0].TrimStartAndEnd(); IdStr=Parts.Last().TrimStartAndEnd(); Parsed=true; } }
        if (!Parsed) { int32 idx=INDEX_NONE; if (Line.FindChar(TEXT(':'), idx) || Line.FindChar(TEXT('='), idx)) { Token=Line.Left(idx).TrimStartAndEnd(); IdStr=Line.Mid(idx+1).TrimStartAndEnd(); Parsed=true; } }
        if (Parsed)
        {
            int64 Id=0; if (!LexTryParseString<int64>(Id, *IdStr)) continue; if (!Token.IsEmpty()) ZhDict.Add(Token, Id);
        }
        else { FString Single = Line; if (!Single.IsEmpty()) ZhDict.Add(Single, AutoId++); }
    }
    ZhDictMaxTokenLen = 1; for (const auto& Kvp : ZhDict) ZhDictMaxTokenLen = FMath::Max(ZhDictMaxTokenLen, Kvp.Key.Len());
    bZhDictLoaded = ZhDict.Num() > 0;
    UE_LOG(LogTemp, Log, TEXT("[vits_custom] Loaded dictionary entries: %d (max token len %d) from %s"), ZhDict.Num(), ZhDictMaxTokenLen, *ZhDictPathLoaded);
    return bZhDictLoaded;
}

bool FVitsCustomRuntime::LookupChineseToken(const FString& Token, int64& OutId) const
{
    if (const int64* p = ZhDict.Find(Token)) { OutId = *p; return true; }
    return false;
}

void FVitsCustomRuntime::GetChineseDictionaryStats(int32& OutCount, int32& OutMaxTokenLen, bool& bOutLoaded, FString& OutPath) const
{
    OutCount = ZhDict.Num();
    OutMaxTokenLen = ZhDictMaxTokenLen;
    bOutLoaded = bZhDictLoaded;
    OutPath = ZhDictPathLoaded;
}

void FVitsCustomRuntime::CopyChineseDictionaryItems(int32 MaxCount, TArray<FString>& OutTokens, TArray<int64>& OutIds) const
{
    OutTokens.Reset();
    OutIds.Reset();
    if (!bZhDictLoaded || ZhDict.Num() <= 0 || MaxCount <= 0) return;
    int32 printed = 0;
    for (const TPair<FString,int64>& Kvp : ZhDict)
    {
        OutTokens.Add(Kvp.Key);
        OutIds.Add(Kvp.Value);
        if (++printed >= MaxCount) break;
    }
}

bool FVitsCustomRuntime::EnableDmlProvider(int32 DeviceId)
{
    if (!Options)
    {
        if (!InitializeOrt(1, 1)) return false;
    }
    try
    {
        auto& Api = Ort::GetApi();
        std::string DevStr = std::to_string((int)DeviceId);
        const char* keys[] = { "device_id" };
        const char* values[] = { DevStr.c_str() };
        OrtStatus* st = Api.SessionOptionsAppendExecutionProvider((*Options), "DML", keys, values, 1);
        if (st != nullptr)
        {
            Api.ReleaseStatus(st);
            return false;
        }
        CurrentProvider = EOrtProvider::DML;
        return true;
    }
    catch (...)
    {
        return false;
    }
}

bool FVitsCustomRuntime::LoadModel(const FString& ModelPath)
{
    if (!Env || !Options)
    {
        if (!InitializeOrt(1, 1)) return false;
    }

    IPlatformFile& PF = FPlatformFileManager::Get().GetPlatformFile();
    if (!PF.FileExists(*ModelPath))
    {
        return false;
    }

    try
    {
        std::wstring WPath = ToWide(FPaths::ConvertRelativePathToFull(ModelPath));
        Session = std::make_unique<Ort::Session>(*Env, WPath.c_str(), *Options);
        return true;
    }
    catch (...)
    {
        Session.reset();
        return false;
    }
}

void FVitsCustomRuntime::UnloadModel()
{
    Session.reset();
}

void FVitsCustomRuntime::GetModelIO(TArray<FString>& Inputs, TArray<FString>& Outputs) const
{
    Inputs.Reset();
    Outputs.Reset();
    if (!Session)
        return;

    Ort::AllocatorWithDefaultOptions Alloc;
    size_t InCount = Session->GetInputCount();
    size_t OutCount = Session->GetOutputCount();

    for (size_t i = 0; i < InCount; ++i)
    {
        auto Name = Session->GetInputNameAllocated(i, Alloc);
        Inputs.Add(FString(UTF8_TO_TCHAR(Name.get())));
    }
    for (size_t i = 0; i < OutCount; ++i)
    {
        auto Name = Session->GetOutputNameAllocated(i, Alloc);
        Outputs.Add(FString(UTF8_TO_TCHAR(Name.get())));
    }
}

bool FVitsCustomRuntime::RunFloats(const TArray<FOrtTensorFloat>& InInputs,
                                   const TArray<FString>& OutNames,
                                   TArray<FOrtTensorFloat>& OutTensors)
{
    OutTensors.Reset();
    if (!Session)
    {
        return false;
    }

    try
    {
        Ort::AllocatorWithDefaultOptions Alloc;
        Ort::MemoryInfo MemInfo = Ort::MemoryInfo::CreateCpu(OrtDeviceAllocator, OrtMemTypeDefault);

        std::vector<const char*> InputNames;
        std::vector<std::string> InputNamesKeep;
        std::vector<Ort::Value> InputValues;
        InputNames.reserve(InInputs.Num());
        InputValues.reserve(InInputs.Num());

        for (const FOrtTensorFloat& Tin : InInputs)
        {
            // Build shape (int64)
            std::vector<int64_t> Shape64;
            Shape64.reserve(Tin.Shape.Num());
            int64_t count = 1;
            for (int32 d : Tin.Shape) { Shape64.push_back((int64_t)d); count *= (int64_t)d; }
            if ((int64_t)Tin.Data.Num() < count)
            {
                return false; // insufficient data
            }

            float* Ptr = const_cast<float*>(Tin.Data.GetData());
            Ort::Value Tensor = Ort::Value::CreateTensor<float>(MemInfo, Ptr, (size_t)count, Shape64.data(), Shape64.size());

            InputValues.emplace_back(std::move(Tensor));
            InputNamesKeep.emplace_back(TCHAR_TO_UTF8(*Tin.Name));
        }
        InputNames.reserve(InputNamesKeep.size());
        for (const auto& s : InputNamesKeep) InputNames.push_back(s.c_str());

        // Output names
        std::vector<const char*> OutputNames;
        std::vector<std::string> OutputNamesKeep;
        OutputNames.reserve(OutNames.Num());
        for (const FString& N : OutNames)
        {
            OutputNamesKeep.emplace_back(TCHAR_TO_UTF8(*N));
        }
        for (const auto& s : OutputNamesKeep) OutputNames.push_back(s.c_str());

        auto Outputs = Session->Run(Ort::RunOptions{nullptr},
                                    InputNames.data(), InputValues.data(), InputValues.size(),
                                    OutputNames.data(), OutputNames.size());

        // Convert outputs back
        for (size_t i = 0; i < Outputs.size(); ++i)
        {
            if (!Outputs[i].IsTensor()) continue;
            auto TypeInfo = Outputs[i].GetTensorTypeAndShapeInfo();
            ONNXTensorElementDataType DType = TypeInfo.GetElementType();
            if (DType != ONNX_TENSOR_ELEMENT_DATA_TYPE_FLOAT) continue; // only float for now

            auto Dims = TypeInfo.GetShape();
            int64_t Count = 1;
            FOrtTensorFloat Out;
            for (auto d : Dims)
            {
                Out.Shape.Add((int32)d);
                Count *= d > 0 ? d : 0; // handle dynamic dims as zero
            }

            const float* Data = Outputs[i].GetTensorData<float>();
            if (Count > 0 && Data)
            {
                Out.Data.SetNum((int32)Count);
                FMemory::Memcpy(Out.Data.GetData(), Data, sizeof(float) * (SIZE_T)Count);
            }

            if (i < OutputNamesKeep.size())
                Out.Name = UTF8_TO_TCHAR(OutputNamesKeep[i].c_str());
            else
                Out.Name = FString::Printf(TEXT("out_%d"), (int32)i);

            OutTensors.Add(MoveTemp(Out));
        }
        return true;
    }
    catch (...)
    {
        return false;
    }
}

bool FVitsCustomRuntime::RunMixed(const TArray<FOrtTensorFloat>& InputsFloat,
                                  const TArray<FOrtTensorInt64>& InputsInt64,
                                  const TArray<FOrtTensorInt32>& InputsInt32,
                                  const TArray<FString>& OutNames,
                                  TArray<FOrtTensorFloat>& OutTensors)
{
    OutTensors.Reset();
    if (!Session) return false;
    try
    {
        Ort::MemoryInfo MemInfo = Ort::MemoryInfo::CreateCpu(OrtDeviceAllocator, OrtMemTypeDefault);
        std::vector<const char*> InputNames;
        std::vector<std::string> InputNamesKeep;
        std::vector<Ort::Value> InputValues;

        auto pushFloat = [&](const FOrtTensorFloat& Tin){
            std::vector<int64_t> Shape64; Shape64.reserve(Tin.Shape.Num());
            int64_t count = 1; for (int32 d : Tin.Shape){ Shape64.push_back((int64_t)d); count *= (int64_t)d; }
            if ((int64_t)Tin.Data.Num() < count) return false;
            float* Ptr = const_cast<float*>(Tin.Data.GetData());
            InputValues.emplace_back(Ort::Value::CreateTensor<float>(MemInfo, Ptr, (size_t)count, Shape64.data(), Shape64.size()));
            InputNamesKeep.emplace_back(TCHAR_TO_UTF8(*Tin.Name));
            return true;
        };

        auto pushInt64 = [&](const FOrtTensorInt64& Tin){
            std::vector<int64_t> Shape64; Shape64.reserve(Tin.Shape.Num());
            int64_t count = 1; for (int32 d : Tin.Shape){ Shape64.push_back((int64_t)d); count *= (int64_t)d; }
            if ((int64_t)Tin.Data.Num() < count) return false;
            int64_t* Ptr = const_cast<int64_t*>(Tin.Data.GetData());
            InputValues.emplace_back(Ort::Value::CreateTensor<int64_t>(MemInfo, Ptr, (size_t)count, Shape64.data(), Shape64.size()));
            InputNamesKeep.emplace_back(TCHAR_TO_UTF8(*Tin.Name));
            return true;
        };

        auto pushInt32 = [&](const FOrtTensorInt32& Tin){
            std::vector<int64_t> Shape64; Shape64.reserve(Tin.Shape.Num());
            int64_t count = 1; for (int32 d : Tin.Shape){ Shape64.push_back((int64_t)d); count *= (int64_t)d; }
            if ((int64_t)Tin.Data.Num() < count) return false;
            int32* Ptr = const_cast<int32*>(Tin.Data.GetData());
            InputValues.emplace_back(Ort::Value::CreateTensor<int32_t>(MemInfo, Ptr, (size_t)count, Shape64.data(), Shape64.size()));
            InputNamesKeep.emplace_back(TCHAR_TO_UTF8(*Tin.Name));
            return true;
        };

        for (const auto& t : InputsFloat) if (!pushFloat(t)) return false;
        for (const auto& t : InputsInt64) if (!pushInt64(t)) return false;
        for (const auto& t : InputsInt32) if (!pushInt32(t)) return false;

        for (const auto& s : InputNamesKeep) InputNames.push_back(s.c_str());

        std::vector<const char*> OutputNames; std::vector<std::string> OutputKeep;
        for (const FString& N : OutNames) OutputKeep.emplace_back(TCHAR_TO_UTF8(*N));
        for (const auto& s : OutputKeep) OutputNames.push_back(s.c_str());

        auto Outputs = Session->Run(Ort::RunOptions{nullptr}, InputNames.data(), InputValues.data(), InputValues.size(), OutputNames.data(), OutputNames.size());

        for (size_t i = 0; i < Outputs.size(); ++i)
        {
            if (!Outputs[i].IsTensor()) continue;
            auto Info = Outputs[i].GetTensorTypeAndShapeInfo();
            if (Info.GetElementType() != ONNX_TENSOR_ELEMENT_DATA_TYPE_FLOAT) continue;
            auto Dims = Info.GetShape();
            int64_t Count = 1; FOrtTensorFloat Out;
            for (auto d : Dims){ Out.Shape.Add((int32)d); Count *= d > 0 ? d : 0; }
            const float* Data = Outputs[i].GetTensorData<float>();
            if (Count > 0 && Data){ Out.Data.SetNum((int32)Count); FMemory::Memcpy(Out.Data.GetData(), Data, sizeof(float) * (SIZE_T)Count); }
            Out.Name = (i < OutputKeep.size()) ? UTF8_TO_TCHAR(OutputKeep[i].c_str()) : FString::Printf(TEXT("out_%d"), (int32)i);
            OutTensors.Add(MoveTemp(Out));
        }
        return true;
    }
    catch (...)
    {
        return false;
    }
}
static const TCHAR* OrtTypeToString(ONNXTensorElementDataType T)
{
    switch (T)
    {
    case ONNX_TENSOR_ELEMENT_DATA_TYPE_FLOAT: return TEXT("float");
    case ONNX_TENSOR_ELEMENT_DATA_TYPE_UINT8: return TEXT("uint8");
    case ONNX_TENSOR_ELEMENT_DATA_TYPE_INT8: return TEXT("int8");
    case ONNX_TENSOR_ELEMENT_DATA_TYPE_UINT16: return TEXT("uint16");
    case ONNX_TENSOR_ELEMENT_DATA_TYPE_INT16: return TEXT("int16");
    case ONNX_TENSOR_ELEMENT_DATA_TYPE_INT32: return TEXT("int32");
    case ONNX_TENSOR_ELEMENT_DATA_TYPE_INT64: return TEXT("int64");
    case ONNX_TENSOR_ELEMENT_DATA_TYPE_STRING: return TEXT("string");
    case ONNX_TENSOR_ELEMENT_DATA_TYPE_BOOL: return TEXT("bool");
    case ONNX_TENSOR_ELEMENT_DATA_TYPE_DOUBLE: return TEXT("double");
    case ONNX_TENSOR_ELEMENT_DATA_TYPE_UINT32: return TEXT("uint32");
    case ONNX_TENSOR_ELEMENT_DATA_TYPE_UINT64: return TEXT("uint64");
    case ONNX_TENSOR_ELEMENT_DATA_TYPE_FLOAT16: return TEXT("float16");
    case ONNX_TENSOR_ELEMENT_DATA_TYPE_BFLOAT16: return TEXT("bfloat16");
    default: return TEXT("unknown");
    }
}


bool FVitsCustomRuntime::LoadModelNamed(const FString& Alias, const FString& ModelPath)
{
    if (!Env || !Options)
    {
        if (!InitializeOrt(1, 1)) return false;
    }
    IPlatformFile& PF = FPlatformFileManager::Get().GetPlatformFile();
    if (!PF.FileExists(*ModelPath) || Alias.IsEmpty())
    {
        return false;
    }
    try
    {
        std::wstring WPath = ToWide(FPaths::ConvertRelativePathToFull(ModelPath));
        std::unique_ptr<Ort::Session> S = std::make_unique<Ort::Session>(*Env, WPath.c_str(), *Options);
        Sessions[TCHAR_TO_UTF8(*Alias)] = std::move(S);
        return true;
    }
    catch (...)
    {
        return false;
    }
}

void FVitsCustomRuntime::UnloadModelNamed(const FString& Alias)
{
    Sessions.erase(TCHAR_TO_UTF8(*Alias));
}

bool FVitsCustomRuntime::IsModelLoadedNamed(const FString& Alias) const
{
    return Sessions.find(TCHAR_TO_UTF8(*Alias)) != Sessions.end();
}

void FVitsCustomRuntime::GetModelIONamed(const FString& Alias, TArray<FString>& Inputs, TArray<FString>& Outputs) const
{
    Inputs.Reset();
    Outputs.Reset();
    auto it = Sessions.find(TCHAR_TO_UTF8(*Alias));
    if (it == Sessions.end()) return;
    Ort::AllocatorWithDefaultOptions Alloc;
    size_t InCount = it->second->GetInputCount();
    size_t OutCount = it->second->GetOutputCount();
    for (size_t i = 0; i < InCount; ++i)
    {
        auto Name = it->second->GetInputNameAllocated(i, Alloc);
        Inputs.Add(FString(UTF8_TO_TCHAR(Name.get())));
    }
    for (size_t i = 0; i < OutCount; ++i)
    {
        auto Name = it->second->GetOutputNameAllocated(i, Alloc);
        Outputs.Add(FString(UTF8_TO_TCHAR(Name.get())));
    }
}

void FVitsCustomRuntime::GetModelIOMetaNamed(const FString& Alias, TArray<FOrtTensorMeta>& Inputs, TArray<FOrtTensorMeta>& Outputs) const
{
    Inputs.Reset();
    Outputs.Reset();
    auto it = Sessions.find(TCHAR_TO_UTF8(*Alias));
    if (it == Sessions.end()) return;
    Ort::AllocatorWithDefaultOptions Alloc;
    size_t InCount = it->second->GetInputCount();
    size_t OutCount = it->second->GetOutputCount();
    for (size_t i = 0; i < InCount; ++i)
    {
        FOrtTensorMeta M;
        auto Name = it->second->GetInputNameAllocated(i, Alloc);
        M.Name = FString(UTF8_TO_TCHAR(Name.get()));
        auto Info = it->second->GetInputTypeInfo(i).GetTensorTypeAndShapeInfo();
        auto Dims = Info.GetShape();
        for (auto d : Dims) M.Shape.Add((int32)d);
        M.DType = OrtTypeToString(Info.GetElementType());
        Inputs.Add(M);
    }
    for (size_t i = 0; i < OutCount; ++i)
    {
        FOrtTensorMeta M;
        auto Name = it->second->GetOutputNameAllocated(i, Alloc);
        M.Name = FString(UTF8_TO_TCHAR(Name.get()));
        auto Info = it->second->GetOutputTypeInfo(i).GetTensorTypeAndShapeInfo();
        auto Dims = Info.GetShape();
        for (auto d : Dims) M.Shape.Add((int32)d);
        M.DType = OrtTypeToString(Info.GetElementType());
        Outputs.Add(M);
    }
}

bool FVitsCustomRuntime::RunFloatsNamed(const FString& Alias,
                                        const TArray<FOrtTensorFloat>& InInputs,
                                        const TArray<FString>& OutNames,
                                        TArray<FOrtTensorFloat>& OutTensors)
{
    OutTensors.Reset();
    auto it = Sessions.find(TCHAR_TO_UTF8(*Alias));
    if (it == Sessions.end()) return false;
    try
    {
        Ort::MemoryInfo MemInfo = Ort::MemoryInfo::CreateCpu(OrtDeviceAllocator, OrtMemTypeDefault);
        std::vector<const char*> InputNames;
        std::vector<std::string> InputNamesKeep;
        std::vector<Ort::Value> InputValues;
        InputNames.reserve(InInputs.Num());
        InputValues.reserve(InInputs.Num());
        for (const FOrtTensorFloat& Tin : InInputs)
        {
            std::vector<int64_t> Shape64;
            Shape64.reserve(Tin.Shape.Num());
            int64_t count = 1;
            for (int32 d : Tin.Shape) { Shape64.push_back((int64_t)d); count *= (int64_t)d; }
            if ((int64_t)Tin.Data.Num() < count) return false;
            float* Ptr = const_cast<float*>(Tin.Data.GetData());
            Ort::Value Tensor = Ort::Value::CreateTensor<float>(MemInfo, Ptr, (size_t)count, Shape64.data(), Shape64.size());
            InputValues.emplace_back(std::move(Tensor));
            InputNamesKeep.emplace_back(TCHAR_TO_UTF8(*Tin.Name));
        }
        for (const auto& s : InputNamesKeep) InputNames.push_back(s.c_str());

        std::vector<const char*> OutputNames;
        std::vector<std::string> OutputNamesKeep;
        for (const FString& N : OutNames) OutputNamesKeep.emplace_back(TCHAR_TO_UTF8(*N));
        for (const auto& s : OutputNamesKeep) OutputNames.push_back(s.c_str());

        auto Outputs = it->second->Run(Ort::RunOptions{nullptr},
                                       InputNames.data(), InputValues.data(), InputValues.size(),
                                       OutputNames.data(), OutputNames.size());

        for (size_t i = 0; i < Outputs.size(); ++i)
        {
            if (!Outputs[i].IsTensor()) continue;
            auto TypeInfo = Outputs[i].GetTensorTypeAndShapeInfo();
            if (TypeInfo.GetElementType() != ONNX_TENSOR_ELEMENT_DATA_TYPE_FLOAT) continue;
            auto Dims = TypeInfo.GetShape();
            int64_t Count = 1;
            FOrtTensorFloat Out;
            for (auto d : Dims) { Out.Shape.Add((int32)d); Count *= d > 0 ? d : 0; }
            const float* Data = Outputs[i].GetTensorData<float>();
            if (Count > 0 && Data)
            {
                Out.Data.SetNum((int32)Count);
                FMemory::Memcpy(Out.Data.GetData(), Data, sizeof(float) * (SIZE_T)Count);
            }
            Out.Name = (i < OutputNamesKeep.size()) ? UTF8_TO_TCHAR(OutputNamesKeep[i].c_str()) : FString::Printf(TEXT("out_%d"), (int32)i);
            OutTensors.Add(MoveTemp(Out));
        }
        return true;
    }
    catch (...)
    {
        return false;
    }
}

bool FVitsCustomRuntime::RunMixedNamed(const FString& Alias,
                                       const TArray<FOrtTensorFloat>& InputsFloat,
                                       const TArray<FOrtTensorInt64>& InputsInt64,
                                       const TArray<FOrtTensorInt32>& InputsInt32,
                                       const TArray<FString>& OutNames,
                                       TArray<FOrtTensorFloat>& OutTensors)
{
    OutTensors.Reset();
    auto it = Sessions.find(TCHAR_TO_UTF8(*Alias));
    if (it == Sessions.end()) return false;
    try
    {
        Ort::MemoryInfo MemInfo = Ort::MemoryInfo::CreateCpu(OrtDeviceAllocator, OrtMemTypeDefault);
        std::vector<const char*> InputNames; std::vector<std::string> InputKeep; std::vector<Ort::Value> InputVals;
        auto pushFloat = [&](const FOrtTensorFloat& Tin){ std::vector<int64_t> S; int64_t c=1; for(int32 d:Tin.Shape){S.push_back(d); c*=d;} if((int64)Tin.Data.Num()<c) return false; float* p=const_cast<float*>(Tin.Data.GetData()); InputVals.emplace_back(Ort::Value::CreateTensor<float>(MemInfo,p,(size_t)c,S.data(),S.size())); InputKeep.emplace_back(TCHAR_TO_UTF8(*Tin.Name)); return true; };
        auto pushI64 = [&](const FOrtTensorInt64& Tin){ std::vector<int64_t> S; int64_t c=1; for(int32 d:Tin.Shape){S.push_back(d); c*=d;} if((int64)Tin.Data.Num()<c) return false; int64_t* p=const_cast<int64_t*>(Tin.Data.GetData()); InputVals.emplace_back(Ort::Value::CreateTensor<int64_t>(MemInfo,p,(size_t)c,S.data(),S.size())); InputKeep.emplace_back(TCHAR_TO_UTF8(*Tin.Name)); return true; };
        auto pushI32 = [&](const FOrtTensorInt32& Tin){ std::vector<int64_t> S; int64_t c=1; for(int32 d:Tin.Shape){S.push_back(d); c*=d;} if((int64)Tin.Data.Num()<c) return false; int32* p=const_cast<int32*>(Tin.Data.GetData()); InputVals.emplace_back(Ort::Value::CreateTensor<int32_t>(MemInfo,p,(size_t)c,S.data(),S.size())); InputKeep.emplace_back(TCHAR_TO_UTF8(*Tin.Name)); return true; };
        for (const auto& t:InputsFloat) if(!pushFloat(t)) return false;
        for (const auto& t:InputsInt64) if(!pushI64(t)) return false;
        for (const auto& t:InputsInt32) if(!pushI32(t)) return false;
        for (const auto& s:InputKeep) InputNames.push_back(s.c_str());
        std::vector<const char*> OutNamesC; std::vector<std::string> OutKeep; for(const FString& n:OutNames) OutKeep.emplace_back(TCHAR_TO_UTF8(*n)); for(const auto& s:OutKeep) OutNamesC.push_back(s.c_str());
        auto Outputs = it->second->Run(Ort::RunOptions{nullptr}, InputNames.data(), InputVals.data(), InputVals.size(), OutNamesC.data(), OutNamesC.size());
        for(size_t i=0;i<Outputs.size();++i){ if(!Outputs[i].IsTensor()) continue; auto info=Outputs[i].GetTensorTypeAndShapeInfo(); if(info.GetElementType()!=ONNX_TENSOR_ELEMENT_DATA_TYPE_FLOAT) continue; auto dims=info.GetShape(); int64_t cnt=1; FOrtTensorFloat Out; for(auto d:dims){ Out.Shape.Add((int32)d); cnt*= d>0 ? d : 0;} const float* data=Outputs[i].GetTensorData<float>(); if(cnt>0 && data){ Out.Data.SetNum((int32)cnt); FMemory::Memcpy(Out.Data.GetData(), data, sizeof(float)*(SIZE_T)cnt);} Out.Name=(i<OutKeep.size())?UTF8_TO_TCHAR(OutKeep[i].c_str()):FString::Printf(TEXT("out_%d"),(int32)i); OutTensors.Add(MoveTemp(Out)); }
        return true;
    }
    catch(...){ return false; }
}
