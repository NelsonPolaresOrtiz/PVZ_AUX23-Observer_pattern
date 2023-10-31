// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoDeJuego.h"
#include "ZombieInicio.h"
#include "ZombieMedio.h"
#include "ZombieLargo.h"

// Sets default values
AEstadoDeJuego::AEstadoDeJuego()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoDeJuego::BeginPlay()
{
	Super::BeginPlay();

	//Initialize the lists
	Zombies = TArray<AZombieBase*>();
	Tareas = TArray<FString>();
	//Spawn the members
	AZombieInicio* ZombieInicio = GetWorld()->SpawnActor<AZombieInicio>(AZombieInicio::StaticClass());
	AZombieMedio* ZombieMedio = GetWorld()->SpawnActor<AZombieMedio>(AZombieMedio::StaticClass());
	AZombieLargo* ZombieLargo = GetWorld()->SpawnActor<AZombieLargo>(AZombieLargo::StaticClass());
	//Add the member to the crew
	Zombies.Add(ZombieInicio);
	Zombies.Add(ZombieMedio);
	Zombies.Add(ZombieLargo);
}

// Called every frame
void AEstadoDeJuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoDeJuego::Inicio()
{
	//Empty the task list
	Tareas.Empty();
	//Add the tasks to execute
	Tareas.Add("Caminar");
	Tareas.Add("Morder");
	//Execute the tasks
	RealizarTareas(Zombies, Tareas);

}

void AEstadoDeJuego::Medio()
{
	//Empty the task list
	Tareas.Empty();
	//Add the tasks to execute
	Tareas.Add("Caminar");
	Tareas.Add("Morder");
	Tareas.Add("Carrerilla");
	//Execute the tasks
	RealizarTareas(Zombies, Tareas);
}

void AEstadoDeJuego::Largo()
{
	//Empty the task list
	Tareas.Empty();
	//Add the tasks to execute
	Tareas.Add("Caminar");
	Tareas.Add("Morder");
	Tareas.Add("Carrerilla");
	Tareas.Add("Saltar");

	//Execute the tasks
	RealizarTareas(Zombies, Tareas);
}

void AEstadoDeJuego::RealizarTareas(TArray<AZombieBase*> myZombieBase, TArray<FString> myTareas)
{
	//Execute the passed tasks for each crew member
	for (AZombieBase* Miembro : myZombieBase)
	{
		//Execute the task
		Miembro->Tarea(myTareas);
	}

}

