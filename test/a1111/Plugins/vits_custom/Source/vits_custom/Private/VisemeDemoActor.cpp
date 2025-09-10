#include "VisemeDemoActor.h"
#include "Components/SkeletalMeshComponent.h"
#include "VisemePlayerComponent.h"
#include "VitsCustomBlueprintLibrary.h"

AVisemeDemoActor::AVisemeDemoActor()
{
    PrimaryActorTick.bCanEverTick = false;

    SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    RootComponent = SkeletalMesh;

    VisemePlayer = CreateDefaultSubobject<UVisemePlayerComponent>(TEXT("VisemePlayer"));
    VisemePlayer->TargetMesh = SkeletalMesh;
}

bool AVisemeDemoActor::PlayFromText(const FString& Text)
{
    if (!VisemePlayer) return false;

    // Generate token ids
    TArray<int64> Ids;
    if (!UVitsCustomBlueprintLibrary::TextToTokenIds(Text, Ids))
    {
        return false;
    }

    // Synthesize with timeline
    TArray<FTimedToken> Timeline;
    USoundWave* SW = UVitsCustomBlueprintLibrary::SynthesizeChineseFromIdsDetailed(
        Ids, LengthScale, NoiseScale, NoiseScaleW, SampleRate, Timeline);
    if (!SW) return false;

    // Build default mapping (Chinese)
    TMap<FString, EViseme> Map;
    UVitsCustomBlueprintLibrary::GetDefaultChineseTokenVisemeMap(Map);

    // Token → Viseme keys
    TArray<FVisemeKey> Keys;
    UVitsCustomBlueprintLibrary::BuildVisemeKeysFromTimedTokens(Timeline, Map, EViseme::SIL, Keys);

    // Play
    VisemePlayer->Play(SW, Keys, 0.f);
    return true;
}

