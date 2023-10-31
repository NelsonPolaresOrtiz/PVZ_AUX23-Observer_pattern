// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Publicador.h"
#include "PVZ_USFX_LAB02/Zombie.h"
#include "ZombieBorracho.generated.h"
/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API AZombieBorracho : public APublicador
{
	GENERATED_BODY()
public:
	AZombieBorracho();
private:
	//The current time of this Clock Tower
	FString EstadoBorracho;
protected: 
	UStaticMeshComponent* MeshZombieBorracho;

public:
	virtual void Tick(float DeltaTime) override;
	int energia;
	float Velocidad;
	//Called when the time of this Clock Tower has changed
	void EstadoCambiado();
	//Set the time of this Clock Tower
	void DefinirEstado(FString myEstado);
	//Return the time of this Clock Tower
	FORCEINLINE FString GetEstado() { return EstadoBorracho; };
};
