// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.h"
#include "DecoratorPlantas.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API ADecoratorPlantas : public AActor, public IEnemigo
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADecoratorPlantas();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	IEnemigo* Enemigo;
public:

	virtual void Pelear() override;
	virtual int GetDano() override;
	virtual void Morir() override;


	void DefinirEnemigo(IEnemigo* _Enemigo) { Enemigo = _Enemigo; }
	IEnemigo* GetEnemigo() { return Enemigo; }

};
