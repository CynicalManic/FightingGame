// Fill out your copyright notice in the Description page of Project Settings.

#include "Player_Base.h"
#include "GameFramework/CharacterMovementComponent.h"

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
	jumpMod = 600000;
}

void APlayer_Base::UpdateMovement(float DeltaTime)
{
	AddMovementInput(FVector(0, movementInput * movementSpeed, 0) * DeltaTime);
	CharacterMovementComponent->AddImpulse(FVector(0, 0, jumpForce * jumpMod) * DeltaTime);
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

}

void APlayer_Base::HeavyAttackInput()
{

}
