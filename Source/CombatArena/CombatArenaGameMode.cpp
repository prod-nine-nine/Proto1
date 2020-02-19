// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CombatArenaGameMode.h"
#include "CombatArenaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACombatArenaGameMode::ACombatArenaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
