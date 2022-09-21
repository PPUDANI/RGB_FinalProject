// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectEXGameMode.h"
#include "ProjectEXCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectEXGameMode::AProjectEXGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
