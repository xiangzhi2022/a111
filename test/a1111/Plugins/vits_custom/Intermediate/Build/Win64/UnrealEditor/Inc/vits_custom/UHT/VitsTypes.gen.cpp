// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "vits_custom/Public/VitsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVitsTypes() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_vits_custom();
VITS_CUSTOM_API UEnum* Z_Construct_UEnum_vits_custom_EOrtProvider();
VITS_CUSTOM_API UEnum* Z_Construct_UEnum_vits_custom_EViseme();
VITS_CUSTOM_API UScriptStruct* Z_Construct_UScriptStruct_FOrtTensorFloat();
VITS_CUSTOM_API UScriptStruct* Z_Construct_UScriptStruct_FOrtTensorInt32();
VITS_CUSTOM_API UScriptStruct* Z_Construct_UScriptStruct_FOrtTensorInt64();
VITS_CUSTOM_API UScriptStruct* Z_Construct_UScriptStruct_FOrtTensorMeta();
VITS_CUSTOM_API UScriptStruct* Z_Construct_UScriptStruct_FTimedToken();
VITS_CUSTOM_API UScriptStruct* Z_Construct_UScriptStruct_FVisemeKey();
// End Cross Module References

// Begin Enum EOrtProvider
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrtProvider;
static UEnum* EOrtProvider_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOrtProvider.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOrtProvider.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_vits_custom_EOrtProvider, (UObject*)Z_Construct_UPackage__Script_vits_custom(), TEXT("EOrtProvider"));
	}
	return Z_Registration_Info_UEnum_EOrtProvider.OuterSingleton;
}
template<> VITS_CUSTOM_API UEnum* StaticEnum<EOrtProvider>()
{
	return EOrtProvider_StaticEnum();
}
struct Z_Construct_UEnum_vits_custom_EOrtProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CPU.DisplayName", "CPU" },
		{ "CPU.Name", "EOrtProvider::CPU" },
		{ "CUDA.DisplayName", "CUDA" },
		{ "CUDA.Name", "EOrtProvider::CUDA" },
		{ "DML.DisplayName", "DirectML" },
		{ "DML.Name", "EOrtProvider::DML" },
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EOrtProvider::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOrtProvider::None", (int64)EOrtProvider::None },
		{ "EOrtProvider::CPU", (int64)EOrtProvider::CPU },
		{ "EOrtProvider::CUDA", (int64)EOrtProvider::CUDA },
		{ "EOrtProvider::DML", (int64)EOrtProvider::DML },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_vits_custom_EOrtProvider_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_vits_custom,
	nullptr,
	"EOrtProvider",
	"EOrtProvider",
	Z_Construct_UEnum_vits_custom_EOrtProvider_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_vits_custom_EOrtProvider_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_vits_custom_EOrtProvider_Statics::Enum_MetaDataParams), Z_Construct_UEnum_vits_custom_EOrtProvider_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_vits_custom_EOrtProvider()
{
	if (!Z_Registration_Info_UEnum_EOrtProvider.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrtProvider.InnerSingleton, Z_Construct_UEnum_vits_custom_EOrtProvider_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOrtProvider.InnerSingleton;
}
// End Enum EOrtProvider

// Begin ScriptStruct FOrtTensorFloat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OrtTensorFloat;
class UScriptStruct* FOrtTensorFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OrtTensorFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OrtTensorFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOrtTensorFloat, (UObject*)Z_Construct_UPackage__Script_vits_custom(), TEXT("OrtTensorFloat"));
	}
	return Z_Registration_Info_UScriptStruct_OrtTensorFloat.OuterSingleton;
}
template<> VITS_CUSTOM_API UScriptStruct* StaticStruct<FOrtTensorFloat>()
{
	return FOrtTensorFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOrtTensorFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ORT" },
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[] = {
		{ "Category", "ORT" },
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "ORT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// e.g., {1, N}\n" },
#endif
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "e.g., {1, N}" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Shape_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Shape;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOrtTensorFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOrtTensorFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrtTensorFloat, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOrtTensorFloat_Statics::NewProp_Shape_Inner = { "Shape", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOrtTensorFloat_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrtTensorFloat, Shape), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shape_MetaData), NewProp_Shape_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOrtTensorFloat_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOrtTensorFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrtTensorFloat, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOrtTensorFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrtTensorFloat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrtTensorFloat_Statics::NewProp_Shape_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrtTensorFloat_Statics::NewProp_Shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrtTensorFloat_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrtTensorFloat_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrtTensorFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOrtTensorFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_vits_custom,
	nullptr,
	&NewStructOps,
	"OrtTensorFloat",
	Z_Construct_UScriptStruct_FOrtTensorFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrtTensorFloat_Statics::PropPointers),
	sizeof(FOrtTensorFloat),
	alignof(FOrtTensorFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrtTensorFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOrtTensorFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOrtTensorFloat()
{
	if (!Z_Registration_Info_UScriptStruct_OrtTensorFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OrtTensorFloat.InnerSingleton, Z_Construct_UScriptStruct_FOrtTensorFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OrtTensorFloat.InnerSingleton;
}
// End ScriptStruct FOrtTensorFloat

// Begin ScriptStruct FOrtTensorMeta
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OrtTensorMeta;
class UScriptStruct* FOrtTensorMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OrtTensorMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OrtTensorMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOrtTensorMeta, (UObject*)Z_Construct_UPackage__Script_vits_custom(), TEXT("OrtTensorMeta"));
	}
	return Z_Registration_Info_UScriptStruct_OrtTensorMeta.OuterSingleton;
}
template<> VITS_CUSTOM_API UScriptStruct* StaticStruct<FOrtTensorMeta>()
{
	return FOrtTensorMeta::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOrtTensorMeta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ORT" },
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[] = {
		{ "Category", "ORT" },
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DType_MetaData[] = {
		{ "Category", "ORT" },
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Shape_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Shape;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOrtTensorMeta>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOrtTensorMeta_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrtTensorMeta, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOrtTensorMeta_Statics::NewProp_Shape_Inner = { "Shape", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOrtTensorMeta_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrtTensorMeta, Shape), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shape_MetaData), NewProp_Shape_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOrtTensorMeta_Statics::NewProp_DType = { "DType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrtTensorMeta, DType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DType_MetaData), NewProp_DType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOrtTensorMeta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrtTensorMeta_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrtTensorMeta_Statics::NewProp_Shape_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrtTensorMeta_Statics::NewProp_Shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrtTensorMeta_Statics::NewProp_DType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrtTensorMeta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOrtTensorMeta_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_vits_custom,
	nullptr,
	&NewStructOps,
	"OrtTensorMeta",
	Z_Construct_UScriptStruct_FOrtTensorMeta_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrtTensorMeta_Statics::PropPointers),
	sizeof(FOrtTensorMeta),
	alignof(FOrtTensorMeta),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrtTensorMeta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOrtTensorMeta_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOrtTensorMeta()
{
	if (!Z_Registration_Info_UScriptStruct_OrtTensorMeta.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OrtTensorMeta.InnerSingleton, Z_Construct_UScriptStruct_FOrtTensorMeta_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OrtTensorMeta.InnerSingleton;
}
// End ScriptStruct FOrtTensorMeta

// Begin ScriptStruct FOrtTensorInt64
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OrtTensorInt64;
class UScriptStruct* FOrtTensorInt64::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OrtTensorInt64.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OrtTensorInt64.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOrtTensorInt64, (UObject*)Z_Construct_UPackage__Script_vits_custom(), TEXT("OrtTensorInt64"));
	}
	return Z_Registration_Info_UScriptStruct_OrtTensorInt64.OuterSingleton;
}
template<> VITS_CUSTOM_API UScriptStruct* StaticStruct<FOrtTensorInt64>()
{
	return FOrtTensorInt64::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOrtTensorInt64_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ORT" },
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[] = {
		{ "Category", "ORT" },
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "ORT" },
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Shape_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Shape;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOrtTensorInt64>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOrtTensorInt64_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrtTensorInt64, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOrtTensorInt64_Statics::NewProp_Shape_Inner = { "Shape", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOrtTensorInt64_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrtTensorInt64, Shape), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shape_MetaData), NewProp_Shape_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FOrtTensorInt64_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOrtTensorInt64_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrtTensorInt64, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOrtTensorInt64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrtTensorInt64_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrtTensorInt64_Statics::NewProp_Shape_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrtTensorInt64_Statics::NewProp_Shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrtTensorInt64_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrtTensorInt64_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrtTensorInt64_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOrtTensorInt64_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_vits_custom,
	nullptr,
	&NewStructOps,
	"OrtTensorInt64",
	Z_Construct_UScriptStruct_FOrtTensorInt64_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrtTensorInt64_Statics::PropPointers),
	sizeof(FOrtTensorInt64),
	alignof(FOrtTensorInt64),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrtTensorInt64_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOrtTensorInt64_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOrtTensorInt64()
{
	if (!Z_Registration_Info_UScriptStruct_OrtTensorInt64.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OrtTensorInt64.InnerSingleton, Z_Construct_UScriptStruct_FOrtTensorInt64_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OrtTensorInt64.InnerSingleton;
}
// End ScriptStruct FOrtTensorInt64

// Begin ScriptStruct FOrtTensorInt32
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OrtTensorInt32;
class UScriptStruct* FOrtTensorInt32::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OrtTensorInt32.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OrtTensorInt32.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOrtTensorInt32, (UObject*)Z_Construct_UPackage__Script_vits_custom(), TEXT("OrtTensorInt32"));
	}
	return Z_Registration_Info_UScriptStruct_OrtTensorInt32.OuterSingleton;
}
template<> VITS_CUSTOM_API UScriptStruct* StaticStruct<FOrtTensorInt32>()
{
	return FOrtTensorInt32::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOrtTensorInt32_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ORT" },
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[] = {
		{ "Category", "ORT" },
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "ORT" },
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Shape_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Shape;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOrtTensorInt32>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOrtTensorInt32_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrtTensorInt32, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOrtTensorInt32_Statics::NewProp_Shape_Inner = { "Shape", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOrtTensorInt32_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrtTensorInt32, Shape), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shape_MetaData), NewProp_Shape_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOrtTensorInt32_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOrtTensorInt32_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrtTensorInt32, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOrtTensorInt32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrtTensorInt32_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrtTensorInt32_Statics::NewProp_Shape_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrtTensorInt32_Statics::NewProp_Shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrtTensorInt32_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrtTensorInt32_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrtTensorInt32_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOrtTensorInt32_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_vits_custom,
	nullptr,
	&NewStructOps,
	"OrtTensorInt32",
	Z_Construct_UScriptStruct_FOrtTensorInt32_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrtTensorInt32_Statics::PropPointers),
	sizeof(FOrtTensorInt32),
	alignof(FOrtTensorInt32),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrtTensorInt32_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOrtTensorInt32_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOrtTensorInt32()
{
	if (!Z_Registration_Info_UScriptStruct_OrtTensorInt32.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OrtTensorInt32.InnerSingleton, Z_Construct_UScriptStruct_FOrtTensorInt32_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OrtTensorInt32.InnerSingleton;
}
// End ScriptStruct FOrtTensorInt32

// Begin Enum EViseme
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EViseme;
static UEnum* EViseme_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EViseme.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EViseme.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_vits_custom_EViseme, (UObject*)Z_Construct_UPackage__Script_vits_custom(), TEXT("EViseme"));
	}
	return Z_Registration_Info_UEnum_EViseme.OuterSingleton;
}
template<> VITS_CUSTOM_API UEnum* StaticEnum<EViseme>()
{
	return EViseme_StaticEnum();
}
struct Z_Construct_UEnum_vits_custom_EViseme_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AA.DisplayName", "AA" },
		{ "AA.Name", "EViseme::AA" },
		{ "BlueprintType", "true" },
		{ "CH.DisplayName", "CH" },
		{ "CH.Name", "EViseme::CH" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// High-level timing/event data for driving curves or visemes\n" },
#endif
		{ "DD.DisplayName", "DD" },
		{ "DD.Name", "EViseme::DD" },
		{ "E.DisplayName", "E" },
		{ "E.Name", "EViseme::E" },
		{ "FF.DisplayName", "FF" },
		{ "FF.Name", "EViseme::FF" },
		{ "I.DisplayName", "I" },
		{ "I.Name", "EViseme::I" },
		{ "KK.DisplayName", "KK" },
		{ "KK.Name", "EViseme::KK" },
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
		{ "NN.DisplayName", "NN" },
		{ "NN.Name", "EViseme::NN" },
		{ "O.DisplayName", "O" },
		{ "O.Name", "EViseme::O" },
		{ "PP.DisplayName", "PP" },
		{ "PP.Name", "EViseme::PP" },
		{ "RR.DisplayName", "RR" },
		{ "RR.Name", "EViseme::RR" },
		{ "SIL.DisplayName", "SIL" },
		{ "SIL.Name", "EViseme::SIL" },
		{ "SS.DisplayName", "SS" },
		{ "SS.Name", "EViseme::SS" },
		{ "TH.DisplayName", "TH" },
		{ "TH.Name", "EViseme::TH" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High-level timing/event data for driving curves or visemes" },
#endif
		{ "U.DisplayName", "U" },
		{ "U.Name", "EViseme::U" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EViseme::SIL", (int64)EViseme::SIL },
		{ "EViseme::PP", (int64)EViseme::PP },
		{ "EViseme::FF", (int64)EViseme::FF },
		{ "EViseme::TH", (int64)EViseme::TH },
		{ "EViseme::DD", (int64)EViseme::DD },
		{ "EViseme::KK", (int64)EViseme::KK },
		{ "EViseme::CH", (int64)EViseme::CH },
		{ "EViseme::SS", (int64)EViseme::SS },
		{ "EViseme::NN", (int64)EViseme::NN },
		{ "EViseme::RR", (int64)EViseme::RR },
		{ "EViseme::AA", (int64)EViseme::AA },
		{ "EViseme::E", (int64)EViseme::E },
		{ "EViseme::I", (int64)EViseme::I },
		{ "EViseme::O", (int64)EViseme::O },
		{ "EViseme::U", (int64)EViseme::U },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_vits_custom_EViseme_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_vits_custom,
	nullptr,
	"EViseme",
	"EViseme",
	Z_Construct_UEnum_vits_custom_EViseme_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_vits_custom_EViseme_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_vits_custom_EViseme_Statics::Enum_MetaDataParams), Z_Construct_UEnum_vits_custom_EViseme_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_vits_custom_EViseme()
{
	if (!Z_Registration_Info_UEnum_EViseme.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EViseme.InnerSingleton, Z_Construct_UEnum_vits_custom_EViseme_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EViseme.InnerSingleton;
}
// End Enum EViseme

// Begin ScriptStruct FTimedToken
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimedToken;
class UScriptStruct* FTimedToken::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimedToken.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimedToken.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimedToken, (UObject*)Z_Construct_UPackage__Script_vits_custom(), TEXT("TimedToken"));
	}
	return Z_Registration_Info_UScriptStruct_TimedToken.OuterSingleton;
}
template<> VITS_CUSTOM_API UScriptStruct* StaticStruct<FTimedToken>()
{
	return FTimedToken::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTimedToken_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A generic timed token event (token could be phoneme, pinyin, or char)\n" },
#endif
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A generic timed token event (token could be phoneme, pinyin, or char)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[] = {
		{ "Category", "VITS" },
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TokenId_MetaData[] = {
		{ "Category", "VITS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional label (phoneme/pinyin/char), may be empty\n" },
#endif
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional label (phoneme/pinyin/char), may be empty" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "VITS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Original numeric id\n" },
#endif
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Original numeric id" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "VITS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// seconds\n" },
#endif
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "seconds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TokenId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimedToken>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTimedToken_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimedToken, Token), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Token_MetaData), NewProp_Token_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimedToken_Statics::NewProp_TokenId = { "TokenId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimedToken, TokenId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TokenId_MetaData), NewProp_TokenId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimedToken_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimedToken, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimedToken_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimedToken, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimedToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedToken_Statics::NewProp_Token,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedToken_Statics::NewProp_TokenId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedToken_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedToken_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimedToken_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_vits_custom,
	nullptr,
	&NewStructOps,
	"TimedToken",
	Z_Construct_UScriptStruct_FTimedToken_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedToken_Statics::PropPointers),
	sizeof(FTimedToken),
	alignof(FTimedToken),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedToken_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTimedToken_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTimedToken()
{
	if (!Z_Registration_Info_UScriptStruct_TimedToken.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimedToken.InnerSingleton, Z_Construct_UScriptStruct_FTimedToken_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TimedToken.InnerSingleton;
}
// End ScriptStruct FTimedToken

// Begin ScriptStruct FVisemeKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VisemeKey;
class UScriptStruct* FVisemeKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VisemeKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VisemeKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVisemeKey, (UObject*)Z_Construct_UPackage__Script_vits_custom(), TEXT("VisemeKey"));
	}
	return Z_Registration_Info_UScriptStruct_VisemeKey.OuterSingleton;
}
template<> VITS_CUSTOM_API UScriptStruct* StaticStruct<FVisemeKey>()
{
	return FVisemeKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVisemeKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A simple viseme keyframe calculated from tokens/durations with a mapping\n" },
#endif
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple viseme keyframe calculated from tokens/durations with a mapping" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Viseme_MetaData[] = {
		{ "Category", "VITS" },
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "VITS" },
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "VITS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// seconds\n" },
#endif
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "seconds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "VITS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// seconds\n" },
#endif
		{ "ModuleRelativePath", "Public/VitsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "seconds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Viseme_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Viseme;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVisemeKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVisemeKey_Statics::NewProp_Viseme_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVisemeKey_Statics::NewProp_Viseme = { "Viseme", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisemeKey, Viseme), Z_Construct_UEnum_vits_custom_EViseme, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Viseme_MetaData), NewProp_Viseme_MetaData) }; // 2580497535
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVisemeKey_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisemeKey, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVisemeKey_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisemeKey, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVisemeKey_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVisemeKey, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVisemeKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisemeKey_Statics::NewProp_Viseme_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisemeKey_Statics::NewProp_Viseme,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisemeKey_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisemeKey_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisemeKey_Statics::NewProp_Weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisemeKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVisemeKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_vits_custom,
	nullptr,
	&NewStructOps,
	"VisemeKey",
	Z_Construct_UScriptStruct_FVisemeKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisemeKey_Statics::PropPointers),
	sizeof(FVisemeKey),
	alignof(FVisemeKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisemeKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVisemeKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVisemeKey()
{
	if (!Z_Registration_Info_UScriptStruct_VisemeKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VisemeKey.InnerSingleton, Z_Construct_UScriptStruct_FVisemeKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VisemeKey.InnerSingleton;
}
// End ScriptStruct FVisemeKey

// Begin Registration
struct Z_CompiledInDeferFile_FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOrtProvider_StaticEnum, TEXT("EOrtProvider"), &Z_Registration_Info_UEnum_EOrtProvider, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1648802808U) },
		{ EViseme_StaticEnum, TEXT("EViseme"), &Z_Registration_Info_UEnum_EViseme, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2580497535U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOrtTensorFloat::StaticStruct, Z_Construct_UScriptStruct_FOrtTensorFloat_Statics::NewStructOps, TEXT("OrtTensorFloat"), &Z_Registration_Info_UScriptStruct_OrtTensorFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOrtTensorFloat), 2518225810U) },
		{ FOrtTensorMeta::StaticStruct, Z_Construct_UScriptStruct_FOrtTensorMeta_Statics::NewStructOps, TEXT("OrtTensorMeta"), &Z_Registration_Info_UScriptStruct_OrtTensorMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOrtTensorMeta), 3766230339U) },
		{ FOrtTensorInt64::StaticStruct, Z_Construct_UScriptStruct_FOrtTensorInt64_Statics::NewStructOps, TEXT("OrtTensorInt64"), &Z_Registration_Info_UScriptStruct_OrtTensorInt64, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOrtTensorInt64), 3511893928U) },
		{ FOrtTensorInt32::StaticStruct, Z_Construct_UScriptStruct_FOrtTensorInt32_Statics::NewStructOps, TEXT("OrtTensorInt32"), &Z_Registration_Info_UScriptStruct_OrtTensorInt32, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOrtTensorInt32), 428976543U) },
		{ FTimedToken::StaticStruct, Z_Construct_UScriptStruct_FTimedToken_Statics::NewStructOps, TEXT("TimedToken"), &Z_Registration_Info_UScriptStruct_TimedToken, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimedToken), 801852798U) },
		{ FVisemeKey::StaticStruct, Z_Construct_UScriptStruct_FVisemeKey_Statics::NewStructOps, TEXT("VisemeKey"), &Z_Registration_Info_UScriptStruct_VisemeKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVisemeKey), 3886534908U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsTypes_h_1011925425(TEXT("/Script/vits_custom"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_a1111_Plugins_vits_custom_Source_vits_custom_Public_VitsTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
