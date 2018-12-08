// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Player_Base.generated.h"

class UCharacterMovementComponent;
class UAnimation_Handler;

UCLASS()
class FIGHTINGGAME_API APlayer_Base : public ACharacter
{
	GENERATED_BODY()

//Public Variables
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int playerNum;

//Protected Variables
protected:
	UCharacterMovementComponent* CharacterMovementComponent;
	UAnimation_Handler* AnimationHandler;

	float movementInput;
	float movementSpeed;
	float jumpForce;
	float jumpMod;
	bool grounded;
	bool attacking;
	float knockbackMod;

	int attackingType;

	FVector attackDirection;
	float attackRange = 2000;

	float lightAttackDamage = 100;
	float lightAttackKnockback = 1000;

	UPROPERTY(BlueprintReadOnly)
	int playerID = 10;

//Public Functions
public:
	APlayer_Base();
	//Frame based updates
	virtual void Tick(float DeltaTime) override;
	virtual void UpdateMovement(float DeltaTime);

	//Action On Call
	virtual void Damage(float damage, float knockback, FVector attackerPosition);
	int GetPlayerID() { return playerID; }
	void SetPlayerID(int ID) { playerID = ID; }

//Protected Functions
protected:
	virtual void BeginPlay() override;
	//Inputs
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void MovementInput(float value);
	virtual void JumpInput(float value);
	virtual void LightAttackInput();
	virtual void HeavyAttackInput();

	APlayer_Base* CheckAttackCollision();
};