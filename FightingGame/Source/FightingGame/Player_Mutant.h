// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Player_Base.h"
#include "Player_Mutant.generated.h"

/**
 * 
 */
UCLASS()
class FIGHTINGGAME_API APlayer_Mutant : public APlayer_Base
{
	GENERATED_BODY()
	virtual void SetupPlayer() override;
	virtual void AttackTwoInput() override;
	
	
};
