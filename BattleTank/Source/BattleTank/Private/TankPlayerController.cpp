// Copyright OurReality LLC

#include "BattleTank.h"
#include "TankPlayerController.h"




ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}