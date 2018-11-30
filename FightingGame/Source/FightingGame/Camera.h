// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "Camera.generated.h"


class APlayerController;
UCLASS()
class FIGHTINGGAME_API ACamera : public AActor
{
	GENERATED_BODY()
	
private:

public:	
	// Sets default values for this actor's properties
	ACamera();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> _players;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "GetFunction")
		void GetPlayerArray();

	UFUNCTION(BlueprintCallable)
		void SetPlayerArray(TArray<AActor*> players);
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AActor* CameraOne;

	UFUNCTION(BlueprintCallable)
		AActor* GetCamera();
};
