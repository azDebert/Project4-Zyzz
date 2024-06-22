// Copyright Epic Games, Inc. All Rights Reserved.

#include "Zyzz3DAssignmentGameMode.h"
#include "Zyzz3DAssignmentCharacter.h"
#include "UObject/ConstructorHelpers.h"

AZyzz3DAssignmentGameMode::AZyzz3DAssignmentGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
