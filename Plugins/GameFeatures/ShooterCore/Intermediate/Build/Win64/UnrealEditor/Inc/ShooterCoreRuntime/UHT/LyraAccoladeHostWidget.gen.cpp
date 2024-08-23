// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterCoreRuntime/Public/Accolades/LyraAccoladeHostWidget.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "ShooterCoreRuntime/Public/Accolades/LyraAccoladeDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAccoladeHostWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_ULyraAccoladeHostWidget();
SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_ULyraAccoladeHostWidget_NoRegister();
SHOOTERCORERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow();
SHOOTERCORERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPendingAccoladeEntry();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShooterCoreRuntime();
// End Cross Module References

// Begin ScriptStruct FPendingAccoladeEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PendingAccoladeEntry;
class UScriptStruct* FPendingAccoladeEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PendingAccoladeEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PendingAccoladeEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPendingAccoladeEntry, (UObject*)Z_Construct_UPackage__Script_ShooterCoreRuntime(), TEXT("PendingAccoladeEntry"));
	}
	return Z_Registration_Info_UScriptStruct_PendingAccoladeEntry.OuterSingleton;
}
template<> SHOOTERCORERUNTIME_API UScriptStruct* StaticStruct<FPendingAccoladeEntry>()
{
	return FPendingAccoladeEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "Category", "PendingAccoladeEntry" },
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "PendingAccoladeEntry" },
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "PendingAccoladeEntry" },
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllocatedWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllocatedWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPendingAccoladeEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPendingAccoladeEntry, Row), Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) }; // 1787614283
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPendingAccoladeEntry, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPendingAccoladeEntry, Icon), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_AllocatedWidget = { "AllocatedWidget", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPendingAccoladeEntry, AllocatedWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllocatedWidget_MetaData), NewProp_AllocatedWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_AllocatedWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterCoreRuntime,
	nullptr,
	&NewStructOps,
	"PendingAccoladeEntry",
	Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::PropPointers),
	sizeof(FPendingAccoladeEntry),
	alignof(FPendingAccoladeEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPendingAccoladeEntry()
{
	if (!Z_Registration_Info_UScriptStruct_PendingAccoladeEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PendingAccoladeEntry.InnerSingleton, Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PendingAccoladeEntry.InnerSingleton;
}
// End ScriptStruct FPendingAccoladeEntry

// Begin Class ULyraAccoladeHostWidget Function CreateAccoladeWidget
struct LyraAccoladeHostWidget_eventCreateAccoladeWidget_Parms
{
	FPendingAccoladeEntry Entry;
	UUserWidget* ReturnValue;

	/** Constructor, initializes return property only **/
	LyraAccoladeHostWidget_eventCreateAccoladeWidget_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_ULyraAccoladeHostWidget_CreateAccoladeWidget = FName(TEXT("CreateAccoladeWidget"));
UUserWidget* ULyraAccoladeHostWidget::CreateAccoladeWidget(FPendingAccoladeEntry const& Entry)
{
	LyraAccoladeHostWidget_eventCreateAccoladeWidget_Parms Parms;
	Parms.Entry=Entry;
	ProcessEvent(FindFunctionChecked(NAME_ULyraAccoladeHostWidget_CreateAccoladeWidget),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entry_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraAccoladeHostWidget_eventCreateAccoladeWidget_Parms, Entry), Z_Construct_UScriptStruct_FPendingAccoladeEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entry_MetaData), NewProp_Entry_MetaData) }; // 2807307257
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraAccoladeHostWidget_eventCreateAccoladeWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::NewProp_Entry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraAccoladeHostWidget, nullptr, "CreateAccoladeWidget", nullptr, nullptr, Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::PropPointers), sizeof(LyraAccoladeHostWidget_eventCreateAccoladeWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraAccoladeHostWidget_eventCreateAccoladeWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULyraAccoladeHostWidget Function CreateAccoladeWidget

// Begin Class ULyraAccoladeHostWidget Function DestroyAccoladeWidget
struct LyraAccoladeHostWidget_eventDestroyAccoladeWidget_Parms
{
	UUserWidget* Widget;
};
static FName NAME_ULyraAccoladeHostWidget_DestroyAccoladeWidget = FName(TEXT("DestroyAccoladeWidget"));
void ULyraAccoladeHostWidget::DestroyAccoladeWidget(UUserWidget* Widget)
{
	LyraAccoladeHostWidget_eventDestroyAccoladeWidget_Parms Parms;
	Parms.Widget=Widget;
	ProcessEvent(FindFunctionChecked(NAME_ULyraAccoladeHostWidget_DestroyAccoladeWidget),&Parms);
}
struct Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~End of UUserWidget interface\n" },
#endif
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraAccoladeHostWidget_eventDestroyAccoladeWidget_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraAccoladeHostWidget, nullptr, "DestroyAccoladeWidget", nullptr, nullptr, Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::PropPointers), sizeof(LyraAccoladeHostWidget_eventDestroyAccoladeWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraAccoladeHostWidget_eventDestroyAccoladeWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULyraAccoladeHostWidget Function DestroyAccoladeWidget

// Begin Class ULyraAccoladeHostWidget
void ULyraAccoladeHostWidget::StaticRegisterNativesULyraAccoladeHostWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAccoladeHostWidget);
UClass* Z_Construct_UClass_ULyraAccoladeHostWidget_NoRegister()
{
	return ULyraAccoladeHostWidget::StaticClass();
}
struct Z_Construct_UClass_ULyraAccoladeHostWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Accolades/LyraAccoladeHostWidget.h" },
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationName_MetaData[] = {
		{ "Category", "LyraAccoladeHostWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The location tag (used to filter incoming messages to only display the appropriate accolades in a given location)\n" },
#endif
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The location tag (used to filter incoming messages to only display the appropriate accolades in a given location)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingAccoladeLoads_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of async pending load accolades (which might come in the wrong order due to the row read)\n" },
#endif
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of async pending load accolades (which might come in the wrong order due to the row read)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingAccoladeDisplays_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of pending accolades (due to one at a time display duration; the first one in the list is the current visible one)\n" },
#endif
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of pending accolades (due to one at a time display duration; the first one in the list is the current visible one)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PendingAccoladeLoads_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingAccoladeLoads;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PendingAccoladeDisplays_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingAccoladeDisplays;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget, "CreateAccoladeWidget" }, // 1307559230
		{ &Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget, "DestroyAccoladeWidget" }, // 3248281648
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAccoladeHostWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_LocationName = { "LocationName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAccoladeHostWidget, LocationName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationName_MetaData), NewProp_LocationName_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeLoads_Inner = { "PendingAccoladeLoads", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPendingAccoladeEntry, METADATA_PARAMS(0, nullptr) }; // 2807307257
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeLoads = { "PendingAccoladeLoads", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAccoladeHostWidget, PendingAccoladeLoads), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingAccoladeLoads_MetaData), NewProp_PendingAccoladeLoads_MetaData) }; // 2807307257
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeDisplays_Inner = { "PendingAccoladeDisplays", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPendingAccoladeEntry, METADATA_PARAMS(0, nullptr) }; // 2807307257
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeDisplays = { "PendingAccoladeDisplays", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAccoladeHostWidget, PendingAccoladeDisplays), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingAccoladeDisplays_MetaData), NewProp_PendingAccoladeDisplays_MetaData) }; // 2807307257
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_LocationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeLoads_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeLoads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeDisplays_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeDisplays,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::ClassParams = {
	&ULyraAccoladeHostWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::PropPointers),
	0,
	0x00A010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraAccoladeHostWidget()
{
	if (!Z_Registration_Info_UClass_ULyraAccoladeHostWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAccoladeHostWidget.OuterSingleton, Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraAccoladeHostWidget.OuterSingleton;
}
template<> SHOOTERCORERUNTIME_API UClass* StaticClass<ULyraAccoladeHostWidget>()
{
	return ULyraAccoladeHostWidget::StaticClass();
}
ULyraAccoladeHostWidget::ULyraAccoladeHostWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAccoladeHostWidget);
ULyraAccoladeHostWidget::~ULyraAccoladeHostWidget() {}
// End Class ULyraAccoladeHostWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPendingAccoladeEntry::StaticStruct, Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewStructOps, TEXT("PendingAccoladeEntry"), &Z_Registration_Info_UScriptStruct_PendingAccoladeEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPendingAccoladeEntry), 2807307257U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAccoladeHostWidget, ULyraAccoladeHostWidget::StaticClass, TEXT("ULyraAccoladeHostWidget"), &Z_Registration_Info_UClass_ULyraAccoladeHostWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAccoladeHostWidget), 3857063195U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_2821003087(TEXT("/Script/ShooterCoreRuntime"),
	Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_oliver_carson_Documents_GitHub_unreal_engine_showcase_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
