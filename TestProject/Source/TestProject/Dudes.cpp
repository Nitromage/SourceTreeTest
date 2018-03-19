// Fill out your copyright notice in the Description page of Project Settings.

#include "Dudes.h"


// Sets default values for this component's properties
UDudes::UDudes()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDudes::BeginPlay()
{
	Super::BeginPlay();
	//i was not here Steffen !!!!
	// ...
	
}


// Called every frame
void UDudes::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

