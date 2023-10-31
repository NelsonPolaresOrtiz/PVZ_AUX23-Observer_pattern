// Fill out your copyright notice in the Description page of Project Settings.


#include "Publicador.h"
#include "Suscriptor.h"

// Sets default values
APublicador::APublicador()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APublicador::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APublicador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APublicador::Suscribirse(AActor* Suscriptor)
{
	//Agrega el suscriptor pasado por parametro a la lista
	Suscriptores.Add(Suscriptor);

}

void APublicador::DeSuscribirse(AActor* SuscriptorAQuitar)
{
	//Quita el suscriptor pasado por parametro de la lista
	Suscriptores.Remove(SuscriptorAQuitar);
}

void APublicador::NotificarSuscriptores()
{
	//Ciclo repetitivo que recorre la lista de suscriptores
	for (AActor* Actor : Suscriptores)
	{
		//Castea cada uno de los actores de la lista a ISuscriptor
		ISuscriptor* Sub = Cast<ISuscriptor>(Actor);
		if (Sub)
		{
			//Notifica a cada uno de los suscriptores de la lista que algo a pasado
			Sub->Actualizar(this);
		}
	}
}

