// Fill out your copyright notice in the Description page of Project Settings.


#include "InnerRealmPowerPotion.h"

void AInnerRealmPowerPotion::BeginPlay()
{
	//Set the ingredients
	PotionName = "Inner Realm Power Potion";
	Gooeyness = "Mucus Like";
	Blood = "Orc Blood";
	//Add the herbs
	Herbs.Add("Root of Inner Realm");
	Herbs.Add("Sage of Inner Realm");

}

void AInnerRealmPowerPotion::Brew()
{
	//Log the brewing type
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Brewing at High Temperature"));

}
