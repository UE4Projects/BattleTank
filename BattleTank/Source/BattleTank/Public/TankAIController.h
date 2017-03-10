// Copyright OurReality LLC

#pragma once

#include "Tank.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	void BeginPlay() override;
	
	virtual void Tick(float DeltaTime) override;


private:

	ATank* GetAIControlledTank() const;
	ATank* GetPlayerTank() const;



	
};
