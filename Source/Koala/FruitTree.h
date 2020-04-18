// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FruitTree.generated.h"

UENUM()
enum TreeType
{
	RedFruitTree,
	BlueFruitTree,
	GreenFruitTree
};

UCLASS()
class KOALA_API AFruitTree : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Collision, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* CollisionComp;
	
public:	
	// Sets default values for this actor's properties
	AFruitTree();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	class AKoalaCharacter* Koala;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = TreeType)
	TEnumAsByte<TreeType> TreeType;

	bool bOverlapped;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	FORCEINLINE class USphereComponent* const GetCollisionComp() { return CollisionComp; }
	FORCEINLINE class AKoalaCharacter* const GetKoala() { return Koala; }

};
