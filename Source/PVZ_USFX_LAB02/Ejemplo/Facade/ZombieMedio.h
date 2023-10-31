// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ZombieBase.h"
#include "ZombieMedio.generated.h"

/**
 *
 */
UCLASS()
class PVZ_USFX_LAB02_API AZombieMedio : public AZombieBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AZombieMedio();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//Interface Duty function - Prints the Duty log
	virtual void Carrerilla() override;
	//Interface Duty function - Prints the Duty log
	virtual void Saltar() override;

	//Interface Duty function - Returns the title
	virtual FString NombreZombie() override;


};
