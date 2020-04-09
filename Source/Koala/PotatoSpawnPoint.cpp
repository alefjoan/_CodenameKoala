// Fill out your copyright notice in the Description page of Project Settings.


#include "PotatoSpawnPoint.h"
#include "Engine/World.h"

// Sets default values
APotatoSpawnPoint::APotatoSpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APotatoSpawnPoint::BeginPlay()
{
	Super::BeginPlay();

	APotato* PotatoSpawner = GetWorld()->SpawnActor<APotato>(PotatoSpawn);

	PotatoSpawner->SetActorRelativeLocation(FVector(0.0f, 0.0f, 40.0f));
	PotatoSpawner->SetActorHiddenInGame(false);
	
}

// Called every frame
void APotatoSpawnPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

