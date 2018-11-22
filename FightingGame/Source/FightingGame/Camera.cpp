// Fill out your copyright notice in the Description page of Project Settings.
#include "Camera.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"

// Sets default values
ACamera::ACamera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACamera::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	GetPlayerArray();

	if (CameraOne != nullptr)
	{
		//CameraOne->SetActorLocation(CameraOne->GetActorLocation() + FVector(0, 1, 0));
	}
	if (_players.Num() != 0)
	{
		//CameraOne->SetActorLocation(CameraOne->GetActorLocation() + FVector(0, 1, 0));
		FVector midpoint = {0,0,0};
		for (int i = 0; i < _players.Num(); i++)
		{
			midpoint+= _players[i]->GetActorLocation();
			
		}
		float temp = (float)(1 / (float)_players.Num());
		midpoint *= temp;
		midpoint.X = CameraOne->GetActorLocation().X;
		CameraOne->SetActorLocation(midpoint);
		
		FVector cameraLocation = CameraOne->GetActorLocation();
		FVector cameraFacing = CameraOne->GetActorForwardVector();

		float largestAngle = 0;
		FVector largestPosition = {0,0,0};

		for (int i = 0; i < _players.Num(); i++)
		{
			float test = GetAngle(_players[i], cameraLocation, cameraFacing);
			if (test > largestAngle)
			{
				largestAngle = test;
				largestPosition = _players[i]->GetActorLocation();
			}
		}

		float adjacent = largestPosition.Y - cameraLocation.Y;
		float length = 0;
		length = adjacent * FMath::Tan(_cameraMaxAngle);
		length = FMath::Abs(length);

		FVector finalCameraLocation = CameraOne->GetActorLocation();
		finalCameraLocation.X = (largestPosition.X - length - 200);
		CameraOne->SetActorLocation(finalCameraLocation);
					
		//_players[0]->SetActorLocation(temp);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::SanitizeFloat(largestAngle));
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::SanitizeFloat(largestPosition.Y));
			//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::SanitizeFloat(length));
		}
	}
}

float ACamera::GetAngle(AActor* inputActor, FVector startPoint, FVector cameraFacing)
{
	FVector position = inputActor->GetActorLocation();
	FVector vector = position - startPoint;
	vector.Normalize();
	float angle = ((acosf(FVector::DotProduct(vector, cameraFacing))) * (180 / 3.1415926));
	return angle;
}



void ACamera::SetPlayerArray(TArray<AActor*> players)
{
	_players = players;
}

AActor* ACamera::GetCamera()
{
	return CameraOne;
}