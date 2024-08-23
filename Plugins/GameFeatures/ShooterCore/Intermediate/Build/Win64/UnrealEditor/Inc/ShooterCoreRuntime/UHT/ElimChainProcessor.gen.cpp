// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterCoreRuntime/Public/MessageProcessors/ElimChainProcessor.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElimChainProcessor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_UGameplayMessageProcessor();
SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UElimChainProcessor();
SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UElimChainProcessor_NoRegister();
SHOOTERCORERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerElimChainInfo();
UPackage* Z_Construct_UPackage__Script_ShooterCoreRuntime();
// End Cross Module References

// Begin ScriptStruct FPlayerElimChainInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerElimChainInfo;
class UScriptStruct* FPlayerElimChainInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerElimChainInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerElimChainInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerElimChainInfo, (UObject*)Z_Construct_UPackage__Script_ShooterCoreRuntime(), TEXT("PlayerElimChainInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerElimChainInfo.OuterSingleton;
}
template<> SHOOTERCORERUNTIME_API UScriptStruct* StaticStruct<FPlayerElimChainInfo>()
{
	return FPlayerElimChainInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerElimChainInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MessageProcessors/ElimChainProcessor.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerElimChainInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerElimChainInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterCoreRuntime,
	nullptr,
	&NewStructOps,
	"PlayerElimChainInfo",
	nullptr,
	0,
	sizeof(FPlayerElimChainInfo),
	alignof(FPlayerElimChainInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerElimChainInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerElimChainInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerElimChainInfo()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerElimChainInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerElimChainInfo.InnerSingleton, Z_Construct_UScriptStruct_FPlayerElimChainInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerElimChainInfo.InnerSingleton;
}
// End ScriptStruct FPlayerElimChainInfo

// Begin Class UElimChainProcessor
void UElimChainProcessor::StaticRegisterNativesUElimChainProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UElimChainProcessor);
UClass* Z_Construct_UClass_UElimChainProcessor_NoRegister()
{
	return UElimChainProcessor::StaticClass();
}
struct Z_Construct_UClass_UElimChainProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tracks a chain of eliminations (X eliminations without more than Y seconds passing between each one)\n" },
#endif
		{ "IncludePath", "MessageProcessors/ElimChainProcessor.h" },
		{ "ModuleRelativePath", "Public/MessageProcessors/ElimChainProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tracks a chain of eliminations (X eliminations without more than Y seconds passing between each one)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChainTimeLimit_MetaData[] = {
		{ "Category", "ElimChainProcessor" },
		{ "ModuleRelativePath", "Public/MessageProcessors/ElimChainProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElimChainTags_MetaData[] = {
		{ "Category", "ElimChainProcessor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The event to rebroadcast when a user gets a chain of a certain length\n" },
#endif
		{ "ModuleRelativePath", "Public/MessageProcessors/ElimChainProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The event to rebroadcast when a user gets a chain of a certain length" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerChainHistory_MetaData[] = {
		{ "ModuleRelativePath", "Public/MessageProcessors/ElimChainProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChainTimeLimit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ElimChainTags_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElimChainTags_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ElimChainTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerChainHistory_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerChainHistory_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlayerChainHistory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElimChainProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UElimChainProcessor_Statics::NewProp_ChainTimeLimit = { "ChainTimeLimit", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElimChainProcessor, ChainTimeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainTimeLimit_MetaData), NewProp_ChainTimeLimit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UElimChainProcessor_Statics::NewProp_ElimChainTags_ValueProp = { "ElimChainTags", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UElimChainProcessor_Statics::NewProp_ElimChainTags_Key_KeyProp = { "ElimChainTags_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UElimChainProcessor_Statics::NewProp_ElimChainTags = { "ElimChainTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElimChainProcessor, ElimChainTags), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElimChainTags_MetaData), NewProp_ElimChainTags_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UElimChainProcessor_Statics::NewProp_PlayerChainHistory_ValueProp = { "PlayerChainHistory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPlayerElimChainInfo, METADATA_PARAMS(0, nullptr) }; // 2918274542
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UElimChainProcessor_Statics::NewProp_PlayerChainHistory_Key_KeyProp = { "PlayerChainHistory_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UElimChainProcessor_Statics::NewProp_PlayerChainHistory = { "PlayerChainHistory", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElimChainProcessor, PlayerChainHistory), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerChainHistory_MetaData), NewProp_PlayerChainHistory_MetaData) }; // 2918274542
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElimChainProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimChainProcessor_Statics::NewProp_ChainTimeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimChainProcessor_Statics::NewProp_ElimChainTags_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimChainProcessor_Statics::NewProp_ElimChainTags_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimChainProcessor_Statics::NewProp_ElimChainTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimChainProcessor_Statics::NewProp_PlayerChainHistory_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimChainProcessor_Statics::NewProp_PlayerChainHistory_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimChainProcessor_Statics::NewProp_PlayerChainHistory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElimChainProcessor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UElimChainProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayMessageProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElimChainProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UElimChainProcessor_Statics::ClassParams = {
	&UElimChainProcessor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UElimChainProcessor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UElimChainProcessor_Statics::PropPointers),
	0,
	0x00A000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UElimChainProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UElimChainProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UElimChainProcessor()
{
	if (!Z_Registration_Info_UClass_UElimChainProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UElimChainProcessor.OuterSingleton, Z_Construct_UClass_UElimChainProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UElimChainProcessor.OuterSingleton;
}
template<> SHOOTERCORERUNTIME_API UClass* StaticClass<UElimChainProcessor>()
{
	return UElimChainProcessor::StaticClass();
}
UElimChainProcessor::UElimChainProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UElimChainProcessor);
UElimChainProcessor::~UElimChainProcessor() {}
// End Class UElimChainProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_ElimChainProcessor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerElimChainInfo::StaticStruct, Z_Construct_UScriptStruct_FPlayerElimChainInfo_Statics::NewStructOps, TEXT("PlayerElimChainInfo"), &Z_Registration_Info_UScriptStruct_PlayerElimChainInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerElimChainInfo), 2918274542U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UElimChainProcessor, UElimChainProcessor::StaticClass, TEXT("UElimChainProcessor"), &Z_Registration_Info_UClass_UElimChainProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UElimChainProcessor), 3345411405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_ElimChainProcessor_h_4045487697(TEXT("/Script/ShooterCoreRuntime"),
	Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_ElimChainProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_ElimChainProcessor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_ElimChainProcessor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_ElimChainProcessor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
