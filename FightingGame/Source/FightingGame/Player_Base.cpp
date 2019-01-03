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
	AnimationHandler->SetupHandlerRefs(this, &grounded, &attacking, &animationMovementSpeed, &(attackDirection.X), &attackingType);
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

	attackTwoRange = 280;
	attackTwoDamage = 30;
	attackTwoKnockback = 1000;
	attackTwoDamageTime = 0.71f;
	attackTwoAttackCD = 1.457;

	attackThreeRange = 250;
	attackThreeDamage = 0;
	attackThreeKnockback = 5000;
	attackThreeDamageTime = 2.338f;
	attackThreeAttackCD = 1.529;

	attackFourRange = 200;
	attackFourDamage = 15;
	attackFourKnockback = 1000;
	attackFourDamageTime = 0.639f;
	attackFourAttackCD = 1.444;
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
	cooldown = false;
	attackingFrames = false;
	movementSpeed = 100;
}

// Called every frame
void APlayer_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateMovement(DeltaTime);
	jumpMod = 9999999;
	CheckFrames(DeltaTime);
	animationMovementSpeed = FMath::Abs(movementInput * 100);
	knockbackModString = (FString::SanitizeFloat(knockbackMod) + '%');
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
						hitActor->Damage(attackOneDamage, attackOneKnockback, this->GetActorLocation());
					}
					cooldown = true;
					attackingFrames = false;
				}
				break;
			case 1:
				if (attackingFrameTime >= attackTwoDamageTime)
				{
					APlayer_Base* hitActor = CheckAttackCollision();
					if (hitActor != nullptr)
					{
						hitActor->Damage(attackTwoDamage, attackTwoKnockback, this->GetActorLocation());
					}
					cooldown = true;
					attackingFrames = false;
				}
				break;
			case 2:
				if (attackingFrameTime >= attackThreeDamageTime)
				{
					APlayer_Base* hitActor = CheckAttackCollision();
					if (hitActor != nullptr)
					{
						hitActor->Damage(attackThreeDamage, attackThreeKnockback, this->GetActorLocation());
					}
					cooldown = true;
					attackingFrames = false;
				}
				break;
			case 3:
				if (attackingFrameTime >= attackFourDamageTime)
				{
					APlayer_Base* hitActor = CheckAttackCollision();
					if (hitActor != nullptr)
					{
						hitActor->Damage(attackFourDamage, attackFourKnockback, this->GetActorLocation());
					}
					cooldown = true;
					attackingFrames = false;
				}
				break;
		}
	}
	else if (cooldown)
	{
		attackingFrameTime += deltaTime;
		switch (attackingType)
		{
		case 0:
			if (attackingFrameTime >= attackOneAttackCD)
			{
				cooldown = false;
				attackingFrameTime = 0;
				attacking = false;
			}
			break;
		case 1:
			if (attackingFrameTime >= attackTwoAttackCD)
			{
				cooldown = false;
				attackingFrameTime = 0;
				attacking = false;
			}
			break;
		case 2:
			if (attackingFrameTime >= attackThreeAttackCD)
			{
				cooldown = false;
				attackingFrameTime = 0;
				attacking = false;
			}
			break;
		case 3:
			if (attackingFrameTime >= attackFourAttackCD)
			{
				cooldown = false;
				attackingFrameTime = 0;
				attacking = false;
			}
			break;
		default:
			break;
		}
	}
}

void APlayer_Base::UpdateMovement(float DeltaTime)
{
	AddMovementInput(FVector(0, movementInput * movementSpeed, 0) * DeltaTime);
	if (CharacterMovementComponent->IsMovingOnGround())
	{
		CharacterMovementComponent->AddImpulse(FVector(0, 0, jumpForce * jumpMod) * DeltaTime);
	}
}

// Called to bind functionality to input
void APlayer_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("HorizontalMove", this, &APlayer_Base::MovementInput);
	PlayerInputComponent->BindAxis("Jump", this, &APlayer_Base::JumpInput);
	PlayerInputComponent->BindAction("Attack1", IE_Pressed, this, &APlayer_Base::AttackOneInput);
	PlayerInputComponent->BindAction("Attack2", IE_Pressed, this, &APlayer_Base::AttackTwoInput);
	PlayerInputComponent->BindAction("Attack3", IE_Pressed, this, &APlayer_Base::AttackThreeInput);
	PlayerInputComponent->BindAction("Attack4", IE_Pressed, this, &APlayer_Base::AttackFourInput);
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
	if (!cooldown)
	{
		attacking = true;
		attackingFrames = true;
		attackingType = 0;
		attackRange = attackOneRange;
	}
}

void APlayer_Base::AttackTwoInput()
{
	if (!cooldown)
	{
		attacking = true;
		attackingFrames = true;
		attackingType = 1;
		attackRange = attackTwoRange;
	}
}

void APlayer_Base::AttackThreeInput()
{
	if (!cooldown)
	{
		attacking = true;
		attackingFrames = true;
		attackingType = 2;
		attackRange = attackThreeRange;
	}
}

void APlayer_Base::AttackFourInput()
{
	if (!cooldown)
	{
		attacking = true;
		attackingFrames = true;
		attackingType = 3;
		attackRange = attackFourRange;
	}
}

void APlayer_Base::Damage(float damage, float knockback, FVector attackerPosition)
{
	knockbackMod += damage;
	FVector knockbackVector = (this->GetActorLocation() - attackerPosition).GetSafeNormal();
	CharacterMovementComponent->AddImpulse((knockbackVector * knockback) * knockbackMod);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("I have been hit"));
}

APlayer_Base* APlayer_Base::CheckAttackCollision()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Casting Hit"));
	FHitResult RV_Hit(ForceInit);
	FCollisionQueryParams paramaters;
	paramaters.AddIgnoredActor(this);
	GetWorld()->LineTraceSingleByChannel(RV_Hit, this->GetActorLocation(), this->GetActorLocation() + (attackDirection * attackRange), ECollisionChannel::ECC_Pawn, paramaters);
	DrawDebugLine(GetWorld(), this->GetActorLocation(), RV_Hit.Location, FColor(255, 0, 0), false, -1, 0, 12.333);
	if (RV_Hit.Actor != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("I Hit Something"));
	}

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
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("I am Respawning"));
			int randomNumber = FMath::RandRange(0, _respawnPoints.Num() - 1);
			FVector location = _respawnPoints[randomNumber]->GetActorLocation();
			this->SetActorLocation(location);
			FVector zeroVelocity = { 0,0,0 };
			this->GetRootComponent()->ComponentVelocity = zeroVelocity;
		}
	}
}

void APlayer_Base::SetRespawnArray(TArray<AActor*> respawns)
{
	_respawnPoints = respawns;
}




