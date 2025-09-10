#include "VitsCustomBlueprintLibrary.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "VitsCustomRuntime.h"
#include "VitsTypes.h"
#include "Sound/SoundWave.h"
#include "Sound/SoundWaveProcedural.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"
#include "Interfaces/IPluginManager.h"

FString UVitsCustomBlueprintLibrary::PluginVersion()
{
    return TEXT("vits_custom 0.1.0 (UE 5.5)");
}

bool UVitsCustomBlueprintLibrary::IsOrtRuntimePresent()
{
    TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("vits_custom"));
    if (!Plugin.IsValid()) return false;
    const FString BinDir = FPaths::Combine(Plugin->GetBaseDir(), TEXT("Binaries/Win64"));
    const FString OrtPath = FPaths::Combine(BinDir, TEXT("onnxruntime.dll"));
    return FPaths::FileExists(OrtPath);
}

bool UVitsCustomBlueprintLibrary::InitializeOrt(int32 IntraOpNumThreads, int32 InterOpNumThreads)
{
    return FVitsCustomRuntime::Get().InitializeOrt(IntraOpNumThreads, InterOpNumThreads);
}

bool UVitsCustomBlueprintLibrary::InitializeOrtCuda(int32 DeviceId, int32 IntraOpNumThreads, int32 InterOpNumThreads)
{
    if (!FVitsCustomRuntime::Get().InitializeOrt(IntraOpNumThreads, InterOpNumThreads))
    {
        return false;
    }
    return FVitsCustomRuntime::Get().EnableCudaProvider(DeviceId);
}

bool UVitsCustomBlueprintLibrary::InitializeOrtDml(int32 DeviceId, int32 IntraOpNumThreads, int32 InterOpNumThreads)
{
    if (!FVitsCustomRuntime::Get().InitializeOrt(IntraOpNumThreads, InterOpNumThreads))
    {
        return false;
    }
    return FVitsCustomRuntime::Get().EnableDmlProvider(DeviceId);
}

EOrtProvider UVitsCustomBlueprintLibrary::InitializeOrtAuto(int32 CudaDeviceId, int32 IntraOpNumThreads, int32 InterOpNumThreads)
{
    if (!FVitsCustomRuntime::Get().InitializeOrt(IntraOpNumThreads, InterOpNumThreads))
    {
        return EOrtProvider::None;
    }
    // Try CUDA first
    if (FVitsCustomRuntime::Get().EnableCudaProvider(CudaDeviceId))
    {
        return EOrtProvider::CUDA;
    }
    // Then DML
    if (FVitsCustomRuntime::Get().EnableDmlProvider(0))
    {
        return EOrtProvider::DML;
    }
    // Fallback CPU (already the default if no EP appended)
    return EOrtProvider::CPU;
}

bool UVitsCustomBlueprintLibrary::LoadOnnxModel(const FString& ModelPath)
{
    return FVitsCustomRuntime::Get().LoadModel(ModelPath);
}

bool UVitsCustomBlueprintLibrary::IsModelLoaded()
{
    return FVitsCustomRuntime::Get().IsModelLoaded();
}

void UVitsCustomBlueprintLibrary::UnloadModel()
{
    FVitsCustomRuntime::Get().UnloadModel();
}

void UVitsCustomBlueprintLibrary::GetModelIO(TArray<FString>& InputNames, TArray<FString>& OutputNames)
{
    FVitsCustomRuntime::Get().GetModelIO(InputNames, OutputNames);
}

bool UVitsCustomBlueprintLibrary::RunModelFloats(const TArray<FOrtTensorFloat>& Inputs,
                                                 const TArray<FString>& OutputNames,
                                                 TArray<FOrtTensorFloat>& Outputs)
{
    return FVitsCustomRuntime::Get().RunFloats(Inputs, OutputNames, Outputs);
}

bool UVitsCustomBlueprintLibrary::RunModelMixed(const TArray<FOrtTensorFloat>& InputsFloat,
                                                const TArray<FOrtTensorInt64>& InputsInt64,
                                                const TArray<FOrtTensorInt32>& InputsInt32,
                                                const TArray<FString>& OutputNames,
                                                TArray<FOrtTensorFloat>& OutputsFloat)
{
    return FVitsCustomRuntime::Get().RunMixed(InputsFloat, InputsInt64, InputsInt32, OutputNames, OutputsFloat);
}

USoundWave* UVitsCustomBlueprintLibrary::CreateSoundWaveFromFloat(const TArray<float>& PCM, int32 SampleRate, int32 NumChannels)
{
    if (SampleRate <= 0 || NumChannels <= 0 || PCM.Num() == 0)
    {
        return nullptr;
    }

    // Convert float [-1,1] to interleaved int16 bytes
    const int32 Frames = PCM.Num();
    TArray<uint8> Bytes;
    Bytes.SetNumUninitialized(Frames * sizeof(int16));
    int16* Out = reinterpret_cast<int16*>(Bytes.GetData());
    for (int32 i = 0; i < Frames; ++i)
    {
        const float s = FMath::Clamp(PCM[i], -1.0f, 1.0f);
        Out[i] = (int16)FMath::RoundToInt(s * 32767.0f);
    }

    USoundWaveProcedural* SoundWave = NewObject<USoundWaveProcedural>();
    SoundWave->SoundGroup = SOUNDGROUP_Default;
    SoundWave->NumChannels = NumChannels;
    SoundWave->SetSampleRate(SampleRate);
    SoundWave->bLooping = false;
    SoundWave->bProcedural = true;
    const float DurationSec = (float)Frames / (float)(FMath::Max(1, SampleRate * NumChannels));
    SoundWave->Duration = DurationSec;
    SoundWave->QueueAudio(Bytes.GetData(), Bytes.Num());
    return SoundWave;
}

bool UVitsCustomBlueprintLibrary::LoadOnnxModelNamed(const FString& Alias, const FString& ModelPath)
{
    return FVitsCustomRuntime::Get().LoadModelNamed(Alias, ModelPath);
}

void UVitsCustomBlueprintLibrary::UnloadModelNamed(const FString& Alias)
{
    FVitsCustomRuntime::Get().UnloadModelNamed(Alias);
}

bool UVitsCustomBlueprintLibrary::IsModelLoadedNamed(const FString& Alias)
{
    return FVitsCustomRuntime::Get().IsModelLoadedNamed(Alias);
}

void UVitsCustomBlueprintLibrary::GetModelIONamed(const FString& Alias, TArray<FString>& InputNames, TArray<FString>& OutputNames)
{
    FVitsCustomRuntime::Get().GetModelIONamed(Alias, InputNames, OutputNames);
}

void UVitsCustomBlueprintLibrary::GetModelIOMetaNamed(const FString& Alias, TArray<FOrtTensorMeta>& Inputs, TArray<FOrtTensorMeta>& Outputs)
{
    FVitsCustomRuntime::Get().GetModelIOMetaNamed(Alias, Inputs, Outputs);
}

bool UVitsCustomBlueprintLibrary::RunModelFloatsNamed(const FString& Alias,
                                                      const TArray<FOrtTensorFloat>& Inputs,
                                                      const TArray<FString>& OutputNames,
                                                      TArray<FOrtTensorFloat>& Outputs)
{
    return FVitsCustomRuntime::Get().RunFloatsNamed(Alias, Inputs, OutputNames, Outputs);
}

bool UVitsCustomBlueprintLibrary::RunModelMixedNamed(const FString& Alias,
                                                     const TArray<FOrtTensorFloat>& InputsFloat,
                                                     const TArray<FOrtTensorInt64>& InputsInt64,
                                                     const TArray<FOrtTensorInt32>& InputsInt32,
                                                     const TArray<FString>& OutputNames,
                                                     TArray<FOrtTensorFloat>& OutputsFloat)
{
    return FVitsCustomRuntime::Get().RunMixedNamed(Alias, InputsFloat, InputsInt64, InputsInt32, OutputNames, OutputsFloat);
}

bool UVitsCustomBlueprintLibrary::LoadChinesePipeline()
{
    // Chinese models are shipped under the original vits_native plugin in this project
    TSharedPtr<IPlugin> VitsNative = IPluginManager::Get().FindPlugin(TEXT("vits_native"));
    if (!VitsNative.IsValid()) return false;
    const FString Base = FPaths::Combine(VitsNative->GetBaseDir(), TEXT("Chinese_model"));
    const FString Enc = FPaths::Combine(Base, TEXT("enc_p.onnx"));
    const FString Dp  = FPaths::Combine(Base, TEXT("dp.onnx"));
    const FString Flow= FPaths::Combine(Base, TEXT("flow.onnx"));
    const FString Dec = FPaths::Combine(Base, TEXT("dec.onnx"));

    bool ok = true;
    ok &= FVitsCustomRuntime::Get().LoadModelNamed(TEXT("cn_enc_p"), Enc);
    ok &= FVitsCustomRuntime::Get().LoadModelNamed(TEXT("cn_dp"), Dp);
    ok &= FVitsCustomRuntime::Get().LoadModelNamed(TEXT("cn_flow"), Flow);
    ok &= FVitsCustomRuntime::Get().LoadModelNamed(TEXT("cn_dec"), Dec);
    return ok;
}

void UVitsCustomBlueprintLibrary::GetChinesePipelineIOMeta(
    TArray<FOrtTensorMeta>& EncIn, TArray<FOrtTensorMeta>& EncOut,
    TArray<FOrtTensorMeta>& DpIn,  TArray<FOrtTensorMeta>& DpOut,
    TArray<FOrtTensorMeta>& FlowIn,TArray<FOrtTensorMeta>& FlowOut,
    TArray<FOrtTensorMeta>& DecIn, TArray<FOrtTensorMeta>& DecOut)
{
    FVitsCustomRuntime::Get().GetModelIOMetaNamed(TEXT("cn_enc_p"), EncIn, EncOut);
    FVitsCustomRuntime::Get().GetModelIOMetaNamed(TEXT("cn_dp"),    DpIn,  DpOut);
    FVitsCustomRuntime::Get().GetModelIOMetaNamed(TEXT("cn_flow"),  FlowIn,FlowOut);
    FVitsCustomRuntime::Get().GetModelIOMetaNamed(TEXT("cn_dec"),   DecIn, DecOut);
}

EOrtProvider UVitsCustomBlueprintLibrary::GetCurrentProvider()
{
    return FVitsCustomRuntime::Get().GetCurrentProvider();
}

void UVitsCustomBlueprintLibrary::DumpModelIOMetaToLog(const FString& Alias)
{
    TArray<FOrtTensorMeta> InMeta, OutMeta;
    FVitsCustomRuntime::Get().GetModelIOMetaNamed(Alias, InMeta, OutMeta);
    UE_LOG(LogTemp, Log, TEXT("[vits_custom] %s Inputs (%d):"), *Alias, InMeta.Num());
    for (const auto& M : InMeta)
    {
        FString ShapeStr;
        for (int32 i = 0; i < M.Shape.Num(); ++i)
        {
            ShapeStr += FString::FromInt(M.Shape[i]);
            if (i + 1 < M.Shape.Num()) ShapeStr += TEXT("x");
        }
        UE_LOG(LogTemp, Log, TEXT("  In  %-20s  %-8s  [%s]"), *M.Name, *M.DType, *ShapeStr);
    }
    UE_LOG(LogTemp, Log, TEXT("[vits_custom] %s Outputs (%d):"), *Alias, OutMeta.Num());
    for (const auto& M : OutMeta)
    {
        FString ShapeStr;
        for (int32 i = 0; i < M.Shape.Num(); ++i)
        {
            ShapeStr += FString::FromInt(M.Shape[i]);
            if (i + 1 < M.Shape.Num()) ShapeStr += TEXT("x");
        }
        UE_LOG(LogTemp, Log, TEXT("  Out %-20s  %-8s  [%s]"), *M.Name, *M.DType, *ShapeStr);
    }
}

void UVitsCustomBlueprintLibrary::DumpChinesePipelineIOMetaToLog()
{
    DumpModelIOMetaToLog(TEXT("cn_enc_p"));
    DumpModelIOMetaToLog(TEXT("cn_dp"));
    DumpModelIOMetaToLog(TEXT("cn_flow"));
    DumpModelIOMetaToLog(TEXT("cn_dec"));
}

USoundWave* UVitsCustomBlueprintLibrary::SynthesizeChineseFromIds(const TArray<int64>& TokenIds,
                                                                  float LengthScale,
                                                                  float NoiseScale,
                                                                  float NoiseScaleW,
                                                                  int32 SampleRate)
{
    TArray<float> Pcm;
    if (!FVitsCustomRuntime::Get().SynthesizeChineseFromIds(TokenIds, LengthScale, NoiseScale, NoiseScaleW, SampleRate, Pcm))
    {
        UE_LOG(LogTemp, Warning, TEXT("[vits_custom] SynthesizeChineseFromIds failed"));
        return nullptr;
    }
    return CreateSoundWaveFromFloat(Pcm, SampleRate, 1);
}

UAudioComponent* UVitsCustomBlueprintLibrary::SynthesizeChineseFromIdsAndPlay(
    UObject* WorldContextObject,
    const TArray<int64>& TokenIds,
    float LengthScale,
    float NoiseScale,
    float NoiseScaleW,
    int32 SampleRate,
    float VolumeMultiplier,
    float PitchMultiplier)
{
    if (!WorldContextObject)
    {
        UE_LOG(LogTemp, Warning, TEXT("[vits_custom] WorldContextObject is null"));
        return nullptr;
    }
    USoundWave* SW = SynthesizeChineseFromIds(TokenIds, LengthScale, NoiseScale, NoiseScaleW, SampleRate);
    if (!SW)
    {
        return nullptr;
    }
    return UGameplayStatics::SpawnSound2D(WorldContextObject, SW, VolumeMultiplier, PitchMultiplier);
}

TArray<int64> UVitsCustomBlueprintLibrary::IntArrayToInt64(const TArray<int32>& InArray)
{
    TArray<int64> Out;
    Out.SetNum(InArray.Num());
    for (int32 i = 0; i < InArray.Num(); ++i)
    {
        Out[i] = (int64)InArray[i];
    }
    return Out;
}

bool UVitsCustomBlueprintLibrary::TextToTokenIds(const FString& Text, TArray<int64>& OutTokenIds, int64 OOVId)
{
    return FVitsCustomRuntime::Get().TextToTokenIds(Text, OutTokenIds, OOVId);
}

UAudioComponent* UVitsCustomBlueprintLibrary::SynthesizeChineseFromTextAndPlay(
    UObject* WorldContextObject,
    const FString& Text,
    float LengthScale,
    float NoiseScale,
    float NoiseScaleW,
    int32 SampleRate,
    float VolumeMultiplier,
    float PitchMultiplier)
{
    TArray<int64> Ids;
    if (!FVitsCustomRuntime::Get().TextToTokenIds(Text, Ids))
    {
        UE_LOG(LogTemp, Warning, TEXT("[vits_custom] TextToTokenIds failed or empty"));
        return nullptr;
    }
    return SynthesizeChineseFromIdsAndPlay(WorldContextObject, Ids, LengthScale, NoiseScale, NoiseScaleW, SampleRate, VolumeMultiplier, PitchMultiplier);
}

USoundWave* UVitsCustomBlueprintLibrary::SynthesizeChineseFromText(const FString& Text,
                                                                   float LengthScale,
                                                                   float NoiseScale,
                                                                   float NoiseScaleW,
                                                                   int32 SampleRate)
{
    TArray<int64> Ids;
    if (!FVitsCustomRuntime::Get().TextToTokenIds(Text, Ids))
    {
        return nullptr;
    }
    return SynthesizeChineseFromIds(Ids, LengthScale, NoiseScale, NoiseScaleW, SampleRate);
}

bool UVitsCustomBlueprintLibrary::LoadChineseDictionary()
{
    return FVitsCustomRuntime::Get().LoadChineseDictionary();
}

bool UVitsCustomBlueprintLibrary::LoadChineseDictionaryFromPath(const FString& AbsolutePath)
{
    return FVitsCustomRuntime::Get().LoadChineseDictionaryFromPath(AbsolutePath);
}

void UVitsCustomBlueprintLibrary::UnloadChineseDictionary()
{
    FVitsCustomRuntime::Get().UnloadChineseDictionary();
}

void UVitsCustomBlueprintLibrary::GetChineseDictionaryStats(int32& EntryCount, int32& MaxTokenLen, bool& bLoaded, FString& PathLoaded)
{
    FVitsCustomRuntime::Get().GetChineseDictionaryStats(EntryCount, MaxTokenLen, bLoaded, PathLoaded);
}

bool UVitsCustomBlueprintLibrary::LookupChineseToken(const FString& Token, int64& OutId)
{
    return FVitsCustomRuntime::Get().LookupChineseToken(Token, OutId);
}

void UVitsCustomBlueprintLibrary::DumpChineseDictionaryToLog(int32 MaxCount)
{
    int32 Count, MaxLen; bool bLoaded; FString Path;
    GetChineseDictionaryStats(Count, MaxLen, bLoaded, Path);
    UE_LOG(LogTemp, Log, TEXT("[vits_custom] Dict loaded=%d, entries=%d, maxLen=%d, path=%s"), bLoaded?1:0, Count, MaxLen, *Path);
    if (!bLoaded || Count <= 0) return;
    TArray<FString> Tokens; TArray<int64> Ids;
    FVitsCustomRuntime::Get().CopyChineseDictionaryItems(MaxCount, Tokens, Ids);
    for (int32 i = 0; i < Tokens.Num() && i < Ids.Num(); ++i)
    {
        UE_LOG(LogTemp, Log, TEXT("  '%s' -> %lld"), *Tokens[i], (long long)Ids[i]);
    }
}

USoundWave* UVitsCustomBlueprintLibrary::SynthesizeChineseFromIdsDetailed(const TArray<int64>& TokenIds,
                                                                          float LengthScale,
                                                                          float NoiseScale,
                                                                          float NoiseScaleW,
                                                                          int32 SampleRate,
                                                                          TArray<FTimedToken>& OutTimeline)
{
    TArray<float> Pcm;
    if (!FVitsCustomRuntime::Get().SynthesizeChineseFromIdsDetailed(TokenIds, LengthScale, NoiseScale, NoiseScaleW, SampleRate, Pcm, OutTimeline))
    {
        UE_LOG(LogTemp, Warning, TEXT("[vits_custom] SynthesizeChineseFromIdsDetailed failed"));
        return nullptr;
    }
    return CreateSoundWaveFromFloat(Pcm, SampleRate, 1);
}

void UVitsCustomBlueprintLibrary::BuildVisemeKeysFromTimedTokens(const TArray<FTimedToken>& Timeline,
                                                                 const TMap<FString, EViseme>& TokenToViseme,
                                                                 EViseme DefaultViseme,
                                                                 TArray<FVisemeKey>& OutKeys)
{
    OutKeys.Reset();
    OutKeys.Reserve(Timeline.Num());
    for (const FTimedToken& Ev : Timeline)
    {
        FVisemeKey Key;
        if (const EViseme* V = TokenToViseme.Find(Ev.Token))
        {
            Key.Viseme = *V;
        }
        else
        {
            Key.Viseme = DefaultViseme;
        }
        Key.StartTime = Ev.StartTime;
        Key.Duration = Ev.Duration;
        Key.Weight = 1.f;
        OutKeys.Add(Key);
    }
}

static void AddMapItems(TMap<FString, EViseme>& M, const TArray<FString>& Tokens, EViseme V)
{
    for (const FString& T : Tokens) { M.Add(T, V); }
}

void UVitsCustomBlueprintLibrary::GetDefaultChineseTokenVisemeMap(TMap<FString, EViseme>& OutMap)
{
    OutMap.Reset();
    // Very rough mapping from common pinyin finals/initials to visemes
    AddMapItems(OutMap, { TEXT("b"), TEXT("p"), TEXT("m") }, EViseme::PP);
    AddMapItems(OutMap, { TEXT("f") }, EViseme::FF);
    AddMapItems(OutMap, { TEXT("d"), TEXT("t") }, EViseme::DD);
    AddMapItems(OutMap, { TEXT("g"), TEXT("k") }, EViseme::KK);
    AddMapItems(OutMap, { TEXT("zh"), TEXT("ch"), TEXT("j"), TEXT("q"), TEXT("x") }, EViseme::CH);
    AddMapItems(OutMap, { TEXT("s"), TEXT("sh"), TEXT("z"), TEXT("c") }, EViseme::SS);
    AddMapItems(OutMap, { TEXT("n"), TEXT("ng") }, EViseme::NN);
    AddMapItems(OutMap, { TEXT("l"), TEXT("r") }, EViseme::RR);
    AddMapItems(OutMap, { TEXT("a"), TEXT("ai"), TEXT("an"), TEXT("ang") }, EViseme::AA);
    AddMapItems(OutMap, { TEXT("e"), TEXT("ei"), TEXT("en"), TEXT("eng"), TEXT("er") }, EViseme::E);
    AddMapItems(OutMap, { TEXT("i"), TEXT("ia"), TEXT("ian"), TEXT("iang"), TEXT("iao"), TEXT("ie"), TEXT("in"), TEXT("ing"), TEXT("iong"), TEXT("iu") }, EViseme::I);
    AddMapItems(OutMap, { TEXT("o"), TEXT("ong"), TEXT("ou") }, EViseme::O);
    AddMapItems(OutMap, { TEXT("u"), TEXT("ua"), TEXT("uai"), TEXT("uan"), TEXT("uang"), TEXT("ue"), TEXT("ui"), TEXT("un"), TEXT("uo") }, EViseme::U);
}

void UVitsCustomBlueprintLibrary::GetDefaultEnglishTokenVisemeMap(TMap<FString, EViseme>& OutMap)
{
    OutMap.Reset();
    // Simple ARPAbet-ish groupings
    AddMapItems(OutMap, { TEXT("P"), TEXT("B"), TEXT("M") }, EViseme::PP);
    AddMapItems(OutMap, { TEXT("F"), TEXT("V") }, EViseme::FF);
    AddMapItems(OutMap, { TEXT("TH"), TEXT("DH") }, EViseme::TH);
    AddMapItems(OutMap, { TEXT("T"), TEXT("D") }, EViseme::DD);
    AddMapItems(OutMap, { TEXT("K"), TEXT("G") }, EViseme::KK);
    AddMapItems(OutMap, { TEXT("CH"), TEXT("JH"), TEXT("SH"), TEXT("ZH") }, EViseme::CH);
    AddMapItems(OutMap, { TEXT("S"), TEXT("Z") }, EViseme::SS);
    AddMapItems(OutMap, { TEXT("N"), TEXT("NG") }, EViseme::NN);
    AddMapItems(OutMap, { TEXT("R"), TEXT("L") }, EViseme::RR);
    AddMapItems(OutMap, { TEXT("AA"), TEXT("AE"), TEXT("AH") }, EViseme::AA);
    AddMapItems(OutMap, { TEXT("EH") }, EViseme::E);
    AddMapItems(OutMap, { TEXT("IH"), TEXT("IY") }, EViseme::I);
    AddMapItems(OutMap, { TEXT("AO"), TEXT("OW") }, EViseme::O);
    AddMapItems(OutMap, { TEXT("UH"), TEXT("UW") }, EViseme::U);
}

USoundWave* UVitsCustomBlueprintLibrary::ChineseTextToAudioAndVisemes(const FString& Text,
                                                                     float LengthScale,
                                                                     float NoiseScale,
                                                                     float NoiseScaleW,
                                                                     int32 SampleRate,
                                                                     TArray<FVisemeKey>& OutKeys)
{
    OutKeys.Reset();
    TArray<int64> Ids;
    if (!FVitsCustomRuntime::Get().TextToTokenIds(Text, Ids))
    {
        UE_LOG(LogTemp, Warning, TEXT("[vits_custom] ChineseTextToAudioAndVisemes: TextToTokenIds failed"));
        return nullptr;
    }

    TArray<FTimedToken> Timeline;
    TArray<float> Pcm;
    if (!FVitsCustomRuntime::Get().SynthesizeChineseFromIdsDetailed(Ids, LengthScale, NoiseScale, NoiseScaleW, SampleRate, Pcm, Timeline))
    {
        UE_LOG(LogTemp, Warning, TEXT("[vits_custom] ChineseTextToAudioAndVisemes: synthesis failed"));
        return nullptr;
    }

    // Default Chinese mapping
    TMap<FString, EViseme> Map;
    GetDefaultChineseTokenVisemeMap(Map);
    BuildVisemeKeysFromTimedTokens(Timeline, Map, EViseme::SIL, OutKeys);

    return CreateSoundWaveFromFloat(Pcm, SampleRate, 1);
}

bool UVitsCustomBlueprintLibrary::InitializeOrtWithProvider(EOrtProvider Provider,
                                                            int32 DeviceId,
                                                            int32 IntraOpNumThreads,
                                                            int32 InterOpNumThreads)
{
    // Always initialize base ORT first
    if (!FVitsCustomRuntime::Get().InitializeOrt(IntraOpNumThreads, InterOpNumThreads))
    {
        UE_LOG(LogTemp, Warning, TEXT("[vits_custom] InitializeOrt failed"));
        return false;
    }

    switch (Provider)
    {
    case EOrtProvider::CPU:
        UE_LOG(LogTemp, Log, TEXT("[vits_custom] Using ORT CPU provider"));
        return true; // Already CPU by default
    case EOrtProvider::CUDA:
        if (FVitsCustomRuntime::Get().EnableCudaProvider(DeviceId))
        {
            UE_LOG(LogTemp, Log, TEXT("[vits_custom] Enabled ORT CUDA provider (DeviceId=%d)"), DeviceId);
            return true;
        }
        UE_LOG(LogTemp, Warning, TEXT("[vits_custom] EnableCudaProvider failed; falling back to CPU"));
        return true; // keep CPU
    case EOrtProvider::DML:
        if (FVitsCustomRuntime::Get().EnableDmlProvider(DeviceId))
        {
            UE_LOG(LogTemp, Log, TEXT("[vits_custom] Enabled ORT DML provider (DeviceId=%d)"), DeviceId);
            return true;
        }
        UE_LOG(LogTemp, Warning, TEXT("[vits_custom] EnableDmlProvider failed; falling back to CPU"));
        return true;
    default:
        UE_LOG(LogTemp, Warning, TEXT("[vits_custom] Unknown provider; defaulting to CPU"));
        return true;
    }
}
