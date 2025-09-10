#pragma once

#include "CoreMinimal.h"
#include <memory>
#include <vector>
#include <unordered_map>

#include "VitsTypes.h"
class USoundWave;

namespace Ort { class Env; class Session; class SessionOptions; }
struct FOrtTensorFloat;

class FVitsCustomRuntime
{
public:
    static FVitsCustomRuntime& Get();

    bool InitializeOrt(int32 IntraOpThreads, int32 InterOpThreads);
    bool LoadModel(const FString& ModelPath);
    void UnloadModel();
    bool IsModelLoaded() const { return (bool)Session; }

    void GetModelIO(TArray<FString>& Inputs, TArray<FString>& Outputs) const;

    bool RunFloats(const TArray<FOrtTensorFloat>& Inputs,
                   const TArray<FString>& OutputNames,
                   TArray<FOrtTensorFloat>& Outputs);

    bool RunMixed(const TArray<FOrtTensorFloat>& InputsFloat,
                  const TArray<FOrtTensorInt64>& InputsInt64,
                  const TArray<FOrtTensorInt32>& InputsInt32,
                  const TArray<FString>& OutputNames,
                  TArray<FOrtTensorFloat>& OutputsFloat);

    // Try to enable CUDA provider (deviceId >= 0). Returns false if provider/DLLs missing or failed.
    bool EnableCudaProvider(int32 DeviceId);
    bool EnableDmlProvider(int32 DeviceId);

    // Multi-model (named sessions)
    bool LoadModelNamed(const FString& Alias, const FString& ModelPath);
    void UnloadModelNamed(const FString& Alias);
    bool IsModelLoadedNamed(const FString& Alias) const;
    void GetModelIONamed(const FString& Alias, TArray<FString>& Inputs, TArray<FString>& Outputs) const;
    void GetModelIOMetaNamed(const FString& Alias, TArray<FOrtTensorMeta>& Inputs, TArray<FOrtTensorMeta>& Outputs) const;
    bool RunFloatsNamed(const FString& Alias,
                        const TArray<FOrtTensorFloat>& Inputs,
                        const TArray<FString>& OutputNames,
                        TArray<FOrtTensorFloat>& Outputs);

    bool RunMixedNamed(const FString& Alias,
                       const TArray<FOrtTensorFloat>& InputsFloat,
                       const TArray<FOrtTensorInt64>& InputsInt64,
                       const TArray<FOrtTensorInt32>& InputsInt32,
                       const TArray<FString>& OutputNames,
                       TArray<FOrtTensorFloat>& OutputsFloat);

    // High-level: Chinese pipeline from token ids. Returns PCM in [-1,1].
    bool SynthesizeChineseFromIds(const TArray<int64>& TokenIds,
                                  float LengthScale,
                                  float NoiseScale,
                                  float NoiseScaleW,
                                  int32 SampleRate,
                                  TArray<float>& OutPcm);

    // Detailed variant: also returns per-token timing in seconds (derived from dp durations)
    bool SynthesizeChineseFromIdsDetailed(const TArray<int64>& TokenIds,
                                          float LengthScale,
                                          float NoiseScale,
                                          float NoiseScaleW,
                                          int32 SampleRate,
                                          TArray<float>& OutPcm,
                                          TArray<struct FTimedToken>& OutTimeline);

    // Chinese text → token ids using dictionary.txt/dictionary2.txt in plugin Binaries.
    bool LoadChineseDictionary();
    bool LoadChineseDictionaryFromPath(const FString& AbsolutePath);
    void UnloadChineseDictionary();
    bool TextToTokenIds(const FString& Text, TArray<int64>& OutIds, int64 OOVId = 0);
    bool LookupChineseToken(const FString& Token, int64& OutId) const;
    void GetChineseDictionaryStats(int32& OutCount, int32& OutMaxTokenLen, bool& bOutLoaded, FString& OutPath) const;
    void CopyChineseDictionaryItems(int32 MaxCount, TArray<FString>& OutTokens, TArray<int64>& OutIds) const;

    // Provider state
    EOrtProvider GetCurrentProvider() const { return CurrentProvider; }

private:
    FVitsCustomRuntime() = default;

    std::unique_ptr<Ort::Env> Env;
    std::unique_ptr<Ort::SessionOptions> Options;
    std::unique_ptr<Ort::Session> Session;

    std::unordered_map<std::string, std::unique_ptr<Ort::Session>> Sessions; // alias -> session

    EOrtProvider CurrentProvider = EOrtProvider::None;

    TMap<FString, int64> ZhDict; // token (char or multi-char) → id
    bool bZhDictLoaded = false;
    int32 ZhDictMaxTokenLen = 1;
    FString ZhDictPathLoaded;
};
