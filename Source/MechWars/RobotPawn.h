// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "RobotPawn.generated.h"

UCLASS()
class MECHWARS_API ARobotPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ARobotPawn();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	// Override to get pawn movement func
	virtual UPawnMovementComponent* GetMovementComponent() const override;

	// Movement axis
	void ForwardAxis(float value);
	void RightAxis(float value);

	// Variables
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Speed;

	// Movement componrnt
	class URobotPawnMovement* RobotMovement;
};
