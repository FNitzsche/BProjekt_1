// Fill out your copyright notice in the Description page of Project Settings.


#include "StromHandController.h"
#include "GameFramework/Actor.h"

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

TArray<AActor *> UStromHandController::getTargets(AActor * colBox){
	TArray<AActor *> targets;
	colBox.GetOverlappingActors(targets);
	//GetOverlappingActors(targets);
	//for(AActor actor: colBox.getOverlappingActors()){
		
	//}
	return targets;
}

float UStromHandController::getDamage(TArray<AActor *> enemys, float delta){

	return 0;
}

float UStromHandController::checkFloorHit(FTransform me, float speed){

	return 0;
}

