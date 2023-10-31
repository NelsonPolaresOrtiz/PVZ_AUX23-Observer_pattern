// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Enemy.h"

#include "Decorator_Main.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API ADecorator_Main : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADecorator_Main();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//The main Enemy Actor
	IEnemy* Enemy;

};
