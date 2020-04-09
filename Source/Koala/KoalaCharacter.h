// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Weapon.h"
#include "Potato.h"
#include "KoalaCharacter.generated.h"

UCLASS()
class KOALA_API AKoalaCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;

public:
	// Sets default values for this character's properties
	AKoalaCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	UFUNCTION()
	void SpawnWeapons();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE class UCameraComponent* GetCamera() const { return Camera; }

protected:

	AWeapon* Weapon;

	APotato* Potato;

public:

	UFUNCTION()
	void MoveForward(float Axis);

	UFUNCTION()
	void MoveRight(float Axis);

	UFUNCTION()
	void LookUp(float Axis);

	UFUNCTION()
	void LookRight(float Axis);

	UFUNCTION()
	void Sprint();

	UFUNCTION()
	void StopSprinting();

	UFUNCTION()
	void EquipRedWeapon();

	UFUNCTION()
	void EquipBlueWeapon();

	UFUNCTION()
	void EquipGreenWeapon();

	UFUNCTION()
	void NextWeapon();

	UFUNCTION()
	void PreviousWeapon();

	UFUNCTION()
	void Fire();

	UFUNCTION()
	void StopFire();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Weapon)
	TSubclassOf<class AWeapon> RedWeapon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Weapon)
	TSubclassOf<class AWeapon> BlueWeapon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Weapon)
	TSubclassOf<class AWeapon> GreenWeapon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Weapon)
	TArray<class AWeapon*> Inventory;

	int32 WeaponNumber = 0;

};
