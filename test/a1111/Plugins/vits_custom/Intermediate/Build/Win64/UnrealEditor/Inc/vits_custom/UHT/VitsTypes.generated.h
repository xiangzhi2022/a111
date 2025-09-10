// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VitsTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VITS_CUSTOM_VitsTypes_generated_h
#error "VitsTypes.generated.h already included, missing '#pragma once' in VitsTypes.h"
#endif
#define VITS_CUSTOM_VitsTypes_generated_h

#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsTypes_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOrtTensorFloat_Statics; \
	VITS_CUSTOM_API static class UScriptStruct* StaticStruct();


template<> VITS_CUSTOM_API UScriptStruct* StaticStruct<struct FOrtTensorFloat>();

#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsTypes_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOrtTensorMeta_Statics; \
	VITS_CUSTOM_API static class UScriptStruct* StaticStruct();


template<> VITS_CUSTOM_API UScriptStruct* StaticStruct<struct FOrtTensorMeta>();

#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsTypes_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOrtTensorInt64_Statics; \
	VITS_CUSTOM_API static class UScriptStruct* StaticStruct();


template<> VITS_CUSTOM_API UScriptStruct* StaticStruct<struct FOrtTensorInt64>();

#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsTypes_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOrtTensorInt32_Statics; \
	VITS_CUSTOM_API static class UScriptStruct* StaticStruct();


template<> VITS_CUSTOM_API UScriptStruct* StaticStruct<struct FOrtTensorInt32>();

#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsTypes_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimedToken_Statics; \
	VITS_CUSTOM_API static class UScriptStruct* StaticStruct();


template<> VITS_CUSTOM_API UScriptStruct* StaticStruct<struct FTimedToken>();

#define FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsTypes_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVisemeKey_Statics; \
	VITS_CUSTOM_API static class UScriptStruct* StaticStruct();


template<> VITS_CUSTOM_API UScriptStruct* StaticStruct<struct FVisemeKey>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsTypes_h


#define FOREACH_ENUM_EORTPROVIDER(op) \
	op(EOrtProvider::None) \
	op(EOrtProvider::CPU) \
	op(EOrtProvider::CUDA) \
	op(EOrtProvider::DML) 

enum class EOrtProvider : uint8;
template<> struct TIsUEnumClass<EOrtProvider> { enum { Value = true }; };
template<> VITS_CUSTOM_API UEnum* StaticEnum<EOrtProvider>();

#define FOREACH_ENUM_EVISEME(op) \
	op(EViseme::SIL) \
	op(EViseme::PP) \
	op(EViseme::FF) \
	op(EViseme::TH) \
	op(EViseme::DD) \
	op(EViseme::KK) \
	op(EViseme::CH) \
	op(EViseme::SS) \
	op(EViseme::NN) \
	op(EViseme::RR) \
	op(EViseme::AA) \
	op(EViseme::E) \
	op(EViseme::I) \
	op(EViseme::O) \
	op(EViseme::U) 

enum class EViseme : uint8;
template<> struct TIsUEnumClass<EViseme> { enum { Value = true }; };
template<> VITS_CUSTOM_API UEnum* StaticEnum<EViseme>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
