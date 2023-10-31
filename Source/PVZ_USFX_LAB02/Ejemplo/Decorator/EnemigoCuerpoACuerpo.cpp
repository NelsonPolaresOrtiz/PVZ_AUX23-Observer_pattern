// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoCuerpoACuerpo.h"

void AEnemigoCuerpoACuerpo::Pelear()
{
	//Agrega el codigo que desees


	//Llama a la funcion de la clase padre para que se ejecute
	Super::Pelear();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El enemigo da golpes"));

}

int AEnemigoCuerpoACuerpo::GetDano()
{
	//Agrega el codigo que desees


	//Retorna el dano de la clase padre mas 15
	return Super::GetDano() + 15;
}

void AEnemigoCuerpoACuerpo::Morir()
{
	//Agrega el codigo que desees


	//Llama a la funcion de la clase padre para que se ejecute
	Super::Morir();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El enemigo cuerpo a cuerpo se muere"));

}
