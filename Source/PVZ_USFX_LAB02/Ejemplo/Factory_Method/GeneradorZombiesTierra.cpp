// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorZombiesTierra.h"
#include "ZombieTierraGlobo.h"
#include "ZombieTierraMinero.h"

AZombies* AGeneradorZombiesTierra::ArmarZombies(FString ZombiesSKU)
{
	//Selecciona el tipo de zombie a crear basado en su ZombiesSKU (string)
	if (ZombiesSKU.Equals("TierraGlobo")) {
		return GetWorld()->SpawnActor<AZombieTierraGlobo>(AZombieTierraGlobo::StaticClass());
	}
	else if (ZombiesSKU.Equals("TierraMinero")) {
		return GetWorld()->SpawnActor<AZombieTierraMinero>(AZombieTierraMinero::StaticClass());
	}
	else if (ZombiesSKU.Equals("TierraGigante")) {

		//Añadir otro zombie si se desea
		return 	nullptr;
	}
	else return nullptr; //Returna null si el valor no es valido

}
