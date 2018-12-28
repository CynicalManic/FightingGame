// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerManager.h"
#include "Player_Base.h"

// Sets default values
APlayerManager::APlayerManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerManager::BeginPlay()
{
	Super::BeginPlay();
	GetAllPlayers();
}

// Called every frame
void APlayerManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayerManager::SetPlayers(TArray<APlayer_Base*> Players)
{
	for (int i = 0; i < Players.Num(); i++)
	{
		Players[i]->SetPlayerID(i);
	}
	allPlayers = Players;
}

