// Fill out your copyright notice in the Description page of Project Settings.

#include "TowerPawn.h"


// Sets default values
ATowerPawn::ATowerPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TowerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TowerMesh"));
	ConstructionTime = 3;
}

// Called when the game starts or when spawned
void ATowerPawn::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ATowerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATowerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ATowerPawn::SetActive(bool NewActivityState)
{
	bIsActive = NewActivityState;
}

bool ATowerPawn::IsActive()
{
	return bIsActive;
}
