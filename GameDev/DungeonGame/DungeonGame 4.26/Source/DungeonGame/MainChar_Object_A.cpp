// Copyright Misty Blue Tech Ltd

#include "MainChar_Object_A.h"

AMainChar_Object_A::AMainChar_Object_A()
{
	PrimaryActorTick.bCanEverTick = true;
	bCanRotate = true;
	bCanBeDamaged = true;
	health = 15;
}

void AMainChar_Object_A::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMainChar_Object_A::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMainChar_Object_A::InteractWithTarget(AActor *target, FVector &impactNormal)
{
	// Rotates main character to target
	rotationTargetActor = target;
	rotationTargetNormal = impactNormal.GetSafeNormal();
	// Normalised impact
	const FVector &normImpact = rotationTargetNormal;
	// Check if on same plane
	if (GetAttachParentActor() != target && normImpact.Equals(visualMesh->GetSocketLocation("Socket").GetSafeNormal(), 0.5f))
	{
		// if destination is adjacent or can move anywhere on plane
		if (!bCanMoveAnywhereOnPlane && FVector::Dist(GetAttachParentActor()->GetActorLocation(), target->GetActorLocation()) < adjacentDist)
		{
			CheckIfTargetting();
		}
		else if (bCanMoveAnywhereOnPlane)
		{
			CheckIfTargetting();
		}
	}
}

void AMainChar_Object_A::CheckIfTargetting()
{
	// Sweep shape in area clicked
	if (GetWorld()->SweepSingleByChannel(currentTarget, rotationTargetActor->GetActorLocation(), rotationTargetActor->GetActorLocation() + rotationTargetNormal * 100, FQuat(0, 0, 0, 0), ECC_GameTraceChannel1, SweepShape))
	{
		// If there is something, attack
		RotateObject(rotationTargetActor);
		Attack();
	}
	else
	{
		// If there is nothing to Attack(), move
		SelectMoveDestination(rotationTargetActor, rotationTargetNormal);
	}
}

void AMainChar_Object_A::RotateObject(AActor *target)
{
	// Rotate towards target actor
	// Find vector to rotate towards
	FVector rotationVector = target->GetActorLocation() - GetAttachParentActor()->GetActorLocation();

	// Rotate to face target
	AddActorWorldRotation(FQuat::FindBetweenVectors(visualMesh->GetForwardVector(), rotationVector), false, 0, ETeleportType::None);
}