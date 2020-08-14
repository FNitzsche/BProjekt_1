// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "StromHandController.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BPROJEKT_1_API UStromHandController : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStromHandController();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	UFUNCTION(BlueprintCallable)
	FVector getTargetPoint(FTransform me);

	UFUNCTION(BlueprintCallable)
	TArray<AActor *> getTargets(TArray<UBoxComponent *> colBoxes);

	UFUNCTION(BlueprintCallable)
	TArray<float> getDamage(TArray<AActor *> enemys, float delta, FTransform me);

	UFUNCTION(BlueprintCallable)
	float checkFloorHit(FTransform me, float speed);

		
};
