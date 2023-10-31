// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Barra_Progreso.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API ABarra_Progreso : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABarra_Progreso();

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MeshBarra;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:
	//The instance of this Class
	UPROPERTY()
	ABarra_Progreso* Instancia;


};
