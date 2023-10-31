// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ZombieBase.h"
#include "EstadoDeJuego.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API AEstadoDeJuego : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEstadoDeJuego();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	//The Crew list
	TArray<AZombieBase*> Zombies;
	//The Tasks to execute
	UPROPERTY()
	TArray<FString> Tareas;


private:
	//Execute the tasks for a specific Crew
	void RealizarTareas(TArray<AZombieBase*> myZombieBase, TArray<FString> myTareas);

public:
	//Execute the Reveille tasks
	void Inicio();
	//Execute the PlanOfTheDay tasks
	void Medio();
	//Execute the Taps tasks
	void Largo();

};
