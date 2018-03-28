// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NormalPlatform.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TESTPROJECT_API UNormalPlatform : public UActorComponent
{
	GENERATED_BODY()
private:
	AActor* platform = GetOwner();


	UPROPERTY(EditAnywhere)
		float speed;
	UPROPERTY(EditAnywhere)
		bool isZ;
	UPROPERTY(EditAnywhere)
		float ZMinPos;
	UPROPERTY(EditAnywhere)
		float ZMaxPos;
	UPROPERTY(EditAnywhere)
		bool isX;
	UPROPERTY(EditAnywhere)
		float XMinPos;
	UPROPERTY(EditAnywhere)
		float XMaxPos;
	UPROPERTY(EditAnywhere)
		bool isY;
	UPROPERTY(EditAnywhere)
		float YMinPos;
	UPROPERTY(EditAnywhere)
		float YMaxPos;

	bool goMax;
public:
	// Sets default values for this component's properties
	UNormalPlatform();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void MoveZ();
	void MoveY();
	void MoveX();
};
