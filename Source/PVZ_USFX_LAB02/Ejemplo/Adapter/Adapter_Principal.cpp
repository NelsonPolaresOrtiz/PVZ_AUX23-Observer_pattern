// Fill out your copyright notice in the Description page of Project Settings.


#include "Adapter_Principal.h"
#include "DisparoDeHielo.h"
#include "DisparoDeFuego.h"

#include "PlantaDeHIelo.h"
#include "PlantaDeFuego.h"
#include "PlantaHibrida.h"

// Sets default values
AAdapter_Principal::AAdapter_Principal()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAdapter_Principal::BeginPlay()
{
	Super::BeginPlay();

	//Spawn el disparo de hielo
	ADisparoDeHielo* DisparoDeHielo = GetWorld()->SpawnActor<ADisparoDeHielo>(ADisparoDeHielo::StaticClass());


	//Aparece el actor con el arma de hielo

	PlantaDeHielo = GetWorld()->SpawnActor<APlantaDeHIelo>(APlantaDeHIelo::StaticClass());

	PlantaDeHielo->DefinirTipoDisparo(DisparoDeHielo);
	//Dispara
	PlantaDeHielo->DisparoHielo();




	//Spawn el disparo de fuego
	ADisparoDeFuego* DisparoDeFuego = GetWorld()->SpawnActor<ADisparoDeFuego>(ADisparoDeFuego::StaticClass());

	//Aparece el actor con el arma de fuego
	PlantaDeFuego = GetWorld()->SpawnActor<APlantaDeFuego>(APlantaDeFuego::StaticClass());

	PlantaDeFuego->DefinirTipoDisparo(DisparoDeFuego);
	//Dispara
	PlantaDeFuego->DisparoFuego();


	//Aparece el actor con el arma de hielo o fuego (Hibrido)

	//Deben estar presentes los dos tipos de disparo
	//ADisparoDeFuego* DisparoDeFuego = GetWorld()->SpawnActor<ADisparoDeFuego>(ADisparoDeFuego::StaticClass());
	//ADisparoDeHielo* DisparoDeHielo = GetWorld()->SpawnActor<ADisparoDeHielo>(ADisparoDeHielo::StaticClass());


	PLantaHibrida = GetWorld()->SpawnActor<APlantaHibrida>(APlantaHibrida::StaticClass());

	PLantaHibrida->DefinirTipoDisparo(DisparoDeHielo);

	PLantaHibrida->DisparoHielo();

	PLantaHibrida->DefinirTipoDisparo(DisparoDeFuego);

	PLantaHibrida->DisparoFuego();














}

// Called every frame
void AAdapter_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

