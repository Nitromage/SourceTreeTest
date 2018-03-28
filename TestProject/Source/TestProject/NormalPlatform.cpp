// Fill out your copyright notice in the Description page of Project Settings.

#include "NormalPlatform.h"
#include "Gameframework/Actor.h"


// Sets default values for this component's properties
UNormalPlatform::UNormalPlatform()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UNormalPlatform::BeginPlay()
{
	Super::BeginPlay();

	// ...

}
float timer;
float goTime;
// Called every frame
void UNormalPlatform::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	goTime = DeltaTime;
	//X
	if (isX) {
		MoveX();
	}
	if (isY) {
		MoveY();
	}
	if (isZ) {
		MoveZ();
	}
	//Y
	
	
	// ...
}

void UNormalPlatform::MoveZ()
{
	FVector newLocation = platform->GetActorLocation();
	//Z

	if (newLocation.Z > ZMaxPos) {
		goMax = false;
	}
	else if (newLocation.Z < ZMinPos) {
		goMax = true;
	}

	if (goMax) {
		newLocation.Z += speed * goTime;

	}
	else newLocation.Z -= speed * goTime;

	platform->SetActorLocation(newLocation);
}

void UNormalPlatform::MoveY()
{
	FVector newLocation = platform->GetActorLocation();
	//Z

	if (newLocation.Y > YMaxPos) {
		goMax = false;
	}
	else if (newLocation.Y < YMinPos) {
		goMax = true;
	}

	if (goMax) {
		newLocation.Y += speed * goTime;

	}
	else newLocation.Y -= speed * goTime;

	platform->SetActorLocation(newLocation);
}

void UNormalPlatform::MoveX()
{
	FVector newLocation = platform->GetActorLocation();
	if (newLocation.X > XMaxPos) {
		goMax = false;
	}
	else if (newLocation.X < XMinPos) {
		goMax = true;
	}

	if (goMax) {
		newLocation.X += speed * goTime;

	}
	else newLocation.X -= speed * goTime;

	platform->SetActorLocation(newLocation);
}


