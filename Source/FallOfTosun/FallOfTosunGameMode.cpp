// Copyright Epic Games, Inc. All Rights Reserved.

#include "FallOfTosunGameMode.h"
#include "FallOfTosunCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFallOfTosunGameMode::AFallOfTosunGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
