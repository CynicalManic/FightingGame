// Fill out your copyright notice in the Description page of Project Settings.

#include "Player_Eve.h"
void APlayer_Eve::SetupPlayer()
{
	characterNum = 1;

	attackOneRange = 2000;
	attackOneDamage = 50;
	attackOneKnockback = 1000;
	attackOneDamageTime = 1.243f;
	attackOneAttackCD = 1.29f;

	attackTwoRange = 2000;
	attackTwoDamage = 100;
	attackTwoKnockback = 200;
	attackTwoDamageTime = 1.82f;
	attackTwoAttackCD = 3.48f;

	attackThreeRange = 350;
	attackThreeDamage = 10;
	attackThreeKnockback = 500;
	attackThreeDamageTime = 0.97f;
	attackThreeAttackCD = 1.063f;

	attackFourRange = 280;
	attackFourDamage = 20;
	attackFourKnockback = 500;
	attackFourDamageTime = 0.973f;
	attackFourAttackCD = 0.627f;

	movementSpeed = 110;
}