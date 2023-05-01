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
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoordinates();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFinishEpisodeRequest();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFinishEpisodeResponse();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLocation();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLocation3();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRotation3();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FShape();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSpace();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStartEpisodeRequest();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStartEpisodeResponse();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransformation();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateGhostMovementMessage();
	EXPERIMENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWorldImplementation();
// End Cross Module References
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
			{ "CoordinatesToJsonString", &UExperimentUtils::execCoordinatesToJsonString },
			{ "FinishEpisodeRequestToJsonString", &UExperimentUtils::execFinishEpisodeRequestToJsonString },
			{ "FinishEpisodeResponseToJsonString", &UExperimentUtils::execFinishEpisodeResponseToJsonString },
			{ "JsonStringToAgentState", &UExperimentUtils::execJsonStringToAgentState },
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
			{ "JsonStringToTransformation", &UExperimentUtils::execJsonStringToTransformation },
			{ "JsonStringToUpdateGhostMovementMessage", &UExperimentUtils::execJsonStringToUpdateGhostMovementMessage },
			{ "JsonStringToWorldImplementation", &UExperimentUtils::execJsonStringToWorldImplementation },
			{ "Location3ToJsonString", &UExperimentUtils::execLocation3ToJsonString },
			{ "LocationToJsonString", &UExperimentUtils::execLocationToJsonString },
			{ "Rotation3ToJsonString", &UExperimentUtils::execRotation3ToJsonString },
			{ "ShapeToJsonString", &UExperimentUtils::execShapeToJsonString },
			{ "SpaceToJsonString", &UExperimentUtils::execSpaceToJsonString },
			{ "StartEpisodeRequestToJsonString", &UExperimentUtils::execStartEpisodeRequestToJsonString },
			{ "StartEpisodeResponseToJsonString", &UExperimentUtils::execStartEpisodeResponseToJsonString },
			{ "TransformationToJsonString", &UExperimentUtils::execTransformationToJsonString },
			{ "UpdateGhostMovementMessageToJsonString", &UExperimentUtils::execUpdateGhostMovementMessageToJsonString },
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
		{ &Z_Construct_UFunction_UExperimentUtils_CoordinatesToJsonString, "CoordinatesToJsonString" }, // 2332276949
		{ &Z_Construct_UFunction_UExperimentUtils_FinishEpisodeRequestToJsonString, "FinishEpisodeRequestToJsonString" }, // 1278413156
		{ &Z_Construct_UFunction_UExperimentUtils_FinishEpisodeResponseToJsonString, "FinishEpisodeResponseToJsonString" }, // 1648721739
		{ &Z_Construct_UFunction_UExperimentUtils_JsonStringToAgentState, "JsonStringToAgentState" }, // 4019016096
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
		{ &Z_Construct_UFunction_UExperimentUtils_JsonStringToTransformation, "JsonStringToTransformation" }, // 3643020070
		{ &Z_Construct_UFunction_UExperimentUtils_JsonStringToUpdateGhostMovementMessage, "JsonStringToUpdateGhostMovementMessage" }, // 4141253072
		{ &Z_Construct_UFunction_UExperimentUtils_JsonStringToWorldImplementation, "JsonStringToWorldImplementation" }, // 3793486502
		{ &Z_Construct_UFunction_UExperimentUtils_Location3ToJsonString, "Location3ToJsonString" }, // 1077071169
		{ &Z_Construct_UFunction_UExperimentUtils_LocationToJsonString, "LocationToJsonString" }, // 1291961262
		{ &Z_Construct_UFunction_UExperimentUtils_Rotation3ToJsonString, "Rotation3ToJsonString" }, // 3133047705
		{ &Z_Construct_UFunction_UExperimentUtils_ShapeToJsonString, "ShapeToJsonString" }, // 3063138780
		{ &Z_Construct_UFunction_UExperimentUtils_SpaceToJsonString, "SpaceToJsonString" }, // 2978716569
		{ &Z_Construct_UFunction_UExperimentUtils_StartEpisodeRequestToJsonString, "StartEpisodeRequestToJsonString" }, // 4082046167
		{ &Z_Construct_UFunction_UExperimentUtils_StartEpisodeResponseToJsonString, "StartEpisodeResponseToJsonString" }, // 2573744926
		{ &Z_Construct_UFunction_UExperimentUtils_TransformationToJsonString, "TransformationToJsonString" }, // 3208123554
		{ &Z_Construct_UFunction_UExperimentUtils_UpdateGhostMovementMessageToJsonString, "UpdateGhostMovementMessageToJsonString" }, // 3462395616
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
	IMPLEMENT_CLASS(UExperimentUtils, 932537953);
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
