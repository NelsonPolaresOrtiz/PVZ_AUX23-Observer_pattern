// Fill out your copyright notice in the Description page of Project Settings.


#include "InnerRealmSkillPotion.h"

void AInnerRealmSkillPotion::BeginPlay()
{
	//Set the ingredients
	PotionName = "Inner Realm Skill Potion";
	Gooeyness = "Mucus Like";
	Blood = "Orc Blood";
	//Add the herbs
	Herbs.Add("Root of Inner Realm");
	Herbs.Add("Red Clover of Inner Realm");
	Herbs.Add("Wildrose of Inner Realm");
	Herbs.Add("Yarrow of Inner Realm");

}

void AInnerRealmSkillPotion::Brew()
{
	//Log the brewing type
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Brewing at High Temperature"));

}
