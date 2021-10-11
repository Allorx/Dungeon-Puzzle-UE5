// Copyright Misty Blue Tech Ltd

#include "Object_A.h"

// Sets default values
AObject_A::AObject_A()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	visualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	visualMesh->SetupAttachment(RootComponent);
	visualMesh->SetRelativeLocation(objectLocation);
	//Set Collision response channels
	visualMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel1, ECollisionResponse::ECR_Block);
}

// Called when the game starts or when spawned
void AObject_A::BeginPlay()
{
	Super::BeginPlay();
	// Functionality for when spawns
}

// Called every frame
void AObject_A::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bActorMoving && currentStep < 90)
	{
		RotateObject();
		MoveObject();
	}
	else if (bActorMoving)
	{
		bActorMoving = false;
		currentStep = 0;
	}
}

void AObject_A::SelectMoveDestination(AActor *destination, FVector &impactNormal)
{
	lastActor = GetAttachParentActor();
	// Normalised impact
	normImpact = impactNormal.GetSafeNormal();
	// Check if on same plane
	if (lastActor != destination && normImpact.Equals(visualMesh->GetSocketLocation("Socket").GetSafeNormal(), 0.5f))
	{
		// if destination is adjacent or can move anywhere on plane, then attach to new actor
		if (!bCanMoveAnywhereOnPlane && FVector::Dist(lastActor->GetActorLocation(), destination->GetActorLocation()) < adjacentDist)
		{
			AttachToActor(destination, FAttachmentTransformRules::KeepWorldTransform, "Socket");
			bActorMoving = true;
		}
		else if (bCanMoveAnywhereOnPlane)
		{
			AttachToActor(destination, FAttachmentTransformRules::KeepWorldTransform, "Socket");
			bActorMoving = true;
		}
	}
}

void AObject_A::RotateObject()
{
	// Rotate to face attached parent
	if (bCanRotate && currentStep == 0)
	{
		// Find normalised vector to rotate towards
		FVector targetVector = (GetAttachParentActor()->GetActorLocation() - lastActor->GetActorLocation()).GetSafeNormal();
		float angle = FMath::RadiansToDegrees(FMath::Acos(FVector::DotProduct(visualMesh->GetForwardVector(), targetVector)));

		// Rotate to face target
		if (visualMesh->GetRightVector().Equals(-targetVector, 0.01f))
		{
			AddActorLocalRotation(FRotator(0, -angle, 0), false, 0, ETeleportType::None);
		}
		else
		{
			AddActorLocalRotation(FRotator(0, angle, 0), false, 0, ETeleportType::None);
		}
	}
}

void AObject_A::RotateObject(const FVector &direction)
{
	// Rotate to face direction
	// Find normalised vector to rotate towards
	FVector targetVector = (GetAttachParentActor()->GetActorLocation() - direction).GetSafeNormal();
	float angle = FMath::RadiansToDegrees(FMath::Acos(FVector::DotProduct(visualMesh->GetForwardVector(), targetVector)));

	// Rotate to face target
	if (visualMesh->GetRightVector().Equals(-targetVector, 0.01f))
	{
		AddActorLocalRotation(FRotator(0, -angle, 0), false, 0, ETeleportType::None);
	}
	else
	{
		AddActorLocalRotation(FRotator(0, angle, 0), false, 0, ETeleportType::None);
	}
}

void AObject_A::MoveObject()
{
	// Move towards target
	AddActorWorldOffset((GetAttachParentActor()->GetActorLocation() - lastActor->GetActorLocation()) / stepSize);
	currentStep += stepSize;
}

bool AObject_A::DestroyedObject()
{
	// Functionality for when destroyed
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString("dead"));
	return true;
}

bool AObject_A::GetMovementState()
{
	return !bActorMoving;
}

bool AObject_A::Damage(int amount, int type, const FVector &originOfDamage)
{
	/* Take damage of "type" with "amount", return if damaged - can be negative damage i.e. heal

	   0 is default attack from player.
	   1 is default attack from enemy.
	   2 is spell item damage.
	   3 is heal.

	   (More cases tba) - !!! OR BETTER MAKE BPWeapon SPAWN IN FOR PROLONGED DAMAGE i.e. burning which would count as spell damage - this would make it simpler and easier to scale.
	*/

	// !!! SHOULD PROBABLY REACT TO TAKING DAMAGE IN SOME WAY

	if (bCanBeDamaged)
	{
		switch (type)
		{
		case 0:
			health -= amount;
			// Rotate to source of damage and then attack back
			RotateObject(originOfDamage);
			Attack();
			break;
		case 1:
			// Only lose health
			health -= amount;
			break;
		default:
			health -= 0;
		}
		if (health <= 0)
		{
			DestroyedObject();
		}
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::SanitizeFloat(health));
	}
	return bCanBeDamaged;
}

void AObject_A::Attack()
{
	// Do animation, class BPWeapon handles damage
}