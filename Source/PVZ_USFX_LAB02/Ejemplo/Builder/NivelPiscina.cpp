// Fill out your copyright notice in the Description page of Project Settings.


#include "NivelPiscina.h"
#include "NivelBase.h"

// Sets default values
ANivelPiscina::ANivelPiscina()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void ANivelPiscina::BeginPlay()
{
	Super::BeginPlay();

	//Spawn los actores del nivel base
	NivelBase = GetWorld()->SpawnActor<ANivelBase>(ANivelBase::StaticClass());
	//Une el nivel base al creador de nivel(este)
	NivelBase->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

}

// Called every frame
void ANivelPiscina::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANivelPiscina::CrearZombies()
{
	if (!NivelBase)
	{
		UE_LOG(LogTemp, Error, TEXT("CrearZombies():NivelBase es NULL, asegurate de haberlo inicializado"));
		return;
	}
	//Define los zombies del nivel
	NivelBase->DefinirZombies("Zombies acuaticos");
}

void ANivelPiscina::CrearObstaculos()
{
	if (!NivelBase)
	{
		UE_LOG(LogTemp, Error, TEXT("CrearObstaculos():NivelBase es NULL, asegurate de haberlo inicializado"));
		return;
	}
	//Define los obstaculos del nivel
	NivelBase->DefinirObstaculos("Una piscina, agua");
}

void ANivelPiscina::CrearPlantas()
{
	if (!NivelBase)
	{
		UE_LOG(LogTemp, Error, TEXT("CrearPlantas():NivelBase es NULL, asegurate de haberlo inicializado"));
		return;
	}
	//Define las plantas del nivel
	NivelBase->DefinirPlantas("Plantas acuaticas");
}

void ANivelPiscina::CrearVidas()
{
	if (!NivelBase)
	{
		UE_LOG(LogTemp, Error, TEXT("CrearVidas():NivelBase es NULL, asegurate de haberlo inicializado"));
		return;
	}
	//Define las vidas del nivel
	NivelBase->DefinirVidas(5);
}

ANivelBase* ANivelPiscina::GetNivelBase()
{
	return NivelBase;
}

