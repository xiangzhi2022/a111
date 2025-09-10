// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "vits_custom/Public/VitsCustomBlueprintLibrary.h"
#include "vits_custom/Public/VitsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVitsCustomBlueprintLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
UPackage* Z_Construct_UPackage__Script_vits_custom();
VITS_CUSTOM_API UClass* Z_Construct_UClass_UVitsCustomBlueprintLibrary();
VITS_CUSTOM_API UClass* Z_Construct_UClass_UVitsCustomBlueprintLibrary_NoRegister();
VITS_CUSTOM_API UEnum* Z_Construct_UEnum_vits_custom_EOrtProvider();
VITS_CUSTOM_API UEnum* Z_Construct_UEnum_vits_custom_EViseme();
VITS_CUSTOM_API UScriptStruct* Z_Construct_UScriptStruct_FOrtTensorFloat();
VITS_CUSTOM_API UScriptStruct* Z_Construct_UScriptStruct_FOrtTensorInt32();
VITS_CUSTOM_API UScriptStruct* Z_Construct_UScriptStruct_FOrtTensorInt64();
VITS_CUSTOM_API UScriptStruct* Z_Construct_UScriptStruct_FOrtTensorMeta();
VITS_CUSTOM_API UScriptStruct* Z_Construct_UScriptStruct_FTimedToken();
VITS_CUSTOM_API UScriptStruct* Z_Construct_UScriptStruct_FVisemeKey();
// End Cross Module References

// Begin Class UVitsCustomBlueprintLibrary Function BuildVisemeKeysFromTimedTokens
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics
{
	struct VitsCustomBlueprintLibrary_eventBuildVisemeKeysFromTimedTokens_Parms
	{
		TArray<FTimedToken> Timeline;
		TMap<FString,EViseme> TokenToViseme;
		EViseme DefaultViseme;
		TArray<FVisemeKey> OutKeys;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Viseme" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Utility: build viseme keys from timed tokens using a mapping table\n" },
#endif
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility: build viseme keys from timed tokens using a mapping table" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timeline_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TokenToViseme_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Timeline_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Timeline;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TokenToViseme_ValueProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TokenToViseme_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TokenToViseme_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TokenToViseme;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultViseme_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultViseme;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::NewProp_Timeline_Inner = { "Timeline", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTimedToken, METADATA_PARAMS(0, nullptr) }; // 801852798
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::NewProp_Timeline = { "Timeline", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventBuildVisemeKeysFromTimedTokens_Parms, Timeline), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timeline_MetaData), NewProp_Timeline_MetaData) }; // 801852798
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::NewProp_TokenToViseme_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::NewProp_TokenToViseme_ValueProp = { "TokenToViseme", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_vits_custom_EViseme, METADATA_PARAMS(0, nullptr) }; // 2580497535
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::NewProp_TokenToViseme_Key_KeyProp = { "TokenToViseme_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::NewProp_TokenToViseme = { "TokenToViseme", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventBuildVisemeKeysFromTimedTokens_Parms, TokenToViseme), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TokenToViseme_MetaData), NewProp_TokenToViseme_MetaData) }; // 2580497535
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::NewProp_DefaultViseme_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::NewProp_DefaultViseme = { "DefaultViseme", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventBuildVisemeKeysFromTimedTokens_Parms, DefaultViseme), Z_Construct_UEnum_vits_custom_EViseme, METADATA_PARAMS(0, nullptr) }; // 2580497535
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::NewProp_OutKeys_Inner = { "OutKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVisemeKey, METADATA_PARAMS(0, nullptr) }; // 3886534908
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::NewProp_OutKeys = { "OutKeys", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventBuildVisemeKeysFromTimedTokens_Parms, OutKeys), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3886534908
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::NewProp_Timeline_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::NewProp_Timeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::NewProp_TokenToViseme_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::NewProp_TokenToViseme_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::NewProp_TokenToViseme_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::NewProp_TokenToViseme,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::NewProp_DefaultViseme_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::NewProp_DefaultViseme,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::NewProp_OutKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::NewProp_OutKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "BuildVisemeKeysFromTimedTokens", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::VitsCustomBlueprintLibrary_eventBuildVisemeKeysFromTimedTokens_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::VitsCustomBlueprintLibrary_eventBuildVisemeKeysFromTimedTokens_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execBuildVisemeKeysFromTimedTokens)
{
	P_GET_TARRAY_REF(FTimedToken,Z_Param_Out_Timeline);
	P_GET_TMAP_REF(FString,EViseme,Z_Param_Out_TokenToViseme);
	P_GET_ENUM(EViseme,Z_Param_DefaultViseme);
	P_GET_TARRAY_REF(FVisemeKey,Z_Param_Out_OutKeys);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVitsCustomBlueprintLibrary::BuildVisemeKeysFromTimedTokens(Z_Param_Out_Timeline,Z_Param_Out_TokenToViseme,EViseme(Z_Param_DefaultViseme),Z_Param_Out_OutKeys);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function BuildVisemeKeysFromTimedTokens

// Begin Class UVitsCustomBlueprintLibrary Function ChineseTextToAudioAndVisemes
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics
{
	struct VitsCustomBlueprintLibrary_eventChineseTextToAudioAndVisemes_Parms
	{
		FString Text;
		float LengthScale;
		float NoiseScale;
		float NoiseScaleW;
		int32 SampleRate;
		TArray<FVisemeKey> OutKeys;
		USoundWave* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Chinese" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// One-shot helper: Text -> (SoundWave + Viseme Keys) using default Chinese mapping\n" },
#endif
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "One-shot helper: Text -> (SoundWave + Viseme Keys) using default Chinese mapping" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScaleW;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutKeys;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventChineseTextToAudioAndVisemes_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::NewProp_LengthScale = { "LengthScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventChineseTextToAudioAndVisemes_Parms, LengthScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventChineseTextToAudioAndVisemes_Parms, NoiseScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::NewProp_NoiseScaleW = { "NoiseScaleW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventChineseTextToAudioAndVisemes_Parms, NoiseScaleW), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventChineseTextToAudioAndVisemes_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::NewProp_OutKeys_Inner = { "OutKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVisemeKey, METADATA_PARAMS(0, nullptr) }; // 3886534908
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::NewProp_OutKeys = { "OutKeys", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventChineseTextToAudioAndVisemes_Parms, OutKeys), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3886534908
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventChineseTextToAudioAndVisemes_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::NewProp_LengthScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::NewProp_NoiseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::NewProp_NoiseScaleW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::NewProp_OutKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::NewProp_OutKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "ChineseTextToAudioAndVisemes", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::VitsCustomBlueprintLibrary_eventChineseTextToAudioAndVisemes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::VitsCustomBlueprintLibrary_eventChineseTextToAudioAndVisemes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execChineseTextToAudioAndVisemes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LengthScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NoiseScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NoiseScaleW);
	P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
	P_GET_TARRAY_REF(FVisemeKey,Z_Param_Out_OutKeys);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundWave**)Z_Param__Result=UVitsCustomBlueprintLibrary::ChineseTextToAudioAndVisemes(Z_Param_Text,Z_Param_LengthScale,Z_Param_NoiseScale,Z_Param_NoiseScaleW,Z_Param_SampleRate,Z_Param_Out_OutKeys);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function ChineseTextToAudioAndVisemes

// Begin Class UVitsCustomBlueprintLibrary Function CreateSoundWaveFromFloat
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics
{
	struct VitsCustomBlueprintLibrary_eventCreateSoundWaveFromFloat_Parms
	{
		TArray<float> PCM;
		int32 SampleRate;
		int32 NumChannels;
		USoundWave* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert float PCM [-1,1] to SoundWave (16-bit PCM)\n" },
#endif
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert float PCM [-1,1] to SoundWave (16-bit PCM)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PCM_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PCM_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PCM;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumChannels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics::NewProp_PCM_Inner = { "PCM", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics::NewProp_PCM = { "PCM", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventCreateSoundWaveFromFloat_Parms, PCM), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PCM_MetaData), NewProp_PCM_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventCreateSoundWaveFromFloat_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventCreateSoundWaveFromFloat_Parms, NumChannels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventCreateSoundWaveFromFloat_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics::NewProp_PCM_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics::NewProp_PCM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics::NewProp_NumChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "CreateSoundWaveFromFloat", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics::VitsCustomBlueprintLibrary_eventCreateSoundWaveFromFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics::VitsCustomBlueprintLibrary_eventCreateSoundWaveFromFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execCreateSoundWaveFromFloat)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_PCM);
	P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumChannels);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundWave**)Z_Param__Result=UVitsCustomBlueprintLibrary::CreateSoundWaveFromFloat(Z_Param_Out_PCM,Z_Param_SampleRate,Z_Param_NumChannels);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function CreateSoundWaveFromFloat

// Begin Class UVitsCustomBlueprintLibrary Function DumpChineseDictionaryToLog
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChineseDictionaryToLog_Statics
{
	struct VitsCustomBlueprintLibrary_eventDumpChineseDictionaryToLog_Parms
	{
		int32 MaxCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Chinese" },
		{ "CPP_Default_MaxCount", "50" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChineseDictionaryToLog_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventDumpChineseDictionaryToLog_Parms, MaxCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChineseDictionaryToLog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChineseDictionaryToLog_Statics::NewProp_MaxCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChineseDictionaryToLog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChineseDictionaryToLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "DumpChineseDictionaryToLog", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChineseDictionaryToLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChineseDictionaryToLog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChineseDictionaryToLog_Statics::VitsCustomBlueprintLibrary_eventDumpChineseDictionaryToLog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChineseDictionaryToLog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChineseDictionaryToLog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChineseDictionaryToLog_Statics::VitsCustomBlueprintLibrary_eventDumpChineseDictionaryToLog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChineseDictionaryToLog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChineseDictionaryToLog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execDumpChineseDictionaryToLog)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVitsCustomBlueprintLibrary::DumpChineseDictionaryToLog(Z_Param_MaxCount);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function DumpChineseDictionaryToLog

// Begin Class UVitsCustomBlueprintLibrary Function DumpChinesePipelineIOMetaToLog
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChinesePipelineIOMetaToLog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Chinese" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChinesePipelineIOMetaToLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "DumpChinesePipelineIOMetaToLog", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChinesePipelineIOMetaToLog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChinesePipelineIOMetaToLog_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChinesePipelineIOMetaToLog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChinesePipelineIOMetaToLog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execDumpChinesePipelineIOMetaToLog)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UVitsCustomBlueprintLibrary::DumpChinesePipelineIOMetaToLog();
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function DumpChinesePipelineIOMetaToLog

// Begin Class UVitsCustomBlueprintLibrary Function DumpModelIOMetaToLog
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpModelIOMetaToLog_Statics
{
	struct VitsCustomBlueprintLibrary_eventDumpModelIOMetaToLog_Parms
	{
		FString Alias;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Debug" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alias_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Alias;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpModelIOMetaToLog_Statics::NewProp_Alias = { "Alias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventDumpModelIOMetaToLog_Parms, Alias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alias_MetaData), NewProp_Alias_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpModelIOMetaToLog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpModelIOMetaToLog_Statics::NewProp_Alias,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpModelIOMetaToLog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpModelIOMetaToLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "DumpModelIOMetaToLog", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpModelIOMetaToLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpModelIOMetaToLog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpModelIOMetaToLog_Statics::VitsCustomBlueprintLibrary_eventDumpModelIOMetaToLog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpModelIOMetaToLog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpModelIOMetaToLog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpModelIOMetaToLog_Statics::VitsCustomBlueprintLibrary_eventDumpModelIOMetaToLog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpModelIOMetaToLog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpModelIOMetaToLog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execDumpModelIOMetaToLog)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Alias);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVitsCustomBlueprintLibrary::DumpModelIOMetaToLog(Z_Param_Alias);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function DumpModelIOMetaToLog

// Begin Class UVitsCustomBlueprintLibrary Function GetChineseDictionaryStats
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics
{
	struct VitsCustomBlueprintLibrary_eventGetChineseDictionaryStats_Parms
	{
		int32 EntryCount;
		int32 MaxTokenLen;
		bool bLoaded;
		FString PathLoaded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Chinese" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EntryCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTokenLen;
	static void NewProp_bLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoaded;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PathLoaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics::NewProp_EntryCount = { "EntryCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetChineseDictionaryStats_Parms, EntryCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics::NewProp_MaxTokenLen = { "MaxTokenLen", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetChineseDictionaryStats_Parms, MaxTokenLen), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics::NewProp_bLoaded_SetBit(void* Obj)
{
	((VitsCustomBlueprintLibrary_eventGetChineseDictionaryStats_Parms*)Obj)->bLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics::NewProp_bLoaded = { "bLoaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitsCustomBlueprintLibrary_eventGetChineseDictionaryStats_Parms), &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics::NewProp_bLoaded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics::NewProp_PathLoaded = { "PathLoaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetChineseDictionaryStats_Parms, PathLoaded), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics::NewProp_EntryCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics::NewProp_MaxTokenLen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics::NewProp_bLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics::NewProp_PathLoaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "GetChineseDictionaryStats", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics::VitsCustomBlueprintLibrary_eventGetChineseDictionaryStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics::VitsCustomBlueprintLibrary_eventGetChineseDictionaryStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execGetChineseDictionaryStats)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_EntryCount);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxTokenLen);
	P_GET_UBOOL_REF(Z_Param_Out_bLoaded);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PathLoaded);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVitsCustomBlueprintLibrary::GetChineseDictionaryStats(Z_Param_Out_EntryCount,Z_Param_Out_MaxTokenLen,Z_Param_Out_bLoaded,Z_Param_Out_PathLoaded);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function GetChineseDictionaryStats

// Begin Class UVitsCustomBlueprintLibrary Function GetChinesePipelineIOMeta
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics
{
	struct VitsCustomBlueprintLibrary_eventGetChinesePipelineIOMeta_Parms
	{
		TArray<FOrtTensorMeta> EncIn;
		TArray<FOrtTensorMeta> EncOut;
		TArray<FOrtTensorMeta> DpIn;
		TArray<FOrtTensorMeta> DpOut;
		TArray<FOrtTensorMeta> FlowIn;
		TArray<FOrtTensorMeta> FlowOut;
		TArray<FOrtTensorMeta> DecIn;
		TArray<FOrtTensorMeta> DecOut;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Chinese" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get IO metadata for Chinese pipeline: enc_p, dp, flow, dec\n" },
#endif
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get IO metadata for Chinese pipeline: enc_p, dp, flow, dec" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EncIn_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EncIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EncOut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EncOut;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DpIn_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DpIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DpOut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DpOut;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FlowIn_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FlowIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FlowOut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FlowOut;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DecIn_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DecIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DecOut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DecOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_EncIn_Inner = { "EncIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorMeta, METADATA_PARAMS(0, nullptr) }; // 3766230339
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_EncIn = { "EncIn", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetChinesePipelineIOMeta_Parms, EncIn), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3766230339
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_EncOut_Inner = { "EncOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorMeta, METADATA_PARAMS(0, nullptr) }; // 3766230339
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_EncOut = { "EncOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetChinesePipelineIOMeta_Parms, EncOut), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3766230339
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_DpIn_Inner = { "DpIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorMeta, METADATA_PARAMS(0, nullptr) }; // 3766230339
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_DpIn = { "DpIn", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetChinesePipelineIOMeta_Parms, DpIn), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3766230339
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_DpOut_Inner = { "DpOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorMeta, METADATA_PARAMS(0, nullptr) }; // 3766230339
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_DpOut = { "DpOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetChinesePipelineIOMeta_Parms, DpOut), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3766230339
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_FlowIn_Inner = { "FlowIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorMeta, METADATA_PARAMS(0, nullptr) }; // 3766230339
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_FlowIn = { "FlowIn", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetChinesePipelineIOMeta_Parms, FlowIn), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3766230339
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_FlowOut_Inner = { "FlowOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorMeta, METADATA_PARAMS(0, nullptr) }; // 3766230339
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_FlowOut = { "FlowOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetChinesePipelineIOMeta_Parms, FlowOut), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3766230339
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_DecIn_Inner = { "DecIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorMeta, METADATA_PARAMS(0, nullptr) }; // 3766230339
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_DecIn = { "DecIn", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetChinesePipelineIOMeta_Parms, DecIn), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3766230339
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_DecOut_Inner = { "DecOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorMeta, METADATA_PARAMS(0, nullptr) }; // 3766230339
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_DecOut = { "DecOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetChinesePipelineIOMeta_Parms, DecOut), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3766230339
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_EncIn_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_EncIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_EncOut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_EncOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_DpIn_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_DpIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_DpOut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_DpOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_FlowIn_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_FlowIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_FlowOut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_FlowOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_DecIn_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_DecIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_DecOut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::NewProp_DecOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "GetChinesePipelineIOMeta", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::VitsCustomBlueprintLibrary_eventGetChinesePipelineIOMeta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::VitsCustomBlueprintLibrary_eventGetChinesePipelineIOMeta_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execGetChinesePipelineIOMeta)
{
	P_GET_TARRAY_REF(FOrtTensorMeta,Z_Param_Out_EncIn);
	P_GET_TARRAY_REF(FOrtTensorMeta,Z_Param_Out_EncOut);
	P_GET_TARRAY_REF(FOrtTensorMeta,Z_Param_Out_DpIn);
	P_GET_TARRAY_REF(FOrtTensorMeta,Z_Param_Out_DpOut);
	P_GET_TARRAY_REF(FOrtTensorMeta,Z_Param_Out_FlowIn);
	P_GET_TARRAY_REF(FOrtTensorMeta,Z_Param_Out_FlowOut);
	P_GET_TARRAY_REF(FOrtTensorMeta,Z_Param_Out_DecIn);
	P_GET_TARRAY_REF(FOrtTensorMeta,Z_Param_Out_DecOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVitsCustomBlueprintLibrary::GetChinesePipelineIOMeta(Z_Param_Out_EncIn,Z_Param_Out_EncOut,Z_Param_Out_DpIn,Z_Param_Out_DpOut,Z_Param_Out_FlowIn,Z_Param_Out_FlowOut,Z_Param_Out_DecIn,Z_Param_Out_DecOut);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function GetChinesePipelineIOMeta

// Begin Class UVitsCustomBlueprintLibrary Function GetCurrentProvider
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetCurrentProvider_Statics
{
	struct VitsCustomBlueprintLibrary_eventGetCurrentProvider_Parms
	{
		EOrtProvider ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|ORT" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetCurrentProvider_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetCurrentProvider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetCurrentProvider_Parms, ReturnValue), Z_Construct_UEnum_vits_custom_EOrtProvider, METADATA_PARAMS(0, nullptr) }; // 1648802808
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetCurrentProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetCurrentProvider_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetCurrentProvider_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetCurrentProvider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetCurrentProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "GetCurrentProvider", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetCurrentProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetCurrentProvider_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetCurrentProvider_Statics::VitsCustomBlueprintLibrary_eventGetCurrentProvider_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetCurrentProvider_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetCurrentProvider_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetCurrentProvider_Statics::VitsCustomBlueprintLibrary_eventGetCurrentProvider_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetCurrentProvider()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetCurrentProvider_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execGetCurrentProvider)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOrtProvider*)Z_Param__Result=UVitsCustomBlueprintLibrary::GetCurrentProvider();
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function GetCurrentProvider

// Begin Class UVitsCustomBlueprintLibrary Function GetDefaultChineseTokenVisemeMap
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap_Statics
{
	struct VitsCustomBlueprintLibrary_eventGetDefaultChineseTokenVisemeMap_Parms
	{
		TMap<FString,EViseme> OutMap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Viseme" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default token->viseme mappings\n" },
#endif
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default token->viseme mappings" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutMap_ValueProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap_Statics::NewProp_OutMap_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap_Statics::NewProp_OutMap_ValueProp = { "OutMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_vits_custom_EViseme, METADATA_PARAMS(0, nullptr) }; // 2580497535
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap_Statics::NewProp_OutMap_Key_KeyProp = { "OutMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap_Statics::NewProp_OutMap = { "OutMap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetDefaultChineseTokenVisemeMap_Parms, OutMap), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2580497535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap_Statics::NewProp_OutMap_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap_Statics::NewProp_OutMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap_Statics::NewProp_OutMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap_Statics::NewProp_OutMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "GetDefaultChineseTokenVisemeMap", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap_Statics::VitsCustomBlueprintLibrary_eventGetDefaultChineseTokenVisemeMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap_Statics::VitsCustomBlueprintLibrary_eventGetDefaultChineseTokenVisemeMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execGetDefaultChineseTokenVisemeMap)
{
	P_GET_TMAP_REF(FString,EViseme,Z_Param_Out_OutMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVitsCustomBlueprintLibrary::GetDefaultChineseTokenVisemeMap(Z_Param_Out_OutMap);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function GetDefaultChineseTokenVisemeMap

// Begin Class UVitsCustomBlueprintLibrary Function GetDefaultEnglishTokenVisemeMap
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap_Statics
{
	struct VitsCustomBlueprintLibrary_eventGetDefaultEnglishTokenVisemeMap_Parms
	{
		TMap<FString,EViseme> OutMap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Viseme" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutMap_ValueProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap_Statics::NewProp_OutMap_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap_Statics::NewProp_OutMap_ValueProp = { "OutMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_vits_custom_EViseme, METADATA_PARAMS(0, nullptr) }; // 2580497535
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap_Statics::NewProp_OutMap_Key_KeyProp = { "OutMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap_Statics::NewProp_OutMap = { "OutMap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetDefaultEnglishTokenVisemeMap_Parms, OutMap), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2580497535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap_Statics::NewProp_OutMap_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap_Statics::NewProp_OutMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap_Statics::NewProp_OutMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap_Statics::NewProp_OutMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "GetDefaultEnglishTokenVisemeMap", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap_Statics::VitsCustomBlueprintLibrary_eventGetDefaultEnglishTokenVisemeMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap_Statics::VitsCustomBlueprintLibrary_eventGetDefaultEnglishTokenVisemeMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execGetDefaultEnglishTokenVisemeMap)
{
	P_GET_TMAP_REF(FString,EViseme,Z_Param_Out_OutMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVitsCustomBlueprintLibrary::GetDefaultEnglishTokenVisemeMap(Z_Param_Out_OutMap);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function GetDefaultEnglishTokenVisemeMap

// Begin Class UVitsCustomBlueprintLibrary Function GetModelIO
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO_Statics
{
	struct VitsCustomBlueprintLibrary_eventGetModelIO_Parms
	{
		TArray<FString> InputNames;
		TArray<FString> OutputNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Model" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO_Statics::NewProp_InputNames_Inner = { "InputNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO_Statics::NewProp_InputNames = { "InputNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetModelIO_Parms, InputNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO_Statics::NewProp_OutputNames_Inner = { "OutputNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO_Statics::NewProp_OutputNames = { "OutputNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetModelIO_Parms, OutputNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO_Statics::NewProp_InputNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO_Statics::NewProp_InputNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO_Statics::NewProp_OutputNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO_Statics::NewProp_OutputNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "GetModelIO", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO_Statics::VitsCustomBlueprintLibrary_eventGetModelIO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO_Statics::VitsCustomBlueprintLibrary_eventGetModelIO_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execGetModelIO)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InputNames);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutputNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVitsCustomBlueprintLibrary::GetModelIO(Z_Param_Out_InputNames,Z_Param_Out_OutputNames);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function GetModelIO

// Begin Class UVitsCustomBlueprintLibrary Function GetModelIOMetaNamed
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics
{
	struct VitsCustomBlueprintLibrary_eventGetModelIOMetaNamed_Parms
	{
		FString Alias;
		TArray<FOrtTensorMeta> Inputs;
		TArray<FOrtTensorMeta> Outputs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Model" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alias_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Alias;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics::NewProp_Alias = { "Alias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetModelIOMetaNamed_Parms, Alias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alias_MetaData), NewProp_Alias_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorMeta, METADATA_PARAMS(0, nullptr) }; // 3766230339
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetModelIOMetaNamed_Parms, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3766230339
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorMeta, METADATA_PARAMS(0, nullptr) }; // 3766230339
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetModelIOMetaNamed_Parms, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3766230339
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics::NewProp_Alias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics::NewProp_Inputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics::NewProp_Inputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics::NewProp_Outputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics::NewProp_Outputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "GetModelIOMetaNamed", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics::VitsCustomBlueprintLibrary_eventGetModelIOMetaNamed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics::VitsCustomBlueprintLibrary_eventGetModelIOMetaNamed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execGetModelIOMetaNamed)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Alias);
	P_GET_TARRAY_REF(FOrtTensorMeta,Z_Param_Out_Inputs);
	P_GET_TARRAY_REF(FOrtTensorMeta,Z_Param_Out_Outputs);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVitsCustomBlueprintLibrary::GetModelIOMetaNamed(Z_Param_Alias,Z_Param_Out_Inputs,Z_Param_Out_Outputs);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function GetModelIOMetaNamed

// Begin Class UVitsCustomBlueprintLibrary Function GetModelIONamed
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics
{
	struct VitsCustomBlueprintLibrary_eventGetModelIONamed_Parms
	{
		FString Alias;
		TArray<FString> InputNames;
		TArray<FString> OutputNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Model" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alias_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Alias;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics::NewProp_Alias = { "Alias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetModelIONamed_Parms, Alias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alias_MetaData), NewProp_Alias_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics::NewProp_InputNames_Inner = { "InputNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics::NewProp_InputNames = { "InputNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetModelIONamed_Parms, InputNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics::NewProp_OutputNames_Inner = { "OutputNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics::NewProp_OutputNames = { "OutputNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventGetModelIONamed_Parms, OutputNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics::NewProp_Alias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics::NewProp_InputNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics::NewProp_InputNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics::NewProp_OutputNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics::NewProp_OutputNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "GetModelIONamed", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics::VitsCustomBlueprintLibrary_eventGetModelIONamed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics::VitsCustomBlueprintLibrary_eventGetModelIONamed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execGetModelIONamed)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Alias);
	P_GET_TARRAY_REF(FString,Z_Param_Out_InputNames);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutputNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVitsCustomBlueprintLibrary::GetModelIONamed(Z_Param_Alias,Z_Param_Out_InputNames,Z_Param_Out_OutputNames);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function GetModelIONamed

// Begin Class UVitsCustomBlueprintLibrary Function InitializeOrt
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt_Statics
{
	struct VitsCustomBlueprintLibrary_eventInitializeOrt_Parms
	{
		int32 IntraOpNumThreads;
		int32 InterOpNumThreads;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|ORT" },
		{ "CPP_Default_InterOpNumThreads", "1" },
		{ "CPP_Default_IntraOpNumThreads", "1" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntraOpNumThreads;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InterOpNumThreads;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt_Statics::NewProp_IntraOpNumThreads = { "IntraOpNumThreads", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventInitializeOrt_Parms, IntraOpNumThreads), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt_Statics::NewProp_InterOpNumThreads = { "InterOpNumThreads", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventInitializeOrt_Parms, InterOpNumThreads), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VitsCustomBlueprintLibrary_eventInitializeOrt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitsCustomBlueprintLibrary_eventInitializeOrt_Parms), &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt_Statics::NewProp_IntraOpNumThreads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt_Statics::NewProp_InterOpNumThreads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "InitializeOrt", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt_Statics::VitsCustomBlueprintLibrary_eventInitializeOrt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt_Statics::VitsCustomBlueprintLibrary_eventInitializeOrt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execInitializeOrt)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_IntraOpNumThreads);
	P_GET_PROPERTY(FIntProperty,Z_Param_InterOpNumThreads);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVitsCustomBlueprintLibrary::InitializeOrt(Z_Param_IntraOpNumThreads,Z_Param_InterOpNumThreads);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function InitializeOrt

// Begin Class UVitsCustomBlueprintLibrary Function InitializeOrtAuto
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics
{
	struct VitsCustomBlueprintLibrary_eventInitializeOrtAuto_Parms
	{
		int32 CudaDeviceId;
		int32 IntraOpNumThreads;
		int32 InterOpNumThreads;
		EOrtProvider ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|ORT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Try CUDA then DML then CPU; returns selected provider\n" },
#endif
		{ "CPP_Default_CudaDeviceId", "0" },
		{ "CPP_Default_InterOpNumThreads", "1" },
		{ "CPP_Default_IntraOpNumThreads", "1" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try CUDA then DML then CPU; returns selected provider" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CudaDeviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntraOpNumThreads;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InterOpNumThreads;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics::NewProp_CudaDeviceId = { "CudaDeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventInitializeOrtAuto_Parms, CudaDeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics::NewProp_IntraOpNumThreads = { "IntraOpNumThreads", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventInitializeOrtAuto_Parms, IntraOpNumThreads), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics::NewProp_InterOpNumThreads = { "InterOpNumThreads", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventInitializeOrtAuto_Parms, InterOpNumThreads), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventInitializeOrtAuto_Parms, ReturnValue), Z_Construct_UEnum_vits_custom_EOrtProvider, METADATA_PARAMS(0, nullptr) }; // 1648802808
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics::NewProp_CudaDeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics::NewProp_IntraOpNumThreads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics::NewProp_InterOpNumThreads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "InitializeOrtAuto", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics::VitsCustomBlueprintLibrary_eventInitializeOrtAuto_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics::VitsCustomBlueprintLibrary_eventInitializeOrtAuto_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execInitializeOrtAuto)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CudaDeviceId);
	P_GET_PROPERTY(FIntProperty,Z_Param_IntraOpNumThreads);
	P_GET_PROPERTY(FIntProperty,Z_Param_InterOpNumThreads);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOrtProvider*)Z_Param__Result=UVitsCustomBlueprintLibrary::InitializeOrtAuto(Z_Param_CudaDeviceId,Z_Param_IntraOpNumThreads,Z_Param_InterOpNumThreads);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function InitializeOrtAuto

// Begin Class UVitsCustomBlueprintLibrary Function InitializeOrtCuda
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics
{
	struct VitsCustomBlueprintLibrary_eventInitializeOrtCuda_Parms
	{
		int32 DeviceId;
		int32 IntraOpNumThreads;
		int32 InterOpNumThreads;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|ORT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Initialize ORT and enable CUDA (DeviceId >= 0)\n" },
#endif
		{ "CPP_Default_DeviceId", "0" },
		{ "CPP_Default_InterOpNumThreads", "1" },
		{ "CPP_Default_IntraOpNumThreads", "1" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initialize ORT and enable CUDA (DeviceId >= 0)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntraOpNumThreads;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InterOpNumThreads;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventInitializeOrtCuda_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics::NewProp_IntraOpNumThreads = { "IntraOpNumThreads", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventInitializeOrtCuda_Parms, IntraOpNumThreads), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics::NewProp_InterOpNumThreads = { "InterOpNumThreads", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventInitializeOrtCuda_Parms, InterOpNumThreads), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VitsCustomBlueprintLibrary_eventInitializeOrtCuda_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitsCustomBlueprintLibrary_eventInitializeOrtCuda_Parms), &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics::NewProp_IntraOpNumThreads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics::NewProp_InterOpNumThreads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "InitializeOrtCuda", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics::VitsCustomBlueprintLibrary_eventInitializeOrtCuda_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics::VitsCustomBlueprintLibrary_eventInitializeOrtCuda_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execInitializeOrtCuda)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
	P_GET_PROPERTY(FIntProperty,Z_Param_IntraOpNumThreads);
	P_GET_PROPERTY(FIntProperty,Z_Param_InterOpNumThreads);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVitsCustomBlueprintLibrary::InitializeOrtCuda(Z_Param_DeviceId,Z_Param_IntraOpNumThreads,Z_Param_InterOpNumThreads);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function InitializeOrtCuda

// Begin Class UVitsCustomBlueprintLibrary Function InitializeOrtDml
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics
{
	struct VitsCustomBlueprintLibrary_eventInitializeOrtDml_Parms
	{
		int32 DeviceId;
		int32 IntraOpNumThreads;
		int32 InterOpNumThreads;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|ORT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Initialize ORT and enable DirectML (DeviceId >= 0)\n" },
#endif
		{ "CPP_Default_DeviceId", "0" },
		{ "CPP_Default_InterOpNumThreads", "1" },
		{ "CPP_Default_IntraOpNumThreads", "1" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initialize ORT and enable DirectML (DeviceId >= 0)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntraOpNumThreads;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InterOpNumThreads;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventInitializeOrtDml_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics::NewProp_IntraOpNumThreads = { "IntraOpNumThreads", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventInitializeOrtDml_Parms, IntraOpNumThreads), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics::NewProp_InterOpNumThreads = { "InterOpNumThreads", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventInitializeOrtDml_Parms, InterOpNumThreads), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VitsCustomBlueprintLibrary_eventInitializeOrtDml_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitsCustomBlueprintLibrary_eventInitializeOrtDml_Parms), &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics::NewProp_IntraOpNumThreads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics::NewProp_InterOpNumThreads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "InitializeOrtDml", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics::VitsCustomBlueprintLibrary_eventInitializeOrtDml_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics::VitsCustomBlueprintLibrary_eventInitializeOrtDml_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execInitializeOrtDml)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
	P_GET_PROPERTY(FIntProperty,Z_Param_IntraOpNumThreads);
	P_GET_PROPERTY(FIntProperty,Z_Param_InterOpNumThreads);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVitsCustomBlueprintLibrary::InitializeOrtDml(Z_Param_DeviceId,Z_Param_IntraOpNumThreads,Z_Param_InterOpNumThreads);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function InitializeOrtDml

// Begin Class UVitsCustomBlueprintLibrary Function IntArrayToInt64
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64_Statics
{
	struct VitsCustomBlueprintLibrary_eventIntArrayToInt64_Parms
	{
		TArray<int32> InArray;
		TArray<int64> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Util" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers: convert int array to int64 array for convenience in Blueprints\n" },
#endif
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers: convert int array to int64 array for convenience in Blueprints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InArray;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64_Statics::NewProp_InArray_Inner = { "InArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64_Statics::NewProp_InArray = { "InArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventIntArrayToInt64_Parms, InArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InArray_MetaData), NewProp_InArray_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventIntArrayToInt64_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64_Statics::NewProp_InArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64_Statics::NewProp_InArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "IntArrayToInt64", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64_Statics::VitsCustomBlueprintLibrary_eventIntArrayToInt64_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64_Statics::VitsCustomBlueprintLibrary_eventIntArrayToInt64_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execIntArrayToInt64)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_InArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int64>*)Z_Param__Result=UVitsCustomBlueprintLibrary::IntArrayToInt64(Z_Param_Out_InArray);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function IntArrayToInt64

// Begin Class UVitsCustomBlueprintLibrary Function IsModelLoaded
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoaded_Statics
{
	struct VitsCustomBlueprintLibrary_eventIsModelLoaded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Model" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VitsCustomBlueprintLibrary_eventIsModelLoaded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitsCustomBlueprintLibrary_eventIsModelLoaded_Parms), &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "IsModelLoaded", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoaded_Statics::VitsCustomBlueprintLibrary_eventIsModelLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoaded_Statics::VitsCustomBlueprintLibrary_eventIsModelLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execIsModelLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVitsCustomBlueprintLibrary::IsModelLoaded();
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function IsModelLoaded

// Begin Class UVitsCustomBlueprintLibrary Function IsModelLoadedNamed
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoadedNamed_Statics
{
	struct VitsCustomBlueprintLibrary_eventIsModelLoadedNamed_Parms
	{
		FString Alias;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Model" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alias_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Alias;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoadedNamed_Statics::NewProp_Alias = { "Alias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventIsModelLoadedNamed_Parms, Alias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alias_MetaData), NewProp_Alias_MetaData) };
void Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoadedNamed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VitsCustomBlueprintLibrary_eventIsModelLoadedNamed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoadedNamed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitsCustomBlueprintLibrary_eventIsModelLoadedNamed_Parms), &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoadedNamed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoadedNamed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoadedNamed_Statics::NewProp_Alias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoadedNamed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoadedNamed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoadedNamed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "IsModelLoadedNamed", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoadedNamed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoadedNamed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoadedNamed_Statics::VitsCustomBlueprintLibrary_eventIsModelLoadedNamed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoadedNamed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoadedNamed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoadedNamed_Statics::VitsCustomBlueprintLibrary_eventIsModelLoadedNamed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoadedNamed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoadedNamed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execIsModelLoadedNamed)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Alias);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVitsCustomBlueprintLibrary::IsModelLoadedNamed(Z_Param_Alias);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function IsModelLoadedNamed

// Begin Class UVitsCustomBlueprintLibrary Function IsOrtRuntimePresent
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsOrtRuntimePresent_Statics
{
	struct VitsCustomBlueprintLibrary_eventIsOrtRuntimePresent_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsOrtRuntimePresent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VitsCustomBlueprintLibrary_eventIsOrtRuntimePresent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsOrtRuntimePresent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitsCustomBlueprintLibrary_eventIsOrtRuntimePresent_Parms), &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsOrtRuntimePresent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsOrtRuntimePresent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsOrtRuntimePresent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsOrtRuntimePresent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsOrtRuntimePresent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "IsOrtRuntimePresent", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsOrtRuntimePresent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsOrtRuntimePresent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsOrtRuntimePresent_Statics::VitsCustomBlueprintLibrary_eventIsOrtRuntimePresent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsOrtRuntimePresent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsOrtRuntimePresent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsOrtRuntimePresent_Statics::VitsCustomBlueprintLibrary_eventIsOrtRuntimePresent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsOrtRuntimePresent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsOrtRuntimePresent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execIsOrtRuntimePresent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVitsCustomBlueprintLibrary::IsOrtRuntimePresent();
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function IsOrtRuntimePresent

// Begin Class UVitsCustomBlueprintLibrary Function LoadChineseDictionary
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionary_Statics
{
	struct VitsCustomBlueprintLibrary_eventLoadChineseDictionary_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Chinese" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dictionary utilities\n" },
#endif
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dictionary utilities" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VitsCustomBlueprintLibrary_eventLoadChineseDictionary_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitsCustomBlueprintLibrary_eventLoadChineseDictionary_Parms), &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionary_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionary_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "LoadChineseDictionary", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionary_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionary_Statics::VitsCustomBlueprintLibrary_eventLoadChineseDictionary_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionary_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionary_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionary_Statics::VitsCustomBlueprintLibrary_eventLoadChineseDictionary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execLoadChineseDictionary)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVitsCustomBlueprintLibrary::LoadChineseDictionary();
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function LoadChineseDictionary

// Begin Class UVitsCustomBlueprintLibrary Function LoadChineseDictionaryFromPath
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionaryFromPath_Statics
{
	struct VitsCustomBlueprintLibrary_eventLoadChineseDictionaryFromPath_Parms
	{
		FString AbsolutePath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Chinese" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsolutePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbsolutePath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionaryFromPath_Statics::NewProp_AbsolutePath = { "AbsolutePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventLoadChineseDictionaryFromPath_Parms, AbsolutePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsolutePath_MetaData), NewProp_AbsolutePath_MetaData) };
void Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionaryFromPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VitsCustomBlueprintLibrary_eventLoadChineseDictionaryFromPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionaryFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitsCustomBlueprintLibrary_eventLoadChineseDictionaryFromPath_Parms), &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionaryFromPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionaryFromPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionaryFromPath_Statics::NewProp_AbsolutePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionaryFromPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionaryFromPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionaryFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "LoadChineseDictionaryFromPath", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionaryFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionaryFromPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionaryFromPath_Statics::VitsCustomBlueprintLibrary_eventLoadChineseDictionaryFromPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionaryFromPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionaryFromPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionaryFromPath_Statics::VitsCustomBlueprintLibrary_eventLoadChineseDictionaryFromPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionaryFromPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionaryFromPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execLoadChineseDictionaryFromPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AbsolutePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVitsCustomBlueprintLibrary::LoadChineseDictionaryFromPath(Z_Param_AbsolutePath);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function LoadChineseDictionaryFromPath

// Begin Class UVitsCustomBlueprintLibrary Function LoadChinesePipeline
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChinesePipeline_Statics
{
	struct VitsCustomBlueprintLibrary_eventLoadChinesePipeline_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Chinese" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convenience: load Chinese pipeline models from vits_native/Chinese_model\n" },
#endif
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience: load Chinese pipeline models from vits_native/Chinese_model" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChinesePipeline_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VitsCustomBlueprintLibrary_eventLoadChinesePipeline_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChinesePipeline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitsCustomBlueprintLibrary_eventLoadChinesePipeline_Parms), &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChinesePipeline_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChinesePipeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChinesePipeline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChinesePipeline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChinesePipeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "LoadChinesePipeline", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChinesePipeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChinesePipeline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChinesePipeline_Statics::VitsCustomBlueprintLibrary_eventLoadChinesePipeline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChinesePipeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChinesePipeline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChinesePipeline_Statics::VitsCustomBlueprintLibrary_eventLoadChinesePipeline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChinesePipeline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChinesePipeline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execLoadChinesePipeline)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVitsCustomBlueprintLibrary::LoadChinesePipeline();
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function LoadChinesePipeline

// Begin Class UVitsCustomBlueprintLibrary Function LoadOnnxModel
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModel_Statics
{
	struct VitsCustomBlueprintLibrary_eventLoadOnnxModel_Parms
	{
		FString ModelPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Model" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModelPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModel_Statics::NewProp_ModelPath = { "ModelPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventLoadOnnxModel_Parms, ModelPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelPath_MetaData), NewProp_ModelPath_MetaData) };
void Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VitsCustomBlueprintLibrary_eventLoadOnnxModel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitsCustomBlueprintLibrary_eventLoadOnnxModel_Parms), &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModel_Statics::NewProp_ModelPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "LoadOnnxModel", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModel_Statics::VitsCustomBlueprintLibrary_eventLoadOnnxModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModel_Statics::VitsCustomBlueprintLibrary_eventLoadOnnxModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execLoadOnnxModel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ModelPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVitsCustomBlueprintLibrary::LoadOnnxModel(Z_Param_ModelPath);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function LoadOnnxModel

// Begin Class UVitsCustomBlueprintLibrary Function LoadOnnxModelNamed
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed_Statics
{
	struct VitsCustomBlueprintLibrary_eventLoadOnnxModelNamed_Parms
	{
		FString Alias;
		FString ModelPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Model" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Named-model APIs for multi-model pipelines (e.g., VITS enc/dp/flow/dec)\n" },
#endif
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Named-model APIs for multi-model pipelines (e.g., VITS enc/dp/flow/dec)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alias_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Alias;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModelPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed_Statics::NewProp_Alias = { "Alias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventLoadOnnxModelNamed_Parms, Alias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alias_MetaData), NewProp_Alias_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed_Statics::NewProp_ModelPath = { "ModelPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventLoadOnnxModelNamed_Parms, ModelPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelPath_MetaData), NewProp_ModelPath_MetaData) };
void Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VitsCustomBlueprintLibrary_eventLoadOnnxModelNamed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitsCustomBlueprintLibrary_eventLoadOnnxModelNamed_Parms), &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed_Statics::NewProp_Alias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed_Statics::NewProp_ModelPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "LoadOnnxModelNamed", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed_Statics::VitsCustomBlueprintLibrary_eventLoadOnnxModelNamed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed_Statics::VitsCustomBlueprintLibrary_eventLoadOnnxModelNamed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execLoadOnnxModelNamed)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Alias);
	P_GET_PROPERTY(FStrProperty,Z_Param_ModelPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVitsCustomBlueprintLibrary::LoadOnnxModelNamed(Z_Param_Alias,Z_Param_ModelPath);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function LoadOnnxModelNamed

// Begin Class UVitsCustomBlueprintLibrary Function LookupChineseToken
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken_Statics
{
	struct VitsCustomBlueprintLibrary_eventLookupChineseToken_Parms
	{
		FString Token;
		int64 OutId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Chinese" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OutId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventLookupChineseToken_Parms, Token), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Token_MetaData), NewProp_Token_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken_Statics::NewProp_OutId = { "OutId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventLookupChineseToken_Parms, OutId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VitsCustomBlueprintLibrary_eventLookupChineseToken_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitsCustomBlueprintLibrary_eventLookupChineseToken_Parms), &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken_Statics::NewProp_Token,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken_Statics::NewProp_OutId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "LookupChineseToken", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken_Statics::VitsCustomBlueprintLibrary_eventLookupChineseToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken_Statics::VitsCustomBlueprintLibrary_eventLookupChineseToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execLookupChineseToken)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Token);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_OutId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVitsCustomBlueprintLibrary::LookupChineseToken(Z_Param_Token,Z_Param_Out_OutId);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function LookupChineseToken

// Begin Class UVitsCustomBlueprintLibrary Function PluginVersion
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_PluginVersion_Statics
{
	struct VitsCustomBlueprintLibrary_eventPluginVersion_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_PluginVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventPluginVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_PluginVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_PluginVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_PluginVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_PluginVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "PluginVersion", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_PluginVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_PluginVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_PluginVersion_Statics::VitsCustomBlueprintLibrary_eventPluginVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_PluginVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_PluginVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_PluginVersion_Statics::VitsCustomBlueprintLibrary_eventPluginVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_PluginVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_PluginVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execPluginVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UVitsCustomBlueprintLibrary::PluginVersion();
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function PluginVersion

// Begin Class UVitsCustomBlueprintLibrary Function RunModelFloats
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics
{
	struct VitsCustomBlueprintLibrary_eventRunModelFloats_Parms
	{
		TArray<FOrtTensorFloat> Inputs;
		TArray<FString> OutputNames;
		TArray<FOrtTensorFloat> Outputs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|ORT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generic float-tensor runner for ONNX models\n" },
#endif
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic float-tensor runner for ONNX models" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorFloat, METADATA_PARAMS(0, nullptr) }; // 2518225810
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventRunModelFloats_Parms, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) }; // 2518225810
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::NewProp_OutputNames_Inner = { "OutputNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::NewProp_OutputNames = { "OutputNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventRunModelFloats_Parms, OutputNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputNames_MetaData), NewProp_OutputNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorFloat, METADATA_PARAMS(0, nullptr) }; // 2518225810
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventRunModelFloats_Parms, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2518225810
void Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VitsCustomBlueprintLibrary_eventRunModelFloats_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitsCustomBlueprintLibrary_eventRunModelFloats_Parms), &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::NewProp_Inputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::NewProp_Inputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::NewProp_OutputNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::NewProp_OutputNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::NewProp_Outputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::NewProp_Outputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "RunModelFloats", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::VitsCustomBlueprintLibrary_eventRunModelFloats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::VitsCustomBlueprintLibrary_eventRunModelFloats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execRunModelFloats)
{
	P_GET_TARRAY_REF(FOrtTensorFloat,Z_Param_Out_Inputs);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutputNames);
	P_GET_TARRAY_REF(FOrtTensorFloat,Z_Param_Out_Outputs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVitsCustomBlueprintLibrary::RunModelFloats(Z_Param_Out_Inputs,Z_Param_Out_OutputNames,Z_Param_Out_Outputs);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function RunModelFloats

// Begin Class UVitsCustomBlueprintLibrary Function RunModelFloatsNamed
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics
{
	struct VitsCustomBlueprintLibrary_eventRunModelFloatsNamed_Parms
	{
		FString Alias;
		TArray<FOrtTensorFloat> Inputs;
		TArray<FString> OutputNames;
		TArray<FOrtTensorFloat> Outputs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|ORT" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alias_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Alias;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::NewProp_Alias = { "Alias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventRunModelFloatsNamed_Parms, Alias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alias_MetaData), NewProp_Alias_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorFloat, METADATA_PARAMS(0, nullptr) }; // 2518225810
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventRunModelFloatsNamed_Parms, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) }; // 2518225810
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::NewProp_OutputNames_Inner = { "OutputNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::NewProp_OutputNames = { "OutputNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventRunModelFloatsNamed_Parms, OutputNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputNames_MetaData), NewProp_OutputNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorFloat, METADATA_PARAMS(0, nullptr) }; // 2518225810
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventRunModelFloatsNamed_Parms, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2518225810
void Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VitsCustomBlueprintLibrary_eventRunModelFloatsNamed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitsCustomBlueprintLibrary_eventRunModelFloatsNamed_Parms), &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::NewProp_Alias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::NewProp_Inputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::NewProp_Inputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::NewProp_OutputNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::NewProp_OutputNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::NewProp_Outputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::NewProp_Outputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "RunModelFloatsNamed", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::VitsCustomBlueprintLibrary_eventRunModelFloatsNamed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::VitsCustomBlueprintLibrary_eventRunModelFloatsNamed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execRunModelFloatsNamed)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Alias);
	P_GET_TARRAY_REF(FOrtTensorFloat,Z_Param_Out_Inputs);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutputNames);
	P_GET_TARRAY_REF(FOrtTensorFloat,Z_Param_Out_Outputs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVitsCustomBlueprintLibrary::RunModelFloatsNamed(Z_Param_Alias,Z_Param_Out_Inputs,Z_Param_Out_OutputNames,Z_Param_Out_Outputs);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function RunModelFloatsNamed

// Begin Class UVitsCustomBlueprintLibrary Function RunModelMixed
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics
{
	struct VitsCustomBlueprintLibrary_eventRunModelMixed_Parms
	{
		TArray<FOrtTensorFloat> InputsFloat;
		TArray<FOrtTensorInt64> InputsInt64;
		TArray<FOrtTensorInt32> InputsInt32;
		TArray<FString> OutputNames;
		TArray<FOrtTensorFloat> OutputsFloat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|ORT" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputsFloat_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputsInt64_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputsInt32_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputsFloat_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputsFloat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputsInt64_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputsInt64;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputsInt32_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputsInt32;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputsFloat_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputsFloat;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_InputsFloat_Inner = { "InputsFloat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorFloat, METADATA_PARAMS(0, nullptr) }; // 2518225810
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_InputsFloat = { "InputsFloat", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventRunModelMixed_Parms, InputsFloat), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputsFloat_MetaData), NewProp_InputsFloat_MetaData) }; // 2518225810
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_InputsInt64_Inner = { "InputsInt64", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorInt64, METADATA_PARAMS(0, nullptr) }; // 3511893928
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_InputsInt64 = { "InputsInt64", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventRunModelMixed_Parms, InputsInt64), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputsInt64_MetaData), NewProp_InputsInt64_MetaData) }; // 3511893928
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_InputsInt32_Inner = { "InputsInt32", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorInt32, METADATA_PARAMS(0, nullptr) }; // 428976543
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_InputsInt32 = { "InputsInt32", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventRunModelMixed_Parms, InputsInt32), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputsInt32_MetaData), NewProp_InputsInt32_MetaData) }; // 428976543
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_OutputNames_Inner = { "OutputNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_OutputNames = { "OutputNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventRunModelMixed_Parms, OutputNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputNames_MetaData), NewProp_OutputNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_OutputsFloat_Inner = { "OutputsFloat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorFloat, METADATA_PARAMS(0, nullptr) }; // 2518225810
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_OutputsFloat = { "OutputsFloat", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventRunModelMixed_Parms, OutputsFloat), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2518225810
void Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VitsCustomBlueprintLibrary_eventRunModelMixed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitsCustomBlueprintLibrary_eventRunModelMixed_Parms), &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_InputsFloat_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_InputsFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_InputsInt64_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_InputsInt64,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_InputsInt32_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_InputsInt32,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_OutputNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_OutputNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_OutputsFloat_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_OutputsFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "RunModelMixed", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::VitsCustomBlueprintLibrary_eventRunModelMixed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::VitsCustomBlueprintLibrary_eventRunModelMixed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execRunModelMixed)
{
	P_GET_TARRAY_REF(FOrtTensorFloat,Z_Param_Out_InputsFloat);
	P_GET_TARRAY_REF(FOrtTensorInt64,Z_Param_Out_InputsInt64);
	P_GET_TARRAY_REF(FOrtTensorInt32,Z_Param_Out_InputsInt32);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutputNames);
	P_GET_TARRAY_REF(FOrtTensorFloat,Z_Param_Out_OutputsFloat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVitsCustomBlueprintLibrary::RunModelMixed(Z_Param_Out_InputsFloat,Z_Param_Out_InputsInt64,Z_Param_Out_InputsInt32,Z_Param_Out_OutputNames,Z_Param_Out_OutputsFloat);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function RunModelMixed

// Begin Class UVitsCustomBlueprintLibrary Function RunModelMixedNamed
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics
{
	struct VitsCustomBlueprintLibrary_eventRunModelMixedNamed_Parms
	{
		FString Alias;
		TArray<FOrtTensorFloat> InputsFloat;
		TArray<FOrtTensorInt64> InputsInt64;
		TArray<FOrtTensorInt32> InputsInt32;
		TArray<FString> OutputNames;
		TArray<FOrtTensorFloat> OutputsFloat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|ORT" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alias_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputsFloat_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputsInt64_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputsInt32_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Alias;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputsFloat_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputsFloat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputsInt64_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputsInt64;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputsInt32_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputsInt32;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputsFloat_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputsFloat;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_Alias = { "Alias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventRunModelMixedNamed_Parms, Alias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alias_MetaData), NewProp_Alias_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_InputsFloat_Inner = { "InputsFloat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorFloat, METADATA_PARAMS(0, nullptr) }; // 2518225810
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_InputsFloat = { "InputsFloat", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventRunModelMixedNamed_Parms, InputsFloat), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputsFloat_MetaData), NewProp_InputsFloat_MetaData) }; // 2518225810
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_InputsInt64_Inner = { "InputsInt64", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorInt64, METADATA_PARAMS(0, nullptr) }; // 3511893928
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_InputsInt64 = { "InputsInt64", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventRunModelMixedNamed_Parms, InputsInt64), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputsInt64_MetaData), NewProp_InputsInt64_MetaData) }; // 3511893928
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_InputsInt32_Inner = { "InputsInt32", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorInt32, METADATA_PARAMS(0, nullptr) }; // 428976543
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_InputsInt32 = { "InputsInt32", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventRunModelMixedNamed_Parms, InputsInt32), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputsInt32_MetaData), NewProp_InputsInt32_MetaData) }; // 428976543
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_OutputNames_Inner = { "OutputNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_OutputNames = { "OutputNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventRunModelMixedNamed_Parms, OutputNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputNames_MetaData), NewProp_OutputNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_OutputsFloat_Inner = { "OutputsFloat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrtTensorFloat, METADATA_PARAMS(0, nullptr) }; // 2518225810
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_OutputsFloat = { "OutputsFloat", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventRunModelMixedNamed_Parms, OutputsFloat), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2518225810
void Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VitsCustomBlueprintLibrary_eventRunModelMixedNamed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitsCustomBlueprintLibrary_eventRunModelMixedNamed_Parms), &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_Alias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_InputsFloat_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_InputsFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_InputsInt64_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_InputsInt64,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_InputsInt32_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_InputsInt32,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_OutputNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_OutputNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_OutputsFloat_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_OutputsFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "RunModelMixedNamed", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::VitsCustomBlueprintLibrary_eventRunModelMixedNamed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::VitsCustomBlueprintLibrary_eventRunModelMixedNamed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execRunModelMixedNamed)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Alias);
	P_GET_TARRAY_REF(FOrtTensorFloat,Z_Param_Out_InputsFloat);
	P_GET_TARRAY_REF(FOrtTensorInt64,Z_Param_Out_InputsInt64);
	P_GET_TARRAY_REF(FOrtTensorInt32,Z_Param_Out_InputsInt32);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutputNames);
	P_GET_TARRAY_REF(FOrtTensorFloat,Z_Param_Out_OutputsFloat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVitsCustomBlueprintLibrary::RunModelMixedNamed(Z_Param_Alias,Z_Param_Out_InputsFloat,Z_Param_Out_InputsInt64,Z_Param_Out_InputsInt32,Z_Param_Out_OutputNames,Z_Param_Out_OutputsFloat);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function RunModelMixedNamed

// Begin Class UVitsCustomBlueprintLibrary Function SynthesizeChineseFromIds
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics
{
	struct VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIds_Parms
	{
		TArray<int64> TokenIds;
		float LengthScale;
		float NoiseScale;
		float NoiseScaleW;
		int32 SampleRate;
		USoundWave* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Chinese" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// End-to-end synthesis from token ids (already segmented ids). Returns SoundWave.\n" },
#endif
		{ "CPP_Default_LengthScale", "1.000000" },
		{ "CPP_Default_NoiseScale", "0.667000" },
		{ "CPP_Default_NoiseScaleW", "0.800000" },
		{ "CPP_Default_SampleRate", "22050" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End-to-end synthesis from token ids (already segmented ids). Returns SoundWave." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TokenIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_TokenIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TokenIds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScaleW;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::NewProp_TokenIds_Inner = { "TokenIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::NewProp_TokenIds = { "TokenIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIds_Parms, TokenIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TokenIds_MetaData), NewProp_TokenIds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::NewProp_LengthScale = { "LengthScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIds_Parms, LengthScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIds_Parms, NoiseScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::NewProp_NoiseScaleW = { "NoiseScaleW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIds_Parms, NoiseScaleW), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIds_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIds_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::NewProp_TokenIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::NewProp_TokenIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::NewProp_LengthScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::NewProp_NoiseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::NewProp_NoiseScaleW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "SynthesizeChineseFromIds", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execSynthesizeChineseFromIds)
{
	P_GET_TARRAY_REF(int64,Z_Param_Out_TokenIds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LengthScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NoiseScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NoiseScaleW);
	P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundWave**)Z_Param__Result=UVitsCustomBlueprintLibrary::SynthesizeChineseFromIds(Z_Param_Out_TokenIds,Z_Param_LengthScale,Z_Param_NoiseScale,Z_Param_NoiseScaleW,Z_Param_SampleRate);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function SynthesizeChineseFromIds

// Begin Class UVitsCustomBlueprintLibrary Function SynthesizeChineseFromIdsAndPlay
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics
{
	struct VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsAndPlay_Parms
	{
		UObject* WorldContextObject;
		TArray<int64> TokenIds;
		float LengthScale;
		float NoiseScale;
		float NoiseScaleW;
		int32 SampleRate;
		float VolumeMultiplier;
		float PitchMultiplier;
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Chinese" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convenience: synthesize and play via UGameplayStatics::PlaySound2D\n" },
#endif
		{ "CPP_Default_LengthScale", "1.000000" },
		{ "CPP_Default_NoiseScale", "0.667000" },
		{ "CPP_Default_NoiseScaleW", "0.800000" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_SampleRate", "22050" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience: synthesize and play via UGameplayStatics::PlaySound2D" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TokenIds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_TokenIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TokenIds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScaleW;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsAndPlay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::NewProp_TokenIds_Inner = { "TokenIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::NewProp_TokenIds = { "TokenIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsAndPlay_Parms, TokenIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TokenIds_MetaData), NewProp_TokenIds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::NewProp_LengthScale = { "LengthScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsAndPlay_Parms, LengthScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsAndPlay_Parms, NoiseScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::NewProp_NoiseScaleW = { "NoiseScaleW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsAndPlay_Parms, NoiseScaleW), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsAndPlay_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsAndPlay_Parms, VolumeMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsAndPlay_Parms, PitchMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsAndPlay_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::NewProp_TokenIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::NewProp_TokenIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::NewProp_LengthScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::NewProp_NoiseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::NewProp_NoiseScaleW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::NewProp_VolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::NewProp_PitchMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "SynthesizeChineseFromIdsAndPlay", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsAndPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsAndPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execSynthesizeChineseFromIdsAndPlay)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(int64,Z_Param_Out_TokenIds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LengthScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NoiseScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NoiseScaleW);
	P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=UVitsCustomBlueprintLibrary::SynthesizeChineseFromIdsAndPlay(Z_Param_WorldContextObject,Z_Param_Out_TokenIds,Z_Param_LengthScale,Z_Param_NoiseScale,Z_Param_NoiseScaleW,Z_Param_SampleRate,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function SynthesizeChineseFromIdsAndPlay

// Begin Class UVitsCustomBlueprintLibrary Function SynthesizeChineseFromIdsDetailed
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics
{
	struct VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsDetailed_Parms
	{
		TArray<int64> TokenIds;
		float LengthScale;
		float NoiseScale;
		float NoiseScaleW;
		int32 SampleRate;
		TArray<FTimedToken> OutTimeline;
		USoundWave* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Chinese" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Detailed synthesis: returns SoundWave and per-token timing events (seconds)\n" },
#endif
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Detailed synthesis: returns SoundWave and per-token timing events (seconds)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TokenIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_TokenIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TokenIds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScaleW;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTimeline_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTimeline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::NewProp_TokenIds_Inner = { "TokenIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::NewProp_TokenIds = { "TokenIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsDetailed_Parms, TokenIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TokenIds_MetaData), NewProp_TokenIds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::NewProp_LengthScale = { "LengthScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsDetailed_Parms, LengthScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsDetailed_Parms, NoiseScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::NewProp_NoiseScaleW = { "NoiseScaleW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsDetailed_Parms, NoiseScaleW), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsDetailed_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::NewProp_OutTimeline_Inner = { "OutTimeline", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTimedToken, METADATA_PARAMS(0, nullptr) }; // 801852798
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::NewProp_OutTimeline = { "OutTimeline", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsDetailed_Parms, OutTimeline), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 801852798
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsDetailed_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::NewProp_TokenIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::NewProp_TokenIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::NewProp_LengthScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::NewProp_NoiseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::NewProp_NoiseScaleW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::NewProp_OutTimeline_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::NewProp_OutTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "SynthesizeChineseFromIdsDetailed", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsDetailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::VitsCustomBlueprintLibrary_eventSynthesizeChineseFromIdsDetailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execSynthesizeChineseFromIdsDetailed)
{
	P_GET_TARRAY_REF(int64,Z_Param_Out_TokenIds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LengthScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NoiseScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NoiseScaleW);
	P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
	P_GET_TARRAY_REF(FTimedToken,Z_Param_Out_OutTimeline);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundWave**)Z_Param__Result=UVitsCustomBlueprintLibrary::SynthesizeChineseFromIdsDetailed(Z_Param_Out_TokenIds,Z_Param_LengthScale,Z_Param_NoiseScale,Z_Param_NoiseScaleW,Z_Param_SampleRate,Z_Param_Out_OutTimeline);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function SynthesizeChineseFromIdsDetailed

// Begin Class UVitsCustomBlueprintLibrary Function SynthesizeChineseFromText
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics
{
	struct VitsCustomBlueprintLibrary_eventSynthesizeChineseFromText_Parms
	{
		FString Text;
		float LengthScale;
		float NoiseScale;
		float NoiseScaleW;
		int32 SampleRate;
		USoundWave* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Chinese" },
		{ "CPP_Default_LengthScale", "1.000000" },
		{ "CPP_Default_NoiseScale", "0.667000" },
		{ "CPP_Default_NoiseScaleW", "0.800000" },
		{ "CPP_Default_SampleRate", "22050" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScaleW;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromText_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::NewProp_LengthScale = { "LengthScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromText_Parms, LengthScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromText_Parms, NoiseScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::NewProp_NoiseScaleW = { "NoiseScaleW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromText_Parms, NoiseScaleW), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromText_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromText_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::NewProp_LengthScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::NewProp_NoiseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::NewProp_NoiseScaleW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "SynthesizeChineseFromText", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::VitsCustomBlueprintLibrary_eventSynthesizeChineseFromText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::VitsCustomBlueprintLibrary_eventSynthesizeChineseFromText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execSynthesizeChineseFromText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LengthScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NoiseScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NoiseScaleW);
	P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundWave**)Z_Param__Result=UVitsCustomBlueprintLibrary::SynthesizeChineseFromText(Z_Param_Text,Z_Param_LengthScale,Z_Param_NoiseScale,Z_Param_NoiseScaleW,Z_Param_SampleRate);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function SynthesizeChineseFromText

// Begin Class UVitsCustomBlueprintLibrary Function SynthesizeChineseFromTextAndPlay
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics
{
	struct VitsCustomBlueprintLibrary_eventSynthesizeChineseFromTextAndPlay_Parms
	{
		UObject* WorldContextObject;
		FString Text;
		float LengthScale;
		float NoiseScale;
		float NoiseScaleW;
		int32 SampleRate;
		float VolumeMultiplier;
		float PitchMultiplier;
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Chinese" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// End-to-end: Text \xe2\x86\x92 play\n" },
#endif
		{ "CPP_Default_LengthScale", "1.000000" },
		{ "CPP_Default_NoiseScale", "0.667000" },
		{ "CPP_Default_NoiseScaleW", "0.800000" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_SampleRate", "22050" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End-to-end: Text \xe2\x86\x92 play" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScaleW;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromTextAndPlay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromTextAndPlay_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::NewProp_LengthScale = { "LengthScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromTextAndPlay_Parms, LengthScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromTextAndPlay_Parms, NoiseScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::NewProp_NoiseScaleW = { "NoiseScaleW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromTextAndPlay_Parms, NoiseScaleW), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromTextAndPlay_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromTextAndPlay_Parms, VolumeMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromTextAndPlay_Parms, PitchMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventSynthesizeChineseFromTextAndPlay_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::NewProp_LengthScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::NewProp_NoiseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::NewProp_NoiseScaleW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::NewProp_VolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::NewProp_PitchMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "SynthesizeChineseFromTextAndPlay", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::VitsCustomBlueprintLibrary_eventSynthesizeChineseFromTextAndPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::VitsCustomBlueprintLibrary_eventSynthesizeChineseFromTextAndPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execSynthesizeChineseFromTextAndPlay)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LengthScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NoiseScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NoiseScaleW);
	P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=UVitsCustomBlueprintLibrary::SynthesizeChineseFromTextAndPlay(Z_Param_WorldContextObject,Z_Param_Text,Z_Param_LengthScale,Z_Param_NoiseScale,Z_Param_NoiseScaleW,Z_Param_SampleRate,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function SynthesizeChineseFromTextAndPlay

// Begin Class UVitsCustomBlueprintLibrary Function TextToTokenIds
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics
{
	struct VitsCustomBlueprintLibrary_eventTextToTokenIds_Parms
	{
		FString Text;
		TArray<int64> OutTokenIds;
		int64 OOVId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Chinese" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Text \xe2\x86\x92 token ids using built-in dictionary\n" },
#endif
		{ "CPP_Default_OOVId", "0" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text \xe2\x86\x92 token ids using built-in dictionary" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OutTokenIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTokenIds;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OOVId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventTextToTokenIds_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::NewProp_OutTokenIds_Inner = { "OutTokenIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::NewProp_OutTokenIds = { "OutTokenIds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventTextToTokenIds_Parms, OutTokenIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::NewProp_OOVId = { "OOVId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventTextToTokenIds_Parms, OOVId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VitsCustomBlueprintLibrary_eventTextToTokenIds_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VitsCustomBlueprintLibrary_eventTextToTokenIds_Parms), &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::NewProp_OutTokenIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::NewProp_OutTokenIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::NewProp_OOVId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "TextToTokenIds", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::VitsCustomBlueprintLibrary_eventTextToTokenIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::VitsCustomBlueprintLibrary_eventTextToTokenIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execTextToTokenIds)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_TARRAY_REF(int64,Z_Param_Out_OutTokenIds);
	P_GET_PROPERTY(FInt64Property,Z_Param_OOVId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVitsCustomBlueprintLibrary::TextToTokenIds(Z_Param_Text,Z_Param_Out_OutTokenIds,Z_Param_OOVId);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function TextToTokenIds

// Begin Class UVitsCustomBlueprintLibrary Function UnloadChineseDictionary
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadChineseDictionary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Chinese" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadChineseDictionary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "UnloadChineseDictionary", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadChineseDictionary_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadChineseDictionary_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadChineseDictionary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadChineseDictionary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execUnloadChineseDictionary)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UVitsCustomBlueprintLibrary::UnloadChineseDictionary();
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function UnloadChineseDictionary

// Begin Class UVitsCustomBlueprintLibrary Function UnloadModel
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Model" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "UnloadModel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execUnloadModel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UVitsCustomBlueprintLibrary::UnloadModel();
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function UnloadModel

// Begin Class UVitsCustomBlueprintLibrary Function UnloadModelNamed
struct Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModelNamed_Statics
{
	struct VitsCustomBlueprintLibrary_eventUnloadModelNamed_Parms
	{
		FString Alias;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS Custom|Model" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alias_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Alias;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModelNamed_Statics::NewProp_Alias = { "Alias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VitsCustomBlueprintLibrary_eventUnloadModelNamed_Parms, Alias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alias_MetaData), NewProp_Alias_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModelNamed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModelNamed_Statics::NewProp_Alias,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModelNamed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModelNamed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitsCustomBlueprintLibrary, nullptr, "UnloadModelNamed", nullptr, nullptr, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModelNamed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModelNamed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModelNamed_Statics::VitsCustomBlueprintLibrary_eventUnloadModelNamed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModelNamed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModelNamed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModelNamed_Statics::VitsCustomBlueprintLibrary_eventUnloadModelNamed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModelNamed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModelNamed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVitsCustomBlueprintLibrary::execUnloadModelNamed)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Alias);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVitsCustomBlueprintLibrary::UnloadModelNamed(Z_Param_Alias);
	P_NATIVE_END;
}
// End Class UVitsCustomBlueprintLibrary Function UnloadModelNamed

// Begin Class UVitsCustomBlueprintLibrary
void UVitsCustomBlueprintLibrary::StaticRegisterNativesUVitsCustomBlueprintLibrary()
{
	UClass* Class = UVitsCustomBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BuildVisemeKeysFromTimedTokens", &UVitsCustomBlueprintLibrary::execBuildVisemeKeysFromTimedTokens },
		{ "ChineseTextToAudioAndVisemes", &UVitsCustomBlueprintLibrary::execChineseTextToAudioAndVisemes },
		{ "CreateSoundWaveFromFloat", &UVitsCustomBlueprintLibrary::execCreateSoundWaveFromFloat },
		{ "DumpChineseDictionaryToLog", &UVitsCustomBlueprintLibrary::execDumpChineseDictionaryToLog },
		{ "DumpChinesePipelineIOMetaToLog", &UVitsCustomBlueprintLibrary::execDumpChinesePipelineIOMetaToLog },
		{ "DumpModelIOMetaToLog", &UVitsCustomBlueprintLibrary::execDumpModelIOMetaToLog },
		{ "GetChineseDictionaryStats", &UVitsCustomBlueprintLibrary::execGetChineseDictionaryStats },
		{ "GetChinesePipelineIOMeta", &UVitsCustomBlueprintLibrary::execGetChinesePipelineIOMeta },
		{ "GetCurrentProvider", &UVitsCustomBlueprintLibrary::execGetCurrentProvider },
		{ "GetDefaultChineseTokenVisemeMap", &UVitsCustomBlueprintLibrary::execGetDefaultChineseTokenVisemeMap },
		{ "GetDefaultEnglishTokenVisemeMap", &UVitsCustomBlueprintLibrary::execGetDefaultEnglishTokenVisemeMap },
		{ "GetModelIO", &UVitsCustomBlueprintLibrary::execGetModelIO },
		{ "GetModelIOMetaNamed", &UVitsCustomBlueprintLibrary::execGetModelIOMetaNamed },
		{ "GetModelIONamed", &UVitsCustomBlueprintLibrary::execGetModelIONamed },
		{ "InitializeOrt", &UVitsCustomBlueprintLibrary::execInitializeOrt },
		{ "InitializeOrtAuto", &UVitsCustomBlueprintLibrary::execInitializeOrtAuto },
		{ "InitializeOrtCuda", &UVitsCustomBlueprintLibrary::execInitializeOrtCuda },
		{ "InitializeOrtDml", &UVitsCustomBlueprintLibrary::execInitializeOrtDml },
		{ "IntArrayToInt64", &UVitsCustomBlueprintLibrary::execIntArrayToInt64 },
		{ "IsModelLoaded", &UVitsCustomBlueprintLibrary::execIsModelLoaded },
		{ "IsModelLoadedNamed", &UVitsCustomBlueprintLibrary::execIsModelLoadedNamed },
		{ "IsOrtRuntimePresent", &UVitsCustomBlueprintLibrary::execIsOrtRuntimePresent },
		{ "LoadChineseDictionary", &UVitsCustomBlueprintLibrary::execLoadChineseDictionary },
		{ "LoadChineseDictionaryFromPath", &UVitsCustomBlueprintLibrary::execLoadChineseDictionaryFromPath },
		{ "LoadChinesePipeline", &UVitsCustomBlueprintLibrary::execLoadChinesePipeline },
		{ "LoadOnnxModel", &UVitsCustomBlueprintLibrary::execLoadOnnxModel },
		{ "LoadOnnxModelNamed", &UVitsCustomBlueprintLibrary::execLoadOnnxModelNamed },
		{ "LookupChineseToken", &UVitsCustomBlueprintLibrary::execLookupChineseToken },
		{ "PluginVersion", &UVitsCustomBlueprintLibrary::execPluginVersion },
		{ "RunModelFloats", &UVitsCustomBlueprintLibrary::execRunModelFloats },
		{ "RunModelFloatsNamed", &UVitsCustomBlueprintLibrary::execRunModelFloatsNamed },
		{ "RunModelMixed", &UVitsCustomBlueprintLibrary::execRunModelMixed },
		{ "RunModelMixedNamed", &UVitsCustomBlueprintLibrary::execRunModelMixedNamed },
		{ "SynthesizeChineseFromIds", &UVitsCustomBlueprintLibrary::execSynthesizeChineseFromIds },
		{ "SynthesizeChineseFromIdsAndPlay", &UVitsCustomBlueprintLibrary::execSynthesizeChineseFromIdsAndPlay },
		{ "SynthesizeChineseFromIdsDetailed", &UVitsCustomBlueprintLibrary::execSynthesizeChineseFromIdsDetailed },
		{ "SynthesizeChineseFromText", &UVitsCustomBlueprintLibrary::execSynthesizeChineseFromText },
		{ "SynthesizeChineseFromTextAndPlay", &UVitsCustomBlueprintLibrary::execSynthesizeChineseFromTextAndPlay },
		{ "TextToTokenIds", &UVitsCustomBlueprintLibrary::execTextToTokenIds },
		{ "UnloadChineseDictionary", &UVitsCustomBlueprintLibrary::execUnloadChineseDictionary },
		{ "UnloadModel", &UVitsCustomBlueprintLibrary::execUnloadModel },
		{ "UnloadModelNamed", &UVitsCustomBlueprintLibrary::execUnloadModelNamed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVitsCustomBlueprintLibrary);
UClass* Z_Construct_UClass_UVitsCustomBlueprintLibrary_NoRegister()
{
	return UVitsCustomBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UVitsCustomBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VitsCustomBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/VitsCustomBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_BuildVisemeKeysFromTimedTokens, "BuildVisemeKeysFromTimedTokens" }, // 3667952083
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_ChineseTextToAudioAndVisemes, "ChineseTextToAudioAndVisemes" }, // 483969612
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_CreateSoundWaveFromFloat, "CreateSoundWaveFromFloat" }, // 4032641979
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChineseDictionaryToLog, "DumpChineseDictionaryToLog" }, // 1921736439
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpChinesePipelineIOMetaToLog, "DumpChinesePipelineIOMetaToLog" }, // 991206202
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_DumpModelIOMetaToLog, "DumpModelIOMetaToLog" }, // 3984008556
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChineseDictionaryStats, "GetChineseDictionaryStats" }, // 1884484395
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetChinesePipelineIOMeta, "GetChinesePipelineIOMeta" }, // 4019515403
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetCurrentProvider, "GetCurrentProvider" }, // 3809448959
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultChineseTokenVisemeMap, "GetDefaultChineseTokenVisemeMap" }, // 639966232
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetDefaultEnglishTokenVisemeMap, "GetDefaultEnglishTokenVisemeMap" }, // 1204781673
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIO, "GetModelIO" }, // 4226555841
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIOMetaNamed, "GetModelIOMetaNamed" }, // 715888698
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_GetModelIONamed, "GetModelIONamed" }, // 2541126768
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrt, "InitializeOrt" }, // 2798199880
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtAuto, "InitializeOrtAuto" }, // 2222234383
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtCuda, "InitializeOrtCuda" }, // 1738589548
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_InitializeOrtDml, "InitializeOrtDml" }, // 3229076755
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IntArrayToInt64, "IntArrayToInt64" }, // 1427503109
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoaded, "IsModelLoaded" }, // 3447555779
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsModelLoadedNamed, "IsModelLoadedNamed" }, // 4267373175
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_IsOrtRuntimePresent, "IsOrtRuntimePresent" }, // 2171206270
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionary, "LoadChineseDictionary" }, // 773022346
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChineseDictionaryFromPath, "LoadChineseDictionaryFromPath" }, // 2431177029
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadChinesePipeline, "LoadChinesePipeline" }, // 1450777565
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModel, "LoadOnnxModel" }, // 2001148260
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LoadOnnxModelNamed, "LoadOnnxModelNamed" }, // 1650991106
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_LookupChineseToken, "LookupChineseToken" }, // 2451408410
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_PluginVersion, "PluginVersion" }, // 2104404202
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloats, "RunModelFloats" }, // 332034337
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelFloatsNamed, "RunModelFloatsNamed" }, // 3507367347
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixed, "RunModelMixed" }, // 4052815849
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_RunModelMixedNamed, "RunModelMixedNamed" }, // 1023008614
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIds, "SynthesizeChineseFromIds" }, // 2018410546
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsAndPlay, "SynthesizeChineseFromIdsAndPlay" }, // 3322705022
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromIdsDetailed, "SynthesizeChineseFromIdsDetailed" }, // 4223528274
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromText, "SynthesizeChineseFromText" }, // 1175116892
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_SynthesizeChineseFromTextAndPlay, "SynthesizeChineseFromTextAndPlay" }, // 985257025
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_TextToTokenIds, "TextToTokenIds" }, // 1774938839
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadChineseDictionary, "UnloadChineseDictionary" }, // 2131149936
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModel, "UnloadModel" }, // 2916436268
		{ &Z_Construct_UFunction_UVitsCustomBlueprintLibrary_UnloadModelNamed, "UnloadModelNamed" }, // 1233416827
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVitsCustomBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVitsCustomBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_vits_custom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVitsCustomBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVitsCustomBlueprintLibrary_Statics::ClassParams = {
	&UVitsCustomBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitsCustomBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVitsCustomBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVitsCustomBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UVitsCustomBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVitsCustomBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UVitsCustomBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVitsCustomBlueprintLibrary.OuterSingleton;
}
template<> VITS_CUSTOM_API UClass* StaticClass<UVitsCustomBlueprintLibrary>()
{
	return UVitsCustomBlueprintLibrary::StaticClass();
}
UVitsCustomBlueprintLibrary::UVitsCustomBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVitsCustomBlueprintLibrary);
UVitsCustomBlueprintLibrary::~UVitsCustomBlueprintLibrary() {}
// End Class UVitsCustomBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsCustomBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVitsCustomBlueprintLibrary, UVitsCustomBlueprintLibrary::StaticClass, TEXT("UVitsCustomBlueprintLibrary"), &Z_Registration_Info_UClass_UVitsCustomBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVitsCustomBlueprintLibrary), 3428851245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsCustomBlueprintLibrary_h_742516837(TEXT("/Script/vits_custom"),
	Z_CompiledInDeferFile_FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsCustomBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsCustomBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
