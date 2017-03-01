// Copyright OurReality LLC

#include "BattleTank.h"
#include "TankPlayerController.h"


void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("PlayerController Begin Play"));


	auto ControlledTank = GetControlledTank();


	if (ControlledTank)
	{ 
		UE_LOG(LogTemp, Warning, TEXT("Tank: %s"), *(ControlledTank->GetName()) );
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("ControlledTank not found!"));
	}





}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}


