// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombies.h"

// Sets default values
AZombies::AZombies()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Materiales = TArray<FString>();

}

// Called when the game starts or when spawned
void AZombies::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AZombies::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AZombies::Armar()
{

	//Muestra el procedimiento de armado en pantalla
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Armando %s"), *GetNombreZombie()));

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Armando..."));

}

void AZombies::Elaboracion()
{
	//Muestra el procedimiento de elaboracion en pantalla
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Elaborando..."));
}

void AZombies::Liberar()
{
	//Muestra el procedimiento de liberacion en pantalla
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Liberando al zombie"));
}

FString AZombies::GetNombreZombie()
{
	return NombreZombie;
}

