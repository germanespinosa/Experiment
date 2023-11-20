// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExperimentPlugin/Public/Structs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructs() {}
// Cross Module References
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCellGroup();
	UPackage* Z_Construct_UPackage__Script_ExperimentPlugin();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCell();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoordinates();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLocation();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FColumnsWrapper();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWorldImplementation();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSpace();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransformation();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FShape();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateGhostMovementMessage();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFinishEpisodeResponse();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFinishEpisodeRequest();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStartEpisodeResponse();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStartEpisodeRequest();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAgentState();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLocation3();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRotation3();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStep();
// End Cross Module References
class UScriptStruct* FCellGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXPERIMENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FCellGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCellGroup, Z_Construct_UPackage__Script_ExperimentPlugin(), TEXT("CellGroup"), sizeof(FCellGroup), Get_Z_Construct_UScriptStruct_FCellGroup_Hash());
	}
	return Singleton;
}
template<> EXPERIMENTPLUGIN_API UScriptStruct* StaticStruct<FCellGroup>()
{
	return FCellGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCellGroup(FCellGroup::StaticStruct, TEXT("/Script/ExperimentPlugin"), TEXT("CellGroup"), false, nullptr, nullptr);
static struct FScriptStruct_ExperimentPlugin_StaticRegisterNativesFCellGroup
{
	FScriptStruct_ExperimentPlugin_StaticRegisterNativesFCellGroup()
	{
		UScriptStruct::DeferCppStructOps<FCellGroup>(FName(TEXT("CellGroup")));
	}
} ScriptStruct_ExperimentPlugin_StaticRegisterNativesFCellGroup;
	struct Z_Construct_UScriptStruct_FCellGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_cell_locations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cell_locations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_cell_locations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCellGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCellGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCellGroup>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCellGroup_Statics::NewProp_cell_locations_Inner = { "cell_locations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCell, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCellGroup_Statics::NewProp_cell_locations_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCellGroup_Statics::NewProp_cell_locations = { "cell_locations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCellGroup, cell_locations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCellGroup_Statics::NewProp_cell_locations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellGroup_Statics::NewProp_cell_locations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCellGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellGroup_Statics::NewProp_cell_locations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellGroup_Statics::NewProp_cell_locations,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCellGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentPlugin,
		nullptr,
		&NewStructOps,
		"CellGroup",
		sizeof(FCellGroup),
		alignof(FCellGroup),
		Z_Construct_UScriptStruct_FCellGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCellGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCellGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCellGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExperimentPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CellGroup"), sizeof(FCellGroup), Get_Z_Construct_UScriptStruct_FCellGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCellGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCellGroup_Hash() { return 3768453620U; }
class UScriptStruct* FCell::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXPERIMENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FCell_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCell, Z_Construct_UPackage__Script_ExperimentPlugin(), TEXT("Cell"), sizeof(FCell), Get_Z_Construct_UScriptStruct_FCell_Hash());
	}
	return Singleton;
}
template<> EXPERIMENTPLUGIN_API UScriptStruct* StaticStruct<FCell>()
{
	return FCell::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCell(FCell::StaticStruct, TEXT("/Script/ExperimentPlugin"), TEXT("Cell"), false, nullptr, nullptr);
static struct FScriptStruct_ExperimentPlugin_StaticRegisterNativesFCell
{
	FScriptStruct_ExperimentPlugin_StaticRegisterNativesFCell()
	{
		UScriptStruct::DeferCppStructOps<FCell>(FName(TEXT("Cell")));
	}
} ScriptStruct_ExperimentPlugin_StaticRegisterNativesFCell;
	struct Z_Construct_UScriptStruct_FCell_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_coordinates_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_coordinates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_occluded_MetaData[];
#endif
		static void NewProp_occluded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_occluded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCell_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCell_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCell>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCell_Statics::NewProp_id_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCell_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCell, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FCell_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCell_Statics::NewProp_coordinates_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCell_Statics::NewProp_coordinates = { "coordinates", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCell, coordinates), Z_Construct_UScriptStruct_FCoordinates, METADATA_PARAMS(Z_Construct_UScriptStruct_FCell_Statics::NewProp_coordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::NewProp_coordinates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCell_Statics::NewProp_location_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCell_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCell, location), Z_Construct_UScriptStruct_FLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FCell_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::NewProp_location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCell_Statics::NewProp_occluded_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCell_Statics::NewProp_occluded_SetBit(void* Obj)
	{
		((FCell*)Obj)->occluded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCell_Statics::NewProp_occluded = { "occluded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCell), &Z_Construct_UScriptStruct_FCell_Statics::NewProp_occluded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCell_Statics::NewProp_occluded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::NewProp_occluded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCell_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCell_Statics::NewProp_coordinates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCell_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCell_Statics::NewProp_occluded,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCell_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentPlugin,
		nullptr,
		&NewStructOps,
		"Cell",
		sizeof(FCell),
		alignof(FCell),
		Z_Construct_UScriptStruct_FCell_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCell_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCell()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCell_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExperimentPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Cell"), sizeof(FCell), Get_Z_Construct_UScriptStruct_FCell_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCell_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCell_Hash() { return 2315111706U; }
class UScriptStruct* FColumnsWrapper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXPERIMENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FColumnsWrapper_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FColumnsWrapper, Z_Construct_UPackage__Script_ExperimentPlugin(), TEXT("ColumnsWrapper"), sizeof(FColumnsWrapper), Get_Z_Construct_UScriptStruct_FColumnsWrapper_Hash());
	}
	return Singleton;
}
template<> EXPERIMENTPLUGIN_API UScriptStruct* StaticStruct<FColumnsWrapper>()
{
	return FColumnsWrapper::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FColumnsWrapper(FColumnsWrapper::StaticStruct, TEXT("/Script/ExperimentPlugin"), TEXT("ColumnsWrapper"), false, nullptr, nullptr);
static struct FScriptStruct_ExperimentPlugin_StaticRegisterNativesFColumnsWrapper
{
	FScriptStruct_ExperimentPlugin_StaticRegisterNativesFColumnsWrapper()
	{
		UScriptStruct::DeferCppStructOps<FColumnsWrapper>(FName(TEXT("ColumnsWrapper")));
	}
} ScriptStruct_ExperimentPlugin_StaticRegisterNativesFColumnsWrapper;
	struct Z_Construct_UScriptStruct_FColumnsWrapper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Columns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Columns;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColumnsWrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColumnsWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColumnsWrapper>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FColumnsWrapper_Statics::NewProp_Columns_Inner = { "Columns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColumnsWrapper_Statics::NewProp_Columns_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FColumnsWrapper_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColumnsWrapper, Columns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FColumnsWrapper_Statics::NewProp_Columns_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColumnsWrapper_Statics::NewProp_Columns_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColumnsWrapper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColumnsWrapper_Statics::NewProp_Columns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColumnsWrapper_Statics::NewProp_Columns,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColumnsWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentPlugin,
		nullptr,
		&NewStructOps,
		"ColumnsWrapper",
		sizeof(FColumnsWrapper),
		alignof(FColumnsWrapper),
		Z_Construct_UScriptStruct_FColumnsWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColumnsWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColumnsWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColumnsWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColumnsWrapper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FColumnsWrapper_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExperimentPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColumnsWrapper"), sizeof(FColumnsWrapper), Get_Z_Construct_UScriptStruct_FColumnsWrapper_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FColumnsWrapper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColumnsWrapper_Hash() { return 114007451U; }
class UScriptStruct* FWorldImplementation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXPERIMENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FWorldImplementation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldImplementation, Z_Construct_UPackage__Script_ExperimentPlugin(), TEXT("WorldImplementation"), sizeof(FWorldImplementation), Get_Z_Construct_UScriptStruct_FWorldImplementation_Hash());
	}
	return Singleton;
}
template<> EXPERIMENTPLUGIN_API UScriptStruct* StaticStruct<FWorldImplementation>()
{
	return FWorldImplementation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWorldImplementation(FWorldImplementation::StaticStruct, TEXT("/Script/ExperimentPlugin"), TEXT("WorldImplementation"), false, nullptr, nullptr);
static struct FScriptStruct_ExperimentPlugin_StaticRegisterNativesFWorldImplementation
{
	FScriptStruct_ExperimentPlugin_StaticRegisterNativesFWorldImplementation()
	{
		UScriptStruct::DeferCppStructOps<FWorldImplementation>(FName(TEXT("WorldImplementation")));
	}
} ScriptStruct_ExperimentPlugin_StaticRegisterNativesFWorldImplementation;
	struct Z_Construct_UScriptStruct_FWorldImplementation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_cell_locations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cell_locations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_cell_locations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_space_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_space;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cell_transformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_cell_transformation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldImplementation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldImplementation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldImplementation>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldImplementation_Statics::NewProp_cell_locations_Inner = { "cell_locations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLocation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldImplementation_Statics::NewProp_cell_locations_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldImplementation_Statics::NewProp_cell_locations = { "cell_locations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorldImplementation, cell_locations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldImplementation_Statics::NewProp_cell_locations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldImplementation_Statics::NewProp_cell_locations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldImplementation_Statics::NewProp_space_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldImplementation_Statics::NewProp_space = { "space", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorldImplementation, space), Z_Construct_UScriptStruct_FSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldImplementation_Statics::NewProp_space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldImplementation_Statics::NewProp_space_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldImplementation_Statics::NewProp_cell_transformation_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldImplementation_Statics::NewProp_cell_transformation = { "cell_transformation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorldImplementation, cell_transformation), Z_Construct_UScriptStruct_FTransformation, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldImplementation_Statics::NewProp_cell_transformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldImplementation_Statics::NewProp_cell_transformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldImplementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldImplementation_Statics::NewProp_cell_locations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldImplementation_Statics::NewProp_cell_locations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldImplementation_Statics::NewProp_space,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldImplementation_Statics::NewProp_cell_transformation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldImplementation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentPlugin,
		nullptr,
		&NewStructOps,
		"WorldImplementation",
		sizeof(FWorldImplementation),
		alignof(FWorldImplementation),
		Z_Construct_UScriptStruct_FWorldImplementation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldImplementation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldImplementation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldImplementation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldImplementation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWorldImplementation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExperimentPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WorldImplementation"), sizeof(FWorldImplementation), Get_Z_Construct_UScriptStruct_FWorldImplementation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWorldImplementation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWorldImplementation_Hash() { return 1924237484U; }
class UScriptStruct* FSpace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXPERIMENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FSpace_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpace, Z_Construct_UPackage__Script_ExperimentPlugin(), TEXT("Space"), sizeof(FSpace), Get_Z_Construct_UScriptStruct_FSpace_Hash());
	}
	return Singleton;
}
template<> EXPERIMENTPLUGIN_API UScriptStruct* StaticStruct<FSpace>()
{
	return FSpace::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpace(FSpace::StaticStruct, TEXT("/Script/ExperimentPlugin"), TEXT("Space"), false, nullptr, nullptr);
static struct FScriptStruct_ExperimentPlugin_StaticRegisterNativesFSpace
{
	FScriptStruct_ExperimentPlugin_StaticRegisterNativesFSpace()
	{
		UScriptStruct::DeferCppStructOps<FSpace>(FName(TEXT("Space")));
	}
} ScriptStruct_ExperimentPlugin_StaticRegisterNativesFSpace;
	struct Z_Construct_UScriptStruct_FSpace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_center;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shape_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_shape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_transformation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpace>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpace_Statics::NewProp_center_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpace_Statics::NewProp_center = { "center", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpace, center), Z_Construct_UScriptStruct_FLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpace_Statics::NewProp_center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpace_Statics::NewProp_center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpace_Statics::NewProp_shape_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpace_Statics::NewProp_shape = { "shape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpace, shape), Z_Construct_UScriptStruct_FShape, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpace_Statics::NewProp_shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpace_Statics::NewProp_shape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpace_Statics::NewProp_transformation_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpace_Statics::NewProp_transformation = { "transformation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpace, transformation), Z_Construct_UScriptStruct_FTransformation, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpace_Statics::NewProp_transformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpace_Statics::NewProp_transformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpace_Statics::NewProp_center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpace_Statics::NewProp_shape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpace_Statics::NewProp_transformation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentPlugin,
		nullptr,
		&NewStructOps,
		"Space",
		sizeof(FSpace),
		alignof(FSpace),
		Z_Construct_UScriptStruct_FSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpace()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpace_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExperimentPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Space"), sizeof(FSpace), Get_Z_Construct_UScriptStruct_FSpace_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpace_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpace_Hash() { return 3883442141U; }
class UScriptStruct* FShape::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXPERIMENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FShape_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShape, Z_Construct_UPackage__Script_ExperimentPlugin(), TEXT("Shape"), sizeof(FShape), Get_Z_Construct_UScriptStruct_FShape_Hash());
	}
	return Singleton;
}
template<> EXPERIMENTPLUGIN_API UScriptStruct* StaticStruct<FShape>()
{
	return FShape::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShape(FShape::StaticStruct, TEXT("/Script/ExperimentPlugin"), TEXT("Shape"), false, nullptr, nullptr);
static struct FScriptStruct_ExperimentPlugin_StaticRegisterNativesFShape
{
	FScriptStruct_ExperimentPlugin_StaticRegisterNativesFShape()
	{
		UScriptStruct::DeferCppStructOps<FShape>(FName(TEXT("Shape")));
	}
} ScriptStruct_ExperimentPlugin_StaticRegisterNativesFShape;
	struct Z_Construct_UScriptStruct_FShape_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sides_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_sides;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShape_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShape_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShape>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShape_Statics::NewProp_sides_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FShape_Statics::NewProp_sides = { "sides", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShape, sides), METADATA_PARAMS(Z_Construct_UScriptStruct_FShape_Statics::NewProp_sides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShape_Statics::NewProp_sides_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShape_Statics::NewProp_sides,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShape_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentPlugin,
		nullptr,
		&NewStructOps,
		"Shape",
		sizeof(FShape),
		alignof(FShape),
		Z_Construct_UScriptStruct_FShape_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShape_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShape_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShape_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShape()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShape_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExperimentPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Shape"), sizeof(FShape), Get_Z_Construct_UScriptStruct_FShape_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShape_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShape_Hash() { return 434447269U; }
class UScriptStruct* FTransformation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXPERIMENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FTransformation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformation, Z_Construct_UPackage__Script_ExperimentPlugin(), TEXT("Transformation"), sizeof(FTransformation), Get_Z_Construct_UScriptStruct_FTransformation_Hash());
	}
	return Singleton;
}
template<> EXPERIMENTPLUGIN_API UScriptStruct* StaticStruct<FTransformation>()
{
	return FTransformation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransformation(FTransformation::StaticStruct, TEXT("/Script/ExperimentPlugin"), TEXT("Transformation"), false, nullptr, nullptr);
static struct FScriptStruct_ExperimentPlugin_StaticRegisterNativesFTransformation
{
	FScriptStruct_ExperimentPlugin_StaticRegisterNativesFTransformation()
	{
		UScriptStruct::DeferCppStructOps<FTransformation>(FName(TEXT("Transformation")));
	}
} ScriptStruct_ExperimentPlugin_StaticRegisterNativesFTransformation;
	struct Z_Construct_UScriptStruct_FTransformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformation_Statics::NewProp_size_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTransformation_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransformation, size), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformation_Statics::NewProp_size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformation_Statics::NewProp_size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformation_Statics::NewProp_rotation_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTransformation_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransformation, rotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformation_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformation_Statics::NewProp_rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformation_Statics::NewProp_size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformation_Statics::NewProp_rotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentPlugin,
		nullptr,
		&NewStructOps,
		"Transformation",
		sizeof(FTransformation),
		alignof(FTransformation),
		Z_Construct_UScriptStruct_FTransformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransformation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExperimentPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Transformation"), sizeof(FTransformation), Get_Z_Construct_UScriptStruct_FTransformation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransformation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransformation_Hash() { return 4275525686U; }
class UScriptStruct* FUpdateGhostMovementMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXPERIMENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateGhostMovementMessage, Z_Construct_UPackage__Script_ExperimentPlugin(), TEXT("UpdateGhostMovementMessage"), sizeof(FUpdateGhostMovementMessage), Get_Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Hash());
	}
	return Singleton;
}
template<> EXPERIMENTPLUGIN_API UScriptStruct* StaticStruct<FUpdateGhostMovementMessage>()
{
	return FUpdateGhostMovementMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUpdateGhostMovementMessage(FUpdateGhostMovementMessage::StaticStruct, TEXT("/Script/ExperimentPlugin"), TEXT("UpdateGhostMovementMessage"), false, nullptr, nullptr);
static struct FScriptStruct_ExperimentPlugin_StaticRegisterNativesFUpdateGhostMovementMessage
{
	FScriptStruct_ExperimentPlugin_StaticRegisterNativesFUpdateGhostMovementMessage()
	{
		UScriptStruct::DeferCppStructOps<FUpdateGhostMovementMessage>(FName(TEXT("UpdateGhostMovementMessage")));
	}
} ScriptStruct_ExperimentPlugin_StaticRegisterNativesFUpdateGhostMovementMessage;
	struct Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_forward_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_forward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateGhostMovementMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Statics::NewProp_forward_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Statics::NewProp_forward = { "forward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpdateGhostMovementMessage, forward), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Statics::NewProp_forward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Statics::NewProp_forward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Statics::NewProp_rotation_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpdateGhostMovementMessage, rotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Statics::NewProp_rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Statics::NewProp_forward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Statics::NewProp_rotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentPlugin,
		nullptr,
		&NewStructOps,
		"UpdateGhostMovementMessage",
		sizeof(FUpdateGhostMovementMessage),
		alignof(FUpdateGhostMovementMessage),
		Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUpdateGhostMovementMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExperimentPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UpdateGhostMovementMessage"), sizeof(FUpdateGhostMovementMessage), Get_Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUpdateGhostMovementMessage_Hash() { return 809012142U; }
class UScriptStruct* FFinishEpisodeResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXPERIMENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FFinishEpisodeResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFinishEpisodeResponse, Z_Construct_UPackage__Script_ExperimentPlugin(), TEXT("FinishEpisodeResponse"), sizeof(FFinishEpisodeResponse), Get_Z_Construct_UScriptStruct_FFinishEpisodeResponse_Hash());
	}
	return Singleton;
}
template<> EXPERIMENTPLUGIN_API UScriptStruct* StaticStruct<FFinishEpisodeResponse>()
{
	return FFinishEpisodeResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFinishEpisodeResponse(FFinishEpisodeResponse::StaticStruct, TEXT("/Script/ExperimentPlugin"), TEXT("FinishEpisodeResponse"), false, nullptr, nullptr);
static struct FScriptStruct_ExperimentPlugin_StaticRegisterNativesFFinishEpisodeResponse
{
	FScriptStruct_ExperimentPlugin_StaticRegisterNativesFFinishEpisodeResponse()
	{
		UScriptStruct::DeferCppStructOps<FFinishEpisodeResponse>(FName(TEXT("FinishEpisodeResponse")));
	}
} ScriptStruct_ExperimentPlugin_StaticRegisterNativesFFinishEpisodeResponse;
	struct Z_Construct_UScriptStruct_FFinishEpisodeResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_participant_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_participant_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFinishEpisodeResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFinishEpisodeResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFinishEpisodeResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFinishEpisodeResponse_Statics::NewProp_participant_id_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFinishEpisodeResponse_Statics::NewProp_participant_id = { "participant_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFinishEpisodeResponse, participant_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FFinishEpisodeResponse_Statics::NewProp_participant_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFinishEpisodeResponse_Statics::NewProp_participant_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFinishEpisodeResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFinishEpisodeResponse_Statics::NewProp_participant_id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFinishEpisodeResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentPlugin,
		nullptr,
		&NewStructOps,
		"FinishEpisodeResponse",
		sizeof(FFinishEpisodeResponse),
		alignof(FFinishEpisodeResponse),
		Z_Construct_UScriptStruct_FFinishEpisodeResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFinishEpisodeResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFinishEpisodeResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFinishEpisodeResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFinishEpisodeResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFinishEpisodeResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExperimentPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FinishEpisodeResponse"), sizeof(FFinishEpisodeResponse), Get_Z_Construct_UScriptStruct_FFinishEpisodeResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFinishEpisodeResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFinishEpisodeResponse_Hash() { return 2635902232U; }
class UScriptStruct* FFinishEpisodeRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXPERIMENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FFinishEpisodeRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFinishEpisodeRequest, Z_Construct_UPackage__Script_ExperimentPlugin(), TEXT("FinishEpisodeRequest"), sizeof(FFinishEpisodeRequest), Get_Z_Construct_UScriptStruct_FFinishEpisodeRequest_Hash());
	}
	return Singleton;
}
template<> EXPERIMENTPLUGIN_API UScriptStruct* StaticStruct<FFinishEpisodeRequest>()
{
	return FFinishEpisodeRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFinishEpisodeRequest(FFinishEpisodeRequest::StaticStruct, TEXT("/Script/ExperimentPlugin"), TEXT("FinishEpisodeRequest"), false, nullptr, nullptr);
static struct FScriptStruct_ExperimentPlugin_StaticRegisterNativesFFinishEpisodeRequest
{
	FScriptStruct_ExperimentPlugin_StaticRegisterNativesFFinishEpisodeRequest()
	{
		UScriptStruct::DeferCppStructOps<FFinishEpisodeRequest>(FName(TEXT("FinishEpisodeRequest")));
	}
} ScriptStruct_ExperimentPlugin_StaticRegisterNativesFFinishEpisodeRequest;
	struct Z_Construct_UScriptStruct_FFinishEpisodeRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_participant_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_participant_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFinishEpisodeRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFinishEpisodeRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFinishEpisodeRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFinishEpisodeRequest_Statics::NewProp_participant_id_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFinishEpisodeRequest_Statics::NewProp_participant_id = { "participant_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFinishEpisodeRequest, participant_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FFinishEpisodeRequest_Statics::NewProp_participant_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFinishEpisodeRequest_Statics::NewProp_participant_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFinishEpisodeRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFinishEpisodeRequest_Statics::NewProp_participant_id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFinishEpisodeRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentPlugin,
		nullptr,
		&NewStructOps,
		"FinishEpisodeRequest",
		sizeof(FFinishEpisodeRequest),
		alignof(FFinishEpisodeRequest),
		Z_Construct_UScriptStruct_FFinishEpisodeRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFinishEpisodeRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFinishEpisodeRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFinishEpisodeRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFinishEpisodeRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFinishEpisodeRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExperimentPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FinishEpisodeRequest"), sizeof(FFinishEpisodeRequest), Get_Z_Construct_UScriptStruct_FFinishEpisodeRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFinishEpisodeRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFinishEpisodeRequest_Hash() { return 563856334U; }
class UScriptStruct* FStartEpisodeResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXPERIMENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FStartEpisodeResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStartEpisodeResponse, Z_Construct_UPackage__Script_ExperimentPlugin(), TEXT("StartEpisodeResponse"), sizeof(FStartEpisodeResponse), Get_Z_Construct_UScriptStruct_FStartEpisodeResponse_Hash());
	}
	return Singleton;
}
template<> EXPERIMENTPLUGIN_API UScriptStruct* StaticStruct<FStartEpisodeResponse>()
{
	return FStartEpisodeResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStartEpisodeResponse(FStartEpisodeResponse::StaticStruct, TEXT("/Script/ExperimentPlugin"), TEXT("StartEpisodeResponse"), false, nullptr, nullptr);
static struct FScriptStruct_ExperimentPlugin_StaticRegisterNativesFStartEpisodeResponse
{
	FScriptStruct_ExperimentPlugin_StaticRegisterNativesFStartEpisodeResponse()
	{
		UScriptStruct::DeferCppStructOps<FStartEpisodeResponse>(FName(TEXT("StartEpisodeResponse")));
	}
} ScriptStruct_ExperimentPlugin_StaticRegisterNativesFStartEpisodeResponse;
	struct Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_occlusions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_occlusions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_occlusions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_predator_spawn_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_predator_spawn_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStartEpisodeResponse>();
	}
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::NewProp_occlusions_Inner = { "occlusions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::NewProp_occlusions_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::NewProp_occlusions = { "occlusions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStartEpisodeResponse, occlusions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::NewProp_occlusions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::NewProp_occlusions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::NewProp_predator_spawn_location_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::NewProp_predator_spawn_location = { "predator_spawn_location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStartEpisodeResponse, predator_spawn_location), Z_Construct_UScriptStruct_FLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::NewProp_predator_spawn_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::NewProp_predator_spawn_location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::NewProp_occlusions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::NewProp_occlusions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::NewProp_predator_spawn_location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentPlugin,
		nullptr,
		&NewStructOps,
		"StartEpisodeResponse",
		sizeof(FStartEpisodeResponse),
		alignof(FStartEpisodeResponse),
		Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStartEpisodeResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStartEpisodeResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExperimentPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StartEpisodeResponse"), sizeof(FStartEpisodeResponse), Get_Z_Construct_UScriptStruct_FStartEpisodeResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStartEpisodeResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStartEpisodeResponse_Hash() { return 3889399226U; }
class UScriptStruct* FStartEpisodeRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXPERIMENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FStartEpisodeRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStartEpisodeRequest, Z_Construct_UPackage__Script_ExperimentPlugin(), TEXT("StartEpisodeRequest"), sizeof(FStartEpisodeRequest), Get_Z_Construct_UScriptStruct_FStartEpisodeRequest_Hash());
	}
	return Singleton;
}
template<> EXPERIMENTPLUGIN_API UScriptStruct* StaticStruct<FStartEpisodeRequest>()
{
	return FStartEpisodeRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStartEpisodeRequest(FStartEpisodeRequest::StaticStruct, TEXT("/Script/ExperimentPlugin"), TEXT("StartEpisodeRequest"), false, nullptr, nullptr);
static struct FScriptStruct_ExperimentPlugin_StaticRegisterNativesFStartEpisodeRequest
{
	FScriptStruct_ExperimentPlugin_StaticRegisterNativesFStartEpisodeRequest()
	{
		UScriptStruct::DeferCppStructOps<FStartEpisodeRequest>(FName(TEXT("StartEpisodeRequest")));
	}
} ScriptStruct_ExperimentPlugin_StaticRegisterNativesFStartEpisodeRequest;
	struct Z_Construct_UScriptStruct_FStartEpisodeRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_participant_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_participant_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartEpisodeRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStartEpisodeRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStartEpisodeRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartEpisodeRequest_Statics::NewProp_participant_id_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FStartEpisodeRequest_Statics::NewProp_participant_id = { "participant_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStartEpisodeRequest, participant_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FStartEpisodeRequest_Statics::NewProp_participant_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartEpisodeRequest_Statics::NewProp_participant_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStartEpisodeRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartEpisodeRequest_Statics::NewProp_participant_id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStartEpisodeRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentPlugin,
		nullptr,
		&NewStructOps,
		"StartEpisodeRequest",
		sizeof(FStartEpisodeRequest),
		alignof(FStartEpisodeRequest),
		Z_Construct_UScriptStruct_FStartEpisodeRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartEpisodeRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStartEpisodeRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartEpisodeRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStartEpisodeRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStartEpisodeRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExperimentPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StartEpisodeRequest"), sizeof(FStartEpisodeRequest), Get_Z_Construct_UScriptStruct_FStartEpisodeRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStartEpisodeRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStartEpisodeRequest_Hash() { return 801015763U; }
class UScriptStruct* FAgentState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXPERIMENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FAgentState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAgentState, Z_Construct_UPackage__Script_ExperimentPlugin(), TEXT("AgentState"), sizeof(FAgentState), Get_Z_Construct_UScriptStruct_FAgentState_Hash());
	}
	return Singleton;
}
template<> EXPERIMENTPLUGIN_API UScriptStruct* StaticStruct<FAgentState>()
{
	return FAgentState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAgentState(FAgentState::StaticStruct, TEXT("/Script/ExperimentPlugin"), TEXT("AgentState"), false, nullptr, nullptr);
static struct FScriptStruct_ExperimentPlugin_StaticRegisterNativesFAgentState
{
	FScriptStruct_ExperimentPlugin_StaticRegisterNativesFAgentState()
	{
		UScriptStruct::DeferCppStructOps<FAgentState>(FName(TEXT("AgentState")));
	}
} ScriptStruct_ExperimentPlugin_StaticRegisterNativesFAgentState;
	struct Z_Construct_UScriptStruct_FAgentState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_time_stamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time_stamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frame_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_frame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_agent_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_agent_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAgentState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAgentState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_time_stamp_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_time_stamp = { "time_stamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentState, time_stamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_time_stamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_time_stamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_frame_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_frame = { "frame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentState, frame), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_frame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_frame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_agent_name_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_agent_name = { "agent_name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentState, agent_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_agent_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_agent_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_location_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentState, location), Z_Construct_UScriptStruct_FLocation3, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_rotation_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentState, rotation), Z_Construct_UScriptStruct_FRotation3, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAgentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_time_stamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_frame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_agent_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentState_Statics::NewProp_rotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAgentState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentPlugin,
		nullptr,
		&NewStructOps,
		"AgentState",
		sizeof(FAgentState),
		alignof(FAgentState),
		Z_Construct_UScriptStruct_FAgentState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAgentState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAgentState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExperimentPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AgentState"), sizeof(FAgentState), Get_Z_Construct_UScriptStruct_FAgentState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAgentState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAgentState_Hash() { return 1534392215U; }
class UScriptStruct* FRotation3::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXPERIMENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FRotation3_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotation3, Z_Construct_UPackage__Script_ExperimentPlugin(), TEXT("Rotation3"), sizeof(FRotation3), Get_Z_Construct_UScriptStruct_FRotation3_Hash());
	}
	return Singleton;
}
template<> EXPERIMENTPLUGIN_API UScriptStruct* StaticStruct<FRotation3>()
{
	return FRotation3::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRotation3(FRotation3::StaticStruct, TEXT("/Script/ExperimentPlugin"), TEXT("Rotation3"), false, nullptr, nullptr);
static struct FScriptStruct_ExperimentPlugin_StaticRegisterNativesFRotation3
{
	FScriptStruct_ExperimentPlugin_StaticRegisterNativesFRotation3()
	{
		UScriptStruct::DeferCppStructOps<FRotation3>(FName(TEXT("Rotation3")));
	}
} ScriptStruct_ExperimentPlugin_StaticRegisterNativesFRotation3;
	struct Z_Construct_UScriptStruct_FRotation3_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_roll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_yaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotation3_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRotation3_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotation3>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotation3_Statics::NewProp_roll_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRotation3_Statics::NewProp_roll = { "roll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotation3, roll), METADATA_PARAMS(Z_Construct_UScriptStruct_FRotation3_Statics::NewProp_roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotation3_Statics::NewProp_roll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotation3_Statics::NewProp_pitch_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRotation3_Statics::NewProp_pitch = { "pitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotation3, pitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FRotation3_Statics::NewProp_pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotation3_Statics::NewProp_pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotation3_Statics::NewProp_yaw_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRotation3_Statics::NewProp_yaw = { "yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotation3, yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FRotation3_Statics::NewProp_yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotation3_Statics::NewProp_yaw_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRotation3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotation3_Statics::NewProp_roll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotation3_Statics::NewProp_pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotation3_Statics::NewProp_yaw,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotation3_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentPlugin,
		nullptr,
		&NewStructOps,
		"Rotation3",
		sizeof(FRotation3),
		alignof(FRotation3),
		Z_Construct_UScriptStruct_FRotation3_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotation3_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRotation3_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotation3_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRotation3()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRotation3_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExperimentPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Rotation3"), sizeof(FRotation3), Get_Z_Construct_UScriptStruct_FRotation3_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRotation3_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRotation3_Hash() { return 3870956379U; }
class UScriptStruct* FLocation3::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXPERIMENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FLocation3_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocation3, Z_Construct_UPackage__Script_ExperimentPlugin(), TEXT("Location3"), sizeof(FLocation3), Get_Z_Construct_UScriptStruct_FLocation3_Hash());
	}
	return Singleton;
}
template<> EXPERIMENTPLUGIN_API UScriptStruct* StaticStruct<FLocation3>()
{
	return FLocation3::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocation3(FLocation3::StaticStruct, TEXT("/Script/ExperimentPlugin"), TEXT("Location3"), false, nullptr, nullptr);
static struct FScriptStruct_ExperimentPlugin_StaticRegisterNativesFLocation3
{
	FScriptStruct_ExperimentPlugin_StaticRegisterNativesFLocation3()
	{
		UScriptStruct::DeferCppStructOps<FLocation3>(FName(TEXT("Location3")));
	}
} ScriptStruct_ExperimentPlugin_StaticRegisterNativesFLocation3;
	struct Z_Construct_UScriptStruct_FLocation3_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocation3_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocation3_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocation3>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocation3_Statics::NewProp_x_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocation3_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocation3, x), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocation3_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocation3_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocation3_Statics::NewProp_y_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocation3_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocation3, y), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocation3_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocation3_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocation3_Statics::NewProp_z_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocation3_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocation3, z), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocation3_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocation3_Statics::NewProp_z_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocation3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocation3_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocation3_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocation3_Statics::NewProp_z,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocation3_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentPlugin,
		nullptr,
		&NewStructOps,
		"Location3",
		sizeof(FLocation3),
		alignof(FLocation3),
		Z_Construct_UScriptStruct_FLocation3_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocation3_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocation3_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocation3_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocation3()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocation3_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExperimentPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Location3"), sizeof(FLocation3), Get_Z_Construct_UScriptStruct_FLocation3_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocation3_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocation3_Hash() { return 2584113383U; }
class UScriptStruct* FCoordinates::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXPERIMENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FCoordinates_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoordinates, Z_Construct_UPackage__Script_ExperimentPlugin(), TEXT("Coordinates"), sizeof(FCoordinates), Get_Z_Construct_UScriptStruct_FCoordinates_Hash());
	}
	return Singleton;
}
template<> EXPERIMENTPLUGIN_API UScriptStruct* StaticStruct<FCoordinates>()
{
	return FCoordinates::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCoordinates(FCoordinates::StaticStruct, TEXT("/Script/ExperimentPlugin"), TEXT("Coordinates"), false, nullptr, nullptr);
static struct FScriptStruct_ExperimentPlugin_StaticRegisterNativesFCoordinates
{
	FScriptStruct_ExperimentPlugin_StaticRegisterNativesFCoordinates()
	{
		UScriptStruct::DeferCppStructOps<FCoordinates>(FName(TEXT("Coordinates")));
	}
} ScriptStruct_ExperimentPlugin_StaticRegisterNativesFCoordinates;
	struct Z_Construct_UScriptStruct_FCoordinates_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoordinates_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoordinates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoordinates>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoordinates_Statics::NewProp_x_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCoordinates_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCoordinates, x), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoordinates_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoordinates_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoordinates_Statics::NewProp_y_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCoordinates_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCoordinates, y), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoordinates_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoordinates_Statics::NewProp_y_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoordinates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoordinates_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoordinates_Statics::NewProp_y,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoordinates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentPlugin,
		nullptr,
		&NewStructOps,
		"Coordinates",
		sizeof(FCoordinates),
		alignof(FCoordinates),
		Z_Construct_UScriptStruct_FCoordinates_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoordinates_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoordinates_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoordinates_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoordinates()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCoordinates_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExperimentPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Coordinates"), sizeof(FCoordinates), Get_Z_Construct_UScriptStruct_FCoordinates_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCoordinates_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCoordinates_Hash() { return 108233492U; }
class UScriptStruct* FStep::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXPERIMENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FStep_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStep, Z_Construct_UPackage__Script_ExperimentPlugin(), TEXT("Step"), sizeof(FStep), Get_Z_Construct_UScriptStruct_FStep_Hash());
	}
	return Singleton;
}
template<> EXPERIMENTPLUGIN_API UScriptStruct* StaticStruct<FStep>()
{
	return FStep::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStep(FStep::StaticStruct, TEXT("/Script/ExperimentPlugin"), TEXT("Step"), false, nullptr, nullptr);
static struct FScriptStruct_ExperimentPlugin_StaticRegisterNativesFStep
{
	FScriptStruct_ExperimentPlugin_StaticRegisterNativesFStep()
	{
		UScriptStruct::DeferCppStructOps<FStep>(FName(TEXT("Step")));
	}
} ScriptStruct_ExperimentPlugin_StaticRegisterNativesFStep;
	struct Z_Construct_UScriptStruct_FStep_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frame_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_frame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_time_stamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time_stamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_agent_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_agent_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStep_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStep>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStep_Statics::NewProp_location_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStep_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStep, location), Z_Construct_UScriptStruct_FLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FStep_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStep_Statics::NewProp_location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStep_Statics::NewProp_rotation_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStep_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStep, rotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FStep_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStep_Statics::NewProp_rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStep_Statics::NewProp_frame_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FStep_Statics::NewProp_frame = { "frame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStep, frame), METADATA_PARAMS(Z_Construct_UScriptStruct_FStep_Statics::NewProp_frame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStep_Statics::NewProp_frame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStep_Statics::NewProp_time_stamp_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStep_Statics::NewProp_time_stamp = { "time_stamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStep, time_stamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FStep_Statics::NewProp_time_stamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStep_Statics::NewProp_time_stamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStep_Statics::NewProp_agent_name_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStep_Statics::NewProp_agent_name = { "agent_name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStep, agent_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStep_Statics::NewProp_agent_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStep_Statics::NewProp_agent_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStep_Statics::NewProp_data_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStep_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStep, data), METADATA_PARAMS(Z_Construct_UScriptStruct_FStep_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStep_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStep_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStep_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStep_Statics::NewProp_frame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStep_Statics::NewProp_time_stamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStep_Statics::NewProp_agent_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStep_Statics::NewProp_data,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentPlugin,
		nullptr,
		&NewStructOps,
		"Step",
		sizeof(FStep),
		alignof(FStep),
		Z_Construct_UScriptStruct_FStep_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStep_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStep_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStep()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStep_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExperimentPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Step"), sizeof(FStep), Get_Z_Construct_UScriptStruct_FStep_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStep_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStep_Hash() { return 3250658004U; }
class UScriptStruct* FLocation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXPERIMENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FLocation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocation, Z_Construct_UPackage__Script_ExperimentPlugin(), TEXT("Location"), sizeof(FLocation), Get_Z_Construct_UScriptStruct_FLocation_Hash());
	}
	return Singleton;
}
template<> EXPERIMENTPLUGIN_API UScriptStruct* StaticStruct<FLocation>()
{
	return FLocation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocation(FLocation::StaticStruct, TEXT("/Script/ExperimentPlugin"), TEXT("Location"), false, nullptr, nullptr);
static struct FScriptStruct_ExperimentPlugin_StaticRegisterNativesFLocation
{
	FScriptStruct_ExperimentPlugin_StaticRegisterNativesFLocation()
	{
		UScriptStruct::DeferCppStructOps<FLocation>(FName(TEXT("Location")));
	}
} ScriptStruct_ExperimentPlugin_StaticRegisterNativesFLocation;
	struct Z_Construct_UScriptStruct_FLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocation_Statics::NewProp_x_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocation_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocation, x), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocation_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocation_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocation_Statics::NewProp_y_MetaData[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/Structs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocation_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocation, y), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocation_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocation_Statics::NewProp_y_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocation_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocation_Statics::NewProp_y,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentPlugin,
		nullptr,
		&NewStructOps,
		"Location",
		sizeof(FLocation),
		alignof(FLocation),
		Z_Construct_UScriptStruct_FLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExperimentPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Location"), sizeof(FLocation), Get_Z_Construct_UScriptStruct_FLocation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocation_Hash() { return 1721327497U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
