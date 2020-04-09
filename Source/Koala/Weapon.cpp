// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Bullet.h"
#include "KoalaCharacter.h"
#include "Engine/World.h"
#include "Runtime/Engine/Public/TimerManager.h"

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeapon::WeaponFire()
{
	if (WeaponType == RedWeapon)
	{
		RedWeaponFire();
	}
}

void AWeapon::StopFire()
{
	if (WeaponType == RedWeapon)
	{
		GetWorldTimerManager().ClearTimer(RedFireTimer);
	}
}

void AWeapon::RedWeaponFire()
{
	if (Bullet)
	{
		FVector MuzzleLocation = GetActorLocation();

		float RandomShootingPitch = FMath::FRandRange(-WeaponSpread, WeaponSpread);
		float RandomShootingYaw = FMath::FRandRange(-WeaponSpread, WeaponSpread);

		FRotator MuzzleRotation = FRotator(GetActorRotation().Roll + +RandomShootingPitch, GetActorRotation().Yaw + RandomShootingYaw, GetActorRotation().Pitch);

		MuzzleRotation.Yaw -= 90.0f;

		UWorld* World = GetWorld();

		if (World)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();
			// Spawn the projectile at the muzzle.
			ABullet* Projectile = World->SpawnActor<ABullet>(Bullet, MuzzleLocation, MuzzleRotation, SpawnParams);
			if (Projectile)
			{
				// Set the projectile's initial trajectory.
				FVector LaunchDirection = MuzzleRotation.Vector();
				Projectile->FireInDirection(LaunchDirection);
			}
		}
	}

	GetWorldTimerManager().SetTimer(RedFireTimer, this, &AWeapon::AutomaticRedFire, 0.2f, true);
}

void AWeapon::AutomaticRedFire()
{
	if (Bullet)
	{
		FVector MuzzleLocation = GetActorLocation();

		float RandomShootingPitch = FMath::FRandRange(-WeaponSpread, WeaponSpread);
		float RandomShootingYaw = FMath::FRandRange(-WeaponSpread, WeaponSpread);

		FRotator MuzzleRotation = FRotator(GetActorRotation().Roll + +RandomShootingPitch, GetActorRotation().Yaw + RandomShootingYaw, GetActorRotation().Pitch);

		MuzzleRotation.Yaw -= 90.0f;

		UWorld* World = GetWorld();

		if (World)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();
			// Spawn the projectile at the muzzle.
			ABullet* Projectile = World->SpawnActor<ABullet>(Bullet, MuzzleLocation, MuzzleRotation, SpawnParams);
			if (Projectile)
			{
				// Set the projectile's initial trajectory.
				FVector LaunchDirection = MuzzleRotation.Vector();
				Projectile->FireInDirection(LaunchDirection);
			}
		}
	}
}



