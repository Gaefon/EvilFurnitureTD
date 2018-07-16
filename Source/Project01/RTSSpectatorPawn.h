// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "Camera/CameraComponent.h"

#include "RTSSpectatorPawn.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT01_API ARTSSpectatorPawn : public ASpectatorPawn
{
	GENERATED_UCLASS_BODY()
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "RTS Camera", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent *camera_component;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RTS Camera")
	float camera_distance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RTS Camera")
	float camera_angle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RTS Camera")
	float scroll_boundary;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RTS Camera")
	float scroll_sensivity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RTS Camera")
	float zoom_sensivity;

private:
	float x_position;
	float y_position;

public:

	virtual void SetupPlayerInputComponent(class UInputComponent* input_component) override;

	UFUNCTION()
	void zoomIn();

	UFUNCTION()
	void zoomOut();

	UFUNCTION()
	void repositionCamera();

	UFUNCTION()
	virtual void Tick(float deltaSeconds) override;
};
