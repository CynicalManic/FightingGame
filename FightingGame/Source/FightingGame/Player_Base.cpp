// Fill out your copyright notice in the Description page of Project Settings.
#include "Player_Base.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "Engine/GameEngine.h"
#include "DrawDebugHelpers.h"
#include "Animation_Handler.h"
#include "Components/CapsuleComponent.h"
//#include "Blueprint'/Game/MapObjects/OutOfBounds.OutOfBounds"

// Sets default values
APlayer_Base::APlayer_Base()
{
	UCapsuleComponent* objectCollider = GetCapsuleComponent();
	objectCollider->OnComponentBeginOverlap.AddDynamic(this, &APlayer_Base::OnOverlapBegin);
	AnimationHandler = this->CreateDefaultSubobject<UAnimation_Handler>(TEXT("Animation Handler Component"));
	this->AddOwnedComponent(AnimationHandler);
	AnimationHandler->SetupHandlerRefs(this, &grounded, &attacking, &animationMovementSpeed, &(attackDirection.X), &attackingType, &stunned);
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void APlayer_Base::SetupPlayer()
{
	characterNum = 0;
	attackOneRange = 250;
	attackOneDamage = 10;
	attackOneKnockback = 1000;
	attackOneDamageTime = 0.549f;
	attackOneAttackCD = 0.701f;
	attackOneStun = 0.5f;

	attackTwoRange = 280;
	attackTwoDamage = 30;
	attackTwoKnockback = 1000;
	attackTwoDamageTime = 0.71f;
	attackTwoAttackCD = 1.457;
	attackTwoStun = 1.0f;

	attackThreeRange = 250;
	attackThreeDamage = 0;
	attackThreeKnockback = 5000;
	attackThreeDamageTime = 2.338f;
	attackThreeAttackCD = 1.529;
	attackThreeStun = 0.5f;

	attackFourRange = 200;
	attackFourDamage = 15;
	attackFourKnockback = 1000;
	attackFourDamageTime = 0.639f;
	attackFourAttackCD = 1.444;
	attackFourStun = 0.5f;

	movementSpeed = 100;
}

bool APlayer_Base::CheckIfActive()
{
	if (currentState == Alive)
	{
		return true;
	}
	else
	{
		return false;
	}
}
// Called when the game starts or when spawned
void APlayer_Base::BeginPlay()
{
	Super::BeginPlay();
	CharacterMovementComponent = GetCharacterMovement();
	SetupPlayer();
	attacking = false;
	attackingFrames = false;
}

// Called every frame
void APlayer_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateMovement(DeltaTime);
	jumpMod = 555;
	CheckFrames(DeltaTime);
	UpdateStatusEffects(DeltaTime);
	animationMovementSpeed = FMath::Abs(movementInput * 100);
	knockbackModString = (FString::SanitizeFloat(knockbackMod) + '%');
	ShieldUpdate(DeltaTime);
	this->SetActorLocation(FVector(200.0, GetActorLocation().Y, GetActorLocation().Z));
}

void APlayer_Base::CheckFrames(float deltaTime)
{
	if (attackingFrames)
	{
		attackingFrameTime += deltaTime;
		switch (attackingType)
		{
			case 0:
				if (attackingFrameTime >= attackOneDamageTime)
				{
					APlayer_Base* hitActor = CheckAttackCollision();
					if (hitActor != nullptr)
					{
						hitActor->Damage(attackOneDamage, attackOneKnockback, this->GetActorLocation(), attackOneStun);
					}
					attackingFrames = false;
				}
				break;
			case 1:
				if (attackingFrameTime >= attackTwoDamageTime)
				{
					APlayer_Base* hitActor = CheckAttackCollision();
					if (hitActor != nullptr)
					{
						hitActor->Damage(attackTwoDamage, attackTwoKnockback, this->GetActorLocation(), attackTwoStun);
					}
					attackingFrames = false;
				}
				break;
			case 2:
				if (attackingFrameTime >= attackThreeDamageTime)
				{
					APlayer_Base* hitActor = CheckAttackCollision();
					if (hitActor != nullptr)
					{
						hitActor->Damage(attackThreeDamage, attackThreeKnockback, this->GetActorLocation(), attackThreeStun);
					}
					attackingFrames = false;
				}
				break;
			case 3:
				if (attackingFrameTime >= attackFourDamageTime)
				{
					APlayer_Base* hitActor = CheckAttackCollision();
					if (hitActor != nullptr)
					{
						hitActor->Damage(attackFourDamage, attackFourKnockback, this->GetActorLocation(), attackFourStun);
					}
					attackingFrames = false;
				}
				break;
		}
	}
}

void APlayer_Base::UpdateMovement(float DeltaTime)
{
	
	doubleJumpCooldown -= DeltaTime;

	if (stunned == false && recovering == false)
		AddMovementInput(FVector(0, movementInput * movementSpeed, 0) * DeltaTime);
	if (CharacterMovementComponent->IsMovingOnGround() && stunned == false && recovering == false)
	{
		if (doubleJumped)
		{
			doubleJumped = false;
		}

		if (jumpForce > 0 && doubleJumpCooldown <= 0)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Jump"));
			doubleJumpCooldown = 0.5f;

			//Jump Code
			FVector newVelocity = { 0,0,jumpMod };
			CharacterMovementComponent->AddImpulse(newVelocity, true);
		}
		
	}
	else if(stunned == false && recovering == false && !doubleJumped)
	{
		if (doubleJumpCooldown <= 0)
		{
			FVector jump = FVector(0, 0, jumpForce * jumpMod);
			if (jump.Z > 0)
			{
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Double Jump"));
				doubleJumped = true;

				//Jump Code
				FVector newVelocity = CharacterMovementComponent->Velocity;
				newVelocity.Z = 500;
				CharacterMovementComponent->Velocity = newVelocity;
			}
		}
	}
}

// Called to bind functionality to input
void APlayer_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("HorizontalMove", this, &APlayer_Base::MovementInput);
	PlayerInputComponent->BindAxis("Jump", this, &APlayer_Base::JumpInput);
	PlayerInputComponent->BindAxis("Shield", this, &APlayer_Base::Shield);
	PlayerInputComponent->BindAction("Attack1", IE_Pressed, this, &APlayer_Base::AttackOneInput);
	PlayerInputComponent->BindAction("Attack2", IE_Pressed, this, &APlayer_Base::AttackTwoInput);
	PlayerInputComponent->BindAction("Attack3", IE_Pressed, this, &APlayer_Base::AttackThreeInput);
	PlayerInputComponent->BindAction("Attack4", IE_Pressed, this, &APlayer_Base::AttackFourInput);
	PlayerInputComponent->BindAction("TestInput", IE_Pressed, this, &APlayer_Base::TestInput);
}

void APlayer_Base::MovementInput(float value)
{
	movementInput = value;
	attackDirection.Y = (value != 0) ? value : attackDirection.Y;
}

void APlayer_Base::JumpInput(float value)
{
	jumpForce = value;
}

void APlayer_Base::AttackOneInput()
{
	if (!recovering)
	{
		attacking = true;
		attackingFrames = true;
		attackingType = 0;
		attackRange = attackOneRange;
		SetRecovery(attackOneAttackCD);
	}
}

void APlayer_Base::AttackTwoInput()
{
	if (!recovering)
	{
		attacking = true;
		attackingFrames = true;
		attackingType = 1;
		attackRange = attackTwoRange;
		SetRecovery(attackTwoAttackCD);
	}
}

void APlayer_Base::AttackThreeInput()
{
	if (!recovering)
	{
		attacking = true;
		attackingFrames = true;
		attackingType = 2;
		attackRange = attackThreeRange;
		SetRecovery(attackThreeAttackCD);
	}
}

void APlayer_Base::AttackFourInput()
{
	if (!recovering)
	{
		attacking = true;
		attackingFrames = true;
		attackingType = 3;
		attackRange = attackFourRange;
		SetRecovery(attackFourAttackCD);
	}
}

void APlayer_Base::Shield(float value)
{
	if (value > 0)
	{
		blocking = false;
	}
	else
	{
		blocking = true;
	}
}

void APlayer_Base::TestInput()
{
	FVector test = { 0,0,0 };
	Damage(100, 10, test, 0.5);
}

void APlayer_Base::Damage(float damage, float knockback, FVector attackerPosition, float _stunDuration)
{
	if (invincible == false)
	{
		if (blocking)
		{
			if (armoured == false)
			{
				knockbackMod += damage;
				FVector knockbackVector = (this->GetActorLocation() - attackerPosition).GetSafeNormal();
				CharacterMovementComponent->AddImpulse((knockbackVector * knockback) * knockbackMod);
			}
			else
			{
				knockbackMod += damage / 2;
				armourRemaining -= 1;
			}
		
			if(!superArmour)
				SetStunDuration(_stunDuration);
		}
		else
		{
			shieldRemaining -= damage * 0.8;
			if (shieldRemaining < 0)
			{
				shieldRemaining = 0;
				SetStunDuration(2.0f);
			}
		}
	}
}

APlayer_Base* APlayer_Base::CheckAttackCollision()
{
	
	FHitResult RV_Hit(ForceInit);
	FCollisionQueryParams paramaters;
	paramaters.AddIgnoredActor(this);
	GetWorld()->LineTraceSingleByChannel(RV_Hit, this->GetActorLocation(), this->GetActorLocation() + (attackDirection * attackRange), ECollisionChannel::ECC_Pawn, paramaters);
	DrawDebugLine(GetWorld(), this->GetActorLocation(), RV_Hit.Location, FColor(255, 0, 0), false, -1, 0, 12.333);
	try
	{
		AActor* actor = RV_Hit.GetActor();
		APlayer_Base* player = (APlayer_Base*)actor;
		return player;
	}
	catch (const std::exception&)
	{
		return nullptr;
	}
}

void APlayer_Base::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	FString type = CollisionType(OtherActor);

	if (remainingLives > 0)
	{
		currentState = Respawning;
		remainingLives -= 1;
		knockbackMod = 0;
		GetRespawnArray();

		if (_respawnPoints.Num() != 0)
		{
			int randomNumber = FMath::RandRange(0, _respawnPoints.Num() - 1);
			FVector location = _respawnPoints[randomNumber]->GetActorLocation();
			this->SetActorLocation(location);
			FVector zeroVelocity = { 0,0,0 };
			CharacterMovementComponent->Velocity = zeroVelocity;
			SetInvincible(2.0f);
		}
	}
}

void APlayer_Base::SetRespawnArray(TArray<AActor*> respawns)
{
	_respawnPoints = respawns;
}

//		!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//		!!!ANIMATION CHANGE SET HERE!!!
//		!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void APlayer_Base::SetStunDuration(float _stunDuration)
{
	if (invincible == false)
	{
		if (stunned == false)
		{
			stunned = true;
			attacking = false;
		}

		if (stunDuration < _stunDuration)
			stunDuration = _stunDuration;
	}
}

void APlayer_Base::UpdateStatusEffects(float deltaTime)
{
	if (stunned == true)
	{
		stunDuration -= deltaTime;
		if (stunDuration <= 0)
		{
			stunned = false;	
			//Stunned state has ended, put code for animation end here if thats how it works
		}
		attacking = false;
		attackingFrames = false;
		attackingFrameTime = 0.0f;		

		recovering = false;
	}
	if (recovering == true)
	{
		recoveryDuration -= deltaTime;
		if (recoveryDuration <= 0)
		{
			recovering = false;
			attackingFrameTime = 0.0f;
			attacking = false;
		}
	}
	if (invincible == true)
	{
		invincibilityDuration -= deltaTime;
		if (invincibilityDuration <= 0)
			invincible = false;		
	}
	if (armoured == true)
	{
		invincibilityDuration -= deltaTime;
		if (armouredDuration <= 0 || armourRemaining <= 0)
		{
			armoured = false;
			armourRemaining = 0;
			superArmour = false;
		}
	}
	if (knockbackImmunity == true)
	{
		knockbackImmunityDuration -= deltaTime;
		if (knockbackImmunityDuration <= 0)
		{
			knockbackImmunity = false;
		}
	}
}

void APlayer_Base::SetRecovery(float _recoveryDuration)
{
	recovering = true;
	recoveryDuration = _recoveryDuration;
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::SanitizeFloat(recoveryDuration));
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("I am recovering for:"));
}
void APlayer_Base::SetKnockbackImmunity(float _recoveryDuration)
{
	knockbackImmunity = true;
	knockbackImmunityDuration = _recoveryDuration;
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::SanitizeFloat(knockbackImmunity));
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("I am knockback immune for:"));
}
void APlayer_Base::SetInvincible(float _recoveryDuration)
{
	invincible = true;
	invincibilityDuration = _recoveryDuration;
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::SanitizeFloat(invincibilityDuration));
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("I am invincible for:"));
}
void APlayer_Base::SetArmoured(float _recoveryDuration,int _amount, bool super) 
{
	armoured = true;
	armouredDuration = _recoveryDuration;
	armourRemaining = _amount;
	superArmour = super;
}

void APlayer_Base::ShieldUpdate(float deltaTime)
{
	if (shieldRemaining < 100)
	{
		shieldRemaining += deltaTime * 25;
		if (shieldRemaining > 100)
		{
			shieldRemaining = 100;
		}
	}
}