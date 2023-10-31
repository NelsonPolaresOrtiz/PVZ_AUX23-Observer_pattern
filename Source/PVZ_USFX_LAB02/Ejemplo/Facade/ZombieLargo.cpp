// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieLargo.h"

AZombieLargo::AZombieLargo()
{

}

void AZombieLargo::BeginPlay()
{

}

void AZombieLargo::Tick(float DeltaTime)
{

}

void AZombieLargo::Carrerilla()
{
	//Print Duty string
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s tomará carrerilla"), *NombreZombie()));

}

void AZombieLargo::Saltar()
{
	//Print Duty string
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s saltara"), *NombreZombie()));

}

FString AZombieLargo::NombreZombie()
{
	return "El zombie Largo";
}
