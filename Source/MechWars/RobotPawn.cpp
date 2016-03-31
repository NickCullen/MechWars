// Fill out your copyright notice in the Description page of Project Settings.

#include "MechWars.h"
#include "RobotPawn.h"
#include "RobotPawnMovement.h"

// Sets default values
ARobotPawn::ARobotPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Defaults
	Speed = 10.0f;
	
	// Components
	RobotMovement = CreateDefaultSubobject<URobotPawnMovement>(TEXT("RobotMovementComponent"));
}

// Called when the game starts or when spawned
void ARobotPawn::BeginPlay()
{
	Super::BeginPlay();
	
	RobotMovement->UpdatedComponent = RootComponent;	// Set to our root
}

// Called every frame
void ARobotPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ARobotPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

	InputComponent->BindAxis(TEXT("Forward"), this, &ARobotPawn::ForwardAxis);
	InputComponent->BindAxis(TEXT("Right"), this, &ARobotPawn::RightAxis);
}

void ARobotPawn::ForwardAxis(float value)
{
	RobotMovement->AddInputVector(GetActorForwardVector() * value * Speed);
}

void ARobotPawn::RightAxis(float value)
{
	FRotator newRotation = GetActorRotation();
	newRotation.Yaw += value;
	SetActorRotation(newRotation);
}

UPawnMovementComponent* ARobotPawn::GetMovementComponent() const
{
	return RobotMovement;
}