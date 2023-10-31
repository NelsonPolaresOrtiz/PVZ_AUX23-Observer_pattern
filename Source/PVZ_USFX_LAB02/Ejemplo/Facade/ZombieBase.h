// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ZombieBase.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API AZombieBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AZombieBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//Execute the passed Task
	void Tarea(const FString& Tarea);

public:
	//Execute the TurnLightsOut task
	void Caminar();
	//Execute the HeaveOutTriceUp task
	void Morder();

	//Execute the passed Tasks
	void Tarea(const TArray<FString>& Tareas);

	//Execute the member duty. It's pure virtual, so it doesn't need an implementation in this class
	virtual void Carrerilla() PURE_VIRTUAL(AZombieBase::Carrerilla, ;);

	//Execute the member duty. It's pure virtual, so it doesn't need an implementation in this class
	virtual void Saltar() PURE_VIRTUAL(AZombieBase::Saltar, ;);

	//Return the member Title. It's pure virtual, so it doesn't need an implementation in this class
	virtual FString NombreZombie()PURE_VIRTUAL(AZombieBase::CrewTitle, return "";);

};
