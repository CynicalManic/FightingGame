// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Animation_Handler.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FIGHTINGGAME_API UAnimation_Handler : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAnimation_Handler();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	bool* _grounded;
	bool* _attacking;
	float* _movementSpeed;
	float* _attackDirection;
	int* _attackType;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void SetupHandlerRefs(bool* groundedStatus, bool* attackingStatus, float* movementSpeed, float* attackingDirection, int* attackingType);
	void UpdateHandler(bool groundedStatus, bool attackingStatus, float movementSpeed, float attackDirection, int attackType);
	UFUNCTION(BlueprintCallable, Category = "Animation") bool GetGroundedStatus() { return *_grounded; }
	UFUNCTION(BlueprintCallable, Category = "Animation") bool GetAttackingStatus() { return *_attacking; }
	UFUNCTION(BlueprintCallable, Category = "Animation") float GetMovementSpeed() { return *_movementSpeed; }
	UFUNCTION(BlueprintCallable, Category = "Animation") float GetAttackDirection() { return *_attackDirection; }
	UFUNCTION(BlueprintCallable, Category = "Animation") int GetAttackType() { return *_attackType; }
};