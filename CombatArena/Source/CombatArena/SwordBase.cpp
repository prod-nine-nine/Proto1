// Fill out your copyright notice in the Description page of Project Settings.

#include "SwordBase.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ASwordBase::ASwordBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));
	RootComponent = NULL;
	OnMaterial = CreateDefaultSubobject<UMaterial>(TEXT("OnMaterial"));
	OffMaterial = CreateDefaultSubobject<UMaterial>(TEXT("OffMaterial"));
}

// Called when the game starts or when spawned
void ASwordBase::BeginPlay()
{
	Super::BeginPlay();

	MyMesh->SetMaterial(0, OffMaterial);
}

// Called every frame
void ASwordBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

