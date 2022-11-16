// Copyright Epic Games, Inc. All Rights Reserved.

#include "LightShowGameMode.h"
#include "LightShowHUD.h"
#include "LightShowCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALightShowGameMode::ALightShowGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALightShowHUD::StaticClass();
}
