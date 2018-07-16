// Fill out your copyright notice in the Description page of Project Settings.

#include "FloatingActor.h"


// Sets default values
AFloatingActor::AFloatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector new_location = GetActorLocation();
	FRotator new_rotation = GetActorRotation();

	float delta_height = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	new_location.Z += delta_height * m_translation_speed;
	RunningTime += DeltaTime;

	new_rotation.Yaw += DeltaTime * m_rotation_speed;

	SetActorLocation(new_location);
	SetActorRotation(new_rotation);
}

