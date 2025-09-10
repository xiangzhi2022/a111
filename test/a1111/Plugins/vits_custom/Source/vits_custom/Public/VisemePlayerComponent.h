// Minimal viseme playback component to drive Morph Targets from FVisemeKey timeline
#pragma once

#include "Components/ActorComponent.h"
#include "VitsTypes.h"
#include "VisemePlayerComponent.generated.h"

class USkeletalMeshComponent;
class UAudioComponent;
class USoundWave;

UCLASS(ClassGroup=(Audio), meta=(BlueprintSpawnableComponent))
class UVisemePlayerComponent : public UActorComponent
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Viseme")
    USkeletalMeshComponent* TargetMesh = nullptr;

    // Mapping from enum viseme to morph target name on the mesh
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Viseme")
    TMap<EViseme, FName> VisemeToMorph;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Viseme")
    float FadeInTime = 0.02f; // seconds

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Viseme")
    float FadeOutTime = 0.04f; // seconds

    // If true, clears all mapped morph targets on Stop()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Viseme")
    bool bClearOnStop = true;

    // Playback API
    UFUNCTION(BlueprintCallable, Category="Viseme")
    void Play(USoundWave* InSound, const TArray<FVisemeKey>& InKeys, float StartAtTime = 0.f);

    UFUNCTION(BlueprintCallable, Category="Viseme")
    void Stop();

    UFUNCTION(BlueprintPure, Category="Viseme")
    bool IsPlaying() const { return bPlaying; }

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
    // Active playback state
    UPROPERTY(Transient)
    UAudioComponent* AudioComp = nullptr;

    UPROPERTY(Transient)
    USoundWave* Sound = nullptr;

    TArray<FVisemeKey> Keys;
    double StartWorldTime = 0.0; // when playback started
    bool bPlaying = false;

    void ApplyWeightsAtTime(float TimeSec);
    void ClearAllMappedMorphs();
};

