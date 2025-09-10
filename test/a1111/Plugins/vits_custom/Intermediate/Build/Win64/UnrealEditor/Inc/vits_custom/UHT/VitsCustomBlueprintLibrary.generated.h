// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VitsCustomBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 enum class EViseme : uint8;
class UAudioComponent;
class UObject;
class USoundWave;
enum class EOrtProvider : uint8;
enum class EViseme : uint8;
struct FOrtTensorFloat;
struct FOrtTensorInt32;
struct FOrtTensorInt64;
struct FOrtTensorMeta;
struct FTimedToken;
struct FVisemeKey;
#ifdef VITS_CUSTOM_VitsCustomBlueprintLibrary_generated_h
#error "VitsCustomBlueprintLibrary.generated.h already included, missing '#pragma once' in VitsCustomBlueprintLibrary.h"
#endif
#define VITS_CUSTOM_VitsCustomBlueprintLibrary_generated_h

#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsCustomBlueprintLibrary_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChineseTextToAudioAndVisemes); \
	DECLARE_FUNCTION(execGetDefaultEnglishTokenVisemeMap); \
	DECLARE_FUNCTION(execGetDefaultChineseTokenVisemeMap); \
	DECLARE_FUNCTION(execBuildVisemeKeysFromTimedTokens); \
	DECLARE_FUNCTION(execSynthesizeChineseFromIdsDetailed); \
	DECLARE_FUNCTION(execDumpChineseDictionaryToLog); \
	DECLARE_FUNCTION(execLookupChineseToken); \
	DECLARE_FUNCTION(execGetChineseDictionaryStats); \
	DECLARE_FUNCTION(execUnloadChineseDictionary); \
	DECLARE_FUNCTION(execLoadChineseDictionaryFromPath); \
	DECLARE_FUNCTION(execLoadChineseDictionary); \
	DECLARE_FUNCTION(execSynthesizeChineseFromText); \
	DECLARE_FUNCTION(execSynthesizeChineseFromTextAndPlay); \
	DECLARE_FUNCTION(execTextToTokenIds); \
	DECLARE_FUNCTION(execIntArrayToInt64); \
	DECLARE_FUNCTION(execGetChinesePipelineIOMeta); \
	DECLARE_FUNCTION(execLoadChinesePipeline); \
	DECLARE_FUNCTION(execSynthesizeChineseFromIdsAndPlay); \
	DECLARE_FUNCTION(execSynthesizeChineseFromIds); \
	DECLARE_FUNCTION(execDumpChinesePipelineIOMetaToLog); \
	DECLARE_FUNCTION(execDumpModelIOMetaToLog); \
	DECLARE_FUNCTION(execGetCurrentProvider); \
	DECLARE_FUNCTION(execRunModelMixedNamed); \
	DECLARE_FUNCTION(execRunModelFloatsNamed); \
	DECLARE_FUNCTION(execGetModelIOMetaNamed); \
	DECLARE_FUNCTION(execGetModelIONamed); \
	DECLARE_FUNCTION(execIsModelLoadedNamed); \
	DECLARE_FUNCTION(execUnloadModelNamed); \
	DECLARE_FUNCTION(execLoadOnnxModelNamed); \
	DECLARE_FUNCTION(execCreateSoundWaveFromFloat); \
	DECLARE_FUNCTION(execRunModelMixed); \
	DECLARE_FUNCTION(execRunModelFloats); \
	DECLARE_FUNCTION(execGetModelIO); \
	DECLARE_FUNCTION(execUnloadModel); \
	DECLARE_FUNCTION(execIsModelLoaded); \
	DECLARE_FUNCTION(execLoadOnnxModel); \
	DECLARE_FUNCTION(execInitializeOrtAuto); \
	DECLARE_FUNCTION(execInitializeOrtDml); \
	DECLARE_FUNCTION(execInitializeOrtCuda); \
	DECLARE_FUNCTION(execInitializeOrt); \
	DECLARE_FUNCTION(execIsOrtRuntimePresent); \
	DECLARE_FUNCTION(execPluginVersion);


#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsCustomBlueprintLibrary_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVitsCustomBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UVitsCustomBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UVitsCustomBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/vits_custom"), NO_API) \
	DECLARE_SERIALIZER(UVitsCustomBlueprintLibrary)


#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsCustomBlueprintLibrary_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVitsCustomBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVitsCustomBlueprintLibrary(UVitsCustomBlueprintLibrary&&); \
	UVitsCustomBlueprintLibrary(const UVitsCustomBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVitsCustomBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVitsCustomBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVitsCustomBlueprintLibrary) \
	NO_API virtual ~UVitsCustomBlueprintLibrary();


#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsCustomBlueprintLibrary_h_7_PROLOG
#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsCustomBlueprintLibrary_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsCustomBlueprintLibrary_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsCustomBlueprintLibrary_h_10_INCLASS_NO_PURE_DECLS \
	FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsCustomBlueprintLibrary_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VITS_CUSTOM_API UClass* StaticClass<class UVitsCustomBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsCustomBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
