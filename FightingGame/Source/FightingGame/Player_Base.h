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

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<AActor*> _respawnPoints;

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
	bool attackingFrames;
	bool cooldown;
	UPROPERTY(BlueprintReadOnly)
	float knockbackMod;

	UPROPERTY(BlueprintReadOnly)
	FString knockbackModString;

	int attackingType;

	UPROPERTY(BlueprintReadOnly)
	FVector attackDirection;
	float attackRange = 130;

	float attackingFrameTime = 0;

	float attackOneRange;
	float attackOneDamage;
	float attackOneKnockback;
	float attackOneDamageTime;
	float attackOneAttackCD;

	float attackTwoRange;
	float attackTwoDamage;
	float attackTwoKnockback;
	float attackTwoDamageTime;
	float attackTwoAttackCD;

	float attackThreeRange;
	float attackThreeDamage;
	float attackThreeKnockback;
	float attackThreeDamageTime;
	float attackThreeAttackCD;

	float attackFourRange;
	float attackFourDamage;
	float attackFourKnockback;
	float attackFourDamageTime;
	float attackFourAttackCD;

	float animationMovementSpeed;

	UPROPERTY(BlueprintReadOnly)
	int playerID = 1;

	enum PlayerState
	{
		Alive,
		Respawning,
		Dead,
		Inactive
	};

	PlayerState currentState = Alive;

	int remainingLives = 10;

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

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "GetFunction")
		FString CollisionType(AActor* OtherActor);

	UFUNCTION(BlueprintCallable)
		void SetRespawnArray(TArray<AActor*> respawns);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "GetFunction")
		void GetRespawnArray();

	UFUNCTION(BlueprintCallable, Category = "UI")
		int getLives() { return remainingLives; };

	bool CheckIfActive();

	UPROPERTY(BlueprintReadWrite, Category = "UI")
	int characterNum;

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
	virtual void SetupPlayer();
	void CheckFrames(float deltaTime);

	APlayer_Base* CheckAttackCollision();
};