// Fill out your copyright notice in the Description page of Project Settings.

#include "CountCoins.h"


// Sets default values
ACountCoins::ACountCoins()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACountCoins::BeginPlay()
{
	Super::BeginPlay();
	star->SetActorHiddenInGame(false);
	gamemode = Cast<game
}

// Called every frame
void ACountCoins::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	 GetWorld()->GetAuthGameMode()
	AMyGameMode * mymode = Cast<AMyGameMode>(GetWorld()->GetAuthGameMode());
}

