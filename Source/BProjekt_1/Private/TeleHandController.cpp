// Fill out your copyright notice in the Description page of Project Settings.


#include "TeleHandController.h"
#include <Runtime\Engine\Classes\Components\BoxComponent.h>
#include "Math/UnrealMathUtility.h"

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

AActor * UTeleHandController::getTarget(FVector position, FVector direction , UBoxComponent * box){
	AActor * target = NULL;
	TArray<AActor*> tmp;
	box->GetOverlappingActors(tmp);
	float dist = 5000;

	for (AActor* object : tmp) {
		FString melee = "Default__EnemyFlyMelee_C";
		FString orb = "Default__EnemyFlyOrb_C";
		FString tetra = "Default__EnemyFlyTetra_C";
		FString s = object->GetClass()->GetDefaultObjectName().ToString();
		UE_LOG(LogTemp, Warning, TEXT("%s"), *s);
		if (object->GetClass()->GetDefaultObjectName().ToString() == melee|| object->GetClass()->GetDefaultObjectName().ToString() == orb || object->GetClass()->GetDefaultObjectName().ToString() == tetra) {
			FVector ac = object->GetActorLocation();
			float tmpdist = FMath::PointDistToLine(ac, direction, position);
			if (tmpdist < dist) {
				target = object;
				dist = tmpdist;
			}
		}
	}

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

