// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_EX1GameMode.h"
#include "Project_EX1Character.h"
#include "UObject/ConstructorHelpers.h"

AProject_EX1GameMode::AProject_EX1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
