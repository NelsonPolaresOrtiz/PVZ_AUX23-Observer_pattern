// Fill out your copyright notice in the Description page of Project Settings.


#include "Observer_Main.h"
#include "ClockTower.h"
#include "FreakyAllen.h"

// Sets default values
AObserver_Main::AObserver_Main()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObserver_Main::BeginPlay()
{
	Super::BeginPlay();

	//Spawn the Clock Tower
	AClockTower* ClockTower = GetWorld()->SpawnActor<AClockTower>(AClockTower::StaticClass());
	//Spawn the first Subscriber and set its Clock Tower
	AFreakyAllen* FreakyAllen = GetWorld()->SpawnActor<AFreakyAllen>(AFreakyAllen::StaticClass());

	FreakyAllen->SetClockTower(ClockTower);

	//Change the time of the Clock Tower, so the Subscribers can execute their own routine
	ClockTower->SetTimeOfDay("Morning");

	ClockTower->SetTimeOfDay("Midday");

	ClockTower->SetTimeOfDay("Evening");
}

// Called every frame
void AObserver_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

