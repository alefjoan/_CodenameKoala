// Fill out your copyright notice in the Description page of Project Settings.


#include "KoalaCharacter.h"
#include "Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Engine/Classes/Camera/CameraComponent.h"
#include "Engine/Classes/Components/InputComponent.h"
#include "Engine/Classes/Components/SphereComponent.h"
#include "Engine/Classes/Components/CapsuleComponent.h"
#include "Engine/Classes/GameFramework/Controller.h"
#include "Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Seed.h"
#include "Kismet/GameplayStatics.h"
#include "FruitTree.h"
#include "Engine/World.h"
#include "TimerManager.h"

// Sets default values
AKoalaCharacter::AKoalaCharacter()
{

	Inventory.SetNum(3, false);
	SeedInventory.SetNum(3, false);

	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 600.0f;
	GetCharacterMovement()->AirControl = 0.5f;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetRelativeLocation(FVector(0.0f, 50.0f, 0.0f));
	CameraBoom->bUsePawnControlRotation = true;
	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->ProbeChannel = ECC_Visibility;

	Camera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false;

}

// Called when the game starts or when spawned
void AKoalaCharacter::BeginPlay()
{
	Super::BeginPlay();

	SpawnWeapons();

	GetController()->SetIgnoreMoveInput(true);
	GetController()->SetIgnoreLookInput(true);

	bCanFire = false;

}

void AKoalaCharacter::SpawnWeapons()
{
	AWeapon* SpawnRedWeapon = GetWorld()->SpawnActor<AWeapon>(RedWeapon);
	AWeapon* SpawnBlueWeapon = GetWorld()->SpawnActor<AWeapon>(BlueWeapon);
	AWeapon* SpawnGreenWeapon = GetWorld()->SpawnActor<AWeapon>(GreenWeapon);

	SpawnRedWeapon->SetActorHiddenInGame(false);
	SpawnBlueWeapon->SetActorHiddenInGame(true);
	SpawnGreenWeapon->SetActorHiddenInGame(true);

	Inventory[0] = SpawnRedWeapon;
	Inventory[1] = SpawnBlueWeapon;
	Inventory[2] = SpawnGreenWeapon;

	Weapon = Inventory[0];
	Weapon->SetInstigator(this);
	Weapon->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	Weapon->SetActorRelativeLocation(FVector(10.0f, 30.0f, 0.0f));
	Weapon->SetActorRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));

}

void AKoalaCharacter::FirstWave()
{
	SpawnSeed();
}

void AKoalaCharacter::SpawnSeed()
{
	SeedInventory[0] = GetWorld()->SpawnActor<ASeed>(RedSeed);
	SeedInventory[0]->SetActorHiddenInGame(false);

	Seed = SeedInventory[0];
	Seed->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	Seed->SetActorRelativeLocation(FVector(-30.0f, 0.0f, 30.0f));
}

void AKoalaCharacter::GrowPlantTree()
{
	if (bCanPlantTree)
	{
		if (Seed)
		{
			if (Seed->SeedType == 0)
			{
				GetController()->SetIgnoreMoveInput(false);
				GetController()->SetIgnoreLookInput(false);

				bCanFire = true;

				AFruitTree* SpawnRedFruitTree = GetWorld()->SpawnActor<AFruitTree>(RedFruitTree);
				SpawnRedFruitTree->SetActorLocation(FVector(GetActorLocation().X - 200.0f, GetActorLocation().Y, GetActorLocation().Z - GetCapsuleComponent()->GetScaledCapsuleHalfHeight()));

				Seed->Destroy();
				Seed = NULL;
			}
		}
	}

	else if (!bCanPlantTree)
	{
		if (Seed)
		{
			if (Seed->SeedType == 0)
			{

			}
		}

		else
		{

		}

	}
}

// Called every frame
void AKoalaCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Weapon->SetActorRelativeRotation(FRotator(0.0f, 90.0f, GetControlRotation().Pitch));

}

// Called to bind functionality to input
void AKoalaCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	/* Ejes */
	PlayerInputComponent->BindAxis("MoveForward", this, &AKoalaCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AKoalaCharacter::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &AKoalaCharacter::LookUp);
	PlayerInputComponent->BindAxis("LookRight", this, &AKoalaCharacter::LookRight);

	/* Acciones */
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AKoalaCharacter::Sprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AKoalaCharacter::StopSprinting);
	PlayerInputComponent->BindAction("RedWeapon", IE_Pressed, this, &AKoalaCharacter::EquipRedWeapon);
	PlayerInputComponent->BindAction("BlueWeapon", IE_Pressed, this, &AKoalaCharacter::EquipBlueWeapon);
	PlayerInputComponent->BindAction("GreenWeapon", IE_Pressed, this, &AKoalaCharacter::EquipGreenWeapon);
	PlayerInputComponent->BindAction("NextWeapon", IE_Pressed, this, &AKoalaCharacter::NextWeapon);
	PlayerInputComponent->BindAction("PreviousWeapon", IE_Pressed, this, &AKoalaCharacter::PreviousWeapon);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AKoalaCharacter::Fire);

	FInputActionBinding& StopFire = PlayerInputComponent->BindAction("Fire", IE_Released, this, &AKoalaCharacter::StopFire);
	StopFire.bExecuteWhenPaused = true;

	FInputActionBinding& PlantTree = PlayerInputComponent->BindAction("PlantTree", IE_Pressed, this, &AKoalaCharacter::GrowPlantTree);
	PlantTree.bExecuteWhenPaused = true;
	
}

void AKoalaCharacter::MoveForward(float Axis)
{
	FVector Direction = FRotationMatrix(FRotator(0.0f,Controller->GetControlRotation().Yaw, 0.0f)).GetUnitAxis(EAxis::X);
	AddMovementInput(Direction, Axis);
}

void AKoalaCharacter::MoveRight(float Axis)
{
	FVector Direction = FRotationMatrix(FRotator(0.0f, Controller->GetControlRotation().Yaw, 0.0f)).GetUnitAxis(EAxis::Y);
	AddMovementInput(Direction, Axis);
}

void AKoalaCharacter::LookUp(float Axis)
{
	AddControllerPitchInput(Axis);
}

void AKoalaCharacter::LookRight(float Axis)
{
	AddControllerYawInput(Axis);
}

void AKoalaCharacter::Sprint()
{
	
	if (GetCharacterMovement()->IsFalling() == false) GetCharacterMovement()->MaxWalkSpeed = 900.0f;
	else GetCharacterMovement()->MaxWalkSpeed = 600.0f;
}

void AKoalaCharacter::StopSprinting()
{
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
}

void AKoalaCharacter::EquipRedWeapon()
{
	Weapon->DetachFromActor(FDetachmentTransformRules::KeepRelativeTransform);
	Weapon->SetActorHiddenInGame(true);
	Weapon->SetActorLocation(FVector(0.0f, 0.0f, 0.0f));

	Weapon = Inventory[0];
	Weapon->SetActorHiddenInGame(false);
	Weapon->SetInstigator(this);
	Weapon->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	Weapon->SetActorRelativeLocation(FVector(10.0f, 30.0f, 0.0f));
	Weapon->SetActorRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
}

void AKoalaCharacter::EquipBlueWeapon()
{
	Weapon->DetachFromActor(FDetachmentTransformRules::KeepRelativeTransform);
	Weapon->SetActorHiddenInGame(true);
	Weapon->SetActorLocation(FVector(0.0f, 0.0f, 0.0f));

	Weapon = Inventory[1];
	Weapon->SetActorHiddenInGame(false);
	Weapon->SetInstigator(this);
	Weapon->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	Weapon->SetActorRelativeLocation(FVector(10.0f, 30.0f, 0.0f));
	Weapon->SetActorRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
}

void AKoalaCharacter::EquipGreenWeapon()
{
	Weapon->DetachFromActor(FDetachmentTransformRules::KeepRelativeTransform);
	Weapon->SetActorHiddenInGame(true);
	Weapon->SetActorLocation(FVector(0.0f, 0.0f, 0.0f));

	Weapon = Inventory[2];
	Weapon->SetActorHiddenInGame(false);
	Weapon->SetInstigator(this);
	Weapon->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	Weapon->SetActorRelativeLocation(FVector(10.0f, 30.0f, 0.0f));
	Weapon->SetActorRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
}

void AKoalaCharacter::NextWeapon()
{
	Weapon->DetachFromActor(FDetachmentTransformRules::KeepRelativeTransform);
	Weapon->SetActorHiddenInGame(true);
	Weapon->SetActorLocation(FVector(0.0f, 0.0f, 0.0f));

	WeaponNumber++;

	if (WeaponNumber > 2) WeaponNumber = 0;

	Weapon = Inventory[WeaponNumber];
	Weapon->SetActorHiddenInGame(false);
	Weapon->SetInstigator(this);
	Weapon->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	Weapon->SetActorRelativeLocation(FVector(10.0f, 30.0f, 0.0f));
	Weapon->SetActorRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
}

void AKoalaCharacter::PreviousWeapon()
{
	Weapon->DetachFromActor(FDetachmentTransformRules::KeepRelativeTransform);
	Weapon->SetActorHiddenInGame(true);
	Weapon->SetActorLocation(FVector(0.0f, 0.0f, 0.0f));

	WeaponNumber--;

	if (WeaponNumber < 0) WeaponNumber = 2;

	Weapon = Inventory[WeaponNumber];
	Weapon->SetActorHiddenInGame(false);
	Weapon->SetInstigator(this);
	Weapon->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	Weapon->SetActorRelativeLocation(FVector(10.0f, 30.0f, 0.0f));
	Weapon->SetActorRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
}

void AKoalaCharacter::Fire()
{
	if (bCanFire)
	{
		Weapon->WeaponFire();
		GetCharacterMovement()->bOrientRotationToMovement = false;
		GetCharacterMovement()->bUseControllerDesiredRotation = true;
	}

	else return;
}

void AKoalaCharacter::StopFire()
{
	if (bCanFire)
	{
		Weapon->StopFire();
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->bUseControllerDesiredRotation = false;
	}

	else return;
}

void AKoalaCharacter::Reload(AFruitTree* TreeType)
{
	FruitTree = Cast<AFruitTree>(TreeType);

	if (FruitTree->TreeType.GetValue() == Weapon->WeaponType.GetValue())
	{
		GetWorldTimerManager().SetTimer(ReloadTimer, this, &AKoalaCharacter::AddAmmoOnTime, 0.1f, true);
	}
}

void AKoalaCharacter::AddAmmoOnTime()
{
	if (FruitTree->TreeType.GetValue() == Weapon->WeaponType.GetValue())
	{
		if (Weapon->CurrentAmmo < Weapon->MaxAmmo)
		{
			Weapon->CurrentAmmo += 1;
		}

		else return;
	}

	else
	{
		return;
	}
}

void AKoalaCharacter::StopReloading(AFruitTree* TreeType)
{
	GetWorldTimerManager().ClearTimer(ReloadTimer);
}

void AKoalaCharacter::DeadPotatos()
{
	DeadPotato++;
}

