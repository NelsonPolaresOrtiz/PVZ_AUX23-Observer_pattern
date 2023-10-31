// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryMethod_Main.h"
#include "OuterRealmPotionShop.h"
#include "InnerRealmPotionShop.h"

// Sets default values
AFactoryMethod_Main::AFactoryMethod_Main()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFactoryMethod_Main::BeginPlay()
{
	Super::BeginPlay();

	//Create the Shops
	APotionShop* InnerRealmShop = GetWorld()->SpawnActor<AInnerRealmPotionShop>(AInnerRealmPotionShop::StaticClass());


	APotion* Potion;

	//Create an Inner Health Potion and log its name
	Potion = InnerRealmShop->OrderPotion("Health");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Potion is %s"), *Potion->GetPotionName()));

	////Create an Inner Health Potion and log its name
	//Potion = InnerRealmShop->OrderPotion("Power");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Potion is %s"), *Potion->GetPotionName()));

	////Create an Inner Health Potion and log its name
	//Potion = InnerRealmShop->OrderPotion("Skill");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Potion is %s"), *Potion->GetPotionName()));


	//APotionShop* OuterRealmShop = GetWorld()->SpawnActor<AOuterRealmPotionShop>(AOuterRealmPotionShop::StaticClass());

	////Create an Outer Health Potion and log its name
	//Potion = OuterRealmShop->OrderPotion("Health");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Potion is %s"), *Potion->GetPotionName()));

	////Create an Outer Power Potion and log its name
	//Potion = OuterRealmShop->OrderPotion("Power");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Potion is %s"), *Potion->GetPotionName()));

	////Create an Outer Skill Potion and log its name
	//Potion = OuterRealmShop->OrderPotion("Skill");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Potion is %s"), *Potion->GetPotionName()));

}

// Called every frame
void AFactoryMethod_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

