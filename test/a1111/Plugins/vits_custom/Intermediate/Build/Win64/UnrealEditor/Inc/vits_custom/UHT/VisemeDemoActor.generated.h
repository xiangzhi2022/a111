// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VisemeDemoActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VITS_CUSTOM_VisemeDemoActor_generated_h
#error "VisemeDemoActor.generated.h already included, missing '#pragma once' in VisemeDemoActor.h"
#endif
#define VITS_CUSTOM_VisemeDemoActor_generated_h

#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemeDemoActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlayFromText);


#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemeDemoActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVisemeDemoActor(); \
	friend struct Z_Construct_UClass_AVisemeDemoActor_Statics; \
public: \
	DECLARE_CLASS(AVisemeDemoActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/vits_custom"), NO_API) \
	DECLARE_SERIALIZER(AVisemeDemoActor)


#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemeDemoActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVisemeDemoActor(AVisemeDemoActor&&); \
	AVisemeDemoActor(const AVisemeDemoActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVisemeDemoActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVisemeDemoActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVisemeDemoActor) \
	NO_API virtual ~AVisemeDemoActor();


#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemeDemoActor_h_10_PROLOG
#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemeDemoActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemeDemoActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemeDemoActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemeDemoActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VITS_CUSTOM_API UClass* StaticClass<class AVisemeDemoActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemeDemoActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
