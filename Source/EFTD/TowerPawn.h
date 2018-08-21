// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/SphereComponent.h"
#include "TowerPawn.generated.h"

UCLASS()
class EFTD_API ATowerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATowerPawn();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//return DetectionSphere subobject
	FORCEINLINE class USphereComponent* GetDetectionSphere() const { return DetectionSphere; }

	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return TowerMesh; }
	UFUNCTION(BlueprintPure, Category = "Tower")
		bool IsActive();
	UFUNCTION(BlueprintCallable, Category = "Tower")
		void SetActive(bool NewActivityState);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called Every Tick
	UFUNCTION(BlueprintCallable, Category = "Tower")
	void DetectEnemies();

	bool bIsActive;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Tower")
	float ConstructionTime;


private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tower", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* TowerMesh;
	//Detection sphere
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tower", meta = (AllowPrivateAccess = "true"))
		class USphereComponent* DetectionSphere;
};
