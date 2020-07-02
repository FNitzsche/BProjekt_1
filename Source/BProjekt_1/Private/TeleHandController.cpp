// Fill out your copyright notice in the Description page of Project Settings.


#include "TeleHandController.h"

// Sets default values for this component's properties
UTeleHandController::UTeleHandController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTeleHandController::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTeleHandController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

AActor * UTeleHandController::getTarget(FTransform me){
	AActor * target = NULL;
	return target;
}

AActor * UTeleHandController::grab(FTransform me){
	AActor * target = NULL;
	return target;
}

float UTeleHandController::getDamage(AActor * enemy){

	return 0;
}

float UTeleHandController::checkFloorHit(FTransform me, float speed){

	return 0;
}

