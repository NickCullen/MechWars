// Fill out your copyright notice in the Description page of Project Settings.

#include "MechWars.h"
#include "RobotCharacter.h"


// Sets default values
ARobotCharacter::ARobotCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Defaults
	Speed = 100.0f;
}

// Called when the game starts or when spawned
void ARobotCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARobotCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ARobotCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

	InputComponent->BindAxis(TEXT("Forward"), this, &ARobotCharacter::ForwardAxis);
	InputComponent->BindAxis(TEXT("Right"), this, &ARobotCharacter::RightAxis);
}

void ARobotCharacter::ForwardAxis(float value)
{
	AddMovementInput(GetActorForwardVector(), value * Speed);
}

void ARobotCharacter::RightAxis(float value)
{

}