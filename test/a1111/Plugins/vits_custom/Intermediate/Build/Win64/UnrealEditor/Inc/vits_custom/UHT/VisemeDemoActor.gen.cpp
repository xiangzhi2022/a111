// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "vits_custom/Public/VisemeDemoActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisemeDemoActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_vits_custom();
VITS_CUSTOM_API UClass* Z_Construct_UClass_AVisemeDemoActor();
VITS_CUSTOM_API UClass* Z_Construct_UClass_AVisemeDemoActor_NoRegister();
VITS_CUSTOM_API UClass* Z_Construct_UClass_UVisemePlayerComponent_NoRegister();
// End Cross Module References

// Begin Class AVisemeDemoActor Function PlayFromText
struct Z_Construct_UFunction_AVisemeDemoActor_PlayFromText_Statics
{
	struct VisemeDemoActor_eventPlayFromText_Parms
	{
		FString Text;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VITS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// High-level helper: Text \xe2\x86\x92 audio + visemes \xe2\x86\x92 play\n" },
#endif
		{ "ModuleRelativePath", "Public/VisemeDemoActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High-level helper: Text \xe2\x86\x92 audio + visemes \xe2\x86\x92 play" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVisemeDemoActor_PlayFromText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisemeDemoActor_eventPlayFromText_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
void Z_Construct_UFunction_AVisemeDemoActor_PlayFromText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VisemeDemoActor_eventPlayFromText_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVisemeDemoActor_PlayFromText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisemeDemoActor_eventPlayFromText_Parms), &Z_Construct_UFunction_AVisemeDemoActor_PlayFromText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVisemeDemoActor_PlayFromText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVisemeDemoActor_PlayFromText_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVisemeDemoActor_PlayFromText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVisemeDemoActor_PlayFromText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVisemeDemoActor_PlayFromText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVisemeDemoActor, nullptr, "PlayFromText", nullptr, nullptr, Z_Construct_UFunction_AVisemeDemoActor_PlayFromText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVisemeDemoActor_PlayFromText_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVisemeDemoActor_PlayFromText_Statics::VisemeDemoActor_eventPlayFromText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVisemeDemoActor_PlayFromText_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVisemeDemoActor_PlayFromText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVisemeDemoActor_PlayFromText_Statics::VisemeDemoActor_eventPlayFromText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVisemeDemoActor_PlayFromText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVisemeDemoActor_PlayFromText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVisemeDemoActor::execPlayFromText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PlayFromText(Z_Param_Text);
	P_NATIVE_END;
}
// End Class AVisemeDemoActor Function PlayFromText

// Begin Class AVisemeDemoActor
void AVisemeDemoActor::StaticRegisterNativesAVisemeDemoActor()
{
	UClass* Class = AVisemeDemoActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlayFromText", &AVisemeDemoActor::execPlayFromText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVisemeDemoActor);
UClass* Z_Construct_UClass_AVisemeDemoActor_NoRegister()
{
	return AVisemeDemoActor::StaticClass();
}
struct Z_Construct_UClass_AVisemeDemoActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VisemeDemoActor.h" },
		{ "ModuleRelativePath", "Public/VisemeDemoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "VisemeDemoActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VisemeDemoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisemePlayer_MetaData[] = {
		{ "Category", "VisemeDemoActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VisemeDemoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LengthScale_MetaData[] = {
		{ "Category", "VITS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Synthesis params\n" },
#endif
		{ "ModuleRelativePath", "Public/VisemeDemoActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Synthesis params" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseScale_MetaData[] = {
		{ "Category", "VITS" },
		{ "ModuleRelativePath", "Public/VisemeDemoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseScaleW_MetaData[] = {
		{ "Category", "VITS" },
		{ "ModuleRelativePath", "Public/VisemeDemoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
		{ "Category", "VITS" },
		{ "ModuleRelativePath", "Public/VisemeDemoActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisemePlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScaleW;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVisemeDemoActor_PlayFromText, "PlayFromText" }, // 110096105
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVisemeDemoActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVisemeDemoActor_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVisemeDemoActor, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVisemeDemoActor_Statics::NewProp_VisemePlayer = { "VisemePlayer", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVisemeDemoActor, VisemePlayer), Z_Construct_UClass_UVisemePlayerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisemePlayer_MetaData), NewProp_VisemePlayer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVisemeDemoActor_Statics::NewProp_LengthScale = { "LengthScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVisemeDemoActor, LengthScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LengthScale_MetaData), NewProp_LengthScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVisemeDemoActor_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVisemeDemoActor, NoiseScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseScale_MetaData), NewProp_NoiseScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVisemeDemoActor_Statics::NewProp_NoiseScaleW = { "NoiseScaleW", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVisemeDemoActor, NoiseScaleW), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseScaleW_MetaData), NewProp_NoiseScaleW_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVisemeDemoActor_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVisemeDemoActor, SampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRate_MetaData), NewProp_SampleRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVisemeDemoActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVisemeDemoActor_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVisemeDemoActor_Statics::NewProp_VisemePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVisemeDemoActor_Statics::NewProp_LengthScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVisemeDemoActor_Statics::NewProp_NoiseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVisemeDemoActor_Statics::NewProp_NoiseScaleW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVisemeDemoActor_Statics::NewProp_SampleRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVisemeDemoActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVisemeDemoActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_vits_custom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVisemeDemoActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVisemeDemoActor_Statics::ClassParams = {
	&AVisemeDemoActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AVisemeDemoActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AVisemeDemoActor_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVisemeDemoActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AVisemeDemoActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVisemeDemoActor()
{
	if (!Z_Registration_Info_UClass_AVisemeDemoActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVisemeDemoActor.OuterSingleton, Z_Construct_UClass_AVisemeDemoActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVisemeDemoActor.OuterSingleton;
}
template<> VITS_CUSTOM_API UClass* StaticClass<AVisemeDemoActor>()
{
	return AVisemeDemoActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVisemeDemoActor);
AVisemeDemoActor::~AVisemeDemoActor() {}
// End Class AVisemeDemoActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemeDemoActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVisemeDemoActor, AVisemeDemoActor::StaticClass, TEXT("AVisemeDemoActor"), &Z_Registration_Info_UClass_AVisemeDemoActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVisemeDemoActor), 836717124U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemeDemoActor_h_1996782412(TEXT("/Script/vits_custom"),
	Z_CompiledInDeferFile_FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemeDemoActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VisemeDemoActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
