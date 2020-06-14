// Copyright Epic Games, Inc. All Rights Reserved.

#include "FGPrototypeGameMode.h"
#include "FGPrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFGPrototypeGameMode::AFGPrototypeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
