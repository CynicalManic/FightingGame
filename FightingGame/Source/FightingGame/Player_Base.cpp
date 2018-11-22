// Fill out your copyright notice in the Description page of Project Settings.

#include "Player_Base.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "Engine/GameEngine.h"
#include "DrawDebugHelpers.h"

// Sets default values
APlayer_Base::APlayer_Base()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APlayer_Base::BeginPlay()
{
	Super::BeginPlay();
	CharacterMovementComponent = GetCharacterMovement();
}

// Called every frame
void APlayer_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateMovement(DeltaTime);
	movementSpeed = 100;
	jumpMod = 9999999;
	attackDirection = FVector(0, movementSpeed, 0);
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
	PlayerInputComponent->BindAction("LightAttack", IE_Pressed, this, &APlayer_Base::LightAttackInput);
	PlayerInputComponent->BindAction("HeavyAttack", IE_Pressed, this, &APlayer_Base::HeavyAttackInput);
}

void APlayer_Base::MovementInput(float value)
{
	movementInput = value;
}

void APlayer_Base::JumpInput(float value)
{
	jumpForce = value;
}

void APlayer_Base::LightAttackInput()
{
	APlayer_Base* hitActor = CheckAttackCollision();
	if (hitActor != nullptr)
	{
		hitActor->Damage(lightAttackDamage, lightAttackKnockback, this->GetActorLocation());
	}
}

void APlayer_Base::HeavyAttackInput()
{

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
	DrawDebugLine(GetWorld(),this->GetActorLocation(), RV_Hit.Location,FColor(255, 0, 0),false, -1, 0,12.333);
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