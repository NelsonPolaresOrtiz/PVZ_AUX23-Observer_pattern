// Fill out your copyright notice in the Description page of Project Settings.


#include "NivelBase.h"

// Sets default values
ANivelBase::ANivelBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANivelBase::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ANivelBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANivelBase::DefinirZombies(FString myZombies)
{
	//Set the name of the Swimming Pool with the passed String
	Zombies = myZombies;

}

void ANivelBase::DefinirObstaculos(FString myObstaculos)
{
	Obstaculos = myObstaculos;
}

void ANivelBase::DefinirPlantas(FString myPlantas)
{
	Plantas = myPlantas;
}

void ANivelBase::DefinirVidas(int myVidas)
{
	Vidas = myVidas;
}

void ANivelBase::CaracteristicasNivelBase()
{
	//Logs the name of each floors
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *Zombies));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *Obstaculos));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *Plantas));

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("La cantidad de vidas para este nivel es: %i"), Vidas));

}

