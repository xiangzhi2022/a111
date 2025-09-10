#pragma once

#include "GameFramework/Actor.h"
#include "VitsTypes.h"
#include "VisemeDemoActor.generated.h"

class USkeletalMeshComponent;
class UVisemePlayerComponent;

UCLASS()
class AVisemeDemoActor : public AActor
{
    GENERATED_BODY()
public:
    AVisemeDemoActor();

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USkeletalMeshComponent* SkeletalMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UVisemePlayerComponent* VisemePlayer;

    // Synthesis params
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="VITS")
    float LengthScale = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="VITS")
    float NoiseScale = 0.667f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="VITS")
    float NoiseScaleW = 0.8f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="VITS")
    int32 SampleRate = 22050;

    // High-level helper: Text → audio + visemes → play
    UFUNCTION(BlueprintCallable, Category="VITS")
    bool PlayFromText(const FString& Text);
};

