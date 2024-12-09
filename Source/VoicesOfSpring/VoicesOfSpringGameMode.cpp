// Copyright Epic Games, Inc. All Rights Reserved.

#include "VoicesOfSpringGameMode.h"
#include "VoicesOfSpringCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVoicesOfSpringGameMode::AVoicesOfSpringGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
