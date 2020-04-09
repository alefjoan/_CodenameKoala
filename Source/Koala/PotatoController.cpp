// Fill out your copyright notice in the Description page of Project Settings.

#include "PotatoController.h"

APotatoController::APotatoController()
{
	PrimaryActorTick.bCanEverTick = true;

	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
	SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComp")));

	SightConfig->SightRadius = SightRadius;
	SightConfig->LoseSightRadius = LoseSightRadius;
	SightConfig->SetMaxAge(SightAge);
	SightConfig->PeripheralVisionAngleDegrees = FieldOfView;

	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
	GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this, &APotatoController::OnPawnDetect);
	GetPerceptionComponent()->ConfigureSense(*SightConfig);

}

void APotatoController::BeginPlay()
{
	Super::BeginPlay();

	Koala = Cast<AKoalaCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	for (TActorIterator<ACombatLocation> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		CombatLocation = Cast<ACombatLocation>(*ActorItr);
	}
	
}

void APotatoController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RandomLocation.X = FMath::FRandRange(100.0f, 2900.0f);
	RandomLocation.Y = FMath::FRandRange(100.0f, 2900.0f);
	RandomLocation.Z = 0;

	RandomPatrollingTime = FMath::FRandRange(1.0f, 10.0f);

	RandomReactionTime = FMath::FRandRange(10.0f, 30.0f);

	RandomBehaviour = FMath::RandHelper(3);

	if (Koala)
	{
		if (bPlayerDetected)
		{
			MoveToActor(Koala, 50.0f);
		}

	}

	if (Potato)
	{
		if (Potato->bIsDead)
		{
			StopMovement();
		}
	}
}

void APotatoController::OnPossess(APawn* pawn)
{
	Super::OnPossess(pawn);

	Potato = Cast<APotato>(pawn);

	MoveToLocation(RandomLocation, 2.0f);
	GetWorldTimerManager().SetTimer(ForgetPlayerTimer, this, &APotatoController::ForgetPlayer, 5.0f, false);
}

FRotator APotatoController::GetControlRotation() const
{
	if (GetPawn() == nullptr)
	{
		return FRotator(0.0f, 0.0f, 0.0f);
	}

	else return FRotator(0.0f, GetPawn()->GetActorRotation().Yaw, 0.0f);
}

void APotatoController::OnPawnDetect(AActor* Actor, FAIStimulus Stimulus)
{
	Koala = Cast<AKoalaCharacter>(Actor);
	SeenPotato = Cast<APotato>(Actor);

	if (SeenPotato)
	{
		if (SeenPotato->bIsDead && bReactToDeaths)
		{
			if (RandomBehaviour == 0)
			{
				BehaviourOne();
			}

			if (RandomBehaviour == 1)
			{
				BehaviourTwo();
			}

			if (RandomBehaviour == 2)
			{
				BehaviourThree();
			}

			bReactToDeaths = false;
		}
		
	}

	if (Koala == Actor)
	{
		if (Stimulus.IsActive() && Koala == Actor)
		{
			GetWorldTimerManager().ClearTimer(RandomLocationTimer);
			GetWorldTimerManager().ClearTimer(ForgetPlayerTimer);
			GetWorldTimerManager().ClearTimer(ForgetDamageTakenTimer);

			bPlayerDetected = true;
		}

		else
		{
			MoveToLocation(RandomLocation, 2.0f);
			GetWorldTimerManager().SetTimer(ForgetPlayerTimer, this, &APotatoController::ForgetPlayer, 5.0f, false);
		}
	}
	
}

void APotatoController::ForgetPlayer()
{
	MoveToLocation(RandomLocation, 2.0f);
	GetWorldTimerManager().SetTimer(RandomLocationTimer, this, &APotatoController::SetRandomLocation, RandomPatrollingTime, true);

	bPlayerDetected = false;
}

void APotatoController::SetRandomLocation()
{
	MoveToLocation(RandomLocation, 2.0f);
}

void APotatoController::BehaviourOne()
{
	Potato->Destroy();

	GetWorldTimerManager().SetTimer(ReactToDeathsTimer, this, &APotatoController::ReactToDeaths, RandomReactionTime, false);
}

void APotatoController::BehaviourTwo()
{
	StopMovement();

	GetWorldTimerManager().SetTimer(ReactToDeathsTimer, this, &APotatoController::ReactToDeaths, RandomReactionTime, false);
}

void APotatoController::BehaviourThree()
{
	
}

void APotatoController::ReactToDeaths()
{
	bReactToDeaths = true;

	GetWorldTimerManager().ClearTimer(ReactToDeathsTimer);
}

void APotatoController::DamageTaken()
{
	KoalaDamaged = Cast<AKoalaCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	GetWorldTimerManager().ClearTimer(RandomLocationTimer);

	MoveToActor(KoalaDamaged, 2.0f);

	CheckPlayerSpotted();
}

void APotatoController::CheckPlayerSpotted()
{
	GetWorldTimerManager().SetTimer(ForgetDamageTakenTimer, this, &APotatoController::ForgetDamageTaken, 5.0f, false);
	
}

void APotatoController::ForgetDamageTaken()
{
	ForgetPlayer();
}
