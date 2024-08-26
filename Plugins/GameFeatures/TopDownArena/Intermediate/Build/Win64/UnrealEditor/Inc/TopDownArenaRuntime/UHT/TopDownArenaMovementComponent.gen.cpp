// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownArenaRuntime/Private/TopDownArenaMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownArenaMovementComponent() {}

// Begin Cross Module References
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCharacterMovementComponent();
TOPDOWNARENARUNTIME_API UClass* Z_Construct_UClass_UTopDownArenaMovementComponent();
TOPDOWNARENARUNTIME_API UClass* Z_Construct_UClass_UTopDownArenaMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TopDownArenaRuntime();
// End Cross Module References

// Begin Class UTopDownArenaMovementComponent
void UTopDownArenaMovementComponent::StaticRegisterNativesUTopDownArenaMovementComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTopDownArenaMovementComponent);
UClass* Z_Construct_UClass_UTopDownArenaMovementComponent_NoRegister()
{
	return UTopDownArenaMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UTopDownArenaMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TopDownArenaMovementComponent.h" },
		{ "ModuleRelativePath", "Private/TopDownArenaMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTopDownArenaMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTopDownArenaMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TopDownArenaRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownArenaMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTopDownArenaMovementComponent_Statics::ClassParams = {
	&UTopDownArenaMovementComponent::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownArenaMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTopDownArenaMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTopDownArenaMovementComponent()
{
	if (!Z_Registration_Info_UClass_UTopDownArenaMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTopDownArenaMovementComponent.OuterSingleton, Z_Construct_UClass_UTopDownArenaMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTopDownArenaMovementComponent.OuterSingleton;
}
template<> TOPDOWNARENARUNTIME_API UClass* StaticClass<UTopDownArenaMovementComponent>()
{
	return UTopDownArenaMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTopDownArenaMovementComponent);
UTopDownArenaMovementComponent::~UTopDownArenaMovementComponent() {}
// End Class UTopDownArenaMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTopDownArenaMovementComponent, UTopDownArenaMovementComponent::StaticClass, TEXT("UTopDownArenaMovementComponent"), &Z_Registration_Info_UClass_UTopDownArenaMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTopDownArenaMovementComponent), 3163306545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaMovementComponent_h_2575038639(TEXT("/Script/TopDownArenaRuntime"),
	Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
