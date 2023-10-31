// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SlingShot.h"
#include "Shooter.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API AShooter : public AActor, public ISlingShot
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AShooter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//The Weapon of the Shooter, that must be a SlingShot
	ISlingShot* SlingShot;

public:
	//Set the Weapon Actor
	void SetSlingShot(AActor* SlingShotObj);
	//Fire with the SlingShot
	void Sling();

};
