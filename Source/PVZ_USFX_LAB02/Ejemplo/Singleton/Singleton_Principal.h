// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Singleton_Principal.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API ASingleton_Principal : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASingleton_Principal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//The Inventory of this Actor
	UPROPERTY()
	class ABarra_Progreso* Barra_Progreso;


};
