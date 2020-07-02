// Fill out your copyright notice in the Description page of Project Settings.


#include "LaserHandController.h"

// Sets default values for this component's properties
ULaserHandController::ULaserHandController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULaserHandController::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void ULaserHandController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

AActor * ULaserHandController::getTarget(FTransform me){
	AActor * target = NULL;
	return target;
}

float ULaserHandController::getDamage(AActor * enemy){

	return 0;
}

float ULaserHandController::checkFloorHit(FTransform me, float speed){

	return 0;
}

