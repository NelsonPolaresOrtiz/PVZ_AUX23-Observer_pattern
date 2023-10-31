// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.h"
#include "EnemigoCualquiera.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API AEnemigoCualquiera : public AActor, public IEnemigo
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEnemigoCualquiera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual void Pelear() override {}
	virtual int GetDano() override { return 5; }
	virtual void Morir() override {}

};
