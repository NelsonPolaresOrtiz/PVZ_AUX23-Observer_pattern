// Fill out your copyright notice in the Description page of Project Settings.


#include "Singleton_Principal.h"
#include "Barra_Progreso.h"

// Sets default values
ASingleton_Principal::ASingleton_Principal()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASingleton_Principal::BeginPlay()
{
	Super::BeginPlay();

	//Crea 4 barras de progreso
	for (int i = 0; i <= 4; i++)
	{
		ABarra_Progreso* Barra_Progreso_Spawneada = GetWorld()->SpawnActor<ABarra_Progreso>(ABarra_Progreso::StaticClass());
		if (Barra_Progreso_Spawneada)
		{
			//Si el spawn tiene exito, establece el inventario spawneado al local y muestra un mensaje de exito
			Barra_Progreso = Barra_Progreso_Spawneada;
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s ah sido creado"), *Barra_Progreso->GetName()));
		}
	}

}

// Called every frame
void ASingleton_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

