// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

/**
 *TankTrack is used to set maximum driving force to appl forces to the tank
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLE_TANK_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = Input)
		void SetThrottle(float Throttle);

	//Max Force per Track in Newtons - Force = Mass*Acceleration
	UPROPERTY(EditDefaultsOnly)
		float TrackMaxDrivingForce = 400000;
};