// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TipoDisparo.h"
#include "PlantaDeFuego.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API APlantaDeFuego : public AActor, public ITipoDisparo
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APlantaDeFuego();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//The Weapon of the Shooter, that must be a SlingShot
	ITipoDisparo* TipoDisparo;

public:
	//Set the Weapon Actor
	void DefinirTipoDisparo(AActor* TiposDisparoObj);
	//Fire with the SlingShot
	void DisparoHielo() {};

	void DisparoFuego();



};
