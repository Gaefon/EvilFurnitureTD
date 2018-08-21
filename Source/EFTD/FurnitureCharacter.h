// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FurnitureCharacter.generated.h"

UCLASS()
class EFTD_API AFurnitureCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFurnitureCharacter();
	UFUNCTION(BlueprintPure, Category = "Furniture")
		bool IsActive();
	UFUNCTION(BlueprintCallable, Category = "Furniture")
		void SetActive(bool NewActivityState);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	bool bIsActive;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
