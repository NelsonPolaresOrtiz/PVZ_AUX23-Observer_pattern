// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieTierraGlobo.h"

void AZombieTierraGlobo::BeginPlay()
{
	//Cambias los atributos según lo que quieras


	//Define sus atributos
	NombreZombie = "Zombie de Tierra en globo";
	Vida = FMath::FRandRange(100, 150);
	Armadura = "Igual que la vida";
	//Añade los materiales (opcional)
	Materiales.Add("Un globo, un inflador");

}

void AZombieTierraGlobo::Elaboracion()
{

	//Mensaje del tipo de elaboracion
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Elaborando zombie en globo"));

	//Añade codigo que quieras que haga el zombie



}
