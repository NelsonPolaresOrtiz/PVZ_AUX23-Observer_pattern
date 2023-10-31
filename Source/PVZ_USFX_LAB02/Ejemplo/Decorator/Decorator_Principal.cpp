// Fill out your copyright notice in the Description page of Project Settings.


#include "Decorator_Principal.h"
#include "EnemigoADistancia.h"
#include "EnemigoCualquiera.h"
#include "EnemigoCuerpoACuerpo.h"

// Sets default values
ADecorator_Principal::ADecorator_Principal()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADecorator_Principal::BeginPlay()
{
	Super::BeginPlay();

	// Spawn a Concrete Enemy
	AEnemigoCualquiera* EnemigoCualquiera = GetWorld()->SpawnActor<AEnemigoCualquiera>(AEnemigoCualquiera::StaticClass());
	//Spawn a Melee Enemy and set its Enemy to the Concrete one
	AEnemigoCuerpoACuerpo* EnemigoCuerpoACuerpo = GetWorld()->SpawnActor<AEnemigoCuerpoACuerpo>(AEnemigoCuerpoACuerpo::StaticClass());
	EnemigoCuerpoACuerpo->DefinirEnemigo(EnemigoCualquiera);
	//Spawn a Projectile Enemy and set its Enemy to the Melee one
	AEnemigoADistancia* EnemigoADistancia = GetWorld()->SpawnActor<AEnemigoADistancia>(AEnemigoADistancia::StaticClass());
	EnemigoADistancia->DefinirEnemigo(EnemigoCuerpoACuerpo);

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Enemigos cuerpo a cuerpo en el horizonte"));
	Enemigo = EnemigoCuerpoACuerpo;
	Enemigo->Pelear();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Los enemigos cuerpo a cuerpo hacen %i de dano."), Enemigo->GetDano()));
	Enemigo->Morir();

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Los enemigos estan armados con pistolas"));
	Enemigo = EnemigoADistancia;
	Enemigo->Pelear();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Los enemigos a distancia hacen %i de dano."), Enemigo->GetDano()));
	Enemigo->Morir();





}

// Called every frame
void ADecorator_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

