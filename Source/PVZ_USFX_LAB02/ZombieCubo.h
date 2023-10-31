// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Zombie.h"
#include "ZombieCubo.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API AZombieCubo : public AZombie
{
	GENERATED_BODY()
public:
	AZombieCubo();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;


	FTimerHandle Tiempito;

	void CambioUbicacion();

};
