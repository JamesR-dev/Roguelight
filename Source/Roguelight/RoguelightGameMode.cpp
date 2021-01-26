// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "RoguelightGameMode.h"
#include "RoguelightPlayerController.h"
#include "RoguelightCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARoguelightGameMode::ARoguelightGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ARoguelightPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}