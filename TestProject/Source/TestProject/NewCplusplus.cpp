// Fill out your copyright notice in the Description page of Project Settings.

#include "NewCplusplus.h"


// Sets default values for this component's properties
UNewCplusplus::UNewCplusplus()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UNewCplusplus::BeginPlay()
{
	Super::BeginPlay();
	//heheh
	// ...
	
}


// Called every frame
void UNewCplusplus::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

