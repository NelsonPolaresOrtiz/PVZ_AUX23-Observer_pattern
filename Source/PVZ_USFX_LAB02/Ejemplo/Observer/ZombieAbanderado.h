// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Publicador.h"
#include "ZombieAbanderado.generated.h"

/**
 *
 */
UCLASS()
class PVZ_USFX_LAB02_API AZombieAbanderado : public APublicador
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AZombieAbanderado();
protected:
	UStaticMeshComponent* MeshZombieAbanderado;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	int energia;
	float Velocidad;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//The current time of this Clock Tower
	FString Estado;

public:
	//Called when the time of this Clock Tower has changed
	void EstadoCambiado();
	//Set the time of this Clock Tower
	void DefinirEstado(FString myEstado);
	//Return the time of this Clock Tower
	FORCEINLINE FString GetEstado() { return Estado; };

};
