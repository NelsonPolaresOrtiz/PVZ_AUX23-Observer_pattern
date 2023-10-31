// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Zombies.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API AZombies : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AZombies();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
	//Nombre del Zombie
	FString NombreZombie;
	// "Vida" del Zombie
	int Vida;

	// "Armadura" del Zombie
	FString Armadura;

	// "Materiales" del Zombie
	TArray<FString> Materiales;

public:

	// "Arma" el zombie
	void Armar();

	//"Elabora" el zombie
	virtual void Elaboracion();

	//"Libera" el zombie
	void Liberar();

	//Devuelve el nombre del zombie
	FString GetNombreZombie();


};
