// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieBorracho.h"
#include "Components/StaticMeshComponent.h"


AZombieBorracho::AZombieBorracho()
{
	MeshZombieBorracho = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Zombie Mesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	energia = 150;
	Velocidad = 0.2f;

	//Definición del mesh
	MeshZombieBorracho->SetStaticMesh(ZombieMeshAsset.Object);

	MeshZombieBorracho->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));
}

void AZombieBorracho::Tick(float DeltaTime)
{
	FVector LocalizacionObjetivo = FVector(-800.0f, -600.0f, 160.0f); // Cambia la ubicación objetivo según tus necesidades
	// Calcula la dirección y distancia al objetivo
	FVector Direccion = LocalizacionObjetivo - FVector(-800.0f, 400.0f, 160.0f);
	// Calcula la distancia de al objetivo
	float DistanciaAlObjetivo = FVector::Dist(LocalizacionObjetivo, this->GetActorLocation());




	// Calcula el desplazamiento en este frame
	float DeltaMove = Velocidad * GetWorld()->DeltaTimeSeconds;

	if (DeltaMove > DistanciaAlObjetivo)
	{
		// Si el desplazamiento excede la distancia al objetivo, mueve directamente al objetivo
		this->SetActorLocation(LocalizacionObjetivo);
		//this->SetActorRotation(NewRotation);
	}
	else
	{
		// Mueve el objeto en la dirección calculada
		this->AddActorWorldOffset(Direccion * DeltaMove);

	}
}

void AZombieBorracho::EstadoCambiado()
{
	//Cuando el estado a cambiado, este Zombie Abanderado (que es un Publicador) notifica a todos los suscriptores que el estado a cambiado
	NotificarSuscriptores();
}

void AZombieBorracho::DefinirEstado(FString myEstado)
{
	//Define el estado del zombie según un parametro pasado y advierte que el estado a cambiado
	EstadoBorracho = myEstado;
	EstadoCambiado();
}


