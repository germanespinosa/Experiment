// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExperimentPlugin/Public/ExperimentUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExperimentUtils() {}
// Cross Module References
	EXPERIMENTPLUGIN_API UClass* Z_Construct_UClass_UExperimentUtils_NoRegister();
	EXPERIMENTPLUGIN_API UClass* Z_Construct_UClass_UExperimentUtils();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ExperimentPlugin();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAgentState();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoordinates();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFinishEpisodeRequest();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFinishEpisodeResponse();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCellGroup();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLocation3();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRotation3();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FShape();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSpace();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStartEpisodeRequest();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStartEpisodeResponse();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStep();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransformation();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateGhostMovementMessage();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWorldImplementation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
	DEFINE_FUNCTION(UExperimentUtils::execLoadOcclusions)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_UBOOL_REF(Z_Param_Out_readStatus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_mapLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLocation>*)Z_Param__Result=UExperimentUtils::LoadOcclusions(Z_Param_filePath,Z_Param_Out_readStatus,Z_Param_mapLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execJsonStringToCellGroup)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCellGroup*)Z_Param__Result=UExperimentUtils::JsonStringToCellGroup(Z_Param_jsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execJsonStringToStep)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FStep*)Z_Param__Result=UExperimentUtils::JsonStringToStep(Z_Param_jsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execupdateTimeStamp)
	{
		P_GET_STRUCT(FDateTime,Z_Param_episodeStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UExperimentUtils::updateTimeStamp(Z_Param_episodeStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execupdateFrame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Frame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UExperimentUtils::updateFrame(Z_Param_Frame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execcanonicalToVr)
	{
		P_GET_STRUCT(FLocation,Z_Param_canonicalCoordinates);
		P_GET_PROPERTY(FFloatProperty,Z_Param_mapLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UExperimentUtils::canonicalToVr(Z_Param_canonicalCoordinates,Z_Param_mapLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execvrToCanonical)
	{
		P_GET_STRUCT(FVector,Z_Param_vrCoordinates);
		P_GET_PROPERTY(FFloatProperty,Z_Param_mapLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLocation*)Z_Param__Result=UExperimentUtils::vrToCanonical(Z_Param_vrCoordinates,Z_Param_mapLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execUpdateGhostMovementMessageToJsonString)
	{
		P_GET_STRUCT(FUpdateGhostMovementMessage,Z_Param_structInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UExperimentUtils::UpdateGhostMovementMessageToJsonString(Z_Param_structInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execJsonStringToUpdateGhostMovementMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUpdateGhostMovementMessage*)Z_Param__Result=UExperimentUtils::JsonStringToUpdateGhostMovementMessage(Z_Param_jsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execFinishEpisodeResponseToJsonString)
	{
		P_GET_STRUCT(FFinishEpisodeResponse,Z_Param_structInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UExperimentUtils::FinishEpisodeResponseToJsonString(Z_Param_structInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execJsonStringToFinishEpisodeResponse)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFinishEpisodeResponse*)Z_Param__Result=UExperimentUtils::JsonStringToFinishEpisodeResponse(Z_Param_jsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execFinishEpisodeRequestToJsonString)
	{
		P_GET_STRUCT(FFinishEpisodeRequest,Z_Param_structInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UExperimentUtils::FinishEpisodeRequestToJsonString(Z_Param_structInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execJsonStringToFinishEpisodeRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFinishEpisodeRequest*)Z_Param__Result=UExperimentUtils::JsonStringToFinishEpisodeRequest(Z_Param_jsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execStartEpisodeResponseToJsonString)
	{
		P_GET_STRUCT(FStartEpisodeResponse,Z_Param_structInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UExperimentUtils::StartEpisodeResponseToJsonString(Z_Param_structInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execJsonStringToStartEpisodeResponse)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FStartEpisodeResponse*)Z_Param__Result=UExperimentUtils::JsonStringToStartEpisodeResponse(Z_Param_jsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execStartEpisodeRequestToJsonString)
	{
		P_GET_STRUCT(FStartEpisodeRequest,Z_Param_structInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UExperimentUtils::StartEpisodeRequestToJsonString(Z_Param_structInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execJsonStringToStartEpisodeRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FStartEpisodeRequest*)Z_Param__Result=UExperimentUtils::JsonStringToStartEpisodeRequest(Z_Param_jsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execTransformationToJsonString)
	{
		P_GET_STRUCT(FTransformation,Z_Param_structInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UExperimentUtils::TransformationToJsonString(Z_Param_structInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execJsonStringToTransformation)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransformation*)Z_Param__Result=UExperimentUtils::JsonStringToTransformation(Z_Param_jsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execRotation3ToJsonString)
	{
		P_GET_STRUCT(FRotation3,Z_Param_structInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UExperimentUtils::Rotation3ToJsonString(Z_Param_structInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execJsonStringToRotation3)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotation3*)Z_Param__Result=UExperimentUtils::JsonStringToRotation3(Z_Param_jsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execLocation3ToJsonString)
	{
		P_GET_STRUCT(FLocation3,Z_Param_structInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UExperimentUtils::Location3ToJsonString(Z_Param_structInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execJsonStringToLocation3)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLocation3*)Z_Param__Result=UExperimentUtils::JsonStringToLocation3(Z_Param_jsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execWorldImplementationToJsonString)
	{
		P_GET_STRUCT(FWorldImplementation,Z_Param_structInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UExperimentUtils::WorldImplementationToJsonString(Z_Param_structInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execJsonStringToWorldImplementation)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWorldImplementation*)Z_Param__Result=UExperimentUtils::JsonStringToWorldImplementation(Z_Param_jsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execSpaceToJsonString)
	{
		P_GET_STRUCT(FSpace,Z_Param_structInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UExperimentUtils::SpaceToJsonString(Z_Param_structInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execJsonStringToSpace)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSpace*)Z_Param__Result=UExperimentUtils::JsonStringToSpace(Z_Param_jsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execShapeToJsonString)
	{
		P_GET_STRUCT(FShape,Z_Param_structInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UExperimentUtils::ShapeToJsonString(Z_Param_structInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execJsonStringToShape)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FShape*)Z_Param__Result=UExperimentUtils::JsonStringToShape(Z_Param_jsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execLocationToJsonString)
	{
		P_GET_STRUCT(FLocation,Z_Param_structInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UExperimentUtils::LocationToJsonString(Z_Param_structInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execJsonStringToLocation)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLocation*)Z_Param__Result=UExperimentUtils::JsonStringToLocation(Z_Param_jsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execCoordinatesToJsonString)
	{
		P_GET_STRUCT(FCoordinates,Z_Param_structInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UExperimentUtils::CoordinatesToJsonString(Z_Param_structInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execJsonStringToCoordinates)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoordinates*)Z_Param__Result=UExperimentUtils::JsonStringToCoordinates(Z_Param_jsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execAgentStateToJsonString)
	{
		P_GET_STRUCT(FAgentState,Z_Param_structInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UExperimentUtils::AgentStateToJsonString(Z_Param_structInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExperimentUtils::execJsonStringToAgentState)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAgentState*)Z_Param__Result=UExperimentUtils::JsonStringToAgentState(Z_Param_jsonString);
		P_NATIVE_END;
	}
	void UExperimentUtils::StaticRegisterNativesUExperimentUtils()
	{
		UClass* Class = UExperimentUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AgentStateToJsonString", &UExperimentUtils::execAgentStateToJsonString },
			{ "canonicalToVr", &UExperimentUtils::execcanonicalToVr },
			{ "CoordinatesToJsonString", &UExperimentUtils::execCoordinatesToJsonString },
			{ "FinishEpisodeRequestToJsonString", &UExperimentUtils::execFinishEpisodeRequestToJsonString },
			{ "FinishEpisodeResponseToJsonString", &UExperimentUtils::execFinishEpisodeResponseToJsonString },
			{ "JsonStringToAgentState", &UExperimentUtils::execJsonStringToAgentState },
			{ "JsonStringToCellGroup", &UExperimentUtils::execJsonStringToCellGroup },
			{ "JsonStringToCoordinates", &UExperimentUtils::execJsonStringToCoordinates },
			{ "JsonStringToFinishEpisodeRequest", &UExperimentUtils::execJsonStringToFinishEpisodeRequest },
			{ "JsonStringToFinishEpisodeResponse", &UExperimentUtils::execJsonStringToFinishEpisodeResponse },
			{ "JsonStringToLocation", &UExperimentUtils::execJsonStringToLocation },
			{ "JsonStringToLocation3", &UExperimentUtils::execJsonStringToLocation3 },
			{ "JsonStringToRotation3", &UExperimentUtils::execJsonStringToRotation3 },
			{ "JsonStringToShape", &UExperimentUtils::execJsonStringToShape },
			{ "JsonStringToSpace", &UExperimentUtils::execJsonStringToSpace },
			{ "JsonStringToStartEpisodeRequest", &UExperimentUtils::execJsonStringToStartEpisodeRequest },
			{ "JsonStringToStartEpisodeResponse", &UExperimentUtils::execJsonStringToStartEpisodeResponse },
			{ "JsonStringToStep", &UExperimentUtils::execJsonStringToStep },
			{ "JsonStringToTransformation", &UExperimentUtils::execJsonStringToTransformation },
			{ "JsonStringToUpdateGhostMovementMessage", &UExperimentUtils::execJsonStringToUpdateGhostMovementMessage },
			{ "JsonStringToWorldImplementation", &UExperimentUtils::execJsonStringToWorldImplementation },
			{ "LoadOcclusions", &UExperimentUtils::execLoadOcclusions },
			{ "Location3ToJsonString", &UExperimentUtils::execLocation3ToJsonString },
			{ "LocationToJsonString", &UExperimentUtils::execLocationToJsonString },
			{ "Rotation3ToJsonString", &UExperimentUtils::execRotation3ToJsonString },
			{ "ShapeToJsonString", &UExperimentUtils::execShapeToJsonString },
			{ "SpaceToJsonString", &UExperimentUtils::execSpaceToJsonString },
			{ "StartEpisodeRequestToJsonString", &UExperimentUtils::execStartEpisodeRequestToJsonString },
			{ "StartEpisodeResponseToJsonString", &UExperimentUtils::execStartEpisodeResponseToJsonString },
			{ "TransformationToJsonString", &UExperimentUtils::execTransformationToJsonString },
			{ "updateFrame", &UExperimentUtils::execupdateFrame },
			{ "UpdateGhostMovementMessageToJsonString", &UExperimentUtils::execUpdateGhostMovementMessageToJsonString },
			{ "updateTimeStamp", &UExperimentUtils::execupdateTimeStamp },
			{ "vrToCanonical", &UExperimentUtils::execvrToCanonical },
			{ "WorldImplementationToJsonString", &UExperimentUtils::execWorldImplementationToJsonString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExperimentUtils_AgentStateToJsonString_Statics
	{
		struct ExperimentUtils_eventAgentStateToJsonString_Parms
		{
			FAgentState structInput;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_structInput;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_AgentStateToJsonString_Statics::NewProp_structInput = { "structInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventAgentStateToJsonString_Parms, structInput), Z_Construct_UScriptStruct_FAgentState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_AgentStateToJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventAgentStateToJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_AgentStateToJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_AgentStateToJsonString_Statics::NewProp_structInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_AgentStateToJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_AgentStateToJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_AgentStateToJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "AgentStateToJsonString", nullptr, nullptr, sizeof(ExperimentUtils_eventAgentStateToJsonString_Parms), Z_Construct_UFunction_UExperimentUtils_AgentStateToJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_AgentStateToJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_AgentStateToJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_AgentStateToJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_AgentStateToJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_AgentStateToJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_canonicalToVr_Statics
	{
		struct ExperimentUtils_eventcanonicalToVr_Parms
		{
			FLocation canonicalCoordinates;
			float mapLength;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_canonicalCoordinates;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mapLength;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_canonicalToVr_Statics::NewProp_canonicalCoordinates = { "canonicalCoordinates", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventcanonicalToVr_Parms, canonicalCoordinates), Z_Construct_UScriptStruct_FLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExperimentUtils_canonicalToVr_Statics::NewProp_mapLength = { "mapLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventcanonicalToVr_Parms, mapLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_canonicalToVr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventcanonicalToVr_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_canonicalToVr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_canonicalToVr_Statics::NewProp_canonicalCoordinates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_canonicalToVr_Statics::NewProp_mapLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_canonicalToVr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_canonicalToVr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_canonicalToVr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "canonicalToVr", nullptr, nullptr, sizeof(ExperimentUtils_eventcanonicalToVr_Parms), Z_Construct_UFunction_UExperimentUtils_canonicalToVr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_canonicalToVr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_canonicalToVr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_canonicalToVr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_canonicalToVr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_canonicalToVr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_CoordinatesToJsonString_Statics
	{
		struct ExperimentUtils_eventCoordinatesToJsonString_Parms
		{
			FCoordinates structInput;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_structInput;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_CoordinatesToJsonString_Statics::NewProp_structInput = { "structInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventCoordinatesToJsonString_Parms, structInput), Z_Construct_UScriptStruct_FCoordinates, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_CoordinatesToJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventCoordinatesToJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_CoordinatesToJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_CoordinatesToJsonString_Statics::NewProp_structInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_CoordinatesToJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_CoordinatesToJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_CoordinatesToJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "CoordinatesToJsonString", nullptr, nullptr, sizeof(ExperimentUtils_eventCoordinatesToJsonString_Parms), Z_Construct_UFunction_UExperimentUtils_CoordinatesToJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_CoordinatesToJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_CoordinatesToJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_CoordinatesToJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_CoordinatesToJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_CoordinatesToJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_FinishEpisodeRequestToJsonString_Statics
	{
		struct ExperimentUtils_eventFinishEpisodeRequestToJsonString_Parms
		{
			FFinishEpisodeRequest structInput;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_structInput;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_FinishEpisodeRequestToJsonString_Statics::NewProp_structInput = { "structInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventFinishEpisodeRequestToJsonString_Parms, structInput), Z_Construct_UScriptStruct_FFinishEpisodeRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_FinishEpisodeRequestToJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventFinishEpisodeRequestToJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_FinishEpisodeRequestToJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_FinishEpisodeRequestToJsonString_Statics::NewProp_structInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_FinishEpisodeRequestToJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_FinishEpisodeRequestToJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_FinishEpisodeRequestToJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "FinishEpisodeRequestToJsonString", nullptr, nullptr, sizeof(ExperimentUtils_eventFinishEpisodeRequestToJsonString_Parms), Z_Construct_UFunction_UExperimentUtils_FinishEpisodeRequestToJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_FinishEpisodeRequestToJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_FinishEpisodeRequestToJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_FinishEpisodeRequestToJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_FinishEpisodeRequestToJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_FinishEpisodeRequestToJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_FinishEpisodeResponseToJsonString_Statics
	{
		struct ExperimentUtils_eventFinishEpisodeResponseToJsonString_Parms
		{
			FFinishEpisodeResponse structInput;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_structInput;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_FinishEpisodeResponseToJsonString_Statics::NewProp_structInput = { "structInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventFinishEpisodeResponseToJsonString_Parms, structInput), Z_Construct_UScriptStruct_FFinishEpisodeResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_FinishEpisodeResponseToJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventFinishEpisodeResponseToJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_FinishEpisodeResponseToJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_FinishEpisodeResponseToJsonString_Statics::NewProp_structInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_FinishEpisodeResponseToJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_FinishEpisodeResponseToJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_FinishEpisodeResponseToJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "FinishEpisodeResponseToJsonString", nullptr, nullptr, sizeof(ExperimentUtils_eventFinishEpisodeResponseToJsonString_Parms), Z_Construct_UFunction_UExperimentUtils_FinishEpisodeResponseToJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_FinishEpisodeResponseToJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_FinishEpisodeResponseToJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_FinishEpisodeResponseToJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_FinishEpisodeResponseToJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_FinishEpisodeResponseToJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_JsonStringToAgentState_Statics
	{
		struct ExperimentUtils_eventJsonStringToAgentState_Parms
		{
			FString jsonString;
			FAgentState ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToAgentState_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToAgentState_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToAgentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToAgentState_Parms, ReturnValue), Z_Construct_UScriptStruct_FAgentState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_JsonStringToAgentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToAgentState_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToAgentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_JsonStringToAgentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_JsonStringToAgentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "JsonStringToAgentState", nullptr, nullptr, sizeof(ExperimentUtils_eventJsonStringToAgentState_Parms), Z_Construct_UFunction_UExperimentUtils_JsonStringToAgentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToAgentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_JsonStringToAgentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToAgentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_JsonStringToAgentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_JsonStringToAgentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_JsonStringToCellGroup_Statics
	{
		struct ExperimentUtils_eventJsonStringToCellGroup_Parms
		{
			FString jsonString;
			FCellGroup ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToCellGroup_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToCellGroup_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToCellGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToCellGroup_Parms, ReturnValue), Z_Construct_UScriptStruct_FCellGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_JsonStringToCellGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToCellGroup_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToCellGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_JsonStringToCellGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_JsonStringToCellGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "JsonStringToCellGroup", nullptr, nullptr, sizeof(ExperimentUtils_eventJsonStringToCellGroup_Parms), Z_Construct_UFunction_UExperimentUtils_JsonStringToCellGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToCellGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_JsonStringToCellGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToCellGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_JsonStringToCellGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_JsonStringToCellGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_JsonStringToCoordinates_Statics
	{
		struct ExperimentUtils_eventJsonStringToCoordinates_Parms
		{
			FString jsonString;
			FCoordinates ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToCoordinates_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToCoordinates_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToCoordinates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToCoordinates_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoordinates, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_JsonStringToCoordinates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToCoordinates_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToCoordinates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_JsonStringToCoordinates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_JsonStringToCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "JsonStringToCoordinates", nullptr, nullptr, sizeof(ExperimentUtils_eventJsonStringToCoordinates_Parms), Z_Construct_UFunction_UExperimentUtils_JsonStringToCoordinates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToCoordinates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_JsonStringToCoordinates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_JsonStringToCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_JsonStringToCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeRequest_Statics
	{
		struct ExperimentUtils_eventJsonStringToFinishEpisodeRequest_Parms
		{
			FString jsonString;
			FFinishEpisodeRequest ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeRequest_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToFinishEpisodeRequest_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToFinishEpisodeRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FFinishEpisodeRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeRequest_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "JsonStringToFinishEpisodeRequest", nullptr, nullptr, sizeof(ExperimentUtils_eventJsonStringToFinishEpisodeRequest_Parms), Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeResponse_Statics
	{
		struct ExperimentUtils_eventJsonStringToFinishEpisodeResponse_Parms
		{
			FString jsonString;
			FFinishEpisodeResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeResponse_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToFinishEpisodeResponse_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToFinishEpisodeResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FFinishEpisodeResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeResponse_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "JsonStringToFinishEpisodeResponse", nullptr, nullptr, sizeof(ExperimentUtils_eventJsonStringToFinishEpisodeResponse_Parms), Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation_Statics
	{
		struct ExperimentUtils_eventJsonStringToLocation_Parms
		{
			FString jsonString;
			FLocation ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToLocation_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "JsonStringToLocation", nullptr, nullptr, sizeof(ExperimentUtils_eventJsonStringToLocation_Parms), Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation3_Statics
	{
		struct ExperimentUtils_eventJsonStringToLocation3_Parms
		{
			FString jsonString;
			FLocation3 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation3_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToLocation3_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation3_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToLocation3_Parms, ReturnValue), Z_Construct_UScriptStruct_FLocation3, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation3_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation3_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation3_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "JsonStringToLocation3", nullptr, nullptr, sizeof(ExperimentUtils_eventJsonStringToLocation3_Parms), Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_JsonStringToRotation3_Statics
	{
		struct ExperimentUtils_eventJsonStringToRotation3_Parms
		{
			FString jsonString;
			FRotation3 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToRotation3_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToRotation3_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToRotation3_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToRotation3_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotation3, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_JsonStringToRotation3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToRotation3_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToRotation3_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_JsonStringToRotation3_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_JsonStringToRotation3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "JsonStringToRotation3", nullptr, nullptr, sizeof(ExperimentUtils_eventJsonStringToRotation3_Parms), Z_Construct_UFunction_UExperimentUtils_JsonStringToRotation3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToRotation3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_JsonStringToRotation3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToRotation3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_JsonStringToRotation3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_JsonStringToRotation3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_JsonStringToShape_Statics
	{
		struct ExperimentUtils_eventJsonStringToShape_Parms
		{
			FString jsonString;
			FShape ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToShape_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToShape_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToShape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToShape_Parms, ReturnValue), Z_Construct_UScriptStruct_FShape, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_JsonStringToShape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToShape_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToShape_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_JsonStringToShape_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_JsonStringToShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "JsonStringToShape", nullptr, nullptr, sizeof(ExperimentUtils_eventJsonStringToShape_Parms), Z_Construct_UFunction_UExperimentUtils_JsonStringToShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToShape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_JsonStringToShape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToShape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_JsonStringToShape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_JsonStringToShape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_JsonStringToSpace_Statics
	{
		struct ExperimentUtils_eventJsonStringToSpace_Parms
		{
			FString jsonString;
			FSpace ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToSpace_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToSpace_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToSpace_Parms, ReturnValue), Z_Construct_UScriptStruct_FSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_JsonStringToSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToSpace_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_JsonStringToSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_JsonStringToSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "JsonStringToSpace", nullptr, nullptr, sizeof(ExperimentUtils_eventJsonStringToSpace_Parms), Z_Construct_UFunction_UExperimentUtils_JsonStringToSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_JsonStringToSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_JsonStringToSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_JsonStringToSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeRequest_Statics
	{
		struct ExperimentUtils_eventJsonStringToStartEpisodeRequest_Parms
		{
			FString jsonString;
			FStartEpisodeRequest ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeRequest_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToStartEpisodeRequest_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToStartEpisodeRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FStartEpisodeRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeRequest_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "JsonStringToStartEpisodeRequest", nullptr, nullptr, sizeof(ExperimentUtils_eventJsonStringToStartEpisodeRequest_Parms), Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeResponse_Statics
	{
		struct ExperimentUtils_eventJsonStringToStartEpisodeResponse_Parms
		{
			FString jsonString;
			FStartEpisodeResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeResponse_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToStartEpisodeResponse_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToStartEpisodeResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FStartEpisodeResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeResponse_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "JsonStringToStartEpisodeResponse", nullptr, nullptr, sizeof(ExperimentUtils_eventJsonStringToStartEpisodeResponse_Parms), Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_JsonStringToStep_Statics
	{
		struct ExperimentUtils_eventJsonStringToStep_Parms
		{
			FString jsonString;
			FStep ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToStep_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToStep_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToStep_Parms, ReturnValue), Z_Construct_UScriptStruct_FStep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_JsonStringToStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToStep_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_JsonStringToStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_JsonStringToStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "JsonStringToStep", nullptr, nullptr, sizeof(ExperimentUtils_eventJsonStringToStep_Parms), Z_Construct_UFunction_UExperimentUtils_JsonStringToStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_JsonStringToStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_JsonStringToStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_JsonStringToStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_JsonStringToTransformation_Statics
	{
		struct ExperimentUtils_eventJsonStringToTransformation_Parms
		{
			FString jsonString;
			FTransformation ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToTransformation_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToTransformation_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToTransformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToTransformation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransformation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_JsonStringToTransformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToTransformation_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToTransformation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_JsonStringToTransformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_JsonStringToTransformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "JsonStringToTransformation", nullptr, nullptr, sizeof(ExperimentUtils_eventJsonStringToTransformation_Parms), Z_Construct_UFunction_UExperimentUtils_JsonStringToTransformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToTransformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_JsonStringToTransformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToTransformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_JsonStringToTransformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_JsonStringToTransformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_JsonStringToUpdateGhostMovementMessage_Statics
	{
		struct ExperimentUtils_eventJsonStringToUpdateGhostMovementMessage_Parms
		{
			FString jsonString;
			FUpdateGhostMovementMessage ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToUpdateGhostMovementMessage_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToUpdateGhostMovementMessage_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToUpdateGhostMovementMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToUpdateGhostMovementMessage_Parms, ReturnValue), Z_Construct_UScriptStruct_FUpdateGhostMovementMessage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_JsonStringToUpdateGhostMovementMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToUpdateGhostMovementMessage_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToUpdateGhostMovementMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_JsonStringToUpdateGhostMovementMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_JsonStringToUpdateGhostMovementMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "JsonStringToUpdateGhostMovementMessage", nullptr, nullptr, sizeof(ExperimentUtils_eventJsonStringToUpdateGhostMovementMessage_Parms), Z_Construct_UFunction_UExperimentUtils_JsonStringToUpdateGhostMovementMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToUpdateGhostMovementMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_JsonStringToUpdateGhostMovementMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToUpdateGhostMovementMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_JsonStringToUpdateGhostMovementMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_JsonStringToUpdateGhostMovementMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_JsonStringToWorldImplementation_Statics
	{
		struct ExperimentUtils_eventJsonStringToWorldImplementation_Parms
		{
			FString jsonString;
			FWorldImplementation ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToWorldImplementation_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToWorldImplementation_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_JsonStringToWorldImplementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventJsonStringToWorldImplementation_Parms, ReturnValue), Z_Construct_UScriptStruct_FWorldImplementation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_JsonStringToWorldImplementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToWorldImplementation_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_JsonStringToWorldImplementation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_JsonStringToWorldImplementation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_JsonStringToWorldImplementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "JsonStringToWorldImplementation", nullptr, nullptr, sizeof(ExperimentUtils_eventJsonStringToWorldImplementation_Parms), Z_Construct_UFunction_UExperimentUtils_JsonStringToWorldImplementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToWorldImplementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_JsonStringToWorldImplementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_JsonStringToWorldImplementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_JsonStringToWorldImplementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_JsonStringToWorldImplementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics
	{
		struct ExperimentUtils_eventLoadOcclusions_Parms
		{
			FString filePath;
			bool readStatus;
			float mapLength;
			TArray<FLocation> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_readStatus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_readStatus;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mapLength;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventLoadOcclusions_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics::NewProp_readStatus_SetBit(void* Obj)
	{
		((ExperimentUtils_eventLoadOcclusions_Parms*)Obj)->readStatus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics::NewProp_readStatus = { "readStatus", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExperimentUtils_eventLoadOcclusions_Parms), &Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics::NewProp_readStatus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics::NewProp_mapLength = { "mapLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventLoadOcclusions_Parms, mapLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventLoadOcclusions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics::NewProp_filePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics::NewProp_readStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics::NewProp_mapLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "LoadOcclusions", nullptr, nullptr, sizeof(ExperimentUtils_eventLoadOcclusions_Parms), Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_LoadOcclusions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_LoadOcclusions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_Location3ToJsonString_Statics
	{
		struct ExperimentUtils_eventLocation3ToJsonString_Parms
		{
			FLocation3 structInput;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_structInput;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_Location3ToJsonString_Statics::NewProp_structInput = { "structInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventLocation3ToJsonString_Parms, structInput), Z_Construct_UScriptStruct_FLocation3, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_Location3ToJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventLocation3ToJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_Location3ToJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_Location3ToJsonString_Statics::NewProp_structInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_Location3ToJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_Location3ToJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_Location3ToJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "Location3ToJsonString", nullptr, nullptr, sizeof(ExperimentUtils_eventLocation3ToJsonString_Parms), Z_Construct_UFunction_UExperimentUtils_Location3ToJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_Location3ToJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_Location3ToJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_Location3ToJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_Location3ToJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_Location3ToJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_LocationToJsonString_Statics
	{
		struct ExperimentUtils_eventLocationToJsonString_Parms
		{
			FLocation structInput;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_structInput;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_LocationToJsonString_Statics::NewProp_structInput = { "structInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventLocationToJsonString_Parms, structInput), Z_Construct_UScriptStruct_FLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_LocationToJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventLocationToJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_LocationToJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_LocationToJsonString_Statics::NewProp_structInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_LocationToJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_LocationToJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_LocationToJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "LocationToJsonString", nullptr, nullptr, sizeof(ExperimentUtils_eventLocationToJsonString_Parms), Z_Construct_UFunction_UExperimentUtils_LocationToJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_LocationToJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_LocationToJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_LocationToJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_LocationToJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_LocationToJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_Rotation3ToJsonString_Statics
	{
		struct ExperimentUtils_eventRotation3ToJsonString_Parms
		{
			FRotation3 structInput;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_structInput;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_Rotation3ToJsonString_Statics::NewProp_structInput = { "structInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventRotation3ToJsonString_Parms, structInput), Z_Construct_UScriptStruct_FRotation3, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_Rotation3ToJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventRotation3ToJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_Rotation3ToJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_Rotation3ToJsonString_Statics::NewProp_structInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_Rotation3ToJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_Rotation3ToJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_Rotation3ToJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "Rotation3ToJsonString", nullptr, nullptr, sizeof(ExperimentUtils_eventRotation3ToJsonString_Parms), Z_Construct_UFunction_UExperimentUtils_Rotation3ToJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_Rotation3ToJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_Rotation3ToJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_Rotation3ToJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_Rotation3ToJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_Rotation3ToJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_ShapeToJsonString_Statics
	{
		struct ExperimentUtils_eventShapeToJsonString_Parms
		{
			FShape structInput;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_structInput;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_ShapeToJsonString_Statics::NewProp_structInput = { "structInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventShapeToJsonString_Parms, structInput), Z_Construct_UScriptStruct_FShape, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_ShapeToJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventShapeToJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_ShapeToJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_ShapeToJsonString_Statics::NewProp_structInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_ShapeToJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_ShapeToJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_ShapeToJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "ShapeToJsonString", nullptr, nullptr, sizeof(ExperimentUtils_eventShapeToJsonString_Parms), Z_Construct_UFunction_UExperimentUtils_ShapeToJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_ShapeToJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_ShapeToJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_ShapeToJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_ShapeToJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_ShapeToJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_SpaceToJsonString_Statics
	{
		struct ExperimentUtils_eventSpaceToJsonString_Parms
		{
			FSpace structInput;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_structInput;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_SpaceToJsonString_Statics::NewProp_structInput = { "structInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventSpaceToJsonString_Parms, structInput), Z_Construct_UScriptStruct_FSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_SpaceToJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventSpaceToJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_SpaceToJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_SpaceToJsonString_Statics::NewProp_structInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_SpaceToJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_SpaceToJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_SpaceToJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "SpaceToJsonString", nullptr, nullptr, sizeof(ExperimentUtils_eventSpaceToJsonString_Parms), Z_Construct_UFunction_UExperimentUtils_SpaceToJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_SpaceToJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_SpaceToJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_SpaceToJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_SpaceToJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_SpaceToJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_StartEpisodeRequestToJsonString_Statics
	{
		struct ExperimentUtils_eventStartEpisodeRequestToJsonString_Parms
		{
			FStartEpisodeRequest structInput;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_structInput;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_StartEpisodeRequestToJsonString_Statics::NewProp_structInput = { "structInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventStartEpisodeRequestToJsonString_Parms, structInput), Z_Construct_UScriptStruct_FStartEpisodeRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_StartEpisodeRequestToJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventStartEpisodeRequestToJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_StartEpisodeRequestToJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_StartEpisodeRequestToJsonString_Statics::NewProp_structInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_StartEpisodeRequestToJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_StartEpisodeRequestToJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_StartEpisodeRequestToJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "StartEpisodeRequestToJsonString", nullptr, nullptr, sizeof(ExperimentUtils_eventStartEpisodeRequestToJsonString_Parms), Z_Construct_UFunction_UExperimentUtils_StartEpisodeRequestToJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_StartEpisodeRequestToJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_StartEpisodeRequestToJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_StartEpisodeRequestToJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_StartEpisodeRequestToJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_StartEpisodeRequestToJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_StartEpisodeResponseToJsonString_Statics
	{
		struct ExperimentUtils_eventStartEpisodeResponseToJsonString_Parms
		{
			FStartEpisodeResponse structInput;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_structInput;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_StartEpisodeResponseToJsonString_Statics::NewProp_structInput = { "structInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventStartEpisodeResponseToJsonString_Parms, structInput), Z_Construct_UScriptStruct_FStartEpisodeResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_StartEpisodeResponseToJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventStartEpisodeResponseToJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_StartEpisodeResponseToJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_StartEpisodeResponseToJsonString_Statics::NewProp_structInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_StartEpisodeResponseToJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_StartEpisodeResponseToJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_StartEpisodeResponseToJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "StartEpisodeResponseToJsonString", nullptr, nullptr, sizeof(ExperimentUtils_eventStartEpisodeResponseToJsonString_Parms), Z_Construct_UFunction_UExperimentUtils_StartEpisodeResponseToJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_StartEpisodeResponseToJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_StartEpisodeResponseToJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_StartEpisodeResponseToJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_StartEpisodeResponseToJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_StartEpisodeResponseToJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_TransformationToJsonString_Statics
	{
		struct ExperimentUtils_eventTransformationToJsonString_Parms
		{
			FTransformation structInput;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_structInput;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_TransformationToJsonString_Statics::NewProp_structInput = { "structInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventTransformationToJsonString_Parms, structInput), Z_Construct_UScriptStruct_FTransformation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_TransformationToJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventTransformationToJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_TransformationToJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_TransformationToJsonString_Statics::NewProp_structInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_TransformationToJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_TransformationToJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_TransformationToJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "TransformationToJsonString", nullptr, nullptr, sizeof(ExperimentUtils_eventTransformationToJsonString_Parms), Z_Construct_UFunction_UExperimentUtils_TransformationToJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_TransformationToJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_TransformationToJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_TransformationToJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_TransformationToJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_TransformationToJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_updateFrame_Statics
	{
		struct ExperimentUtils_eventupdateFrame_Parms
		{
			int32 Frame;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UExperimentUtils_updateFrame_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventupdateFrame_Parms, Frame), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UExperimentUtils_updateFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventupdateFrame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_updateFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_updateFrame_Statics::NewProp_Frame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_updateFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_updateFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_updateFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "updateFrame", nullptr, nullptr, sizeof(ExperimentUtils_eventupdateFrame_Parms), Z_Construct_UFunction_UExperimentUtils_updateFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_updateFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_updateFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_updateFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_updateFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_updateFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_UpdateGhostMovementMessageToJsonString_Statics
	{
		struct ExperimentUtils_eventUpdateGhostMovementMessageToJsonString_Parms
		{
			FUpdateGhostMovementMessage structInput;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_structInput;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_UpdateGhostMovementMessageToJsonString_Statics::NewProp_structInput = { "structInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventUpdateGhostMovementMessageToJsonString_Parms, structInput), Z_Construct_UScriptStruct_FUpdateGhostMovementMessage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_UpdateGhostMovementMessageToJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventUpdateGhostMovementMessageToJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_UpdateGhostMovementMessageToJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_UpdateGhostMovementMessageToJsonString_Statics::NewProp_structInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_UpdateGhostMovementMessageToJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_UpdateGhostMovementMessageToJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_UpdateGhostMovementMessageToJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "UpdateGhostMovementMessageToJsonString", nullptr, nullptr, sizeof(ExperimentUtils_eventUpdateGhostMovementMessageToJsonString_Parms), Z_Construct_UFunction_UExperimentUtils_UpdateGhostMovementMessageToJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_UpdateGhostMovementMessageToJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_UpdateGhostMovementMessageToJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_UpdateGhostMovementMessageToJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_UpdateGhostMovementMessageToJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_UpdateGhostMovementMessageToJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_updateTimeStamp_Statics
	{
		struct ExperimentUtils_eventupdateTimeStamp_Parms
		{
			FDateTime episodeStart;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_episodeStart;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_updateTimeStamp_Statics::NewProp_episodeStart = { "episodeStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventupdateTimeStamp_Parms, episodeStart), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExperimentUtils_updateTimeStamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventupdateTimeStamp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_updateTimeStamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_updateTimeStamp_Statics::NewProp_episodeStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_updateTimeStamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_updateTimeStamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_updateTimeStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "updateTimeStamp", nullptr, nullptr, sizeof(ExperimentUtils_eventupdateTimeStamp_Parms), Z_Construct_UFunction_UExperimentUtils_updateTimeStamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_updateTimeStamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_updateTimeStamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_updateTimeStamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_updateTimeStamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_updateTimeStamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_vrToCanonical_Statics
	{
		struct ExperimentUtils_eventvrToCanonical_Parms
		{
			FVector vrCoordinates;
			float mapLength;
			FLocation ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vrCoordinates;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mapLength;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_vrToCanonical_Statics::NewProp_vrCoordinates = { "vrCoordinates", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventvrToCanonical_Parms, vrCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExperimentUtils_vrToCanonical_Statics::NewProp_mapLength = { "mapLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventvrToCanonical_Parms, mapLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_vrToCanonical_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventvrToCanonical_Parms, ReturnValue), Z_Construct_UScriptStruct_FLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_vrToCanonical_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_vrToCanonical_Statics::NewProp_vrCoordinates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_vrToCanonical_Statics::NewProp_mapLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_vrToCanonical_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_vrToCanonical_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_vrToCanonical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "vrToCanonical", nullptr, nullptr, sizeof(ExperimentUtils_eventvrToCanonical_Parms), Z_Construct_UFunction_UExperimentUtils_vrToCanonical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_vrToCanonical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_vrToCanonical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_vrToCanonical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_vrToCanonical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_vrToCanonical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExperimentUtils_WorldImplementationToJsonString_Statics
	{
		struct ExperimentUtils_eventWorldImplementationToJsonString_Parms
		{
			FWorldImplementation structInput;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_structInput;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExperimentUtils_WorldImplementationToJsonString_Statics::NewProp_structInput = { "structInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventWorldImplementationToJsonString_Parms, structInput), Z_Construct_UScriptStruct_FWorldImplementation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExperimentUtils_WorldImplementationToJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExperimentUtils_eventWorldImplementationToJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperimentUtils_WorldImplementationToJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_WorldImplementationToJsonString_Statics::NewProp_structInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperimentUtils_WorldImplementationToJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperimentUtils_WorldImplementationToJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Experiment" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperimentUtils_WorldImplementationToJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperimentUtils, nullptr, "WorldImplementationToJsonString", nullptr, nullptr, sizeof(ExperimentUtils_eventWorldImplementationToJsonString_Parms), Z_Construct_UFunction_UExperimentUtils_WorldImplementationToJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_WorldImplementationToJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExperimentUtils_WorldImplementationToJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperimentUtils_WorldImplementationToJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExperimentUtils_WorldImplementationToJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExperimentUtils_WorldImplementationToJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExperimentUtils_NoRegister()
	{
		return UExperimentUtils::StaticClass();
	}
	struct Z_Construct_UClass_UExperimentUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExperimentUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExperimentUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExperimentUtils_AgentStateToJsonString, "AgentStateToJsonString" }, // 3425297254
		{ &Z_Construct_UFunction_UExperimentUtils_canonicalToVr, "canonicalToVr" }, // 2977806069
		{ &Z_Construct_UFunction_UExperimentUtils_CoordinatesToJsonString, "CoordinatesToJsonString" }, // 2332276949
		{ &Z_Construct_UFunction_UExperimentUtils_FinishEpisodeRequestToJsonString, "FinishEpisodeRequestToJsonString" }, // 1278413156
		{ &Z_Construct_UFunction_UExperimentUtils_FinishEpisodeResponseToJsonString, "FinishEpisodeResponseToJsonString" }, // 1648721739
		{ &Z_Construct_UFunction_UExperimentUtils_JsonStringToAgentState, "JsonStringToAgentState" }, // 4019016096
		{ &Z_Construct_UFunction_UExperimentUtils_JsonStringToCellGroup, "JsonStringToCellGroup" }, // 1369412708
		{ &Z_Construct_UFunction_UExperimentUtils_JsonStringToCoordinates, "JsonStringToCoordinates" }, // 4041105327
		{ &Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeRequest, "JsonStringToFinishEpisodeRequest" }, // 605802354
		{ &Z_Construct_UFunction_UExperimentUtils_JsonStringToFinishEpisodeResponse, "JsonStringToFinishEpisodeResponse" }, // 1484944562
		{ &Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation, "JsonStringToLocation" }, // 1587063107
		{ &Z_Construct_UFunction_UExperimentUtils_JsonStringToLocation3, "JsonStringToLocation3" }, // 1711006691
		{ &Z_Construct_UFunction_UExperimentUtils_JsonStringToRotation3, "JsonStringToRotation3" }, // 3811341958
		{ &Z_Construct_UFunction_UExperimentUtils_JsonStringToShape, "JsonStringToShape" }, // 4049160364
		{ &Z_Construct_UFunction_UExperimentUtils_JsonStringToSpace, "JsonStringToSpace" }, // 2600209432
		{ &Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeRequest, "JsonStringToStartEpisodeRequest" }, // 1921396302
		{ &Z_Construct_UFunction_UExperimentUtils_JsonStringToStartEpisodeResponse, "JsonStringToStartEpisodeResponse" }, // 3049800439
		{ &Z_Construct_UFunction_UExperimentUtils_JsonStringToStep, "JsonStringToStep" }, // 3008902525
		{ &Z_Construct_UFunction_UExperimentUtils_JsonStringToTransformation, "JsonStringToTransformation" }, // 3643020070
		{ &Z_Construct_UFunction_UExperimentUtils_JsonStringToUpdateGhostMovementMessage, "JsonStringToUpdateGhostMovementMessage" }, // 4141253072
		{ &Z_Construct_UFunction_UExperimentUtils_JsonStringToWorldImplementation, "JsonStringToWorldImplementation" }, // 3793486502
		{ &Z_Construct_UFunction_UExperimentUtils_LoadOcclusions, "LoadOcclusions" }, // 2229081205
		{ &Z_Construct_UFunction_UExperimentUtils_Location3ToJsonString, "Location3ToJsonString" }, // 1077071169
		{ &Z_Construct_UFunction_UExperimentUtils_LocationToJsonString, "LocationToJsonString" }, // 1291961262
		{ &Z_Construct_UFunction_UExperimentUtils_Rotation3ToJsonString, "Rotation3ToJsonString" }, // 3133047705
		{ &Z_Construct_UFunction_UExperimentUtils_ShapeToJsonString, "ShapeToJsonString" }, // 3063138780
		{ &Z_Construct_UFunction_UExperimentUtils_SpaceToJsonString, "SpaceToJsonString" }, // 2978716569
		{ &Z_Construct_UFunction_UExperimentUtils_StartEpisodeRequestToJsonString, "StartEpisodeRequestToJsonString" }, // 4082046167
		{ &Z_Construct_UFunction_UExperimentUtils_StartEpisodeResponseToJsonString, "StartEpisodeResponseToJsonString" }, // 2573744926
		{ &Z_Construct_UFunction_UExperimentUtils_TransformationToJsonString, "TransformationToJsonString" }, // 3208123554
		{ &Z_Construct_UFunction_UExperimentUtils_updateFrame, "updateFrame" }, // 4258147584
		{ &Z_Construct_UFunction_UExperimentUtils_UpdateGhostMovementMessageToJsonString, "UpdateGhostMovementMessageToJsonString" }, // 3462395616
		{ &Z_Construct_UFunction_UExperimentUtils_updateTimeStamp, "updateTimeStamp" }, // 719841583
		{ &Z_Construct_UFunction_UExperimentUtils_vrToCanonical, "vrToCanonical" }, // 1821945811
		{ &Z_Construct_UFunction_UExperimentUtils_WorldImplementationToJsonString, "WorldImplementationToJsonString" }, // 899747818
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExperimentUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExperimentUtils.h" },
		{ "ModuleRelativePath", "Public/ExperimentUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExperimentUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExperimentUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExperimentUtils_Statics::ClassParams = {
		&UExperimentUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExperimentUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExperimentUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExperimentUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExperimentUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExperimentUtils, 91976069);
	template<> EXPERIMENTPLUGIN_API UClass* StaticClass<UExperimentUtils>()
	{
		return UExperimentUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExperimentUtils(Z_Construct_UClass_UExperimentUtils, &UExperimentUtils::StaticClass, TEXT("/Script/ExperimentPlugin"), TEXT("UExperimentUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExperimentUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
