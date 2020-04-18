// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

UENUM()
enum WeaponType
{
	RedWeapon,
	BlueWeapon,
	GreenWeapon
};

UCLASS()
class KOALA_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	class ABullet* LoadedBullet;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Weapon)
	TEnumAsByte<WeaponType> WeaponType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	float WeaponSpread;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector MuzzleOffset;

	UPROPERTY(EditDefaultsOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class ABullet> Bullet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ammo)
	int32 MaxAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ammo)
	int32 CurrentAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ammo)
	int32 AmmoCost;

	FTimerHandle RedFireTimer;

	UFUNCTION()
	void WeaponFire();

	UFUNCTION()
	void StopFire();

	UFUNCTION()
	void RedWeaponFire();

	UFUNCTION()
	void AutomaticRedFire();

	FORCEINLINE class ABullet* const GetLoadedBullet() { return LoadedBullet; }
};
