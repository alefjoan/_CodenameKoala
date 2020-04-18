// Fill out your copyright notice in the Description page of Project Settings.


#include "FruitTree.h"
#include "Engine/Classes/Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "KoalaCharacter.h"

// Sets default values
AFruitTree::AFruitTree()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComp"));
	SetRootComponent(CollisionComp);
	CollisionComp->BodyInstance.SetCollisionProfileName(TEXT("Tree"));
	CollisionComp->InitSphereRadius(750.0f);
	CollisionComp->SetHiddenInGame(false);
	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &AFruitTree::OnOverlapBegin);
	CollisionComp->OnComponentEndOverlap.AddDynamic(this, &AFruitTree::OnOverlapEnd);

}

// Called when the game starts or when spawned
void AFruitTree::BeginPlay()
{
	Super::BeginPlay();
	
	Koala = Cast<AKoalaCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

}

// Called every frame
void AFruitTree::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFruitTree::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (Koala == OtherActor)
	{
		Koala->Reload(this);
	}
}

void AFruitTree::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (Koala == OtherActor)
	{
		Koala->StopReloading(this);

	}
}

