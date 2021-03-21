// Copyright Epic Games, Inc. All Rights Reserved.

#include "TornApartGameMode.h"
#include "TornApartCharacter.h"

ATornApartGameMode::ATornApartGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ATornApartCharacter::StaticClass();	
}
