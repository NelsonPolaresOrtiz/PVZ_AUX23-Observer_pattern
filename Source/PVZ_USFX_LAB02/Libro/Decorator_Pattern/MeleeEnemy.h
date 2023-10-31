// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Decorator.h"
#include "MeleeEnemy.generated.h"

/**
 *
 */
UCLASS()
class PVZ_USFX_LAB02_API AMeleeEnemy : public ADecorator
{
	GENERATED_BODY()

public:

	//Start Fighting
	virtual void Fight() override;
	//Returns how much damage this enemy has taken
	virtual int GetDamage() override;
	//Kill this enemy
	virtual void Die() override;


};
