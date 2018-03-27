// Fill out your copyright notice in the Description page of Project Settings.

#include "MySaveGame.h"

UMySaveGame::UMySaveGame() {
	if (!intArray.Contains(saveID)) {
		intArray.Add(saveID);
	}
	SaveSlotName = TEXT("TestSaveSlot");
	UserIndex = 0;
}

