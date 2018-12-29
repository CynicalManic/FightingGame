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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimation_Handler* AnimationHandler = nullptr;

	UPROPERTY(BlueprintReadOnly)
	float movementInput;
	float movementSpeed;
	float jumpForce;
	float jumpMod;
	bool grounded;
	bool attacking;
	UPROPERTY(BlueprintReadOnly)
	float knockbackMod;

	UPROPERTY(BlueprintReadOnly)
	FString knockbackModString;

	int attackingType;

	UPROPERTY(BlueprintReadOnly)
	FVector attackDirection;
	float attackRange = 130;

	float attackOneDamage = 10;
	float attackOneKnockback = 1000;

	float attackTwoDamage = 30;
	float attackTwoKnockback = 1000;

	float attackThreeDamage = 0;
	float attackThreeKnockback = 2500;

	float attackFourDamage = 15;
	float attackFourKnockback = 1000;

	float animationMovementSpeed;

	UPROPERTY(BlueprintReadOnly)
	int playerID = 1;

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
	virtual void AttackOneInput();
	virtual void AttackTwoInput();
	virtual void AttackThreeInput();
	virtual void AttackFourInput();

	APlayer_Base* CheckAttackCollision();
};