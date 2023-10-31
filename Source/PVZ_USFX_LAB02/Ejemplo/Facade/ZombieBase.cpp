// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieBase.h"

// Sets default values
AZombieBase::AZombieBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AZombieBase::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AZombieBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AZombieBase::Caminar()
{
	// Print lights out string
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s camina"), *NombreZombie()));
}

void AZombieBase::Morder()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s muerde"), *NombreZombie()));
}

void AZombieBase::Tarea(const TArray<FString>& Tareas)
{
	//Loop the Tasks array and call the Task() function for each of them
	for (const FString& myTarea : Tareas)
	{
		Tarea(myTarea);
	}
}

void AZombieBase::Tarea(const FString& Tarea)
{
	//Checks which task must be executed
	if (Tarea.Equals("Caminar"))
	{
		Caminar();
	}
	else if (Tarea.Equals("Morder"))
	{
		Morder();
	}
	else if (Tarea.Equals("Carrerilla"))
	{
		Carrerilla();
	}
	else if (Tarea.Equals("Saltar"))
	{
		Saltar();
	}
	else
	{
		//In case the passed Task doesn't exist
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Tarea sin definir"));
	}

}
