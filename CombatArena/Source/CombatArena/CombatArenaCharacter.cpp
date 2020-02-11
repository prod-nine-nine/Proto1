// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CombatArenaCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

#include "Engine/EngineTypes.h"

//debugging includes
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>
#include "DrawDebugHelpers.h"

//////////////////////////////////////////////////////////////////////////
// ACombatArenaCharacter

ACombatArenaCharacter::ACombatArenaCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

}

//////////////////////////////////////////////////////////////////////////
// Input

void ACombatArenaCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACombatArenaCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACombatArenaCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ACombatArenaCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ACombatArenaCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ACombatArenaCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ACombatArenaCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ACombatArenaCharacter::OnResetVR);

	///Custom controls

	//handle pickup
	PlayerInputComponent->BindAction("Pickup", IE_Pressed, this, &ACombatArenaCharacter::PickUpWeapon);
}


void ACombatArenaCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ACombatArenaCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void ACombatArenaCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void ACombatArenaCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ACombatArenaCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ACombatArenaCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ACombatArenaCharacter::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}


///Custom Function Definitions

void ACombatArenaCharacter::PickUpWeapon()
{
	if (!holdingWeapon)
	{
		/*APlayerCameraManager* camManager = GetWorld()->GetFirstPlayerController()->PlayerCameraManager;

		FVector camLocation = camManager->GetCameraLocation();
		FVector camForward = camManager->GetCameraRotation().Vector();*/
		FVector cameraWorldLocation = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraLocation();

		FHitResult hit;
		//FVector cameraWorldLocation = FollowCamera->GetRelativeTransform().GetLocation() + CameraBoom->SocketOffset + this->GetTransform().GetLocation();
		this->GetWorld()->LineTraceSingleByChannel(hit, cameraWorldLocation, cameraWorldLocation + (FollowCamera->GetForwardVector() * pickUpRange), ECC_Visibility);
		ASwordBase* Weapon = Cast<ASwordBase>(hit.GetActor());

		if (Weapon)
		{
			Weapon->AttachToComponent((USceneComponent*)this->GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, FName("hand_rSocket"));
		}
	}
}

// Called every frame
void ACombatArenaCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	FVector cameraWorldLocation = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraLocation();

	FHitResult hit;
	//FVector cameraWorldLocation = FollowCamera->GetRelativeTransform().GetLocation() + CameraBoom->SocketOffset + this->GetTransform().GetLocation();
	this->GetWorld()->LineTraceSingleByChannel(hit, cameraWorldLocation, cameraWorldLocation + (FollowCamera->GetForwardVector() * pickUpRange), ECC_Visibility);
	//DrawDebugLine(this->GetWorld(), cameraWorldLocation, cameraWorldLocation + (FollowCamera->GetForwardVector() * pickUpRange), FColor::Red, false, 1.0f, (uint8)'\000', 5);

	ASwordBase* Weapon = Cast<ASwordBase>(hit.GetActor());

	if (Weapon)
	{
		if (previousTarget)
		{
			previousTarget->MyMesh->SetMaterial(0, (UMaterialInterface*)previousTarget->OffMaterial);
		}
		Weapon->MyMesh->SetMaterial(0, (UMaterialInterface*)Weapon->OnMaterial);
		previousTarget = Weapon;
	}
	else if(previousTarget)
	{
		previousTarget->MyMesh->SetMaterial(0, (UMaterialInterface*)previousTarget->OffMaterial);
		previousTarget = 0;
	}

}