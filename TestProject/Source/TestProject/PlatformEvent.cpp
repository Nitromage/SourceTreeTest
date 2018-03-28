// Fill out your copyright notice in the Description page of Project Settings.
#include "PlatformEvent.h"

#include "Gameframework/Actor.h"



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

//Maz to Min platform
// Called every frame
void UPlatformEvent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	FVector newLocation = platform->GetActorLocation();
	//Z
	if (PlateIsON && newLocation.Z > ZMinPos && isZ & !isY & !isX) {
		newLocation.Z -= speed * DeltaTime;
	}
	else if(!PlateIsON && newLocation.Z < ZMaxPos && isZ & !isY & !isX)
	{
		newLocation.Z += speed * DeltaTime;
	}
	//X
	if (PlateIsON && newLocation.X > XMinPos && isX & !isY & !isZ) {
		newLocation.X -= speed * DeltaTime;
	}
	else if (!PlateIsON && newLocation.X < XMaxPos && isX & !isY & !isZ)
	{
		newLocation.X += speed * DeltaTime;
	}
	//Y
	if (PlateIsON && newLocation.Y > YMinPos && isY & !isZ & !isX) {
		newLocation.Y -= speed * DeltaTime;
	}
	else if (!PlateIsON && newLocation.Y < YMaxPos && isY & !isZ & !isX)
	{
		newLocation.Y += speed * DeltaTime;
	}
	platform->SetActorLocation(newLocation);
	// ...
}

