// Fill out your copyright notice in the Description page of Project Settings.
#include "Gameframework/Actor.h"

#include "PlatformEvent.h"


// Sets default values for this component's properties
UPlatformEvent::UPlatformEvent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlatformEvent::BeginPlay()
{
	Super::BeginPlay();

	
	// ...
	
}


// Called every frame
void UPlatformEvent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	FVector newLocation = platform->GetActorLocation();
	if (PlateIsON && newLocation.Z > ZMinPos) {
		newLocation.Z -= ZPositionDistance * DeltaTime;
	}
	else if(!PlateIsON && newLocation.Z < ZMaxPos)
	{
		newLocation.Z += ZPositionDistance * DeltaTime;
	}
	platform->SetActorLocation(newLocation);
	// ...
}

