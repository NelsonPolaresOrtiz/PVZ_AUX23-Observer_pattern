// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoratorPlantas.h"

// Sets default values
ADecoratorPlantas::ADecoratorPlantas()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADecoratorPlantas::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ADecoratorPlantas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADecoratorPlantas::Pelear()
{
	this->Enemigo->Pelear();
}

int ADecoratorPlantas::GetDano()
{
	return this->Enemigo->GetDano();
}

void ADecoratorPlantas::Morir()
{
	this->Enemigo->Morir();
}

