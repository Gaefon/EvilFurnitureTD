// Fill out your copyright notice in the Description page of Project Settings.

#include "RTSSpectatorPawn.h"
#include "Engine/GameViewportClient.h"
#include "Engine.h"

ARTSSpectatorPawn::ARTSSpectatorPawn(const class FObjectInitializer& object_init): Super(object_init)
{
	bAddDefaultMovementBindings = false;

	camera_distance = 500.0f;
	camera_angle = 45.0f;

	x_position = 0.0f;
	y_position = 0.0f;

	scroll_boundary = 20.0f;

	scroll_sensivity = 500.0f;

	zoom_sensivity = 20.0f;

	//Intialize The Camera
	camera_component = object_init.CreateDefaultSubobject<UCameraComponent>(this, TEXT("RTS Camera"));
	camera_component->AttachTo(GetRootComponent());
	camera_component->bUsePawnControlRotation = false;
	repositionCamera();

	PrimaryActorTick.bCanEverTick = true;
}

void ARTSSpectatorPawn::SetupPlayerInputComponent(class UInputComponent* input_component)
{
	check(input_component);

	input_component->BindAction("WheelMouseUp", IE_Pressed, this, &ARTSSpectatorPawn::zoomIn);
	input_component->BindAction("WheelMouseDown", IE_Pressed, this, &ARTSSpectatorPawn::zoomOut);
}

void ARTSSpectatorPawn::zoomIn()
{
	camera_distance -= zoom_sensivity;
	repositionCamera();
}

void ARTSSpectatorPawn::zoomOut()
{
	camera_distance += zoom_sensivity;
	repositionCamera();
}

void ARTSSpectatorPawn::repositionCamera()
{
	//Create variables to hold the new values
	FVector new_location = GetActorLocation();
	FRotator new_rotation = GetActorRotation();

	new_location.X = x_position;
	new_location.Y = y_position;
	new_location.Z = 0.0f;

	new_location.X -= camera_distance * FMath::Cos(FMath::DegreesToRadians(camera_angle));
	new_location.Z += camera_distance * FMath::Sin(FMath::DegreesToRadians(camera_angle));

	new_rotation.Pitch = -camera_angle;


	//Set the camera's location and rotation to the new values
	camera_component->SetRelativeLocation(new_location);
	camera_component->SetRelativeRotation(new_rotation);
}

void ARTSSpectatorPawn::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);

	UGameViewportClient* game_viewport = GEngine->GameViewport;
	FVector2D mouse_position;
	FVector2D viewport_size;

	check(game_viewport)
	game_viewport->GetViewportSize(viewport_size);

	if (game_viewport->IsFocused(game_viewport->Viewport) && game_viewport->GetMousePosition(mouse_position))
	{
		float movement = deltaSeconds * scroll_sensivity;

		if (mouse_position.X < scroll_boundary)
			y_position -= movement;
		else if (viewport_size.X - mouse_position.X < scroll_boundary)
			y_position += movement;

		if (mouse_position.Y < scroll_boundary)
			x_position +=movement;
		else if (viewport_size.Y - mouse_position.Y < scroll_boundary)
			x_position -= movement;
	}

	repositionCamera();
}

