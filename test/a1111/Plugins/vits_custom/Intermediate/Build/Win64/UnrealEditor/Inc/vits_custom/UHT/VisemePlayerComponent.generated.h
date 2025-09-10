// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VisemePlayerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;
struct FVisemeKey;
#ifdef VITS_CUSTOM_VisemePlayerComponent_generated_h
#error "VisemePlayerComponent.generated.h already included, missing '#pragma once' in VisemePlayerComponent.h"
#endif
#define VITS_CUSTOM_VisemePlayerComponent_generated_h

#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemePlayerComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay);


#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemePlayerComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVisemePlayerComponent(); \
	friend struct Z_Construct_UClass_UVisemePlayerComponent_Statics; \
public: \
	DECLARE_CLASS(UVisemePlayerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/vits_custom"), NO_API) \
	DECLARE_SERIALIZER(UVisemePlayerComponent)


#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemePlayerComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVisemePlayerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVisemePlayerComponent(UVisemePlayerComponent&&); \
	UVisemePlayerComponent(const UVisemePlayerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVisemePlayerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisemePlayerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisemePlayerComponent) \
	NO_API virtual ~UVisemePlayerComponent();


#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemePlayerComponent_h_12_PROLOG
#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemePlayerComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemePlayerComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemePlayerComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemePlayerComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VITS_CUSTOM_API UClass* StaticClass<class UVisemePlayerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemePlayerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
