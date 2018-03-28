// Fill out your copyright notice in the Description page of Project Settings.

#include "MySaveGame.h"
#include "Kismet/GameplayStatics.h"

UMySaveGame::UMySaveGame() {

	SaveSlotName = TEXT("TestSaveSlot");
	UserIndex = 0;
}

void UMySaveGame::SaveStar(int32 id, bool fileExists)
{
	UE_LOG(LogTemp, Warning, TEXT("SaveStar the id %d"), id);
	if (fileExists)
	{
		UMySaveGame* LoadGameInstance = Cast<UMySaveGame>(UGameplayStatics::CreateSaveGameObject(UMySaveGame::StaticClass()));
		LoadGameInstance = Cast<UMySaveGame>(UGameplayStatics::LoadGameFromSlot(LoadGameInstance->SaveSlotName, LoadGameInstance->UserIndex));
		intArray = LoadGameInstance->intArray;
	}
	for (int32 i = 0; i < intArray.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("SaveStar %d"), intArray[i]);
	}
	if (!intArray.Contains(id)) {
		intArray.Add(id);
	}
}
