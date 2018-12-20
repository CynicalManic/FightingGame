// Fill out your copyright notice in the Description page of Project Settings.
#include "Animation_Handler.h"

// Sets default values for this component's properties
UAnimation_Handler::UAnimation_Handler()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...wdwxDww
}

// Called when the game starts
void UAnimation_Handler::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void UAnimation_Handler::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	_movementSpeed;
	// ...
}

void UAnimation_Handler::SetupHandlerRefs(bool* groundedStatus, bool* attackingStatus, float* movementSpeed, float* attackingDirection, int* attackingType)
{
	_grounded = groundedStatus;
	_attacking = attackingStatus;
	_movementSpeed = movementSpeed;
	_attackDirection = attackingDirection;
	_attackType = attackingType;
}

void UAnimation_Handler::UpdateHandler(bool groundedStatus, bool attackingStatus, float movementSpeed, float attackDirection, int attackType)
{
	*_grounded = groundedStatus;
	*_attacking = attackingStatus;
	*_movementSpeed = (movementSpeed * 100);
	*_attackDirection = attackDirection;
	*_attackType = attackType;
}