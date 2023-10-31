// Fill out your copyright notice in the Description page of Project Settings.


#include "Potion.h"

// Sets default values
APotion::APotion()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Herbs = TArray<FString>();

}

// Called when the game starts or when spawned
void APotion::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APotion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APotion::Boil()
{
	//Log the Boil procedure
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Boil %s"), *GetPotionName()));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Drop in blood..."));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Drop in herbs: "));
}

void APotion::Bubble()
{
	//Log the Bubble procedure
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Bubble for 3 moons and a sunset"));
}

void APotion::Brew()
{
	//Log the Brew procedure
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Brewing at Low Temperature"));
}

void APotion::Bottle()
{
	//Log the Bottle procedure
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Bottle concoction in flask"));

}

FString APotion::GetPotionName()
{

	return PotionName;
}

