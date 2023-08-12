// Copyright Epic Games, Inc. All Rights Reserved.

#include "Toy_ProjectGameMode.h"
#include "Toy_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AToy_ProjectGameMode::AToy_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
