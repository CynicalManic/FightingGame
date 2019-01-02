// Fill out your copyright notice in the Description page of Project Settings.

#include "Player_Eve.h"
void APlayer_Eve::SetupPlayer()
{
	characterNum = 1;

	attackOneRange = 2000;
	attackOneDamage = 50;
	attackOneKnockback = 1000;

	attackTwoRange = 2000;
	attackTwoDamage = 100;
	attackTwoKnockback = 20;

	attackThreeRange = 350;
	attackThreeDamage = 10;
	attackThreeKnockback = 500;

	attackFourRange = 280;
	attackFourDamage = 20;
	attackFourKnockback = 500;
}