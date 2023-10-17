// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUpdateGhostMovementMessage;
struct FFinishEpisodeResponse;
struct FFinishEpisodeRequest;
struct FStartEpisodeResponse;
struct FStartEpisodeRequest;
struct FTransformation;
struct FRotation3;
struct FLocation3;
struct FWorldImplementation;
struct FSpace;
struct FShape;
struct FLocation;
struct FCoordinates;
struct FAgentState;
#ifdef EXPERIMENTPLUGIN_ExperimentUtils_generated_h
#error "ExperimentUtils.generated.h already included, missing '#pragma once' in ExperimentUtils.h"
#endif
#define EXPERIMENTPLUGIN_ExperimentUtils_generated_h

#define Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_9_SPARSE_DATA
#define Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateGhostMovementMessageToJsonString); \
	DECLARE_FUNCTION(execJsonStringToUpdateGhostMovementMessage); \
	DECLARE_FUNCTION(execFinishEpisodeResponseToJsonString); \
	DECLARE_FUNCTION(execJsonStringToFinishEpisodeResponse); \
	DECLARE_FUNCTION(execFinishEpisodeRequestToJsonString); \
	DECLARE_FUNCTION(execJsonStringToFinishEpisodeRequest); \
	DECLARE_FUNCTION(execStartEpisodeResponseToJsonString); \
	DECLARE_FUNCTION(execJsonStringToStartEpisodeResponse); \
	DECLARE_FUNCTION(execStartEpisodeRequestToJsonString); \
	DECLARE_FUNCTION(execJsonStringToStartEpisodeRequest); \
	DECLARE_FUNCTION(execTransformationToJsonString); \
	DECLARE_FUNCTION(execJsonStringToTransformation); \
	DECLARE_FUNCTION(execRotation3ToJsonString); \
	DECLARE_FUNCTION(execJsonStringToRotation3); \
	DECLARE_FUNCTION(execLocation3ToJsonString); \
	DECLARE_FUNCTION(execJsonStringToLocation3); \
	DECLARE_FUNCTION(execWorldImplementationToJsonString); \
	DECLARE_FUNCTION(execJsonStringToWorldImplementation); \
	DECLARE_FUNCTION(execSpaceToJsonString); \
	DECLARE_FUNCTION(execJsonStringToSpace); \
	DECLARE_FUNCTION(execShapeToJsonString); \
	DECLARE_FUNCTION(execJsonStringToShape); \
	DECLARE_FUNCTION(execLocationToJsonString); \
	DECLARE_FUNCTION(execJsonStringToLocation); \
	DECLARE_FUNCTION(execCoordinatesToJsonString); \
	DECLARE_FUNCTION(execJsonStringToCoordinates); \
	DECLARE_FUNCTION(execAgentStateToJsonString); \
	DECLARE_FUNCTION(execJsonStringToAgentState);


#define Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateGhostMovementMessageToJsonString); \
	DECLARE_FUNCTION(execJsonStringToUpdateGhostMovementMessage); \
	DECLARE_FUNCTION(execFinishEpisodeResponseToJsonString); \
	DECLARE_FUNCTION(execJsonStringToFinishEpisodeResponse); \
	DECLARE_FUNCTION(execFinishEpisodeRequestToJsonString); \
	DECLARE_FUNCTION(execJsonStringToFinishEpisodeRequest); \
	DECLARE_FUNCTION(execStartEpisodeResponseToJsonString); \
	DECLARE_FUNCTION(execJsonStringToStartEpisodeResponse); \
	DECLARE_FUNCTION(execStartEpisodeRequestToJsonString); \
	DECLARE_FUNCTION(execJsonStringToStartEpisodeRequest); \
	DECLARE_FUNCTION(execTransformationToJsonString); \
	DECLARE_FUNCTION(execJsonStringToTransformation); \
	DECLARE_FUNCTION(execRotation3ToJsonString); \
	DECLARE_FUNCTION(execJsonStringToRotation3); \
	DECLARE_FUNCTION(execLocation3ToJsonString); \
	DECLARE_FUNCTION(execJsonStringToLocation3); \
	DECLARE_FUNCTION(execWorldImplementationToJsonString); \
	DECLARE_FUNCTION(execJsonStringToWorldImplementation); \
	DECLARE_FUNCTION(execSpaceToJsonString); \
	DECLARE_FUNCTION(execJsonStringToSpace); \
	DECLARE_FUNCTION(execShapeToJsonString); \
	DECLARE_FUNCTION(execJsonStringToShape); \
	DECLARE_FUNCTION(execLocationToJsonString); \
	DECLARE_FUNCTION(execJsonStringToLocation); \
	DECLARE_FUNCTION(execCoordinatesToJsonString); \
	DECLARE_FUNCTION(execJsonStringToCoordinates); \
	DECLARE_FUNCTION(execAgentStateToJsonString); \
	DECLARE_FUNCTION(execJsonStringToAgentState);


#define Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExperimentUtils(); \
	friend struct Z_Construct_UClass_UExperimentUtils_Statics; \
public: \
	DECLARE_CLASS(UExperimentUtils, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExperimentPlugin"), NO_API) \
	DECLARE_SERIALIZER(UExperimentUtils)


#define Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUExperimentUtils(); \
	friend struct Z_Construct_UClass_UExperimentUtils_Statics; \
public: \
	DECLARE_CLASS(UExperimentUtils, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExperimentPlugin"), NO_API) \
	DECLARE_SERIALIZER(UExperimentUtils)


#define Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExperimentUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExperimentUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExperimentUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExperimentUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExperimentUtils(UExperimentUtils&&); \
	NO_API UExperimentUtils(const UExperimentUtils&); \
public:


#define Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExperimentUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExperimentUtils(UExperimentUtils&&); \
	NO_API UExperimentUtils(const UExperimentUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExperimentUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExperimentUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExperimentUtils)


#define Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_9_PRIVATE_PROPERTY_OFFSET
#define Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_6_PROLOG
#define Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_9_PRIVATE_PROPERTY_OFFSET \
	Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_9_SPARSE_DATA \
	Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_9_RPC_WRAPPERS \
	Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_9_INCLASS \
	Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_9_PRIVATE_PROPERTY_OFFSET \
	Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_9_SPARSE_DATA \
	Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_9_INCLASS_NO_PURE_DECLS \
	Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXPERIMENTPLUGIN_API UClass* StaticClass<class UExperimentUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Experiment_4_27_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
