#include "VisemePlayerComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"

void UVisemePlayerComponent::BeginPlay()
{
    Super::BeginPlay();
    PrimaryComponentTick.bCanEverTick = true;
}

void UVisemePlayerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Stop();
    Super::EndPlay(EndPlayReason);
}

void UVisemePlayerComponent::Play(USoundWave* InSound, const TArray<FVisemeKey>& InKeys, float StartAtTime)
{
    Stop();
    Sound = InSound;
    Keys = InKeys;
    if (!GetWorld()) return;

    if (Sound)
    {
        AudioComp = UGameplayStatics::SpawnSound2D(GetWorld(), Sound, 1.f, 1.f, StartAtTime);
    }
    StartWorldTime = GetWorld()->GetTimeSeconds() - StartAtTime;
    bPlaying = true;
}

void UVisemePlayerComponent::Stop()
{
    if (AudioComp)
    {
        AudioComp->Stop();
        AudioComp = nullptr;
    }
    if (bClearOnStop)
    {
        ClearAllMappedMorphs();
    }
    bPlaying = false;
}

void UVisemePlayerComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    if (!bPlaying || !GetWorld()) return;

    const float Now = GetWorld()->GetTimeSeconds();
    const float Elapsed = FMath::Max(0.f, (float)(Now - StartWorldTime));
    ApplyWeightsAtTime(Elapsed);

    // Auto-stop if audio finished and beyond last key
    float LastEnd = 0.f;
    for (const FVisemeKey& K : Keys) LastEnd = FMath::Max(LastEnd, K.StartTime + K.Duration);
    if ((!AudioComp || !AudioComp->IsPlaying()) && Elapsed > LastEnd + 0.1f)
    {
        Stop();
    }
}

void UVisemePlayerComponent::ApplyWeightsAtTime(float TimeSec)
{
    if (!TargetMesh) return;

    // First compute desired weight per viseme at this time
    TMap<EViseme, float> Desired;
    for (const auto& Pair : VisemeToMorph)
    {
        Desired.Add(Pair.Key, 0.f);
    }

    for (const FVisemeKey& K : Keys)
    {
        const float t0 = K.StartTime;
        const float t1 = K.StartTime + K.Duration;
        if (TimeSec < t0 || TimeSec > t1) continue;

        float w = K.Weight;
        // Simple fade in/out
        if (FadeInTime > 0.f) w *= FMath::Clamp((TimeSec - t0) / FadeInTime, 0.f, 1.f);
        if (FadeOutTime > 0.f) w *= FMath::Clamp((t1 - TimeSec) / FadeOutTime, 0.f, 1.f);

        float* Existing = Desired.Find(K.Viseme);
        if (Existing) *Existing = FMath::Max(*Existing, w);
        else Desired.Add(K.Viseme, w);
    }

    // Apply to morph targets
    for (const auto& Pair : VisemeToMorph)
    {
        const EViseme V = Pair.Key;
        const FName Morph = Pair.Value;
        const float* pW = Desired.Find(V);
        const float W = pW ? *pW : 0.f;
        TargetMesh->SetMorphTarget(Morph, W);
    }
}

void UVisemePlayerComponent::ClearAllMappedMorphs()
{
    if (!TargetMesh) return;
    for (const auto& Pair : VisemeToMorph)
    {
        TargetMesh->SetMorphTarget(Pair.Value, 0.f);
    }
}

