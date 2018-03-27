// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveStarsThing.generated.h"
/**
 * 
 */
UCLASS()
class TESTPROJECT_API USaveStarsThing : public USaveGame
{
	GENERATED_BODY()

public:

	UPROPERTY(VisibleAnywhere, Category = Basic)
		AActor* Stars;

	UPROPERTY(VisibleAnywhere, Category = Basic)
		FString SaveSlotName;

	UPROPERTY(VisibleAnywhere, Category = Basic)
		uint32 UserIndex;

	USaveStarsThing();

};
