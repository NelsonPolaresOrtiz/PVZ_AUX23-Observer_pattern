// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieCubo.h"

AZombieCubo::AZombieCubo()
{
	PrimaryActorTick.bCanEverTick = true;

	energia = 1000;

}

void AZombieCubo::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();

	//World->GetTimerManager().SetTimer(Tiempito, this, &AZombieCubo::CambioUbicacion, 5.0f, false, 5.0f);

}

void AZombieCubo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void AZombieCubo::CambioUbicacion()
{

	float RandomX = FMath::FRandRange(-800.0f, -200.0f); // Ajusta el rango según tu escenario
	float RandomY = FMath::FRandRange(-600.0f, -400.0f); // Ajusta el rango según tu escenario

	// Calcula la nueva ubicación fuera del carril actual
	FVector NewLocation = FVector(RandomX, RandomY, 5.0f);

	// Establece la nueva ubicación del actor
	this->SetActorLocation(NewLocation);


}
