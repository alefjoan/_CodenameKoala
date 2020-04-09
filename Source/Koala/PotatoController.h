// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "KoalaCharacter.h"
#include "Potato.h"
#include "CombatLocation.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISense_Sight.h"
#include "Perception/AIPerceptionTypes.h"
#include "Math/UnrealMathUtility.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"
#include "PotatoController.generated.h"

/**
 * 
 */
UCLASS()
class KOALA_API APotatoController : public AAIController
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AI, meta = (AllowPrivateAccess = "true"))
	class UAISenseConfig_Sight* SightConfig;

private:

	AKoalaCharacter* KoalaCharacter;

	ACombatLocation* CombatLocation;

	APotato* Potato;

	APotato* SeenPotato;

public:

	APotatoController();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	virtual void OnPossess(APawn* pawn) override;

	virtual FRotator GetControlRotation() const override;

	UFUNCTION()
	void OnPawnDetect(AActor* Actor, FAIStimulus Stimulus);

	UFUNCTION()
	void ForgetPlayer();

	UFUNCTION()
	void SetRandomLocation();

	UFUNCTION()
	void BehaviourOne();

	UFUNCTION()
	void BehaviourTwo();

	UFUNCTION()
	void BehaviourThree();

	UFUNCTION()
	void ReactToDeaths();

	UFUNCTION()
	void DamageTaken();

	UFUNCTION()
	void CheckPlayerSpotted();

	UFUNCTION()
	void ForgetDamageTaken();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
	float SightRadius = 750.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
	float SightAge = 5.0f;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
	float LoseSightRadius = SightRadius + 50.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
	float FieldOfView = 70.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AI)
	bool bPlayerDetected;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AI)
	bool bReactToDeaths = true;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Timer)
	FVector RandomLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Timer)
	float RandomPatrollingTime;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Timer)
	float RandomReactionTime;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Behaviour)
	int32 RandomBehaviour;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Character)
	AActor* Koala;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Character)
	AActor* KoalaDamaged;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Location)
	TArray<AActor*> Actors;

	FTimerHandle RandomLocationTimer;

	FTimerHandle ForgetPlayerTimer;

	FTimerHandle ReactToDeathsTimer;

	FTimerHandle ForgetDamageTakenTimer;

	FORCEINLINE class UAISenseConfig_Sight* const GetSightConfig() { return SightConfig; }
};
