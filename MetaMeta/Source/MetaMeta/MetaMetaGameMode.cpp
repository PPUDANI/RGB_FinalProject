// Copyright Epic Games, Inc. All Rights Reserved.

#include "MetaMetaGameMode.h"
#include "MetaMetaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMetaMetaGameMode::AMetaMetaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
