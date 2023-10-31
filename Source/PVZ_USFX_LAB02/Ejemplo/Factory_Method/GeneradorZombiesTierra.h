// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneradorZombies.h"
#include "GeneradorZombiesTierra.generated.h"

/**
 *
 */
UCLASS()
class PVZ_USFX_LAB02_API AGeneradorZombiesTierra : public AGeneradorZombies
{
	GENERATED_BODY()


public:
	//Concoct the selected potion
	virtual AZombies* ArmarZombies(FString ZombiesSKU) override;

};
