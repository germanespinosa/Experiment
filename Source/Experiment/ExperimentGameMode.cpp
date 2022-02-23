// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExperimentGameMode.h"
#include "ExperimentHUD.h"
#include "ExperimentCharacter.h"
#include "UObject/ConstructorHelpers.h"

AExperimentGameMode::AExperimentGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AExperimentHUD::StaticClass();
}
