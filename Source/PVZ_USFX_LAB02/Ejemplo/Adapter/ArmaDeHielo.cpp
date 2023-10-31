// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmaDeHielo.h"

// Sets default values
AArmaDeHielo::AArmaDeHielo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArmaDeHielo::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AArmaDeHielo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArmaDeHielo::Disparo()
{
	//Print Fire log
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El arma de hielo se dispara"));



}


