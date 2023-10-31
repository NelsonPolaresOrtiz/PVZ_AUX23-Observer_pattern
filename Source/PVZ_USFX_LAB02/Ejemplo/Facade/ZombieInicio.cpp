// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieInicio.h"

AZombieInicio::AZombieInicio()
{

}

void AZombieInicio::BeginPlay()
{

}

void AZombieInicio::Tick(float DeltaTime)
{

}

void AZombieInicio::Carrerilla()
{
	//Print Duty string
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s No tomará carrerilla"), *NombreZombie()));
}

void AZombieInicio::Saltar()
{
	//Print Duty string
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s No saltara"), *NombreZombie()));

}

FString AZombieInicio::NombreZombie()
{
	return "Zombie que aparece al inicio";
}
