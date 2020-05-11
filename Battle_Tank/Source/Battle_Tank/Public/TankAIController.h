// Copyright SCB Enterprises

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Engine/World.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLE_TANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	void BeginPlay();

private:
	virtual void Tick(float DeltaTime)override;

	float AcceptanceRadius = 3000;
};
