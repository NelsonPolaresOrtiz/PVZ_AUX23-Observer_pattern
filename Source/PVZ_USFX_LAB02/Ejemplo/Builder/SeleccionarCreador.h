// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CreadorNivel.h"
#include "SeleccionarCreador.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API ASeleccionarCreador : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASeleccionarCreador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//El actor constructor que debe ser un CreadorNivel
	ICreadorNivel* CreadorNivel;

public:
	//Crea el Nivel
	void ConstruirNivel();
	//Define el constructor del nivel
	void DefinirConstructor(AActor* Constructor);

	//Obtiene el nivel base del constructor
	class ANivelBase* GetNivelBase();

};
