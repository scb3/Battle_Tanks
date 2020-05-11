// Copyright SCB Enterprises

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "GameFramework\PlayerController.h"
#include "TankPlayerController.generated.h"

class UTankTankAimingComponent;
/**
 * 
 */
UCLASS()
class BATTLE_TANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:	

	void BeginPlay();
	virtual void Tick(float DeltaTime) override;

protected:
	
	UFUNCTION(BlueprintImplementableEvent, Category = "Setup")
		void FoundAimingComponent(UTankAimingComponent* AimCompRef);

private:
	void AimTowardsCrosshair();

	bool GetSightRayHitLocation(FVector& HitLocation) const;
	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection)const;
	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;

	UPROPERTY(EditDefaultsOnly)
		float CrosshairXLocation = 0.5;
	UPROPERTY(EditDefaultsOnly)
		float CrosshairYLocation = 0.3333;
	UPROPERTY(EditDefaultsOnly)
		float LineTraceRange = 1000000;

};
