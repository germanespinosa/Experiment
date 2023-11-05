#pragma once
#include "Structs.h"
#include "Kismet/KismetMathLibrary.h"
#include "ExperimentUtils.generated.h"


UCLASS()
class EXPERIMENTPLUGIN_API UExperimentUtils: public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FAgentState JsonStringToAgentState(FString jsonString);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FString AgentStateToJsonString(FAgentState structInput);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FCoordinates JsonStringToCoordinates(FString jsonString);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FString CoordinatesToJsonString(FCoordinates structInput);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FLocation JsonStringToLocation(FString jsonString);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FString LocationToJsonString(FLocation structInput);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FShape JsonStringToShape(FString jsonString);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FString ShapeToJsonString(FShape structInput);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FSpace JsonStringToSpace(FString jsonString);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FString SpaceToJsonString(FSpace structInput);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FWorldImplementation JsonStringToWorldImplementation(FString jsonString);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FString WorldImplementationToJsonString(FWorldImplementation structInput);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FLocation3 JsonStringToLocation3(FString jsonString);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FString Location3ToJsonString(FLocation3 structInput);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FRotation3 JsonStringToRotation3(FString jsonString);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FString Rotation3ToJsonString(FRotation3 structInput);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FTransformation JsonStringToTransformation(FString jsonString);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FString TransformationToJsonString(FTransformation structInput);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FStartEpisodeRequest JsonStringToStartEpisodeRequest(FString jsonString);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FString StartEpisodeRequestToJsonString(FStartEpisodeRequest structInput);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FStartEpisodeResponse JsonStringToStartEpisodeResponse(FString jsonString);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FString StartEpisodeResponseToJsonString(FStartEpisodeResponse structInput);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FFinishEpisodeRequest JsonStringToFinishEpisodeRequest(FString jsonString);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FString FinishEpisodeRequestToJsonString(FFinishEpisodeRequest structInput);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FFinishEpisodeResponse JsonStringToFinishEpisodeResponse(FString jsonString);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FString FinishEpisodeResponseToJsonString(FFinishEpisodeResponse structInput);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FUpdateGhostMovementMessage JsonStringToUpdateGhostMovementMessage(FString jsonString);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FString UpdateGhostMovementMessageToJsonString(FUpdateGhostMovementMessage structInput);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FLocation vrToCanonical(FVector vrCoordinates, float mapLength);
	
	UFUNCTION(BlueprintCallable, Category = Experiment)
		static FVector canonicalToVr(FLocation canonicalCoordinates, float mapLength);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static int updateFrame(int Frame);

	UFUNCTION(BlueprintCallable, Category = Experiment)
		static float updateTimeStamp(FDateTime episodeStart);

};