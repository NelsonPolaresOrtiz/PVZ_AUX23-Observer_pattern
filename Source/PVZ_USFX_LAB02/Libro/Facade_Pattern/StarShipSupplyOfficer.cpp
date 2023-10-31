// Fill out your copyright notice in the Description page of Project Settings.


#include "StarShipSupplyOfficer.h"

AStarShipSupplyOfficer::AStarShipSupplyOfficer()
{

}

void AStarShipSupplyOfficer::BeginPlay()
{

}

void AStarShipSupplyOfficer::Tick(float DeltaTime)
{

}

void AStarShipSupplyOfficer::Duty()
{
	//Print Duty string
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s ensures there are ample ship supplies."), *CrewTitle()));

}

void AStarShipSupplyOfficer::LibertyCall()
{
	//Print LibertyCall string
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s Hace su liberty call."), *CrewTitle()));

}

FString AStarShipSupplyOfficer::CrewTitle()
{
	//Return title
	return "The Supply Officer";
}
