// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Player_Base.h"
#include "Player_Eve.generated.h"

/**
 * 
 */
UCLASS()
class FIGHTINGGAME_API APlayer_Eve : public APlayer_Base
{
	GENERATED_BODY()
protected:
	void SetupPlayer() override;
};
