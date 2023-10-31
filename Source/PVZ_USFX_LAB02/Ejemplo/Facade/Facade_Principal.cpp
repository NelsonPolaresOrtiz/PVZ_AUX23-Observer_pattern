// Fill out your copyright notice in the Description page of Project Settings.


#include "Facade_Principal.h"
#include "EstadoDeJuego.h"

// Sets default values
AFacade_Principal::AFacade_Principal()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacade_Principal::BeginPlay()
{
	Super::BeginPlay();

	//Create the Ship Facade Actor
	AEstadoDeJuego* EstadoDeJuego = GetWorld()->SpawnActor<AEstadoDeJuego>(AEstadoDeJuego::StaticClass());
	//Execute the needed tasks
	//EstadoDeJuego->Inicio();
	//EstadoDeJuego->Medio();
	EstadoDeJuego->Largo();


}

// Called every frame
void AFacade_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

