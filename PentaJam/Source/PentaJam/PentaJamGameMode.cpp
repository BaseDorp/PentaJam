// Copyright Epic Games, Inc. All Rights Reserved.

#include "PentaJamGameMode.h"
#include "PentaJamPawn.h"

APentaJamGameMode::APentaJamGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APentaJamPawn::StaticClass();
}

