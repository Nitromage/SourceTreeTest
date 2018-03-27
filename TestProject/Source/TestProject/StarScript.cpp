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
	if (id == LoadGameInstance->saveID) {
		//owner->Destroy();
		UE_LOG(LogTemp, Warning, TEXT("im it"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("I am not it"));
	}
}
void UStarScript::SaveIDTest()
{
	int32 sendID = id;
	UMySaveGame* SaveGameInstance = Cast<UMySaveGame>(UGameplayStatics::CreateSaveGameObject(UMySaveGame::StaticClass()));
	SaveGameInstance->saveID = sendID;
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SaveGameInstance->SaveSlotName, SaveGameInstance->UserIndex);
}

