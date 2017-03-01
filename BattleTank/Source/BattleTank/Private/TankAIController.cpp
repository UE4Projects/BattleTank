// Copyright OurReality LLC

#include "BattleTank.h"
#include "TankAIController.h"



void ATankAIController::BeginPlay()
{

	Super::BeginPlay();


	auto AIControlledTank = GetAIControlledTank();

	if (!AIControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AITank Not Found!"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("AITank: %s"), *(AIControlledTank->GetName()));
	}


}

ATank* ATankAIController::GetAIControlledTank() const
{

	return Cast<ATank>(GetPawn());
}