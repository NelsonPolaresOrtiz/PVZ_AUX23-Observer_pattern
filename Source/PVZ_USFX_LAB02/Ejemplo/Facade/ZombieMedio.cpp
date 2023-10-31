// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieMedio.h"

AZombieMedio::AZombieMedio()
{
}

void AZombieMedio::BeginPlay()
{
}

void AZombieMedio::Tick(float DeltaTime)
{
}

void AZombieMedio::Carrerilla()
{
	//Print Duty string
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s tomará carrerilla"), *NombreZombie()));

}

void AZombieMedio::Saltar()
{
	//Print Duty string
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s No saltara"), *NombreZombie()));

}

FString AZombieMedio::NombreZombie()
{
	return "El zombie medio";
}
