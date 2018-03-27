// Fill out your copyright notice in the Description page of Project Settings.

#include "CountCoins.h"
#include "Engine.h"
#include "Engine/Blueprint.h"
//INCLUDE ME IN THE PROJECT YEAY

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
	if (star)
	{
		star->SetActorHiddenInGame(true);
	}
}

// Called every frame
void ACountCoins::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (isOn)
	{
		if (gameInstance)
		{
			UProperty* Property = gameInstance->GetClass()->FindPropertyByName("TotalCoin");
			if (Property)
			{
				UE_LOG(LogTemp, Warning, TEXT("Found property"));
				int* ptrValue = Property->ContainerPtrToValuePtr<int>(gameInstance);
				if (ptrValue)
				{
					UE_LOG(LogTemp, Warning, TEXT("Found value"));
					if (*ptrValue >= coinCount)
					{
						isOn = false;
						star->SetActorHiddenInGame(false);
					}
				}
			}
		}
	}
}

