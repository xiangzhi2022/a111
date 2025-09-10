// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "vits_custom/Public/VisemePlayerComponent.h"
#include "vits_custom/Public/VitsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisemePlayerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
UPackage* Z_Construct_UPackage__Script_vits_custom();
VITS_CUSTOM_API UClass* Z_Construct_UClass_UVisemePlayerComponent();
VITS_CUSTOM_API UClass* Z_Construct_UClass_UVisemePlayerComponent_NoRegister();
VITS_CUSTOM_API UEnum* Z_Construct_UEnum_vits_custom_EViseme();
VITS_CUSTOM_API UScriptStruct* Z_Construct_UScriptStruct_FVisemeKey();
// End Cross Module References

// Begin Class UVisemePlayerComponent Function IsPlaying
struct Z_Construct_UFunction_UVisemePlayerComponent_IsPlaying_Statics
{
	struct VisemePlayerComponent_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Viseme" },
		{ "ModuleRelativePath", "Public/VisemePlayerComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVisemePlayerComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VisemePlayerComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisemePlayerComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisemePlayerComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UVisemePlayerComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisemePlayerComponent_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisemePlayerComponent_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisemePlayerComponent_IsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisemePlayerComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisemePlayerComponent, nullptr, "IsPlaying", nullptr, nullptr, Z_Construct_UFunction_UVisemePlayerComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisemePlayerComponent_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisemePlayerComponent_IsPlaying_Statics::VisemePlayerComponent_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisemePlayerComponent_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisemePlayerComponent_IsPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisemePlayerComponent_IsPlaying_Statics::VisemePlayerComponent_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisemePlayerComponent_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisemePlayerComponent_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisemePlayerComponent::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying();
	P_NATIVE_END;
}
// End Class UVisemePlayerComponent Function IsPlaying

// Begin Class UVisemePlayerComponent Function Play
struct Z_Construct_UFunction_UVisemePlayerComponent_Play_Statics
{
	struct VisemePlayerComponent_eventPlay_Parms
	{
		USoundWave* InSound;
		TArray<FVisemeKey> InKeys;
		float StartAtTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Viseme" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Playback API\n" },
#endif
		{ "CPP_Default_StartAtTime", "0.000000" },
		{ "ModuleRelativePath", "Public/VisemePlayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Playback API" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InKeys;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartAtTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisemePlayerComponent_Play_Statics::NewProp_InSound = { "InSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisemePlayerComponent_eventPlay_Parms, InSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisemePlayerComponent_Play_Statics::NewProp_InKeys_Inner = { "InKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVisemeKey, METADATA_PARAMS(0, nullptr) }; // 3886534908
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVisemePlayerComponent_Play_Statics::NewProp_InKeys = { "InKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisemePlayerComponent_eventPlay_Parms, InKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InKeys_MetaData), NewProp_InKeys_MetaData) }; // 3886534908
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVisemePlayerComponent_Play_Statics::NewProp_StartAtTime = { "StartAtTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisemePlayerComponent_eventPlay_Parms, StartAtTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisemePlayerComponent_Play_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisemePlayerComponent_Play_Statics::NewProp_InSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisemePlayerComponent_Play_Statics::NewProp_InKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisemePlayerComponent_Play_Statics::NewProp_InKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisemePlayerComponent_Play_Statics::NewProp_StartAtTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisemePlayerComponent_Play_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisemePlayerComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisemePlayerComponent, nullptr, "Play", nullptr, nullptr, Z_Construct_UFunction_UVisemePlayerComponent_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisemePlayerComponent_Play_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisemePlayerComponent_Play_Statics::VisemePlayerComponent_eventPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisemePlayerComponent_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisemePlayerComponent_Play_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisemePlayerComponent_Play_Statics::VisemePlayerComponent_eventPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisemePlayerComponent_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisemePlayerComponent_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisemePlayerComponent::execPlay)
{
	P_GET_OBJECT(USoundWave,Z_Param_InSound);
	P_GET_TARRAY_REF(FVisemeKey,Z_Param_Out_InKeys);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartAtTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play(Z_Param_InSound,Z_Param_Out_InKeys,Z_Param_StartAtTime);
	P_NATIVE_END;
}
// End Class UVisemePlayerComponent Function Play

// Begin Class UVisemePlayerComponent Function Stop
struct Z_Construct_UFunction_UVisemePlayerComponent_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Viseme" },
		{ "ModuleRelativePath", "Public/VisemePlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisemePlayerComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisemePlayerComponent, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisemePlayerComponent_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisemePlayerComponent_Stop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVisemePlayerComponent_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisemePlayerComponent_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisemePlayerComponent::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// End Class UVisemePlayerComponent Function Stop

// Begin Class UVisemePlayerComponent
void UVisemePlayerComponent::StaticRegisterNativesUVisemePlayerComponent()
{
	UClass* Class = UVisemePlayerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsPlaying", &UVisemePlayerComponent::execIsPlaying },
		{ "Play", &UVisemePlayerComponent::execPlay },
		{ "Stop", &UVisemePlayerComponent::execStop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVisemePlayerComponent);
UClass* Z_Construct_UClass_UVisemePlayerComponent_NoRegister()
{
	return UVisemePlayerComponent::StaticClass();
}
struct Z_Construct_UClass_UVisemePlayerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Audio" },
		{ "IncludePath", "VisemePlayerComponent.h" },
		{ "ModuleRelativePath", "Public/VisemePlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMesh_MetaData[] = {
		{ "Category", "Viseme" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VisemePlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisemeToMorph_MetaData[] = {
		{ "Category", "Viseme" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mapping from enum viseme to morph target name on the mesh\n" },
#endif
		{ "ModuleRelativePath", "Public/VisemePlayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mapping from enum viseme to morph target name on the mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeInTime_MetaData[] = {
		{ "Category", "Viseme" },
		{ "ModuleRelativePath", "Public/VisemePlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeOutTime_MetaData[] = {
		{ "Category", "Viseme" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// seconds\n" },
#endif
		{ "ModuleRelativePath", "Public/VisemePlayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "seconds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearOnStop_MetaData[] = {
		{ "Category", "Viseme" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, clears all mapped morph targets on Stop()\n" },
#endif
		{ "ModuleRelativePath", "Public/VisemePlayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, clears all mapped morph targets on Stop()" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComp_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Active playback state\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VisemePlayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Active playback state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "ModuleRelativePath", "Public/VisemePlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VisemeToMorph_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VisemeToMorph_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VisemeToMorph_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_VisemeToMorph;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeInTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
	static void NewProp_bClearOnStop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearOnStop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVisemePlayerComponent_IsPlaying, "IsPlaying" }, // 3018469365
		{ &Z_Construct_UFunction_UVisemePlayerComponent_Play, "Play" }, // 2515252351
		{ &Z_Construct_UFunction_UVisemePlayerComponent_Stop, "Stop" }, // 2120250119
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisemePlayerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVisemePlayerComponent, TargetMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMesh_MetaData), NewProp_TargetMesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_VisemeToMorph_ValueProp = { "VisemeToMorph", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_VisemeToMorph_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_VisemeToMorph_Key_KeyProp = { "VisemeToMorph_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_vits_custom_EViseme, METADATA_PARAMS(0, nullptr) }; // 2580497535
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_VisemeToMorph = { "VisemeToMorph", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVisemePlayerComponent, VisemeToMorph), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisemeToMorph_MetaData), NewProp_VisemeToMorph_MetaData) }; // 2580497535
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_FadeInTime = { "FadeInTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVisemePlayerComponent, FadeInTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeInTime_MetaData), NewProp_FadeInTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVisemePlayerComponent, FadeOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeOutTime_MetaData), NewProp_FadeOutTime_MetaData) };
void Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_bClearOnStop_SetBit(void* Obj)
{
	((UVisemePlayerComponent*)Obj)->bClearOnStop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_bClearOnStop = { "bClearOnStop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVisemePlayerComponent), &Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_bClearOnStop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearOnStop_MetaData), NewProp_bClearOnStop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_AudioComp = { "AudioComp", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVisemePlayerComponent, AudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComp_MetaData), NewProp_AudioComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVisemePlayerComponent, Sound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVisemePlayerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_TargetMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_VisemeToMorph_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_VisemeToMorph_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_VisemeToMorph_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_VisemeToMorph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_FadeInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_FadeOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_bClearOnStop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_AudioComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisemePlayerComponent_Statics::NewProp_Sound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVisemePlayerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVisemePlayerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_vits_custom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVisemePlayerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVisemePlayerComponent_Statics::ClassParams = {
	&UVisemePlayerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVisemePlayerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVisemePlayerComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVisemePlayerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVisemePlayerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVisemePlayerComponent()
{
	if (!Z_Registration_Info_UClass_UVisemePlayerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVisemePlayerComponent.OuterSingleton, Z_Construct_UClass_UVisemePlayerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVisemePlayerComponent.OuterSingleton;
}
template<> VITS_CUSTOM_API UClass* StaticClass<UVisemePlayerComponent>()
{
	return UVisemePlayerComponent::StaticClass();
}
UVisemePlayerComponent::UVisemePlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVisemePlayerComponent);
UVisemePlayerComponent::~UVisemePlayerComponent() {}
// End Class UVisemePlayerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemePlayerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVisemePlayerComponent, UVisemePlayerComponent::StaticClass, TEXT("UVisemePlayerComponent"), &Z_Registration_Info_UClass_UVisemePlayerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVisemePlayerComponent), 96873482U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemePlayerComponent_h_2935888009(TEXT("/Script/vits_custom"),
	Z_CompiledInDeferFile_FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemePlayerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemePlayerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
