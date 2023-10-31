// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Nivel.h"
#include "NivelBase.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API ANivelBase : public AActor, public INivel
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANivelBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	//El nombre de los zombies
	FString Zombies;
	//El nombre de los obstaculos
	FString Obstaculos;
	//El nombre de las plantas
	FString Plantas;
	//El numero de vidas
	int Vidas;

public:
	//Define el nombre de los zombies
	void DefinirZombies(FString myZombies);
	//Define el nombre de los obstaculos
	void DefinirObstaculos(FString myObstaculos);
	//Define el nombre de las plantas
	void DefinirPlantas(FString myPlantas);
	//Define las vidas del nivel
	void DefinirVidas(int myVidas);

	//Muestra las caracteristicas del nivel
	void CaracteristicasNivelBase();

};
