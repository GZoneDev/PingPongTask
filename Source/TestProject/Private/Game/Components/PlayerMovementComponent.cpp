#include "Game/Components/PlayerMovementComponent.h"

void UPlayerMovementComponent::AddInputVector(FVector Direction)
{
    Super::AddInputVector(Direction);

    if (GetOwnerRole() != ROLE_Authority)
    {
        Server_AddInputVector(Direction);
    }
}

void UPlayerMovementComponent::Server_AddInputVector_Implementation(FVector Direction)
{
    AddInputVector(Direction);
}
