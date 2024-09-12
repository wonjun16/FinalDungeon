// Copyright Epic Games, Inc. All Rights Reserved.

#include "FinalDungeonGameMode.h"
#include "FinalDungeonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFinalDungeonGameMode::AFinalDungeonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
