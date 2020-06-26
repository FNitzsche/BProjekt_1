// Fill out your copyright notice in the Description page of Project Settings.


#include "StromHandController.h"

// Sets default values for this component's properties
UStromHandController::UStromHandController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UStromHandController::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UStromHandController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

FVector UStromHandController::getTargetPoint(FTransform me){
	FVector tmp = FVector(0, 0, 0);
	return tmp;
}

TArray<AActor *> UStromHandController::getTargets(FTransform me){
	TArray<AActor *> targets;
	return targets;
}

float UStromHandController::getDamage(AActor * enemy){

	return 0;
}

float UStromHandController::checkFloorHit(FTransform me, float speed){

	return 0;
}

