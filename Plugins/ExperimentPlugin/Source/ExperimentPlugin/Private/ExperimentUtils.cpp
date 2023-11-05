#include "ExperimentUtils.h"

FAgentState UExperimentUtils::JsonStringToAgentState(FString jsonString) {
	FAgentState structOutput;
	FJsonObjectConverter::JsonObjectStringToUStruct(jsonString, &structOutput, 0, 0);
	return structOutput;
}

FString UExperimentUtils::AgentStateToJsonString(FAgentState structInput) {
	FString jsonString;
	FJsonObjectConverter::UStructToJsonObjectString(structInput, jsonString, 0, 0, 0);
	return jsonString;
}

FCoordinates UExperimentUtils::JsonStringToCoordinates(FString jsonString) {
	FCoordinates structOutput;
	FJsonObjectConverter::JsonObjectStringToUStruct(jsonString, &structOutput, 0, 0);
	return structOutput;
}

FString UExperimentUtils::CoordinatesToJsonString(FCoordinates structInput) {
	FString jsonString;
	FJsonObjectConverter::UStructToJsonObjectString(structInput, jsonString, 0, 0, 0);
	return jsonString;
}

FLocation UExperimentUtils::JsonStringToLocation(FString jsonString) {
	FLocation structOutput;
	FJsonObjectConverter::JsonObjectStringToUStruct(jsonString, &structOutput, 0, 0);
	return structOutput;
}

FString UExperimentUtils::LocationToJsonString(FLocation structInput) {
	FString jsonString;
	FJsonObjectConverter::UStructToJsonObjectString(structInput, jsonString, 0, 0, 0);
	return jsonString;
}

FShape UExperimentUtils::JsonStringToShape(FString jsonString) {
	FShape structOutput;
	FJsonObjectConverter::JsonObjectStringToUStruct(jsonString, &structOutput, 0, 0);
	return structOutput;
}

FString UExperimentUtils::ShapeToJsonString(FShape structInput) {
	FString jsonString;
	FJsonObjectConverter::UStructToJsonObjectString(structInput, jsonString, 0, 0, 0);
	return jsonString;
}

FSpace UExperimentUtils::JsonStringToSpace(FString jsonString) {
	FSpace structOutput;
	FJsonObjectConverter::JsonObjectStringToUStruct(jsonString, &structOutput, 0, 0);
	return structOutput;
}

FString UExperimentUtils::SpaceToJsonString(FSpace structInput) {
	FString jsonString;
	FJsonObjectConverter::UStructToJsonObjectString(structInput, jsonString, 0, 0, 0);
	return jsonString;
}

FWorldImplementation UExperimentUtils::JsonStringToWorldImplementation(FString jsonString) {
	FWorldImplementation structOutput;
	FJsonObjectConverter::JsonObjectStringToUStruct(jsonString, &structOutput, 0, 0);
	return structOutput;
}

FString UExperimentUtils::WorldImplementationToJsonString(FWorldImplementation structInput) {
	FString jsonString;
	FJsonObjectConverter::UStructToJsonObjectString(structInput, jsonString, 0, 0, 0);
	return jsonString;
}

FLocation3 UExperimentUtils::JsonStringToLocation3(FString jsonString) {
	FLocation3 structOutput;
	FJsonObjectConverter::JsonObjectStringToUStruct(jsonString, &structOutput, 0, 0);
	return structOutput;
}

FString UExperimentUtils::Location3ToJsonString(FLocation3 structInput) {
	FString jsonString;
	FJsonObjectConverter::UStructToJsonObjectString(structInput, jsonString, 0, 0, 0);
	return jsonString;
}

FRotation3 UExperimentUtils::JsonStringToRotation3(FString jsonString) {
	FRotation3 structOutput;
	FJsonObjectConverter::JsonObjectStringToUStruct(jsonString, &structOutput, 0, 0);
	return structOutput;
}

FString UExperimentUtils::Rotation3ToJsonString(FRotation3 structInput) {
	FString jsonString;
	FJsonObjectConverter::UStructToJsonObjectString(structInput, jsonString, 0, 0, 0);
	return jsonString;
}

FTransformation UExperimentUtils::JsonStringToTransformation(FString jsonString) {
	FTransformation structOutput;
	FJsonObjectConverter::JsonObjectStringToUStruct(jsonString, &structOutput, 0, 0);
	return structOutput;
}

FString UExperimentUtils::TransformationToJsonString(FTransformation structInput) {
	FString jsonString;
	FJsonObjectConverter::UStructToJsonObjectString(structInput, jsonString, 0, 0, 0);
	return jsonString;
}

FStartEpisodeRequest UExperimentUtils::JsonStringToStartEpisodeRequest(FString jsonString) {
	FStartEpisodeRequest structOutput;
	FJsonObjectConverter::JsonObjectStringToUStruct(jsonString, &structOutput, 0, 0);
	return structOutput;
}

FString UExperimentUtils::StartEpisodeRequestToJsonString(FStartEpisodeRequest structInput) {
	FString jsonString;
	FJsonObjectConverter::UStructToJsonObjectString(structInput, jsonString, 0, 0, 0);
	return jsonString;
}

FStartEpisodeResponse UExperimentUtils::JsonStringToStartEpisodeResponse(FString jsonString) {
	FStartEpisodeResponse structOutput;
	FJsonObjectConverter::JsonObjectStringToUStruct(jsonString, &structOutput, 0, 0);
	return structOutput;
}

FString UExperimentUtils::StartEpisodeResponseToJsonString(FStartEpisodeResponse structInput) {
	FString jsonString;
	FJsonObjectConverter::UStructToJsonObjectString(structInput, jsonString, 0, 0, 0);
	return jsonString;
}

FFinishEpisodeRequest UExperimentUtils::JsonStringToFinishEpisodeRequest(FString jsonString) {
	FFinishEpisodeRequest structOutput;
	FJsonObjectConverter::JsonObjectStringToUStruct(jsonString, &structOutput, 0, 0);
	return structOutput;
}

FString UExperimentUtils::FinishEpisodeRequestToJsonString(FFinishEpisodeRequest structInput) {
	FString jsonString;
	FJsonObjectConverter::UStructToJsonObjectString(structInput, jsonString, 0, 0, 0);
	return jsonString;
}

FFinishEpisodeResponse UExperimentUtils::JsonStringToFinishEpisodeResponse(FString jsonString) {
	FFinishEpisodeResponse structOutput;
	FJsonObjectConverter::JsonObjectStringToUStruct(jsonString, &structOutput, 0, 0);
	return structOutput;
}

FString UExperimentUtils::FinishEpisodeResponseToJsonString(FFinishEpisodeResponse structInput) {
	FString jsonString;
	FJsonObjectConverter::UStructToJsonObjectString(structInput, jsonString, 0, 0, 0);
	return jsonString;
}

FUpdateGhostMovementMessage UExperimentUtils::JsonStringToUpdateGhostMovementMessage(FString jsonString) {
	FUpdateGhostMovementMessage structOutput;
	FJsonObjectConverter::JsonObjectStringToUStruct(jsonString, &structOutput, 0, 0);
	return structOutput;
}

FString UExperimentUtils::UpdateGhostMovementMessageToJsonString(FUpdateGhostMovementMessage structInput) {
	FString jsonString;
	FJsonObjectConverter::UStructToJsonObjectString(structInput, jsonString, 0, 0, 0);
	return jsonString;
}

FLocation UExperimentUtils::vrToCanonical(FVector vrCoordinates, float mapLength) {
	FLocation canonical;
	float halfMap = 0.5 * mapLength;
	canonical.x = ( vrCoordinates.X + halfMap )  / mapLength;
	canonical.y = ( halfMap - vrCoordinates.Y  ) / mapLength;
	return canonical;
}

FVector UExperimentUtils::canonicalToVr(FLocation canonicalCoordinates, float mapLength) {
	FVector vr;
	float halfMap = 0.5 * mapLength;
	vr.X = ( mapLength * canonicalCoordinates.x ) -  halfMap;
	vr.Y = halfMap - ( canonicalCoordinates.y * mapLength);
	vr.Z = 260.0;
	return vr;
}

int UExperimentUtils::updateFrame(int Frame)
{
	Frame++;
	return Frame;
}

float UExperimentUtils::updateTimeStamp(FDateTime episodeStart)
{	
	FTimespan now = FDateTime::UtcNow() - episodeStart;
	float timeStamp = UKismetMathLibrary::GetTotalMilliseconds(now) / 1000.0;
	return timeStamp;
}