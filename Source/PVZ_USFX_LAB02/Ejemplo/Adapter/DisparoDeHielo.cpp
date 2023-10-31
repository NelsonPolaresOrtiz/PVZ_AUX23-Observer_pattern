// Fill out your copyright notice in the Description page of Project Settings.


#include "DisparoDeHielo.h"
#include "ArmaDeHielo.h"

// Sets default values
ADisparoDeHielo::ADisparoDeHielo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADisparoDeHielo::BeginPlay()
{
	Super::BeginPlay();

	//Spawn the Weapon
	Arma = GetWorld()->SpawnActor<AArmaDeHielo>(AArmaDeHielo::StaticClass());

}

// Called every frame
void ADisparoDeHielo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADisparoDeHielo::DisparoHielo()
{
	if (!Arma) {
		UE_LOG(LogTemp, Error, TEXT("Sling(): Weapon isNULL, make sure it's initialized."));
		return;
	}
	//Call the Fire function
	Arma->Disparo();
}





