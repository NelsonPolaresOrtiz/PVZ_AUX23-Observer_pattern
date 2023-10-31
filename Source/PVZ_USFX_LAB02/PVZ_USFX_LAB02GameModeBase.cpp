// Copyright Epic Games, Inc. All Rights Reserved.


#include "PVZ_USFX_LAB02GameModeBase.h"
#include "Spawns.h"
#include "Zombie.h"
#include "Plant.h"
//#include "Sol.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/Engine.h"
#include "TimerManager.h"

#include "Jugador.h"
#include "Controlador.h"
#include "HUDPlantas.h"


#include "Planta_Ataque.h"
#include "Lanza_Guisantes.h"

#include "ZombieComun.h"
#include "ZombieCono.h"
#include "ZombieCubo.h"


//#include "Libro/Builder_Pattern/Builder_Main.h"
//#include "Libro/Factory_Pattern/FactoryMethod_Main.h"
//#include "Libro/Singleton_Pattern/Singleton_Main.h"
//#include "Libro/Decorator_Pattern/Decorator_Main.h"
//#include "Libro/Observer_Pattern/Observer_Main.h"
//#include "Libro/Adapter_Pattern/Adapter_Main.h"
//#include "Libro/Facade_Pattern/StarShipFacade_Main.h"

//#include "Ejemplo/Factory_Method/FactoryMethod_Principal.h"
//#include "Ejemplo/Decorator/Decorator_Principal.h"
#include "Ejemplo/Observer/Observer_Principal.h"
#include "Ejemplo/Observer/ZombieBorracho.h"
//#include "Ejemplo/Builder/Builder_Principal.h"
//#include "Ejemplo/Singleton/Singleton_Principal.h"
//#include "Ejemplo/Adapter/Adapter_Principal.h"
//#include "Ejemplo/Facade/Facade_Principal.h"


APVZ_USFX_LAB02GameModeBase::APVZ_USFX_LAB02GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;

	//Definiendo el Pawn o Peon
	DefaultPawnClass = AJugador::StaticClass();
	//Definiendo el Controlador
	PlayerControllerClass = AControlador::StaticClass();
	//Definiendo el HUD
	//HUDClass = AHUDPlantas::StaticClass();



	contador = FVector(0, 0, 0);
	localizacion = FVector(400.0, 200.0, 100.0);
	contador2 = 0;

	TiempoTranscurrido = 0.0f;


	FilaActual = 1;
	ColumnaActual = 1;


}

void APVZ_USFX_LAB02GameModeBase::EjemploPatrones()
{
	//AFactoryMethod_Principal* FactoryMethod = GetWorld()->SpawnActor<AFactoryMethod_Principal>(AFactoryMethod_Principal::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	//ADecorator_Principal* Decorator = GetWorld()->SpawnActor<ADecorator_Principal>(ADecorator_Principal::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	AObserver_Principal* Observer = GetWorld()->SpawnActor<AObserver_Principal>(AObserver_Principal::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	//ABuilder_Principal* Builder = GetWorld()->SpawnActor<ABuilder_Principal>(ABuilder_Principal::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	//ASingleton_Principal* Singleton = GetWorld()->SpawnActor<ASingleton_Principal>(ASingleton_Principal::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	//AAdapter_Principal* Adapter = GetWorld()->SpawnActor<AAdapter_Principal>(AAdapter_Principal::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	//AFacade_Principal* Facade = GetWorld()->SpawnActor<AFacade_Principal>(AFacade_Principal::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);
}

void APVZ_USFX_LAB02GameModeBase::Patrones()
{

	//ABuilder_Main* Builder = GetWorld()->SpawnActor<ABuilder_Main>(ABuilder_Main::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	//ASingleton_Main* Singleton = GetWorld()->SpawnActor<ASingleton_Main>(ASingleton_Main::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	//AFactoryMethod_Main* FactoryMethod = GetWorld()->SpawnActor<AFactoryMethod_Main>(AFactoryMethod_Main::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	//ADecorator_Main* Decorator = GetWorld()->SpawnActor<ADecorator_Main>(ADecorator_Main::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	//AObserver_Main* Observer = GetWorld()->SpawnActor<AObserver_Main>(AObserver_Main::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	//AAdapter_Main* Adapter = GetWorld()->SpawnActor<AAdapter_Main>(AAdapter_Main::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	//AStarShipFacade_Main* StarShipFacade = GetWorld()->SpawnActor<AStarShipFacade_Main>(AStarShipFacade_Main::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

}

void APVZ_USFX_LAB02GameModeBase::BeginPlay()
{
	Super::BeginPlay();

	Patrones();
	EjemploPatrones();

	// Definición de un objeto de tipo World
	UWorld* const World = GetWorld();

	//ASpawns* Spawn1 = GetWorld()->SpawnActor<ASpawns>(ASpawns::StaticClass(), FVector(0,0,0), FRotator::ZeroRotator);
	// 
	//AZombie* Zombie1 = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), FVector(400.0, 200.0, 100.0), FRotator::ZeroRotator);


	//World->GetTimerManager().SetTimer(Temporizador, this, &APVZ_USFX_LAB02GameModeBase::Spawn, 2, true);

	//Aparición de los soles
	//ASol* Sol1 = GetWorld()->SpawnActor<ASol>(ASol::StaticClass(), FVector(-400,-50,160), FRotator::ZeroRotator);
	//ASol* Sol2 = GetWorld()->SpawnActor<ASol>(ASol::StaticClass(), FVector(-450, -50, 160), FRotator::ZeroRotator);

	//Definiendo la posición de los zombies
	//FVector SpawnLocationZombie = FVector(-920.0f, 400.0f, 22.0f);

	////Genera 5 zombies
	//for (int i = 0; i < 5; i++) {
	//	//	 Define una posición temporal para el zombie en X
	//	SpawnLocationZombie.X += 100;
	//	//Aparicion de los zombies


	//	NuevoZombie = GetWorld()->SpawnActor<AZombieComun>(AZombieComun::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);

	//	NuevoZombie->Velocidad = FMath::FRandRange(0.1f, 0.5f);

	//	Zombies.Add(NuevoZombie);

	//}

	//for (int i = 0; i < 5; i++) {
	//	//	 Define una posición temporal para el zombie en X
	//	SpawnLocationZombie.X += 50;
	//	//Aparicion de los zombies


	//	NuevoZombieBorracho = GetWorld()->SpawnActor<AZombieBorracho>(AZombieBorracho::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);

	//	NuevoZombieBorracho->Velocidad = FMath::FRandRange(0.1f, 0.5f);

//	ZombiesBorracho.Add(NuevoZombieBorracho);

	//}



	//Definiendo la posición de las plantas
	FVector SpawnLocationPlant = FVector(-920.0f, -600.0f, 22.0f);
	FVector SpawnLocationPlantTemp = SpawnLocationPlant;

	// Genera 5 plantas
	for (int i = 0; i < 7; i++)
	{
		//Define una posicion temporal para la planta en X
		SpawnLocationPlantTemp.X += 100;



		for (int j = 0; j < 2; j++)
		{

			// Define una posición temporal para la planta en Y
			SpawnLocationPlantTemp.Y += 100;

			// Genera un nombre para la planta
			NombrePlanta = FString::Printf(TEXT("Planta %d_%d"), i + 1, j + 1); // Cambio en la generación del nombre

			// Crea una nueva instancia de APlant en el mundo
			NuevaPlantaGuisante = GetWorld()->SpawnActor<ALanza_Guisantes>(ALanza_Guisantes::StaticClass(), SpawnLocationPlantTemp, FRotator::ZeroRotator);

			// Asigna un valor aleatorio a la energía de la planta
			NuevaPlantaGuisante->energia = FMath::FRandRange(0.0, 10.0);

			// Muestra un mensaje en la consola
			//UE_LOG(LogTemp, Warning, TEXT("Energía de %s: %i"), *NombrePlanta, NuevaPlanta->energia);

			// Muestra un mensaje en la pantalla
			//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Energía de %s: %i"), *NombrePlanta, NuevaPlantaGuisante->energia));

			// Muestra un mensaje en el registro de errores
			//UE_LOG(LogTemp, Warning, TEXT("Energía de %s: %i"), *NombrePlanta, NuevaPlantaGuisante->energia);

			// Agrega la planta al contenedor de plantas
			Plantas.Add(NombrePlanta, NuevaPlantaGuisante);


			Plantas2.Add(NuevaPlantaGuisante);


			// Coloca la planta en una posición diferente
			//NuevaPlanta->SetActorLocation(FVector(i * 100, 0, 0));


		}
		// Define una posición temporal para la planta en Y
		SpawnLocationPlantTemp.Y = SpawnLocationPlant.Y;

	}

	//FString Mensaje = FString::Printf(TEXT("Encontrada planta: %s"), *NombrePlanta);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, Mensaje);


	//World->GetTimerManager().SetTimer(Temporizador, this, &APVZ_USFX_LAB02GameModeBase::aumentovelocidad, 1, true);


	//AZombieCubo* NewZombieCubo = GetWorld()->SpawnActor<AZombieCubo>(AZombieCubo::StaticClass(), FVector(-500.0, 450.0, 30.0), FRotator::ZeroRotator);



}




void APVZ_USFX_LAB02GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoTranscurrido += DeltaTime;

	//if (TiempoTranscurrido > 2.0f) {
	//	// Iterar sobre el vector de objetos
	//	for (int i = 0; i < Zombies.Num(); i++) {
	//		Zombies[i]->Velocidad = FMath::FRand() * 2.0f;

	//		//Zombies[i]->MovementSpeed += i * 1.0f;
	//	}
	//	TiempoTranscurrido = 0.0f;
	// 
	//}

	//if (TiempoTranscurrido > 5.0f) {
	//	// Iterar sobre el vector de objetos
	//	for (int i = 0; i < Plantas2.Num(); i++) {
	//		int vtemp= Plantas2[i]->energia;
	//		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Energía de %s: %i"), *NombrePlanta, vtemp));

	//		
	//	}
	//	TiempoTranscurrido = 0.0f;
	//}



}

void APVZ_USFX_LAB02GameModeBase::Spawn()
{
	contador2++;

	contador = contador + FVector(100, 0, 0);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Este es un mensaje")));


	AZombie* Zombie1 = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), localizacion, FRotator::ZeroRotator);



	localizacion.X = localizacion.X + contador2 * 100;
	localizacion.Y = localizacion.Y + contador2 * 100;
	//localizacion = localizacion + contador;




}

void APVZ_USFX_LAB02GameModeBase::aumentovelocidad()
{

	for (int i = 0; i < Zombies.Num(); i++)
	{
		Zombies[i]->Velocidad = +FMath::FRandRange(0, 0.2);
	}

}

void APVZ_USFX_LAB02GameModeBase::MostrarEnergiaDePlantas()
{

	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Este es un mensaje")));

	NombrePlanta = FString::Printf(TEXT("Planta %d_%d"), FilaActual, ColumnaActual);

	APlant* Planta = Plantas.FindRef(NombrePlanta);

	if (Planta)
	{
		FString Mensaje = FString::Printf(TEXT("%s: Energia %i"), *NombrePlanta, Planta->energia);

		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, Mensaje);

		UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);

	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("No se encontró la planta")));
	}

	ColumnaActual++;

	if (ColumnaActual > 2) // Ajusta este valor al número total de columnas
	{
		ColumnaActual = 1;
		FilaActual++;

		if (FilaActual > 5) // Ajusta este valor al número total de filas
		{
			FilaActual = 1;
		}
	}

}




