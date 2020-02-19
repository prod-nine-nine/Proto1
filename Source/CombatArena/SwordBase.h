// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SwordBase.generated.h"

UCLASS()
class COMBATARENA_API ASwordBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASwordBase(const FObjectInitializer& OI);

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* MyMesh;

	UPROPERTY(EditAnywhere)
		class UProjectileMovementComponent* ProjMovement;

	UPROPERTY(EditAnywhere)
		class UBoxComponent* BoxCollision;

	/*UPROPERTY(EditAnywhere)
		class UMaterial* OnMaterial;

	UPROPERTY(EditAnywhere)
		class UMaterial* OffMaterial;*/

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Sword)
		float durability = 100;

	UFUNCTION(BlueprintCallable)
		void DamageWeapon(float damage);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
