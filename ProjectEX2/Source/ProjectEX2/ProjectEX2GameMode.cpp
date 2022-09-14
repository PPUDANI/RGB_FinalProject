// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectEX2GameMode.h"
#include "ProjectEX2Character.h"
#include "UObject/ConstructorHelpers.h"

AProjectEX2GameMode::AProjectEX2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
