// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Builder_Principal.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API ABuilder_Principal : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABuilder_Principal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	//The Builder Actor
	UPROPERTY(VisibleAnywhere, Category = "Main")
	class ANivelPasto* NivelPasto;
	//The Builder Actor
	UPROPERTY(VisibleAnywhere, Category = "Main")
	class ANivelPiscina* NivelPiscina;

	//The Engineer Actor
	UPROPERTY(VisibleAnywhere, Category = "Main")
	class ASeleccionarCreador* Creador;

};
