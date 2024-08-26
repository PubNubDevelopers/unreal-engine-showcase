// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterCoreRuntime/Public/Input/AimAssistTargetManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimAssistTargetManagerComponent() {}

// Begin Cross Module References
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent();
SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UAimAssistTargetManagerComponent();
SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UAimAssistTargetManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShooterCoreRuntime();
// End Cross Module References

// Begin Class UAimAssistTargetManagerComponent
void UAimAssistTargetManagerComponent::StaticRegisterNativesUAimAssistTargetManagerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAimAssistTargetManagerComponent);
UClass* Z_Construct_UClass_UAimAssistTargetManagerComponent_NoRegister()
{
	return UAimAssistTargetManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UAimAssistTargetManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The Aim Assist Target Manager Component is used to gather all aim assist targets that are within\n * a given player's view. Targets must implement the IAimAssistTargetInterface and be on the\n * collision channel that is set in the ShooterCoreRuntimeSettings. \n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Input/AimAssistTargetManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Input/AimAssistTargetManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Aim Assist Target Manager Component is used to gather all aim assist targets that are within\na given player's view. Targets must implement the IAimAssistTargetInterface and be on the\ncollision channel that is set in the ShooterCoreRuntimeSettings." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAimAssistTargetManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAimAssistTargetManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameStateComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAimAssistTargetManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAimAssistTargetManagerComponent_Statics::ClassParams = {
	&UAimAssistTargetManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAimAssistTargetManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAimAssistTargetManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAimAssistTargetManagerComponent()
{
	if (!Z_Registration_Info_UClass_UAimAssistTargetManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAimAssistTargetManagerComponent.OuterSingleton, Z_Construct_UClass_UAimAssistTargetManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAimAssistTargetManagerComponent.OuterSingleton;
}
template<> SHOOTERCORERUNTIME_API UClass* StaticClass<UAimAssistTargetManagerComponent>()
{
	return UAimAssistTargetManagerComponent::StaticClass();
}
UAimAssistTargetManagerComponent::UAimAssistTargetManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAimAssistTargetManagerComponent);
UAimAssistTargetManagerComponent::~UAimAssistTargetManagerComponent() {}
// End Class UAimAssistTargetManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_AimAssistTargetManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAimAssistTargetManagerComponent, UAimAssistTargetManagerComponent::StaticClass, TEXT("UAimAssistTargetManagerComponent"), &Z_Registration_Info_UClass_UAimAssistTargetManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAimAssistTargetManagerComponent), 425403018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_AimAssistTargetManagerComponent_h_3426789940(TEXT("/Script/ShooterCoreRuntime"),
	Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_AimAssistTargetManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_AimAssistTargetManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
