#pragma once

#include "CoreMinimal.h"
#include "VitsTypes.generated.h"

UENUM(BlueprintType)
enum class EOrtProvider : uint8
{
    None    UMETA(DisplayName = "None"),
    CPU     UMETA(DisplayName = "CPU"),
    CUDA    UMETA(DisplayName = "CUDA"),
    DML     UMETA(DisplayName = "DirectML")
};

USTRUCT(BlueprintType)
struct FOrtTensorFloat
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ORT")
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ORT")
    TArray<int32> Shape; // e.g., {1, N}

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ORT")
    TArray<float> Data;
};

USTRUCT(BlueprintType)
struct FOrtTensorMeta
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ORT")
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ORT")
    TArray<int32> Shape;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ORT")
    FString DType; // e.g., float, int64
};

USTRUCT(BlueprintType)
struct FOrtTensorInt64
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ORT")
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ORT")
    TArray<int32> Shape;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ORT")
    TArray<int64> Data;
};

USTRUCT(BlueprintType)
struct FOrtTensorInt32
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ORT")
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ORT")
    TArray<int32> Shape;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ORT")
    TArray<int32> Data;
};

// High-level timing/event data for driving curves or visemes
UENUM(BlueprintType)
enum class EViseme : uint8
{
    SIL UMETA(DisplayName = "SIL"),
    PP  UMETA(DisplayName = "PP"),
    FF  UMETA(DisplayName = "FF"),
    TH  UMETA(DisplayName = "TH"),
    DD  UMETA(DisplayName = "DD"),
    KK  UMETA(DisplayName = "KK"),
    CH  UMETA(DisplayName = "CH"),
    SS  UMETA(DisplayName = "SS"),
    NN  UMETA(DisplayName = "NN"),
    RR  UMETA(DisplayName = "RR"),
    AA  UMETA(DisplayName = "AA"),
    E   UMETA(DisplayName = "E"),
    I   UMETA(DisplayName = "I"),
    O   UMETA(DisplayName = "O"),
    U   UMETA(DisplayName = "U")
};

// A generic timed token event (token could be phoneme, pinyin, or char)
USTRUCT(BlueprintType)
struct FTimedToken
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="VITS")
    FString Token; // Optional label (phoneme/pinyin/char), may be empty

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="VITS")
    int32 TokenId = -1; // Original numeric id

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="VITS")
    float StartTime = 0.f; // seconds

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="VITS")
    float Duration = 0.f; // seconds
};

// A simple viseme keyframe calculated from tokens/durations with a mapping
USTRUCT(BlueprintType)
struct FVisemeKey
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="VITS")
    EViseme Viseme = EViseme::SIL;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="VITS")
    float StartTime = 0.f; // seconds

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="VITS")
    float Duration = 0.f; // seconds

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="VITS")
    float Weight = 1.f; // 0..1 suggested weight
};
