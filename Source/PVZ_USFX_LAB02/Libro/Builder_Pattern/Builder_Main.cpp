// Fill out your copyright notice in the Description page of Project Settings.


#include "Builder_Main.h"

#include "HotelLodgingBuilder.h"
#include "ArchitecturalEngineer.h"
#include "Lodging.h"



// Sets default values
ABuilder_Main::ABuilder_Main()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuilder_Main::BeginPlay()
{
	Super::BeginPlay();


	//Spawn Builder and Engineer
	HotelBuilder = GetWorld()->SpawnActor<AHotelLodgingBuilder>(AHotelLodgingBuilder::StaticClass());
	Engineer = GetWorld()->SpawnActor<AArchitecturalEngineer>(AArchitecturalEngineer::StaticClass());

	//Set the Builder for the Engineer and create the buildings
	Engineer->SetLodgingBuilder(HotelBuilder);

	Engineer->ConstructLodging();
	//Get the Engineer's Lodging and Logs the created buildings
	ALodging* Lodging = Engineer->GetLodging();

	Lodging->LodgingCharacteristics();


}

// Called every frame
void ABuilder_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

