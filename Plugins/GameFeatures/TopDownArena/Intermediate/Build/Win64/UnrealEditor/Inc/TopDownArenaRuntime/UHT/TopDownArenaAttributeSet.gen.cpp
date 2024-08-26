// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownArenaRuntime/Private/TopDownArenaAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownArenaAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAttributeSet();
TOPDOWNARENARUNTIME_API UClass* Z_Construct_UClass_UTopDownArenaAttributeSet();
TOPDOWNARENARUNTIME_API UClass* Z_Construct_UClass_UTopDownArenaAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_TopDownArenaRuntime();
// End Cross Module References

// Begin Class UTopDownArenaAttributeSet Function OnRep_BombCapacity
struct Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics
{
	struct TopDownArenaAttributeSet_eventOnRep_BombCapacity_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TopDownArenaAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TopDownArenaAttributeSet_eventOnRep_BombCapacity_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTopDownArenaAttributeSet, nullptr, "OnRep_BombCapacity", nullptr, nullptr, Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::TopDownArenaAttributeSet_eventOnRep_BombCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::TopDownArenaAttributeSet_eventOnRep_BombCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTopDownArenaAttributeSet::execOnRep_BombCapacity)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BombCapacity(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UTopDownArenaAttributeSet Function OnRep_BombCapacity

// Begin Class UTopDownArenaAttributeSet Function OnRep_BombRange
struct Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics
{
	struct TopDownArenaAttributeSet_eventOnRep_BombRange_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TopDownArenaAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TopDownArenaAttributeSet_eventOnRep_BombRange_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTopDownArenaAttributeSet, nullptr, "OnRep_BombRange", nullptr, nullptr, Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::TopDownArenaAttributeSet_eventOnRep_BombRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::TopDownArenaAttributeSet_eventOnRep_BombRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTopDownArenaAttributeSet::execOnRep_BombRange)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BombRange(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UTopDownArenaAttributeSet Function OnRep_BombRange

// Begin Class UTopDownArenaAttributeSet Function OnRep_BombsRemaining
struct Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics
{
	struct TopDownArenaAttributeSet_eventOnRep_BombsRemaining_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TopDownArenaAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TopDownArenaAttributeSet_eventOnRep_BombsRemaining_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTopDownArenaAttributeSet, nullptr, "OnRep_BombsRemaining", nullptr, nullptr, Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::TopDownArenaAttributeSet_eventOnRep_BombsRemaining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::TopDownArenaAttributeSet_eventOnRep_BombsRemaining_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTopDownArenaAttributeSet::execOnRep_BombsRemaining)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BombsRemaining(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UTopDownArenaAttributeSet Function OnRep_BombsRemaining

// Begin Class UTopDownArenaAttributeSet Function OnRep_MovementSpeed
struct Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics
{
	struct TopDownArenaAttributeSet_eventOnRep_MovementSpeed_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TopDownArenaAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TopDownArenaAttributeSet_eventOnRep_MovementSpeed_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTopDownArenaAttributeSet, nullptr, "OnRep_MovementSpeed", nullptr, nullptr, Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::TopDownArenaAttributeSet_eventOnRep_MovementSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::TopDownArenaAttributeSet_eventOnRep_MovementSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTopDownArenaAttributeSet::execOnRep_MovementSpeed)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MovementSpeed(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UTopDownArenaAttributeSet Function OnRep_MovementSpeed

// Begin Class UTopDownArenaAttributeSet
void UTopDownArenaAttributeSet::StaticRegisterNativesUTopDownArenaAttributeSet()
{
	UClass* Class = UTopDownArenaAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_BombCapacity", &UTopDownArenaAttributeSet::execOnRep_BombCapacity },
		{ "OnRep_BombRange", &UTopDownArenaAttributeSet::execOnRep_BombRange },
		{ "OnRep_BombsRemaining", &UTopDownArenaAttributeSet::execOnRep_BombsRemaining },
		{ "OnRep_MovementSpeed", &UTopDownArenaAttributeSet::execOnRep_MovementSpeed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTopDownArenaAttributeSet);
UClass* Z_Construct_UClass_UTopDownArenaAttributeSet_NoRegister()
{
	return UTopDownArenaAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UTopDownArenaAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UTopDownArenaAttributeSet\n *\n *\x09""Class that defines attributes specific to the top-down arena gameplay mode.\n */" },
#endif
		{ "IncludePath", "TopDownArenaAttributeSet.h" },
		{ "ModuleRelativePath", "Private/TopDownArenaAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UTopDownArenaAttributeSet\n\n    Class that defines attributes specific to the top-down arena gameplay mode." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BombsRemaining_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TopDownArenaGame" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number of bombs remaining\n" },
#endif
		{ "ModuleRelativePath", "Private/TopDownArenaAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of bombs remaining" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BombCapacity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TopDownArenaGame" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The maximum number of bombs that can be placed at once\n" },
#endif
		{ "ModuleRelativePath", "Private/TopDownArenaAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum number of bombs that can be placed at once" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BombRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TopDownArenaGame" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The range/radius of bomb blasts\n" },
#endif
		{ "ModuleRelativePath", "Private/TopDownArenaAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The range/radius of bomb blasts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TopDownArenaGame" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The range/radius of bomb blasts\n" },
#endif
		{ "ModuleRelativePath", "Private/TopDownArenaAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The range/radius of bomb blasts" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BombsRemaining;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BombCapacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BombRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity, "OnRep_BombCapacity" }, // 858498114
		{ &Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange, "OnRep_BombRange" }, // 644365210
		{ &Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining, "OnRep_BombsRemaining" }, // 220748789
		{ &Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed, "OnRep_MovementSpeed" }, // 1819663788
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTopDownArenaAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombsRemaining = { "BombsRemaining", "OnRep_BombsRemaining", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTopDownArenaAttributeSet, BombsRemaining), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BombsRemaining_MetaData), NewProp_BombsRemaining_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombCapacity = { "BombCapacity", "OnRep_BombCapacity", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTopDownArenaAttributeSet, BombCapacity), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BombCapacity_MetaData), NewProp_BombCapacity_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombRange = { "BombRange", "OnRep_BombRange", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTopDownArenaAttributeSet, BombRange), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BombRange_MetaData), NewProp_BombRange_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_MovementSpeed = { "MovementSpeed", "OnRep_MovementSpeed", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTopDownArenaAttributeSet, MovementSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombsRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_MovementSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_TopDownArenaRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::ClassParams = {
	&UTopDownArenaAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::PropPointers),
	0,
	0x002000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTopDownArenaAttributeSet()
{
	if (!Z_Registration_Info_UClass_UTopDownArenaAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTopDownArenaAttributeSet.OuterSingleton, Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTopDownArenaAttributeSet.OuterSingleton;
}
template<> TOPDOWNARENARUNTIME_API UClass* StaticClass<UTopDownArenaAttributeSet>()
{
	return UTopDownArenaAttributeSet::StaticClass();
}
void UTopDownArenaAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_BombsRemaining(TEXT("BombsRemaining"));
	static const FName Name_BombCapacity(TEXT("BombCapacity"));
	static const FName Name_BombRange(TEXT("BombRange"));
	static const FName Name_MovementSpeed(TEXT("MovementSpeed"));
	const bool bIsValid = true
		&& Name_BombsRemaining == ClassReps[(int32)ENetFields_Private::BombsRemaining].Property->GetFName()
		&& Name_BombCapacity == ClassReps[(int32)ENetFields_Private::BombCapacity].Property->GetFName()
		&& Name_BombRange == ClassReps[(int32)ENetFields_Private::BombRange].Property->GetFName()
		&& Name_MovementSpeed == ClassReps[(int32)ENetFields_Private::MovementSpeed].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTopDownArenaAttributeSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTopDownArenaAttributeSet);
UTopDownArenaAttributeSet::~UTopDownArenaAttributeSet() {}
// End Class UTopDownArenaAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTopDownArenaAttributeSet, UTopDownArenaAttributeSet::StaticClass, TEXT("UTopDownArenaAttributeSet"), &Z_Registration_Info_UClass_UTopDownArenaAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTopDownArenaAttributeSet), 182173748U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_752859497(TEXT("/Script/TopDownArenaRuntime"),
	Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
