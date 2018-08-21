// Fill out your copyright notice in the Description page of Project Settings.

#include "FurnitureCharacter.h"


// Sets default values
AFurnitureCharacter::AFurnitureCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SetActive(true);

}

// Called when the game starts or when spawned
void AFurnitureCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFurnitureCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFurnitureCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AFurnitureCharacter::SetActive(bool NewActivityState)
{
	bIsActive = NewActivityState;
}

bool AFurnitureCharacter::IsActive()
{
	return bIsActive;
}
