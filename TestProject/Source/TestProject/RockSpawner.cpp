// Fill out your copyright notice in the Description page of Project Settings.

#include "RockSpawner.h"


void ARockSpawner::Spawn()
{
	if (rock)
	{
		UWorld* world = GetWorld();
		if (world)
		{
			FActorSpawnParameters spawnParams;
			FRotator rotator;
			FVector spawnLocation = spawnPoint->GetActorLocation();
			AActor* test = world->SpawnActor<AActor>(rock, spawnLocation, rotator, spawnParams);

			UProperty* PropertyX = test->GetClass()->FindPropertyByName("CenterX");
			if (PropertyX)
			{
				//AActor* ptrValue = PropertyX->ContainerPtrToValuePtr<AActor>(test);
				float* ptrValue = PropertyX->ContainerPtrToValuePtr<float>(test);
				if (ptrValue)
				{
					//*ptrValue = *center;
					*ptrValue = center->GetActorLocation().X;
				}
			}
			UProperty* PropertyY = test->GetClass()->FindPropertyByName("CenterY");
			if (PropertyY)
			{
				float* ptrValue = PropertyY->ContainerPtrToValuePtr<float>(test);
				if (ptrValue)
				{
					*ptrValue = center->GetActorLocation().Y;
				}
			}
		}
	}
}

// Sets default values
ARockSpawner::ARockSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ARockSpawner::BeginPlay()
{
	Super::BeginPlay();
	timer = timeBetween;
}

// Called every frame
void ARockSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (isOn)
	{
		timer += DeltaTime;
		if (timer >= timeBetween)
		{
			timer = 0;
			Spawn();
		}
	}
}

