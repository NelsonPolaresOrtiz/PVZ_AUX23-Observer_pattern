// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieAnsioso.h"
#include "ZombieAbanderado.h"
#include "ZombieBorracho.h"
#include "Publicador.h"

#include <PVZ_USFX_LAB02/PVZ_USFX_LAB02GameModeBase.h>
#include <PVZ_USFX_LAB02/ZombieComun.h>



// Sets default values
AZombieAnsioso::AZombieAnsioso()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AZombieAnsioso::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AZombieAnsioso::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AZombieAnsioso::Destroyed()
{
	Super::Destroyed();
	//Mensaje de error si el zombie no existe
	if (!ZombieAbanderado) {
		UE_LOG(LogTemp, Error, TEXT("Destroyed(): El zombie no existe, asegurate que sea inicializado."));
		return;
	}
	//Desuscribirse del publicador si el zombie es destruido
	ZombieAbanderado->DeSuscribirse(this);
}

void AZombieAnsioso::Actualizar(APublicador* Publicador)
{
	//Ejecuta su rutina o acciones
	Tranformacion();


}

void AZombieAnsioso::Tranformacion()
{
	//Mensaje de error si el zombie no existe
	if (!ZombieAbanderado) {
		UE_LOG(LogTemp, Error, TEXT("Tranformacion():El zombie no existe, asegurate que sea inicializado."));
		return;
	}
	//Get the current time of the Clock Tower
	FString Estado = ZombieAbanderado->GetEstado();


	if (!Estado.Compare("Calmado"))
	{
		//Ejecuta sus acciones estando calmado
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El estado es %s, El zombie ansioso esta tranquilo"), *Estado));

		//Puedes poner lo que quieras aqui
	}
	else if (!Estado.Compare("Enojado"))
	{
		//Ejecuta sus acciones estando enojado
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El estado es %s, El zombie ansioso esta enojado"), *Estado));
		//Puedes poner lo que quieras aqui

	}
	else if (!Estado.Compare("Frenetico"))
	{
		//Ejecuta sus acciones estando frenetico
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El estado es %s, El zombie esta frenetico"), *Estado));
		//Puedes poner lo que quieras aqui

	}

	//Mensaje de error si el zombie no existe
	if (!ZombieBorracho) {
		UE_LOG(LogTemp, Error, TEXT("Tranformacion():El zombie no existe, asegurate que sea inicializado."));
		return;
	}
	//Get the current time of the Clock Tower
	FString EstadoBorracho = ZombieBorracho->GetEstado();
	if (!EstadoBorracho.Compare("Borracho"))
	{
		//Ejecuta sus acciones estando frenetico
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("El estado es %s, El zombie esta Borracho"), *EstadoBorracho));
		//Puedes poner lo que quieras aqui

	}
}

void AZombieAnsioso::DefinirZombie(AZombieAbanderado* myZombieAbanderado, AZombieBorracho* myZombieBorracho)
{
	//Mensaje de error si el zombie no existe
	if (!myZombieAbanderado) {
		UE_LOG(LogTemp, Error, TEXT("DefinirZombie(): myZombieAbanderado es nulo, asegurate que fue inicializado."));
		return;
	}
	//Set the Clock Tower and Subscribe to that
	ZombieAbanderado = myZombieAbanderado;
	ZombieAbanderado->Suscribirse(this);

	if (!myZombieBorracho) {
		UE_LOG(LogTemp, Error, TEXT("DefinirZombie(): myZombieBorracho es nulo, asegurate que fue inicializado."));
		return;
	}
	//Set the Clock Tower and Subscribe to that
	ZombieBorracho = myZombieBorracho;
	ZombieBorracho->Suscribirse(this);

}
