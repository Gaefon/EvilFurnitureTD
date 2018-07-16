// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"

UCLASS()
class PROJECT01_API AFloatingActor : public AActor
{
	GENERATED_BODY()

private:
	float RunningTime;
	UPROPERTY(EditAnywhere, meta=(ClampMin="10", ClampMax="100"))
		float m_translation_speed = 20.0f;

	UPROPERTY(EditAnywhere)
	float m_rotation_speed = 20.0f;
	
public:	
	// Sets default values for this actor's properties
	AFloatingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	
	
};
