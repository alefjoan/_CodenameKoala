// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Potato.generated.h"

UCLASS()
class KOALA_API APotato : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APotato();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	class APotatoController* PotatoController;
	class AKoalaCharacter* Koala;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PossessedBy(AController* NewController) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void DamageReception(int32 DamageTaken);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HP)
	int32 PotatoHP;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = HP)
	bool bIsDead;

	FORCEINLINE class APotatoController* const GetPotatoController() { return PotatoController; }
	FORCEINLINE class AKoalaCharacter* const GetKoala() { return Koala; }

};
