// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Adapter_Principal.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API AAdapter_Principal : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AAdapter_Principal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	//The Shooter Actor that holds the Gun Adapter
	UPROPERTY()
	class APlantaDeHIelo* PlantaDeHielo;

	UPROPERTY()
	class APlantaDeFuego* PlantaDeFuego;

	UPROPERTY()
	class APlantaHibrida* PLantaHibrida;

};
