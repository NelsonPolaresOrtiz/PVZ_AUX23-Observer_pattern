// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Suscriptor.h"
#include "Tranformacion.h"
#include "ZombieAnsioso.generated.h"

class AZombieAbanderado;
class AZombieBorracho;
UCLASS()
class PVZ_USFX_LAB02_API AZombieAnsioso : public AActor, public ISuscriptor, public ITranformacion
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AZombieAnsioso();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//El zombie de este suscriptor
	UPROPERTY()
	AZombieAbanderado* ZombieAbanderado;
	AZombieBorracho* ZombieBorracho;

public:
	//Llamado cuando el suscriptor es destruido
	virtual void Destroyed() override;
	//Llamado cuando el publicador cambia su estado para ejecutar su rutina
	virtual void Actualizar(class APublicador* Publicador) override;
	//Ejecuta la rutina de este suscriptor
	virtual void Tranformacion();
	//Define el zombie de este suscriptor
	void DefinirZombie(AZombieAbanderado* myZombieAbanderado, AZombieBorracho* myZombieBorracho);


};
