// Fill out your copyright notice in the Description page of Project Settings.


#include "DisparoDeFuego.h"
#include "ArmaDeFuego.h"

// Sets default values
ADisparoDeFuego::ADisparoDeFuego()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADisparoDeFuego::BeginPlay()
{
	Super::BeginPlay();

	//Spawn the Weapon
	Arma = GetWorld()->SpawnActor<AArmaDeFuego>(AArmaDeFuego::StaticClass());


}

// Called every frame
void ADisparoDeFuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void ADisparoDeFuego::DisparoFuego()
{
	if (!Arma) {
		UE_LOG(LogTemp, Error, TEXT("Sling(): Weapon isNULL, make sure it's initialized."));
		return;
	}
	//Call the Fire function
	Arma->Disparo();



}

