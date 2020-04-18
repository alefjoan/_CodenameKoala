// Fill out your copyright notice in the Description page of Project Settings.


#include "Potato.h"
#include "PotatoController.h"
#include "KoalaCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#include "AIController.h"
#include "Tasks/AITask.h"


// Sets default values
APotato::APotato()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->MaxWalkSpeed = 400.0f;
	GetCharacterMovement()->bUseRVOAvoidance = true;
	GetCharacterMovement()->AvoidanceConsiderationRadius = 1000.0f;
	GetCharacterMovement()->AvoidanceWeight = 1.5f;

	bIsDead = false;
}

// Called when the game starts or when spawned
void APotato::BeginPlay()
{
	Super::BeginPlay();

	Koala = Cast<AKoalaCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	bIsDead = false;

}

// Called every frame
void APotato::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APotato::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	PotatoController = Cast<APotatoController>(NewController);
}

// Called to bind functionality to input 
void APotato::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APotato::DamageReception(int32 DamageTaken)
{
	
	PotatoHP = PotatoHP - DamageTaken;

	PotatoController->DamageTaken();

	if (PotatoHP <= 0)
	{
		PotatoController->PotatoDeath();
		bIsDead = true;

	}
}
