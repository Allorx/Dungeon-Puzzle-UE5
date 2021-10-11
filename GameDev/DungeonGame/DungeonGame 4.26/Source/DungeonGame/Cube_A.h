// Copyright Misty Blue Tech Ltd

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/UObjectHash.h"
#include "Cube_A.generated.h"

UCLASS()
class DUNGEONGAME_API ACube_A : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACube_A();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent *visualMesh;
	UFUNCTION(BlueprintCallable)
	void RotateCube(FVector &direction, FVector &impactNormal);
	UFUNCTION(BlueprintCallable)
	void SetRotation(FQuat &rotation, FVector &rotationAxis);
	UFUNCTION(BlueprintCallable)
	void FindActorsToRotate(FQuat &rotation, FVector &normal);
	UFUNCTION(BlueprintCallable)
	bool GetRotationState();
	//This must be set so cubes can access each other -> set in blueprints
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class ACube_A *> otherCubes;

private:
	FVector rotAxis;
	int stepSize = 10;
	int currentStep = 0;
	FQuat cubeRotation;
	bool bStartRotation = false;
	bool bRotating = false;
};
