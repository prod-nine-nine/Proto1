// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SwordBase.h"
#include "CombatArenaCharacter.generated.h"

UCLASS(config=Game)
class ACombatArenaCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;

	//UPROPERTY(EditAnywhere)
	//	class USphereComponent* RHColl;

	//UPROPERTY(EditAnywhere)
	//	class USphereComponent* LHColl;

	//UPROPERTY(EditAnywhere)
	//	class UBoxComponent* SwordColl;

public:
	ACombatArenaCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

	///custom variables

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Player)
		bool attacking = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Player)
		bool gSlice = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Player)
		float Health = 1000;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Player)
		float MaxHealth = 1000;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Player)
		bool blocking = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Player)
		float attackDamage = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Player)
		ASwordBase* currentWeapon = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Player)
		float dodgeRechargePercent = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Player)
		bool weaponInRange = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Player)
		bool canMove = true;

	float dodgeAmount = 3000;
	float percentPerSecond = 100;
	float phaseTimeS = 0.2f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Player)
		bool phaseOn = false;

	int pickUpRange = 500;
	float throwRange = 1000;

	ASwordBase* previousTarget = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Player)
		bool gotHit = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Player)
		bool knock = false;

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

	///custom functions

	//pick up weapon
	void PickUpWeapon();

	//attack
	void Attack(bool slice);

	void AttackSlice() { Attack(true); }

	void AttackStab(){ Attack(false); }

	//block
	void Block() { if (currentWeapon) { blocking = true; } }

	void Unblock() { blocking = false; }

	void Dodge();

	void ThrowWeapon();

	void PickUpOrThrowWeapon() { if (currentWeapon) { ThrowWeapon(); } else { PickUpWeapon(); }}

	UFUNCTION(BlueprintCallable, Category = Player)
		void Knockback(FVector From, float scale);

	UFUNCTION(BlueprintCallable, Category = Player)
		void damagePlayer(float damage);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	// Called every frame
	virtual void Tick(float DeltaTime) override;
};

