// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Engine/World.h"
#include "TankAIController.generated.h"


class ATank;
/**
 * 
 */
UCLASS()
class BATTLE_TANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	void BeginPlay();
	ATank* GetControlledTank() const;

	ATank* GetPlayerTank() const;
private:
	virtual void Tick(float DeltaTime)override;
};
