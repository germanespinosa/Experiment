// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLocation;
struct FCellGroup;
struct FStep;
struct FDateTime;
struct FVector;
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
struct FCoordinates;
struct FAgentState;
#ifdef EXPERIMENTPLUGIN_ExperimentUtils_generated_h
#error "ExperimentUtils.generated.h already included, missing '#pragma once' in ExperimentUtils.h"
#endif
#define EXPERIMENTPLUGIN_ExperimentUtils_generated_h

#define Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_13_SPARSE_DATA
#define Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadOcclusions); \
	DECLARE_FUNCTION(execJsonStringToCellGroup); \
	DECLARE_FUNCTION(execJsonStringToStep); \
	DECLARE_FUNCTION(execupdateTimeStamp); \
	DECLARE_FUNCTION(execupdateFrame); \
	DECLARE_FUNCTION(execcanonicalToVr); \
	DECLARE_FUNCTION(execvrToCanonical); \
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


#define Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadOcclusions); \
	DECLARE_FUNCTION(execJsonStringToCellGroup); \
	DECLARE_FUNCTION(execJsonStringToStep); \
	DECLARE_FUNCTION(execupdateTimeStamp); \
	DECLARE_FUNCTION(execupdateFrame); \
	DECLARE_FUNCTION(execcanonicalToVr); \
	DECLARE_FUNCTION(execvrToCanonical); \
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


#define Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExperimentUtils(); \
	friend struct Z_Construct_UClass_UExperimentUtils_Statics; \
public: \
	DECLARE_CLASS(UExperimentUtils, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExperimentPlugin"), NO_API) \
	DECLARE_SERIALIZER(UExperimentUtils)


#define Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUExperimentUtils(); \
	friend struct Z_Construct_UClass_UExperimentUtils_Statics; \
public: \
	DECLARE_CLASS(UExperimentUtils, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExperimentPlugin"), NO_API) \
	DECLARE_SERIALIZER(UExperimentUtils)


#define Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_13_STANDARD_CONSTRUCTORS \
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


#define Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_13_ENHANCED_CONSTRUCTORS \
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


#define Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_13_PRIVATE_PROPERTY_OFFSET
#define Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_10_PROLOG
#define Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_13_PRIVATE_PROPERTY_OFFSET \
	Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_13_SPARSE_DATA \
	Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_13_RPC_WRAPPERS \
	Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_13_INCLASS \
	Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_13_PRIVATE_PROPERTY_OFFSET \
	Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_13_SPARSE_DATA \
	Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_13_INCLASS_NO_PURE_DECLS \
	Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXPERIMENTPLUGIN_API UClass* StaticClass<class UExperimentUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Research_Plugins_ExperimentPlugin_Source_ExperimentPlugin_Public_ExperimentUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
