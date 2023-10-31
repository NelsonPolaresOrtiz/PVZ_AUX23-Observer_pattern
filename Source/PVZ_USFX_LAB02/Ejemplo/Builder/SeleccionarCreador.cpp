// Fill out your copyright notice in the Description page of Project Settings.


#include "SeleccionarCreador.h"
#include "NivelBase.h"

// Sets default values
ASeleccionarCreador::ASeleccionarCreador()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASeleccionarCreador::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ASeleccionarCreador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASeleccionarCreador::DefinirConstructor(AActor* Constructor)
{
	//Castea el actor pasado y define el constructor
	CreadorNivel = Cast<ICreadorNivel>(Constructor);
	if (!CreadorNivel) //Log Error if cast fails
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Casteo invalido, mira el registro de salida para mas detalles"));
		UE_LOG(LogTemp, Error, TEXT("DefinirConstructor(): El actor no es un CreadorNivel! Estas seguro que el actor implementa esa interfaz?"));

	}

}

ANivelBase* ASeleccionarCreador::GetNivelBase()
{
	if (CreadorNivel)
	{
		//Returna el nivel base del constructor
		return CreadorNivel->GetNivelBase();
	}
	//Manda un mensaje de error si el constructor es NULL
	UE_LOG(LogTemp, Error, TEXT("GetNivelBase(): Returna nullptr"));
	return nullptr;
}

void ASeleccionarCreador::ConstruirNivel()
{
	//Log if the Builder is NULL
	if (!CreadorNivel) {
		UE_LOG(LogTemp, Error, TEXT("ConstruirNivel(): CreadorNivel is NULL, asegurate que haya sido inicializado."));
		return;
	}
	//Creates the buildings
	CreadorNivel->CrearZombies();
	CreadorNivel->CrearObstaculos();
	CreadorNivel->CrearPlantas();
	CreadorNivel->CrearVidas();
}

