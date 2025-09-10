#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "VitsTypes.h"
#include "VitsCustomBlueprintLibrary.generated.h"

UCLASS()
class UVitsCustomBlueprintLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure, Category = "VITS Custom")
    static FString PluginVersion();

    UFUNCTION(BlueprintPure, Category = "VITS Custom")
    static bool IsOrtRuntimePresent();

    UFUNCTION(BlueprintCallable, Category = "VITS Custom|ORT")
    static bool InitializeOrt(int32 IntraOpNumThreads = 1, int32 InterOpNumThreads = 1);

    // Initialize ORT and enable CUDA (DeviceId >= 0)
    UFUNCTION(BlueprintCallable, Category = "VITS Custom|ORT")
    static bool InitializeOrtCuda(int32 DeviceId = 0, int32 IntraOpNumThreads = 1, int32 InterOpNumThreads = 1);

    // Initialize ORT and enable DirectML (DeviceId >= 0)
    UFUNCTION(BlueprintCallable, Category = "VITS Custom|ORT")
    static bool InitializeOrtDml(int32 DeviceId = 0, int32 IntraOpNumThreads = 1, int32 InterOpNumThreads = 1);

    // Try CUDA then DML then CPU; returns selected provider
    UFUNCTION(BlueprintCallable, Category = "VITS Custom|ORT")
    static EOrtProvider InitializeOrtAuto(int32 CudaDeviceId = 0, int32 IntraOpNumThreads = 1, int32 InterOpNumThreads = 1);

    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Model")
    static bool LoadOnnxModel(const FString& ModelPath);

    UFUNCTION(BlueprintPure, Category = "VITS Custom|Model")
    static bool IsModelLoaded();

    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Model")
    static void UnloadModel();

    UFUNCTION(BlueprintPure, Category = "VITS Custom|Model")
    static void GetModelIO(TArray<FString>& InputNames, TArray<FString>& OutputNames);

    // Generic float-tensor runner for ONNX models
    UFUNCTION(BlueprintCallable, Category = "VITS Custom|ORT")
    static bool RunModelFloats(const TArray<FOrtTensorFloat>& Inputs,
                               const TArray<FString>& OutputNames,
                               TArray<FOrtTensorFloat>& Outputs);

    UFUNCTION(BlueprintCallable, Category = "VITS Custom|ORT")
    static bool RunModelMixed(const TArray<FOrtTensorFloat>& InputsFloat,
                              const TArray<FOrtTensorInt64>& InputsInt64,
                              const TArray<FOrtTensorInt32>& InputsInt32,
                              const TArray<FString>& OutputNames,
                              TArray<FOrtTensorFloat>& OutputsFloat);

    // Convert float PCM [-1,1] to SoundWave (16-bit PCM)
    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Audio")
    static USoundWave* CreateSoundWaveFromFloat(const TArray<float>& PCM, int32 SampleRate, int32 NumChannels);

    // Named-model APIs for multi-model pipelines (e.g., VITS enc/dp/flow/dec)
    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Model")
    static bool LoadOnnxModelNamed(const FString& Alias, const FString& ModelPath);

    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Model")
    static void UnloadModelNamed(const FString& Alias);

    UFUNCTION(BlueprintPure, Category = "VITS Custom|Model")
    static bool IsModelLoadedNamed(const FString& Alias);

    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Model")
    static void GetModelIONamed(const FString& Alias, TArray<FString>& InputNames, TArray<FString>& OutputNames);

    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Model")
    static void GetModelIOMetaNamed(const FString& Alias, TArray<FOrtTensorMeta>& Inputs, TArray<FOrtTensorMeta>& Outputs);

    UFUNCTION(BlueprintCallable, Category = "VITS Custom|ORT")
    static bool RunModelFloatsNamed(const FString& Alias,
                                    const TArray<FOrtTensorFloat>& Inputs,
                                    const TArray<FString>& OutputNames,
                                    TArray<FOrtTensorFloat>& Outputs);

    UFUNCTION(BlueprintCallable, Category = "VITS Custom|ORT")
    static bool RunModelMixedNamed(const FString& Alias,
                                   const TArray<FOrtTensorFloat>& InputsFloat,
                                   const TArray<FOrtTensorInt64>& InputsInt64,
                                   const TArray<FOrtTensorInt32>& InputsInt32,
                                   const TArray<FString>& OutputNames,
                                   TArray<FOrtTensorFloat>& OutputsFloat);

    UFUNCTION(BlueprintPure, Category = "VITS Custom|ORT")
    static EOrtProvider GetCurrentProvider();

    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Debug")
    static void DumpModelIOMetaToLog(const FString& Alias);

    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Chinese")
    static void DumpChinesePipelineIOMetaToLog();

    // End-to-end synthesis from token ids (already segmented ids). Returns SoundWave.
    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Chinese")
    static USoundWave* SynthesizeChineseFromIds(const TArray<int64>& TokenIds,
                                                float LengthScale = 1.0f,
                                                float NoiseScale = 0.667f,
                                                float NoiseScaleW = 0.8f,
                                                int32 SampleRate = 22050);

    // Convenience: synthesize and play via UGameplayStatics::PlaySound2D
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"), Category = "VITS Custom|Chinese")
    static class UAudioComponent* SynthesizeChineseFromIdsAndPlay(
        UObject* WorldContextObject,
        const TArray<int64>& TokenIds,
        float LengthScale = 1.0f,
        float NoiseScale = 0.667f,
        float NoiseScaleW = 0.8f,
        int32 SampleRate = 22050,
        float VolumeMultiplier = 1.0f,
        float PitchMultiplier = 1.0f);

    // Convenience: load Chinese pipeline models from vits_native/Chinese_model
    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Chinese")
    static bool LoadChinesePipeline();

    // Get IO metadata for Chinese pipeline: enc_p, dp, flow, dec
    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Chinese")
    static void GetChinesePipelineIOMeta(
        TArray<FOrtTensorMeta>& EncIn, TArray<FOrtTensorMeta>& EncOut,
        TArray<FOrtTensorMeta>& DpIn,  TArray<FOrtTensorMeta>& DpOut,
        TArray<FOrtTensorMeta>& FlowIn,TArray<FOrtTensorMeta>& FlowOut,
        TArray<FOrtTensorMeta>& DecIn, TArray<FOrtTensorMeta>& DecOut);

    // Helpers: convert int array to int64 array for convenience in Blueprints
    UFUNCTION(BlueprintPure, Category = "VITS Custom|Util")
    static TArray<int64> IntArrayToInt64(const TArray<int32>& InArray);

    // Text → token ids using built-in dictionary
    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Chinese")
    static bool TextToTokenIds(const FString& Text, TArray<int64>& OutTokenIds, int64 OOVId = 0);

    // End-to-end: Text → play
    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Chinese", meta=(WorldContext="WorldContextObject"))
    static class UAudioComponent* SynthesizeChineseFromTextAndPlay(
        UObject* WorldContextObject,
        const FString& Text,
        float LengthScale = 1.0f,
        float NoiseScale = 0.667f,
        float NoiseScaleW = 0.8f,
        int32 SampleRate = 22050,
        float VolumeMultiplier = 1.0f,
        float PitchMultiplier = 1.0f);

    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Chinese")
    static USoundWave* SynthesizeChineseFromText(const FString& Text,
                                                 float LengthScale = 1.0f,
                                                 float NoiseScale = 0.667f,
                                                 float NoiseScaleW = 0.8f,
                                                 int32 SampleRate = 22050);

    // Dictionary utilities
    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Chinese")
    static bool LoadChineseDictionary();

    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Chinese")
    static bool LoadChineseDictionaryFromPath(const FString& AbsolutePath);

    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Chinese")
    static void UnloadChineseDictionary();

    UFUNCTION(BlueprintPure, Category = "VITS Custom|Chinese")
    static void GetChineseDictionaryStats(int32& EntryCount, int32& MaxTokenLen, bool& bLoaded, FString& PathLoaded);

    UFUNCTION(BlueprintPure, Category = "VITS Custom|Chinese")
    static bool LookupChineseToken(const FString& Token, int64& OutId);

    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Chinese")
    static void DumpChineseDictionaryToLog(int32 MaxCount = 50);

    // Detailed synthesis: returns SoundWave and per-token timing events (seconds)
    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Chinese")
    static USoundWave* SynthesizeChineseFromIdsDetailed(const TArray<int64>& TokenIds,
                                                        float LengthScale,
                                                        float NoiseScale,
                                                        float NoiseScaleW,
                                                        int32 SampleRate,
                                                        TArray<struct FTimedToken>& OutTimeline);

    // Utility: build viseme keys from timed tokens using a mapping table
    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Viseme")
    static void BuildVisemeKeysFromTimedTokens(const TArray<struct FTimedToken>& Timeline,
                                               const TMap<FString, EViseme>& TokenToViseme,
                                               EViseme DefaultViseme,
                                               TArray<struct FVisemeKey>& OutKeys);

    // Default token->viseme mappings
    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Viseme")
    static void GetDefaultChineseTokenVisemeMap(TMap<FString, EViseme>& OutMap);

    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Viseme")
    static void GetDefaultEnglishTokenVisemeMap(TMap<FString, EViseme>& OutMap);

    // One-shot helper: Text -> (SoundWave + Viseme Keys) using default Chinese mapping
    UFUNCTION(BlueprintCallable, Category = "VITS Custom|Chinese")
    static USoundWave* ChineseTextToAudioAndVisemes(const FString& Text,
                                                    float LengthScale,
                                                    float NoiseScale,
                                                    float NoiseScaleW,
                                                    int32 SampleRate,
                                                    TArray<struct FVisemeKey>& OutKeys);

    // ORT provider selection in one node
    UFUNCTION(BlueprintCallable, Category = "VITS Custom|ORT")
    static bool InitializeOrtWithProvider(EOrtProvider Provider,
                                          int32 DeviceId,
                                          int32 IntraOpNumThreads = 1,
                                          int32 InterOpNumThreads = 1);
};
