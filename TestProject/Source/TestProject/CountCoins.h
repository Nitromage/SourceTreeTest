// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "CountCoins.generated.h"

UCLASS()
class TESTPROJECT_API ACountCoins : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditANywhere) TSubclassOf<UGameInstance> gameInstance;
	UPROPERTY(EditAnywhere) int coinCount;
	UPROPERTY(EditAnywhere) AActor* star;

	bool isOn = true;
public:	
	// Sets default values for this actor's properties
	ACountCoins();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
