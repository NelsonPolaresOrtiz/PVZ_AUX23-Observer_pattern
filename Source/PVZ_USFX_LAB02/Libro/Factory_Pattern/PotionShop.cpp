// Fill out your copyright notice in the Description page of Project Settings.


#include "PotionShop.h"


// Sets default values
APotionShop::APotionShop()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APotionShop::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APotionShop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

APotion* APotionShop::OrderPotion(FString Category)
{

	APotion* Potion = ConcoctPotion(Category);

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Concocting %s"), *Potion->GetPotionName()));
	//Start the concoct process
	Potion->Boil();
	Potion->Bubble();
	Potion->Brew();
	Potion->Bottle();
	//Returns the created potion
	return Potion;

}
