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

	UFUNCTION(BlueprintCallable)
	void FirstWave();

	UFUNCTION()
	void SpawnSeed();

	UFUNCTION()
	void GrowPlantTree();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE class UCameraComponent* GetCamera() const { return Camera; }
	FORCEINLINE class ASeed* GetSeed() { return Seed; }
	FORCEINLINE class AFruitTree* GetFruitTree() { return FruitTree; }

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Weapon)
	AWeapon* Weapon;

	APotato* Potato;

	class ASeed* Seed;

	class AFruitTree* FruitTree;

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

	UFUNCTION()
	void Reload(AFruitTree* TreeType);

	UFUNCTION()
	void AddAmmoOnTime();

	UFUNCTION()
	void StopReloading(AFruitTree* TreeType);

	UFUNCTION()
	void DeadPotatos();

	//Weapon Inv
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Weapon)
	TSubclassOf<class AWeapon> RedWeapon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Weapon)
	TSubclassOf<class AWeapon> BlueWeapon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Weapon)
	TSubclassOf<class AWeapon> GreenWeapon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Weapon)
	TArray<class AWeapon*> Inventory;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Weapon)
	bool bCanFire;

	//Seed inv
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Seed)
	TSubclassOf<class ASeed> RedSeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Seed)
	TSubclassOf<class ASeed> BlueSeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Seed)
	TSubclassOf<class ASeed> GreenSeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Seed)
	TArray<class ASeed*> SeedInventory;

	//Trees
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Tree)
	TSubclassOf<class AFruitTree> RedFruitTree;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Tree)
	TSubclassOf<class AFruitTree> BlueFruitTree;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Tree)
	TSubclassOf<class AFruitTree> GreenFruitTree;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Tree)
	bool bCanPlantTree;

	int32 WeaponNumber;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Enemy)
	int32 DeadPotato;

	//Timers

	FTimerHandle ReloadTimer;

};
