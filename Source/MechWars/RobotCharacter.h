// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "RobotCharacter.generated.h"

UCLASS()
class MECHWARS_API ARobotCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARobotCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	
	// Movement axis
	void ForwardAxis(float value);
	void RightAxis(float value);

	// Variables
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Speed;
};
