// Fill out your copyright notice in the Description page of Project Settings.

#include "StarScript.h"
#include "Gameframework/Actor.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "MySaveGame.h"
#include "Kismet/GameplayStatics.h"
// Sets default values for this component's properties
UStarScript::UStarScript()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UStarScript::BeginPlay()
{
	Super::BeginPlay();


	// ...

}


// Called every frame
void UStarScript::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
void UStarScript::LoadIDTest()
{

	UMySaveGame* LoadGameInstance = Cast<UMySaveGame>(UGameplayStatics::CreateSaveGameObject(UMySaveGame::StaticClass()));
	LoadGameInstance = Cast<UMySaveGame>(UGameplayStatics::LoadGameFromSlot(LoadGameInstance->SaveSlotName, LoadGameInstance->UserIndex));
	for (int32 i = 0; i < LoadGameInstance->intArray.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("LoadIDTest %d"), LoadGameInstance->intArray[i]);
		
	}
	if (LoadGameInstance->intArray.Contains(id)) {
		owner->Destroy();
		UE_LOG(LogTemp, Warning, TEXT("im in it"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("I am not in it"));
	}
}

int32 UStarScript::ReturnArrayLenght(bool fileExists)
{
	if (fileExists)
	{
		UMySaveGame* LoadGameInstance = Cast<UMySaveGame>(UGameplayStatics::CreateSaveGameObject(UMySaveGame::StaticClass()));
		LoadGameInstance = Cast<UMySaveGame>(UGameplayStatics::LoadGameFromSlot(LoadGameInstance->SaveSlotName, LoadGameInstance->UserIndex));
		TArray<int32> intArray = LoadGameInstance->intArray;
		return intArray.Num();
	}
	else return 0;
}

void UStarScript::SaveIDTest(bool fileExists)
{
	UMySaveGame* SaveGameInstance = Cast<UMySaveGame>(UGameplayStatics::CreateSaveGameObject(UMySaveGame::StaticClass()));
	SaveGameInstance->SaveStar(id, fileExists);
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SaveGameInstance->SaveSlotName, SaveGameInstance->UserIndex);
}

