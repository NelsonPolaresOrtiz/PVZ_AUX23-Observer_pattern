// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Nivel.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNivel : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class PVZ_USFX_LAB02_API INivel
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//Las funciones virtuales puras del "nivel"
	virtual void DefinirZombies(FString Zombies) = 0;
	virtual void DefinirObstaculos(FString Obstaculos) = 0;
	virtual void DefinirPlantas(FString Plantas) = 0;
	virtual void DefinirVidas(int Vidas) = 0;


};
