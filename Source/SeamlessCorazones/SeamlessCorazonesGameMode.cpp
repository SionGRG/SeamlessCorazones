// Copyright Epic Games, Inc. All Rights Reserved.

#include "SeamlessCorazonesGameMode.h"
#include "SeamlessCorazonesHUD.h"
#include "SeamlessCorazonesCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASeamlessCorazonesGameMode::ASeamlessCorazonesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASeamlessCorazonesHUD::StaticClass();
}
