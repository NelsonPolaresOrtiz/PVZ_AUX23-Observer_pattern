// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Publicador.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API APublicador : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APublicador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//Los suscriptores del publicador
	UPROPERTY()
	TArray<AActor*> Suscriptores = TArray<AActor*>();

public:
	//Agrega el suscriptor pasado por parametro a la lista
	virtual void Suscribirse(AActor* Suscriptor);
	//Quita el suscriptor pasado por parametro de la lista
	virtual void DeSuscribirse(AActor* SuscriptorAQuitar);
	//Notifica a todos los suscriptores de la lista que algo a pasado
	virtual void NotificarSuscriptores();

};
