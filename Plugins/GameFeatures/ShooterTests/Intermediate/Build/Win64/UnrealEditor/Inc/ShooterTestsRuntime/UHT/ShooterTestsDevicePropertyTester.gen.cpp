// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterTestsRuntime/Private/ShooterTestsDevicePropertyTester.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/Engine/Classes/GameFramework/InputDevicePropertyHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterTestsDevicePropertyTester() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformUserId();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceProperty_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputDevicePropertyHandle();
SHOOTERTESTSRUNTIME_API UClass* Z_Construct_UClass_AShooterTestsDevicePropertyTester();
SHOOTERTESTSRUNTIME_API UClass* Z_Construct_UClass_AShooterTestsDevicePropertyTester_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShooterTestsRuntime();
// End Cross Module References

// Begin Class AShooterTestsDevicePropertyTester Function ApplyDeviceProperties
struct Z_Construct_UFunction_AShooterTestsDevicePropertyTester_ApplyDeviceProperties_Statics
{
	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct ShooterTestsDevicePropertyTester_eventApplyDeviceProperties_Parms
	{
		FPlatformUserId UserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Device Property" },
		{ "ModuleRelativePath", "Private/ShooterTestsDevicePropertyTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterTestsDevicePropertyTester_ApplyDeviceProperties_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterTestsDevicePropertyTester_eventApplyDeviceProperties_Parms, UserId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterTestsDevicePropertyTester_ApplyDeviceProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterTestsDevicePropertyTester_ApplyDeviceProperties_Statics::NewProp_UserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterTestsDevicePropertyTester_ApplyDeviceProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterTestsDevicePropertyTester_ApplyDeviceProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterTestsDevicePropertyTester, nullptr, "ApplyDeviceProperties", nullptr, nullptr, Z_Construct_UFunction_AShooterTestsDevicePropertyTester_ApplyDeviceProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterTestsDevicePropertyTester_ApplyDeviceProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterTestsDevicePropertyTester_ApplyDeviceProperties_Statics::ShooterTestsDevicePropertyTester_eventApplyDeviceProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterTestsDevicePropertyTester_ApplyDeviceProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterTestsDevicePropertyTester_ApplyDeviceProperties_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AShooterTestsDevicePropertyTester_ApplyDeviceProperties_Statics::ShooterTestsDevicePropertyTester_eventApplyDeviceProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShooterTestsDevicePropertyTester_ApplyDeviceProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterTestsDevicePropertyTester_ApplyDeviceProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterTestsDevicePropertyTester::execApplyDeviceProperties)
{
	P_GET_STRUCT(FPlatformUserId,Z_Param_UserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDeviceProperties(Z_Param_UserId);
	P_NATIVE_END;
}
// End Class AShooterTestsDevicePropertyTester Function ApplyDeviceProperties

// Begin Class AShooterTestsDevicePropertyTester Function OnEndOverlap
struct Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap_Statics
{
	struct ShooterTestsDevicePropertyTester_eventOnEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ShooterTestsDevicePropertyTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterTestsDevicePropertyTester_eventOnEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterTestsDevicePropertyTester_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterTestsDevicePropertyTester_eventOnEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterTestsDevicePropertyTester_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterTestsDevicePropertyTester, nullptr, "OnEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap_Statics::ShooterTestsDevicePropertyTester_eventOnEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap_Statics::ShooterTestsDevicePropertyTester_eventOnEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterTestsDevicePropertyTester::execOnEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AShooterTestsDevicePropertyTester Function OnEndOverlap

// Begin Class AShooterTestsDevicePropertyTester Function OnOverlapBegin
struct Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics
{
	struct ShooterTestsDevicePropertyTester_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepHitResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ShooterTestsDevicePropertyTester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterTestsDevicePropertyTester_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterTestsDevicePropertyTester_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterTestsDevicePropertyTester_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterTestsDevicePropertyTester_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((ShooterTestsDevicePropertyTester_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ShooterTestsDevicePropertyTester_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterTestsDevicePropertyTester_eventOnOverlapBegin_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepHitResult_MetaData), NewProp_SweepHitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::NewProp_SweepHitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterTestsDevicePropertyTester, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::ShooterTestsDevicePropertyTester_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::ShooterTestsDevicePropertyTester_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterTestsDevicePropertyTester::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepHitResult);
	P_NATIVE_END;
}
// End Class AShooterTestsDevicePropertyTester Function OnOverlapBegin

// Begin Class AShooterTestsDevicePropertyTester Function RemoveDeviceProperties
struct Z_Construct_UFunction_AShooterTestsDevicePropertyTester_RemoveDeviceProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Device Property" },
		{ "ModuleRelativePath", "Private/ShooterTestsDevicePropertyTester.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterTestsDevicePropertyTester_RemoveDeviceProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterTestsDevicePropertyTester, nullptr, "RemoveDeviceProperties", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterTestsDevicePropertyTester_RemoveDeviceProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterTestsDevicePropertyTester_RemoveDeviceProperties_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AShooterTestsDevicePropertyTester_RemoveDeviceProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterTestsDevicePropertyTester_RemoveDeviceProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterTestsDevicePropertyTester::execRemoveDeviceProperties)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveDeviceProperties();
	P_NATIVE_END;
}
// End Class AShooterTestsDevicePropertyTester Function RemoveDeviceProperties

// Begin Class AShooterTestsDevicePropertyTester
void AShooterTestsDevicePropertyTester::StaticRegisterNativesAShooterTestsDevicePropertyTester()
{
	UClass* Class = AShooterTestsDevicePropertyTester::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDeviceProperties", &AShooterTestsDevicePropertyTester::execApplyDeviceProperties },
		{ "OnEndOverlap", &AShooterTestsDevicePropertyTester::execOnEndOverlap },
		{ "OnOverlapBegin", &AShooterTestsDevicePropertyTester::execOnOverlapBegin },
		{ "RemoveDeviceProperties", &AShooterTestsDevicePropertyTester::execRemoveDeviceProperties },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterTestsDevicePropertyTester);
UClass* Z_Construct_UClass_AShooterTestsDevicePropertyTester_NoRegister()
{
	return AShooterTestsDevicePropertyTester::StaticClass();
}
struct Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This tester will apply device properties to a Player Controller on overlap, and remove them once overlap ends. */" },
#endif
		{ "IncludePath", "ShooterTestsDevicePropertyTester.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/ShooterTestsDevicePropertyTester.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This tester will apply device properties to a Player Controller on overlap, and remove them once overlap ends." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceProperties_MetaData[] = {
		{ "Category", "Device Property" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Device properties to apply on overlap with a player controller. */" },
#endif
		{ "ModuleRelativePath", "Private/ShooterTestsDevicePropertyTester.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Device properties to apply on overlap with a player controller." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionVolume_MetaData[] = {
		{ "Category", "Device Property" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The volume that will trigger device properties to be added and removed on overlap */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ShooterTestsDevicePropertyTester.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The volume that will trigger device properties to be added and removed on overlap" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformMesh_MetaData[] = {
		{ "Category", "Device Property" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A little mesh to make this collision volume visible */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ShooterTestsDevicePropertyTester.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A little mesh to make this collision volume visible" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivePropertyHandles_MetaData[] = {
		{ "ModuleRelativePath", "Private/ShooterTestsDevicePropertyTester.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DeviceProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeviceProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionVolume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivePropertyHandles_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ActivePropertyHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterTestsDevicePropertyTester_ApplyDeviceProperties, "ApplyDeviceProperties" }, // 3650254787
		{ &Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnEndOverlap, "OnEndOverlap" }, // 3460802915
		{ &Z_Construct_UFunction_AShooterTestsDevicePropertyTester_OnOverlapBegin, "OnOverlapBegin" }, // 1089136616
		{ &Z_Construct_UFunction_AShooterTestsDevicePropertyTester_RemoveDeviceProperties, "RemoveDeviceProperties" }, // 379622303
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterTestsDevicePropertyTester>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::NewProp_DeviceProperties_Inner = { "DeviceProperties", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UInputDeviceProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::NewProp_DeviceProperties = { "DeviceProperties", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterTestsDevicePropertyTester, DeviceProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceProperties_MetaData), NewProp_DeviceProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::NewProp_CollisionVolume = { "CollisionVolume", nullptr, (EPropertyFlags)0x011400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterTestsDevicePropertyTester, CollisionVolume), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionVolume_MetaData), NewProp_CollisionVolume_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::NewProp_PlatformMesh = { "PlatformMesh", nullptr, (EPropertyFlags)0x011400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterTestsDevicePropertyTester, PlatformMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformMesh_MetaData), NewProp_PlatformMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::NewProp_ActivePropertyHandles_ElementProp = { "ActivePropertyHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputDevicePropertyHandle, METADATA_PARAMS(0, nullptr) }; // 158936348
static_assert(TModels_V<CGetTypeHashable, FInputDevicePropertyHandle>, "The structure 'FInputDevicePropertyHandle' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::NewProp_ActivePropertyHandles = { "ActivePropertyHandles", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterTestsDevicePropertyTester, ActivePropertyHandles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivePropertyHandles_MetaData), NewProp_ActivePropertyHandles_MetaData) }; // 158936348
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::NewProp_DeviceProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::NewProp_DeviceProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::NewProp_CollisionVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::NewProp_PlatformMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::NewProp_ActivePropertyHandles_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::NewProp_ActivePropertyHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterTestsRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::ClassParams = {
	&AShooterTestsDevicePropertyTester::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterTestsDevicePropertyTester()
{
	if (!Z_Registration_Info_UClass_AShooterTestsDevicePropertyTester.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterTestsDevicePropertyTester.OuterSingleton, Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterTestsDevicePropertyTester.OuterSingleton;
}
template<> SHOOTERTESTSRUNTIME_API UClass* StaticClass<AShooterTestsDevicePropertyTester>()
{
	return AShooterTestsDevicePropertyTester::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterTestsDevicePropertyTester);
AShooterTestsDevicePropertyTester::~AShooterTestsDevicePropertyTester() {}
// End Class AShooterTestsDevicePropertyTester

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterTests_Source_ShooterTestsRuntime_Private_ShooterTestsDevicePropertyTester_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterTestsDevicePropertyTester, AShooterTestsDevicePropertyTester::StaticClass, TEXT("AShooterTestsDevicePropertyTester"), &Z_Registration_Info_UClass_AShooterTestsDevicePropertyTester, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterTestsDevicePropertyTester), 3819227750U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterTests_Source_ShooterTestsRuntime_Private_ShooterTestsDevicePropertyTester_h_3943211419(TEXT("/Script/ShooterTestsRuntime"),
	Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterTests_Source_ShooterTestsRuntime_Private_ShooterTestsDevicePropertyTester_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterTests_Source_ShooterTestsRuntime_Private_ShooterTestsDevicePropertyTester_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
