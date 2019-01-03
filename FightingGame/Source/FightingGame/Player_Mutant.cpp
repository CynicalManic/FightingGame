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

	attackTwoRange = 500;
	attackTwoDamage = 100;
	attackTwoKnockback = 800;
	attackTwoDamageTime = 1.318f;
	attackTwoAttackCD = 1.349f;

	attackThreeRange = 100;
	attackThreeDamage = 0;
	attackThreeKnockback = 5000;
	attackThreeDamageTime = 2.213f;
	attackThreeAttackCD = 3.187f;

	attackFourRange = 280;
	attackFourDamage = 20;
	attackFourKnockback = 500;
	attackFourDamageTime = 1.067f;
	attackFourAttackCD = 1.55f;

	movementSpeed = 50;
}
