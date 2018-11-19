// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Player_Base.generated.h"

class UCharacterMovementComponent;

UCLASS()
class FIGHTINGGAME_API APlayer_Base : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayer_Base();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UCharacterMovementComponent* CharacterMovementComponent;
	float movementInput;
	float movementSpeed;
	float jumpForce;
	float jumpMod;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void UpdateMovement(float DeltaTime);

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void MovementInput(float value);
	virtual void JumpInput(float value);

	virtual void LightAttackInput();
	virtual void HeavyAttackInput();
};
