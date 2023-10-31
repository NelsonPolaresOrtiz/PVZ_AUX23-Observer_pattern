// Fill out your copyright notice in the Description page of Project Settings.


#include "Observer_Principal.h"
#include "ZombieAbanderado.h"
#include "ZombieAnsioso.h"
#include "ZombieBorracho.h"
// Sets default values
AObserver_Principal::AObserver_Principal()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObserver_Principal::BeginPlay()
{
	Super::BeginPlay();

	FVector SpawnLocationZombie = FVector(-920.0f, 400.0f, 22.0f);
	SpawnLocationZombie.X += 100;
	//Aparicion del zombie abanderado
	
	AZombieAbanderado* ZombieAbanderado = GetWorld()->SpawnActor<AZombieAbanderado>(AZombieAbanderado::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
	
	AZombieBorracho* ZombieBorracho = GetWorld()->SpawnActor<AZombieBorracho>(AZombieBorracho::StaticClass(),SpawnLocationZombie, FRotator::ZeroRotator);
	
	//Aparicion del primer zombie que es el ansioso y definiendo su zombie como el abanderado
	AZombieAnsioso* ZombieAnsioso = GetWorld()->SpawnActor<AZombieAnsioso>(AZombieAnsioso::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
	
	ZombieAnsioso->DefinirZombie(ZombieAbanderado,ZombieBorracho);
	// Definir la ubicación de respawn



	//Cambia el estado del zombie abanderado, para que los suscriptores ejecuten su rutina

	//ZombieAbanderado->DefinirEstado("Calmado");

	//ZombieAbanderado->DefinirEstado("Enojado");

	ZombieAbanderado->DefinirEstado("Frenetico");
	ZombieBorracho->DefinirEstado("Borracho");
	//Si hubiera otro zombie publicador y suscriptor

	//Aparicion del zombie entrenador
	//AZombieEntrenador* ZombieEntrenador = GetWorld()->SpawnActor<AZombieEntrenador>(AZombieEntrenador::StaticClass());

	//Aparicion del segundo zombie que es el corredor y definiendo su zombie como el entrenador
	//AZombieCorredor* ZombieCorredor = GetWorld()->SpawnActor<AZombieCorredor>(AZombieCorredor::StaticClass());
	//ZombieCorredor->DefinirZombie(ZombieEntrenador);

	//ZombieEntrenador->DefinirEstado("Calentando");
	//ZombieEntrenador->DefinirEstado("Carrerilla");
	//ZombieEntrenador->DefinirEstado("Cansado");

}

// Called every frame
void AObserver_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

