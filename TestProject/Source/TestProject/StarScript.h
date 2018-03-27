// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StarScript.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TESTPROJECT_API UStarScript : public UActorComponent
{
	GENERATED_BODY()

private:
	AActor* owner = GetOwner();
	UPROPERTY(EditAnywhere)
		int32 id;
public:	
	// Sets default values for this component's properties
	UStarScript();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable, Category = "SaveIDTest")
	void SaveIDTest();
	UFUNCTION(BlueprintCallable, Category = "LoadIDTest")
	void LoadIDTest();
};
