// Fill out your copyright notice in the Description page of Project Settings.


#include "StromHandController.h"
#include "GameFramework/Actor.h"
#include <Runtime\Engine\Classes\Components\BoxComponent.h>

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

TArray<AActor *> UStromHandController::getTargets(UBoxComponent * colBox){
	TArray<AActor *> targets;
	colBox->GetOverlappingActors(targets);
	return targets;
}

TArray<float> UStromHandController::getDamage(TArray<AActor *> enemys, float delta, FTransform me){
	TArray<float> damage;
	for (AActor* enemy : enemys) {
		FTransform enePos = enemy->GetActorTransform();
		float dist = sqrt(pow((enePos.GetLocation().X- me.GetLocation().X),2) + pow((enePos.GetLocation().Y - me.GetLocation().Y), 2) + pow((enePos.GetLocation().Z - me.GetLocation().Z), 2));
		damage.Add(10000 * delta / dist);
	}
	return damage;
}

float UStromHandController::checkFloorHit(FTransform me, float speed){

	return 0;
}

