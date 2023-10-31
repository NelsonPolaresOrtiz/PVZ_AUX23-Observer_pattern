// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CreadorNivel.h"
#include "NivelPiscina.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API ANivelPiscina : public AActor, public ICreadorNivel
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANivelPiscina();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//The Lodging Actor
	UPROPERTY(VisibleAnywhere, Category = "Nivel de Piscina")
	class ANivelBase* NivelBase;
public:

	//Create the Swimming Pool
	virtual void CrearZombies() override;
	//Create the Lobby Area
	virtual void CrearObstaculos() override;
	//Create the Restaurants
	virtual void CrearPlantas() override;
	//Create the Rooms
	virtual void CrearVidas() override;
	//Returns the Lodging
	virtual class ANivelBase* GetNivelBase() override;


};
