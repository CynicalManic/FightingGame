// Fill out your copyright notice in the Description page of Project Settings.

#include "Player_Mutant.h"
void APlayer_Mutant::SetupPlayer()
{
	characterNum = 2;

	attackOneRange = 200;
	attackOneDamage = 100;
	attackOneKnockback = 2000;
	attackOneDamageTime = 0.309f;
	attackOneAttackCD = 0.791f;
	attackOneStun = 0.5f;

	attackTwoRange = 550;
	attackTwoDamage = 150;
	attackTwoKnockback = 4000;
	attackTwoDamageTime = 2.636;
	attackTwoAttackCD = 2.698f;
	attackTwoStun = 1.0f;

	attackThreeRange = 100;
	attackThreeDamage = 0;
	attackThreeKnockback = 5000;
	attackThreeDamageTime = 2.213f;
	attackThreeAttackCD = 3.187f;
	attackThreeStun = 0.5f;

	attackFourRange = 280;
	attackFourDamage = 20;
	attackFourKnockback = 500;
	attackFourDamageTime = 1.067f;
	attackFourAttackCD = 1.55f;
	attackFourStun = 0.5f;

	movementSpeed = 45;
}

void APlayer_Mutant::AttackTwoInput()
{
	Super::AttackTwoInput();
	SetArmoured((attackTwoDamageTime + attackTwoAttackCD), 2, true);
}
