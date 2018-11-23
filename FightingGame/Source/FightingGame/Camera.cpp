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


		//scane the x for the camera view

		float largestAngle = 0;
		FVector largestPosition = {0,0,0};

		for (int i = 0; i < _players.Num(); i++)
		{
			float test = GetAngleZ(_players[i], cameraLocation, cameraFacing);
			if (test > largestAngle)
			{
				largestAngle = test;
				largestPosition = _players[i]->GetActorLocation();
			}
		}

		float adjacent = largestPosition.Y - cameraLocation.Y;
		float lengthX = 0;
		lengthX = adjacent * FMath::Tan(_cameraMaxAngleX);
		lengthX = FMath::Abs(lengthX);


		// Scan the z for the camera fov
					
		for (int i = 0; i < _players.Num(); i++)
		{
			float test = GetAngleX(_players[i], cameraLocation, cameraFacing);
			if (test > largestAngle)
			{
				largestAngle = test;
				largestPosition = _players[i]->GetActorLocation();
			}
		}

		adjacent = largestPosition.Z - cameraLocation.Z;
		float lengthZ = 0;
		lengthZ = adjacent * FMath::Tan(_cameraMaxAngleZ);
		lengthZ = FMath::Abs(lengthZ);

		FVector finalCameraLocation = CameraOne->GetActorLocation();

		if (lengthX < 600 && lengthZ < 600)
			finalCameraLocation.X = (largestPosition.X - 600 - 200);
		else if (lengthX > lengthZ)
			finalCameraLocation.X = (largestPosition.X - lengthX - 200);
		else 
			finalCameraLocation.X = (largestPosition.X - lengthZ - 200);

		

		CameraOne->SetActorLocation(finalCameraLocation);

		//_players[0]->SetActorLocation(temp);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::SanitizeFloat(lengthX));
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::SanitizeFloat(lengthZ));
			//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::SanitizeFloat(length));
		}
	}
}

float ACamera::GetAngleX(AActor* inputActor, FVector startPoint, FVector cameraFacing)
{
	FVector position = inputActor->GetActorLocation();
	position.Z = 0;
	FVector vector = position - startPoint;
	vector.Normalize();
	float angle = ((acosf(FVector::DotProduct(vector, cameraFacing))) * (180 / 3.1415926));
	return angle;
}

float ACamera::GetAngleZ(AActor* inputActor, FVector startPoint, FVector cameraFacing)
{
	FVector position = inputActor->GetActorLocation();
	position.X = 0;
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