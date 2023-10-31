// Fill out your copyright notice in the Description page of Project Settings.


#include "NivelPasto.h"
#include "NivelBase.h"

// Sets default values
ANivelPasto::ANivelPasto()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANivelPasto::BeginPlay()
{
	Super::BeginPlay();

	//Spawn los actores del nivel base
	NivelBase = GetWorld()->SpawnActor<ANivelBase>(ANivelBase::StaticClass());
	//Une el nivel base al creador de nivel(este)
	NivelBase->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

}

// Called every frame
void ANivelPasto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANivelPasto::CrearZombies()
{
	if (!NivelBase) {
		UE_LOG(LogTemp, Error, TEXT("CrearZombies():NivelBase es NULL, asegurate de haberlo inicializado"));
		return;
	}
	//Define los zombies del nivel
	NivelBase->DefinirZombies("Zombies normalitos");

}

void ANivelPasto::CrearObstaculos()
{
	if (!NivelBase) {
		UE_LOG(LogTemp, Error, TEXT("CrearObstaculos():NivelBase es NULL, asegurate de haberlo inicializado"));
		return;
	}
	//Define los obstaculos del nivel
	NivelBase->DefinirObstaculos("Sin obstaculos");
}

void ANivelPasto::CrearPlantas()
{
	if (!NivelBase) {
		UE_LOG(LogTemp, Error, TEXT("CrearPlantas():NivelBase es NULL, asegurate de haberlo inicializado"));
		return;
	}
	//Define las plantas del nivel
	NivelBase->DefinirPlantas("Plantas normales");
}

void ANivelPasto::CrearVidas()
{
	if (!NivelBase) {
		UE_LOG(LogTemp, Error, TEXT("CrearVidas():NivelBase es NULL, asegurate de haberlo inicializado"));
		return;
	}
	//Define las vidas del nivel
	NivelBase->DefinirVidas(3);
}


ANivelBase* ANivelPasto::GetNivelBase()
{
	return NivelBase;
}

