// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterCoreRuntime/Public/MessageProcessors/ElimStreakProcessor.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElimStreakProcessor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_UGameplayMessageProcessor();
SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UElimStreakProcessor();
SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UElimStreakProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShooterCoreRuntime();
// End Cross Module References

// Begin Class UElimStreakProcessor
void UElimStreakProcessor::StaticRegisterNativesUElimStreakProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UElimStreakProcessor);
UClass* Z_Construct_UClass_UElimStreakProcessor_NoRegister()
{
	return UElimStreakProcessor::StaticClass();
}
struct Z_Construct_UClass_UElimStreakProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tracks a streak of eliminations (X eliminations without being eliminated)\n" },
#endif
		{ "IncludePath", "MessageProcessors/ElimStreakProcessor.h" },
		{ "ModuleRelativePath", "Public/MessageProcessors/ElimStreakProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tracks a streak of eliminations (X eliminations without being eliminated)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElimStreakTags_MetaData[] = {
		{ "Category", "ElimStreakProcessor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The event to rebroadcast when a user gets a streak of a certain length\n" },
#endif
		{ "ModuleRelativePath", "Public/MessageProcessors/ElimStreakProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The event to rebroadcast when a user gets a streak of a certain length" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStreakHistory_MetaData[] = {
		{ "ModuleRelativePath", "Public/MessageProcessors/ElimStreakProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ElimStreakTags_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElimStreakTags_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ElimStreakTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerStreakHistory_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerStreakHistory_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlayerStreakHistory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElimStreakProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UElimStreakProcessor_Statics::NewProp_ElimStreakTags_ValueProp = { "ElimStreakTags", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UElimStreakProcessor_Statics::NewProp_ElimStreakTags_Key_KeyProp = { "ElimStreakTags_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UElimStreakProcessor_Statics::NewProp_ElimStreakTags = { "ElimStreakTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElimStreakProcessor, ElimStreakTags), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElimStreakTags_MetaData), NewProp_ElimStreakTags_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UElimStreakProcessor_Statics::NewProp_PlayerStreakHistory_ValueProp = { "PlayerStreakHistory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UElimStreakProcessor_Statics::NewProp_PlayerStreakHistory_Key_KeyProp = { "PlayerStreakHistory_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UElimStreakProcessor_Statics::NewProp_PlayerStreakHistory = { "PlayerStreakHistory", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElimStreakProcessor, PlayerStreakHistory), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerStreakHistory_MetaData), NewProp_PlayerStreakHistory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElimStreakProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimStreakProcessor_Statics::NewProp_ElimStreakTags_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimStreakProcessor_Statics::NewProp_ElimStreakTags_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimStreakProcessor_Statics::NewProp_ElimStreakTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimStreakProcessor_Statics::NewProp_PlayerStreakHistory_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimStreakProcessor_Statics::NewProp_PlayerStreakHistory_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimStreakProcessor_Statics::NewProp_PlayerStreakHistory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElimStreakProcessor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UElimStreakProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayMessageProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElimStreakProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UElimStreakProcessor_Statics::ClassParams = {
	&UElimStreakProcessor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UElimStreakProcessor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UElimStreakProcessor_Statics::PropPointers),
	0,
	0x00A000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UElimStreakProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UElimStreakProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UElimStreakProcessor()
{
	if (!Z_Registration_Info_UClass_UElimStreakProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UElimStreakProcessor.OuterSingleton, Z_Construct_UClass_UElimStreakProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UElimStreakProcessor.OuterSingleton;
}
template<> SHOOTERCORERUNTIME_API UClass* StaticClass<UElimStreakProcessor>()
{
	return UElimStreakProcessor::StaticClass();
}
UElimStreakProcessor::UElimStreakProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UElimStreakProcessor);
UElimStreakProcessor::~UElimStreakProcessor() {}
// End Class UElimStreakProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_ElimStreakProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UElimStreakProcessor, UElimStreakProcessor::StaticClass, TEXT("UElimStreakProcessor"), &Z_Registration_Info_UClass_UElimStreakProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UElimStreakProcessor), 352084794U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_ElimStreakProcessor_h_3624122353(TEXT("/Script/ShooterCoreRuntime"),
	Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_ElimStreakProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_ElimStreakProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
