// Copyright Misty Blue Tech Ltd

#pragma once

#include "CoreMinimal.h"
#include "Object_A.h"
#include "MainChar_Object_A.generated.h"

UCLASS()
class DUNGEONGAME_API AMainChar_Object_A : public AObject_A
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	AMainChar_Object_A();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FCollisionShape SweepShape = FCollisionShape::MakeBox(FVector(50, 50, 50));
	void InteractWithTarget(AActor *target, FVector &impactNormal);
	void RotateObject(AActor *target);
	void CheckIfTargetting();

private:
	AActor *interactiveActor;
	AActor *rotationTargetActor;
	FVector rotationTargetNormal;
	FHitResult currentTarget;
};
