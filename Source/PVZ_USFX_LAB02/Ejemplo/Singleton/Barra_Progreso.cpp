// Fill out your copyright notice in the Description page of Project Settings.


#include "Barra_Progreso.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABarra_Progreso::ABarra_Progreso()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BarraMesh1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));

	MeshBarra = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarraMesh"));
	MeshBarra->SetupAttachment(RootComponent);
	RootComponent = MeshBarra;

	MeshBarra->SetStaticMesh(BarraMesh1.Object);





	//Busca instancias existentes de esta clase
	TArray<AActor*> Instancias;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABarra_Progreso::StaticClass(), Instancias);
	if (Instancias.Num() > 1)
	{
		//Si almenos existe una de ellas, establece la instancia con la primera encontrada
		Instancia = Cast<ABarra_Progreso>(Instancias[0]);
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s Ya existe"), *Instancia->GetName()));
		//Entonces destruye este actor
		Destroy();
	}


}

// Called when the game starts or when spawned
void ABarra_Progreso::BeginPlay()
{
	Super::BeginPlay();


}

// Called every frame
void ABarra_Progreso::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

