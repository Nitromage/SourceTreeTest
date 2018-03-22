// Fill out your copyright notice in the Description page of Project Settings.

#include "StarScript.h"
#include "Gameframework/Actor.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"

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
	owner = GetOwner();
	// ...
	
}


// Called every frame
void UStarScript::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

