// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PawnMovementComponent.h"
#include "RobotPawnMovement.generated.h"

/**
 * 
 */
UCLASS()
class MECHWARS_API URobotPawnMovement : public UPawnMovementComponent
{
	GENERATED_BODY()


	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
};
