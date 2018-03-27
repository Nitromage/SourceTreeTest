// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TriggerVolume.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "RockSpawner.generated.h"

UCLASS()
class TESTPROJECT_API ARockSpawner : public AActor
{
	GENERATED_BODY()

private:
	//UPROPERTY(EditAnywhere) AActor* rock;
	UPROPERTY(EditAnywhere) AActor* spawnPoint;
	UPROPERTY(EditAnywhere) ATriggerVolume* box;
	UPROPERTY(EditAnywhere) float timeBetween;
	UPROPERTY(EditANywhere) TSubclassOf<AActor> rock;

	void Spawn();

	UPROPERTY(EditAnywhere) bool isOn = true;
	float timer;
	//TriggerVolume
	//UPROPERTY(EditAnywhere) 
public:	
	// Sets default values for this actor's properties
	ARockSpawner();
	UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* center;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
