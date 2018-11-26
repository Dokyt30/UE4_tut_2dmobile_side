// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Mobile2DSideGameMode.h"
#include "Mobile2DSideCharacter.h"

AMobile2DSideGameMode::AMobile2DSideGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AMobile2DSideCharacter::StaticClass();	
}
