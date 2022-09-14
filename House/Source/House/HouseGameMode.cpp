// Copyright Epic Games, Inc. All Rights Reserved.

#include "HouseGameMode.h"
#include "HouseHUD.h"
#include "HouseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHouseGameMode::AHouseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHouseHUD::StaticClass();
}
