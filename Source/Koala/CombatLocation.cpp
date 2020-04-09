// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatLocation.h"
#include "PotatoController.h"
#include "EngineUtils.h"

// Sets default values
ACombatLocation::ACombatLocation()
{
	PrimaryActorTick.bCanEverTick = false;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));

	TriggerBox->SetBoxExtent(FVector(1500.0f, 1500.0f, 150.0f));
}

// Called when the game starts or when spawned
void ACombatLocation::BeginPlay()
{
	Super::BeginPlay();
	
	TriggerBox->SetWorldLocation(FVector(1500.0f, 1500.0f, 150.0f));
}

