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
	float GetAngleX(AActor* inputActor, FVector startPoint, FVector cameraFacing);
	float GetAngleZ(AActor* inputActor, FVector startPoint, FVector cameraFacing);
	float _cameraMaxAngleX = 40;
	float _cameraMaxAngleZ = 20;
	void SetActorMidpoint();
	enum CameraMode { Follow, Chase };
	CameraMode _cameraMode = Chase;
	int _cameraFollowNumber = 1;
	float CalculateXLength(FVector _cameraLocation, FVector _cameraFacing, FVector* _largestPosition);
	float CalculateZLength(FVector _cameraLocation, FVector _cameraFacing, FVector* _largestPosition);
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

	UFUNCTION(BlueprintCallable)
		void SetCameraTarget();

	UFUNCTION(BlueprintCallable)
		void SetCameraMode();
};
