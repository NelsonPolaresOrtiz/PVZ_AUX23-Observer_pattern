// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmaDeFuego.h"

// Sets default values
AArmaDeFuego::AArmaDeFuego()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArmaDeFuego::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AArmaDeFuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArmaDeFuego::Disparo()
{
	//Print Fire log
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El arma de fuego se dispara"));




}

