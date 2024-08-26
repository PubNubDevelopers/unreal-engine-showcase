// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownArenaRuntime/Private/TopDownArenaPickupUIData.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownArenaPickupUIData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectUIData();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
TOPDOWNARENARUNTIME_API UClass* Z_Construct_UClass_UTopDownArenaPickupUIData();
TOPDOWNARENARUNTIME_API UClass* Z_Construct_UClass_UTopDownArenaPickupUIData_NoRegister();
UPackage* Z_Construct_UPackage__Script_TopDownArenaRuntime();
// End Cross Module References

// Begin Class UTopDownArenaPickupUIData
void UTopDownArenaPickupUIData::StaticRegisterNativesUTopDownArenaPickupUIData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTopDownArenaPickupUIData);
UClass* Z_Construct_UClass_UTopDownArenaPickupUIData_NoRegister()
{
	return UTopDownArenaPickupUIData::StaticClass();
}
struct Z_Construct_UClass_UTopDownArenaPickupUIData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Icon and display name for pickups in the top-down arena game\n" },
#endif
		{ "IncludePath", "TopDownArenaPickupUIData.h" },
		{ "ModuleRelativePath", "Private/TopDownArenaPickupUIData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Icon and display name for pickups in the top-down arena game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The full description of the pickup\n" },
#endif
		{ "ModuleRelativePath", "Private/TopDownArenaPickupUIData.h" },
		{ "MultiLine", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The full description of the pickup" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortDescriptionForToast_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The short description of the pickup (displayed by the player name when picked up)\n" },
#endif
		{ "ModuleRelativePath", "Private/TopDownArenaPickupUIData.h" },
		{ "MultiLine", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The short description of the pickup (displayed by the player name when picked up)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconTexture_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The icon material used to show the pickup in the world\n" },
#endif
		{ "ModuleRelativePath", "Private/TopDownArenaPickupUIData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The icon material used to show the pickup in the world" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupVFX_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The pickup VFX override\n" },
#endif
		{ "ModuleRelativePath", "Private/TopDownArenaPickupUIData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The pickup VFX override" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupSFX_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The pickup SFX override (if not set, a default will play)\n" },
#endif
		{ "ModuleRelativePath", "Private/TopDownArenaPickupUIData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The pickup SFX override (if not set, a default will play)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ShortDescriptionForToast;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupSFX;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTopDownArenaPickupUIData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTopDownArenaPickupUIData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTopDownArenaPickupUIData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTopDownArenaPickupUIData_Statics::NewProp_ShortDescriptionForToast = { "ShortDescriptionForToast", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTopDownArenaPickupUIData, ShortDescriptionForToast), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortDescriptionForToast_MetaData), NewProp_ShortDescriptionForToast_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTopDownArenaPickupUIData_Statics::NewProp_IconTexture = { "IconTexture", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTopDownArenaPickupUIData, IconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconTexture_MetaData), NewProp_IconTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTopDownArenaPickupUIData_Statics::NewProp_PickupVFX = { "PickupVFX", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTopDownArenaPickupUIData, PickupVFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupVFX_MetaData), NewProp_PickupVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTopDownArenaPickupUIData_Statics::NewProp_PickupSFX = { "PickupSFX", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTopDownArenaPickupUIData, PickupSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupSFX_MetaData), NewProp_PickupSFX_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTopDownArenaPickupUIData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTopDownArenaPickupUIData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTopDownArenaPickupUIData_Statics::NewProp_ShortDescriptionForToast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTopDownArenaPickupUIData_Statics::NewProp_IconTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTopDownArenaPickupUIData_Statics::NewProp_PickupVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTopDownArenaPickupUIData_Statics::NewProp_PickupSFX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownArenaPickupUIData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTopDownArenaPickupUIData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectUIData,
	(UObject* (*)())Z_Construct_UPackage__Script_TopDownArenaRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownArenaPickupUIData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTopDownArenaPickupUIData_Statics::ClassParams = {
	&UTopDownArenaPickupUIData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTopDownArenaPickupUIData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownArenaPickupUIData_Statics::PropPointers),
	0,
	0x002130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownArenaPickupUIData_Statics::Class_MetaDataParams), Z_Construct_UClass_UTopDownArenaPickupUIData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTopDownArenaPickupUIData()
{
	if (!Z_Registration_Info_UClass_UTopDownArenaPickupUIData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTopDownArenaPickupUIData.OuterSingleton, Z_Construct_UClass_UTopDownArenaPickupUIData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTopDownArenaPickupUIData.OuterSingleton;
}
template<> TOPDOWNARENARUNTIME_API UClass* StaticClass<UTopDownArenaPickupUIData>()
{
	return UTopDownArenaPickupUIData::StaticClass();
}
UTopDownArenaPickupUIData::UTopDownArenaPickupUIData() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTopDownArenaPickupUIData);
UTopDownArenaPickupUIData::~UTopDownArenaPickupUIData() {}
// End Class UTopDownArenaPickupUIData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaPickupUIData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTopDownArenaPickupUIData, UTopDownArenaPickupUIData::StaticClass, TEXT("UTopDownArenaPickupUIData"), &Z_Registration_Info_UClass_UTopDownArenaPickupUIData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTopDownArenaPickupUIData), 29565949U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaPickupUIData_h_3471689477(TEXT("/Script/TopDownArenaRuntime"),
	Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaPickupUIData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaPickupUIData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
