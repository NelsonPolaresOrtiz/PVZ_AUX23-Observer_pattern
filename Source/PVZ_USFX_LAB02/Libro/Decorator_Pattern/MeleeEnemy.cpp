// Fill out your copyright notice in the Description page of Project Settings.


#include "MeleeEnemy.h"

void AMeleeEnemy::Fight()
{
	//Call the parent Fight function and log a message
	Super::Fight();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("The enemy throws heavy punches"));

}

int AMeleeEnemy::GetDamage()
{
	//Returns the base Damage + 5
	return Super::GetDamage() + 5;
}

void AMeleeEnemy::Die()
{
	//Call the parent Die function and log a message
	Super::Die();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("The enemy writhes in agony and disintegrates"));

}
