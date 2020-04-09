// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Potato.h"
#include "Classes/Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "CombatLocation.generated.h"

UCLASS()
class KOALA_API ACombatLocation : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Trigger, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* TriggerBox;
	
public:	
	// Sets default values for this actor's properties
	ACombatLocation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	APotato* Potato;

public:	

	FORCEINLINE class UBoxComponent* const GetTriggerBox() { return TriggerBox; }
};
