// Fill out your copyright notice in the Description page of Project Settings.


#include "Adapter_Main.h"

#include "GunAdapter.h"
#include "Shooter.h"

// Sets default values
AAdapter_Main::AAdapter_Main()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAdapter_Main::BeginPlay()
{
	Super::BeginPlay();

	//Spawn the Gun Adapter
	AGunAdapter* GunAdapter = GetWorld()->SpawnActor<AGunAdapter>(AGunAdapter::StaticClass());
	//Spawn the Shooter and set the Gun Adapter
	Shooter = GetWorld()->SpawnActor<AShooter>(AShooter::StaticClass());

	Shooter->SetSlingShot(GunAdapter);
	//Shoot
	Shooter->Sling();

}

// Called every frame
void AAdapter_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

