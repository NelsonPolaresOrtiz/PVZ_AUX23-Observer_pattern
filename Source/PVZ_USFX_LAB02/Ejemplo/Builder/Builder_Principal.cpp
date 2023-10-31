// Fill out your copyright notice in the Description page of Project Settings.


#include "Builder_Principal.h"
#include "NivelPasto.h"
#include "NivelPiscina.h"
#include "NivelBase.h"
#include "SeleccionarCreador.h"

// Sets default values
ABuilder_Principal::ABuilder_Principal()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuilder_Principal::BeginPlay()
{
	Super::BeginPlay();

	//Spawn los niveles y el creador
	NivelPasto = GetWorld()->SpawnActor<ANivelPasto>(ANivelPasto::StaticClass());

	NivelPiscina = GetWorld()->SpawnActor<ANivelPiscina>(ANivelPiscina::StaticClass());

	Creador = GetWorld()->SpawnActor<ASeleccionarCreador>(ASeleccionarCreador::StaticClass());
	//Set the Builder for the Engineer and create the buildings
	Creador->DefinirConstructor(NivelPasto);
	Creador->ConstruirNivel();
	//Get the Engineer's Lodging and Logs the created buildings

	ANivelBase* NivelBase = Creador->GetNivelBase();
	NivelBase->CaracteristicasNivelBase();

}

// Called every frame
void ABuilder_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

