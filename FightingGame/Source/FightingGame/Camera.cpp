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


//// Called every frame
//void ACamera::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//	GetPlayerArray();
//
//	if (CameraOne != nullptr)
//	{
//		//CameraOne->SetActorLocation(CameraOne->GetActorLocation() + FVector(0, 1, 0));
//	}
//	if (_players.Num() != 0)
//	{
//		//CameraOne->SetActorLocation(CameraOne->GetActorLocation() + FVector(0, 1, 0));
//		FVector midpoint = {0,0,0};
//		for (int i = 0; i < _players.Num(); i++)
//		{
//			midpoint+= _players[i]->GetActorLocation();
//		}
//		float temp = (float)(1 / (float)_players.Num());
//		midpoint *= temp;
//		midpoint.X = CameraOne->GetActorLocation().X;
//		CameraOne->SetActorLocation(midpoint);
//		
//		//_players[0]->SetActorLocation(temp);
//	}
//}

void ACamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	GetPlayerArray();



	if (_players.Num() != 0 && _cameraMode == Chase)
	{

		SetActorMidpoint();

		FVector cameraLocation = CameraOne->GetActorLocation();
		FVector cameraFacing = CameraOne->GetActorForwardVector();
		FVector* largestPosition = new FVector{ 0,0,0 };

		// Calculate how far zoomed out the camera would need to be to see all objects in x and z axis
		float lengthX = CalculateXLength(cameraLocation, cameraFacing, largestPosition);
		float lengthZ = CalculateZLength(cameraLocation, cameraFacing, largestPosition);

		FVector finalCameraLocation = CameraOne->GetActorLocation();

		// This code checks how far the camera needs to be
		// the first check sets a minimum camera range and the following zoom out to fit in all the objects into the scene.

		if (lengthX < 200 && lengthZ < 200)
			finalCameraLocation.X = (largestPosition->X - 200 - 200);
		else if (lengthX > lengthZ)
			finalCameraLocation.X = (largestPosition->X - lengthX - 200);
		else
			finalCameraLocation.X = (largestPosition->X - lengthZ - 200);

		CameraOne->SetActorLocation(finalCameraLocation);
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

float ACamera::CalculateXLength(FVector _cameraLocation, FVector _cameraFacing, FVector* _largestPosition)
{
	//checks out how zoomed out the camera needs to be to have all the objects at least within 40 degrees of the camera on the X axis

	float largestAngle = 0;

	for (int i = 0; i < _players.Num(); i++)
	{
		float test = GetAngleZ(_players[i], _cameraLocation, _cameraFacing);
		if (test > largestAngle)
		{
			largestAngle = test;
			FVector largestPosition = _players[i]->GetActorLocation();
			_largestPosition = &largestPosition;
		}
	}

	float adjacent = _largestPosition->Y - _cameraLocation.Y;
	float lengthX = 0;
	lengthX = adjacent * FMath::Tan(_cameraMaxAngleX);
	lengthX = FMath::Abs(lengthX);

	return lengthX;
}

float ACamera::CalculateZLength(FVector _cameraLocation, FVector _cameraFacing, FVector* _largestPosition)
{
	//checks out how zoomed out the camera needs to be to have all the objects at least within 40 degrees of the camera ion the z axis

	float largestAngle = 0;

	for (int i = 0; i < _players.Num(); i++)
	{
		float test = GetAngleZ(_players[i], _cameraLocation, _cameraFacing);
		if (test > largestAngle)
		{
			largestAngle = test;
			FVector largestPosition = _players[i]->GetActorLocation();
			_largestPosition = &largestPosition;
		}
	}

	float adjacent = _largestPosition->Z - _cameraLocation.Z;
	float lengthZ = 0;
	lengthZ = adjacent * FMath::Tan(_cameraMaxAngleZ);
	lengthZ = FMath::Abs(lengthZ);

	return lengthZ;
}

void ACamera::SetActorMidpoint()
{
	//checks the positions of all the actors and finds the midpoint between them
	FVector midpoint = { 0,0,0 };
	for (int i = 0; i < _players.Num(); i++)
	{
		midpoint += _players[i]->GetActorLocation();

	}
	float temp = (float)(1 / (float)_players.Num());
	midpoint *= temp;
	midpoint.X = CameraOne->GetActorLocation().X;
	CameraOne->SetActorLocation(midpoint);
}

void ACamera::SetCameraTarget()
{
	if (_cameraMode == Follow)
		_cameraMode = Chase;
	else if (_cameraMode == Chase)
		_cameraMode = Follow;
}

void ACamera::SetCameraMode()
{
	if (_cameraFollowNumber != _players.Num() - 1)
		_cameraFollowNumber++;
	else
		_cameraFollowNumber = 0;
}

void ACamera::SetPlayerArray(TArray<AActor*> players)
{
	_players = players;
}

AActor* ACamera::GetCamera()
{
	return CameraOne;
}