// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MySaveGame.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API UMySaveGame : public USaveGame
{
	GENERATED_BODY()
public:

	UMySaveGame();
	UPROPERTY(EditAnywhere)
		int32 saveID;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Basic)
		TArray<int32> intArray;
	UPROPERTY(VisibleAnywhere, Category = Basic)
		FString SaveSlotName;
	UPROPERTY(VisibleAnywhere, Category = Basic)
		uint32 UserIndex;
	void SaveStar(int32 id, bool fileExists);
};
