// Fill out your copyright notice in the Description page of Project Settings.

#include "SaveStarsThing.h"
#include "TestProject.h"

USaveStarsThing::USaveStarsThing()
{
	SaveSlotName = TEXT("TestSaveStar");
	UserIndex = 0;
}

void USaveStarsThing::SaveStar()
{
	picked = true;
	USaveStarsThing* SaveGameInstance = Cast<USaveStarsThing>(UGameplayStatics::CreateSaveGameObject(USaveStarsThing::StaticClass()));
	SaveGameInstance->picked = true;
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SaveGameInstance->SaveSlotName, SaveGameInstance->UserIndex);
}


