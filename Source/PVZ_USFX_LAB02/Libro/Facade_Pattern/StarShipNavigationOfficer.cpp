// Fill out your copyright notice in the Description page of Project Settings.


#include "StarShipNavigationOfficer.h"

AStarShipNavigationOfficer::AStarShipNavigationOfficer()
{
}

void AStarShipNavigationOfficer::BeginPlay()
{
}

void AStarShipNavigationOfficer::Tick(float DeltaTime)
{
}

void AStarShipNavigationOfficer::Duty()
{
	//Print Duty string
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s navigates the ship."), *CrewTitle()));
}

void AStarShipNavigationOfficer::LibertyCall()
{
	//Print LibertyCall string
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s Navigation."), *CrewTitle()));


}

FString AStarShipNavigationOfficer::CrewTitle()
{
	//Return title
	return "The Nav Officer";

}