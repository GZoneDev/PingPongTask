#pragma once

#include "CoreMinimal.h"
#include "Game/Components/BaseMovementComponent.h"
#include "PlayerMovementComponent.generated.h"

UCLASS()
class TESTPROJECT_API UPlayerMovementComponent : public UBaseMovementComponent
{
	GENERATED_BODY()
	
protected:
	UFUNCTION(Server, Unreliable)
	void Server_AddInputVector(FVector Direction);

public:
	virtual void AddInputVector(FVector Direction) override;
};
