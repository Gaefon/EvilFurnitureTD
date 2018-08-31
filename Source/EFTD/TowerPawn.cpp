// Fill out your copyright notice in the Description page of Project Settings.

#include "TowerPawn.h"
#include "FurnitureCharacter.h"


// Sets default values
ATowerPawn::ATowerPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TowerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TowerMesh"));
	DetectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollectionSphere"));
	DetectionSphere->AttachTo(RootComponent);
	DetectionSphere->SetSphereRadius(600.f);
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

void ATowerPawn::DetectEnemies()
{
	//Get all enemies Actors and store them in an array
	TArray<AActor*> DetectedActors;
	DetectionSphere->GetOverlappingActors(DetectedActors);
	//Foreach enemies Actors we detected
	for (int32 iDetected = 0; iDetected < DetectedActors.Num(); iDetected++)
	{
		UE_LOG(LogClass, Log, TEXT("Actor detected");
		AFurnitureCharacter* const Furniture = Cast<AFurnitureCharacter>(DetectedActors[iDetected]);
		if (Furniture && Furniture->IsActive())
		{
			UE_LOG(LogClass, Log, TEXT("Enemy furniture detected"));
		}
		//Take first and cast into Furniture

		//Call the wasdamaged function of furniture
	}


}
