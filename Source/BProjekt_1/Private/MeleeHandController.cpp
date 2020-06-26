// Fill out your copyright notice in the Description page of Project Settings.


#include "MeleeHandController.h"

// Sets default values for this component's properties
UMeleeHandController::UMeleeHandController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMeleeHandController::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMeleeHandController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

float UMeleeHandController::onHit(AActor * enemy){

	return 1;
}

float UMeleeHandController::checkFloorHit(FTransform me, float speed){

	return 0;
}

