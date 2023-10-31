// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.h"
#include "ConcreteEnemy.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API AConcreteEnemy : public AActor, public IEnemy
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AConcreteEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual void Fight() override {}
	virtual int GetDamage() override { return 5; }
	virtual void Die() override {}

};
