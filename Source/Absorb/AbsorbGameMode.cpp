// Copyright Epic Games, Inc. All Rights Reserved.

#include "AbsorbGameMode.h"
#include "AbsorbPlayerController.h"
#include "AbsorbCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAbsorbGameMode::AAbsorbGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AAbsorbPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}