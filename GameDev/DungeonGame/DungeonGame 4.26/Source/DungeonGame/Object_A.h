// Copyright Misty Blue Tech Ltd

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "Cube_A.h"
#include "Object_A.generated.h"

UCLASS()
class DUNGEONGAME_API AObject_A : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AObject_A();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent *visualMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FVector objectLocation = FVector(0, 0, 50);
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bCanMoveAnywhereOnPlane = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float adjacentDist = 210;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int stepSize = 10;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int health = 10;
	UFUNCTION(BlueprintCallable)
	bool DestroyedObject();
	UFUNCTION(BlueprintCallable)
	bool GetMovementState();
	UFUNCTION(BlueprintCallable)
	bool Damage(int amount, int type, const FVector &originOfDamage);
	UFUNCTION(BlueprintCallable)
	void Attack();
	UFUNCTION(BlueprintCallable)
	void RotateObject(const FVector &direction);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void SelectMoveDestination(AActor *destination, FVector &impactNormal);
	void RotateObject();
	void MoveObject();
	AActor *lastActor;
	bool bCanRotate = false;
	bool bCanBeDamaged = true;

private:
	int currentStep = 0;
	bool bActorMoving = false;
	FVector normImpact;
};
