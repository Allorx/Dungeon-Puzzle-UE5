// Copyright Misty Blue Tech Ltd

#include "Cube_A.h"

// Sets default values
ACube_A::ACube_A()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	visualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	visualMesh->SetupAttachment(RootComponent);
	visualMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	//Set Collision response channels
	visualMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel3, ECollisionResponse::ECR_Block);
	visualMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Ignore);
}

void ACube_A::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bStartRotation && currentStep < 90)
	{
		AddActorWorldRotation(cubeRotation, false, 0, ETeleportType::None);
		//Rotate around point rotationPoint
		FVector rotationPoint = FVector(0, 0, 0);
		FVector rotateValue = GetActorLocation().RotateAngleAxis(stepSize, rotAxis);
		rotationPoint.X += rotateValue.X;
		rotationPoint.Y += rotateValue.Y;
		rotationPoint.Z += rotateValue.Z;
		SetActorLocation(rotationPoint);
		currentStep += stepSize;
	}
	else if (bStartRotation)
	{
		currentStep = 0;
		bStartRotation = false;
		bRotating = false;
	}
}

// Called when the game starts or when spawned
void ACube_A::BeginPlay()
{
	Super::BeginPlay();
}

void ACube_A::RotateCube(FVector &direction, FVector &impactNormal)
{
	//Rotates in direction of deltaVector if currentStep == 0, i.e. finished rotating
	if (currentStep == 0 && !bStartRotation)
	{
		FVector vectorToRot;
		if (abs(direction.X) > abs(direction.Y) && abs(direction.X) > abs(direction.Z))
		{
			vectorToRot = FVector(direction.X, 0, 0);
			rotAxis = FVector::CrossProduct(impactNormal, vectorToRot).GetSafeNormal(0.5);
			vectorToRot = impactNormal.RotateAngleAxis(stepSize, rotAxis);
			cubeRotation = FQuat::FindBetweenVectors(impactNormal, vectorToRot);
		}
		else if (abs(direction.Y) > abs(direction.X) && abs(direction.Y) > abs(direction.Z))
		{
			vectorToRot = FVector(0, direction.Y, 0);
			rotAxis = FVector::CrossProduct(impactNormal, vectorToRot).GetSafeNormal(0.5);
			vectorToRot = impactNormal.RotateAngleAxis(stepSize, rotAxis);
			cubeRotation = FQuat::FindBetweenVectors(impactNormal, vectorToRot);
		}
		else if (abs(direction.Z) > abs(direction.X) && abs(direction.Z) > abs(direction.Y))
		{
			vectorToRot = FVector(0, 0, direction.Z);
			rotAxis = FVector::CrossProduct(impactNormal, vectorToRot).GetSafeNormal(0.5);
			vectorToRot = impactNormal.RotateAngleAxis(stepSize, rotAxis);
			cubeRotation = FQuat::FindBetweenVectors(impactNormal, vectorToRot);
		}
		if (rotAxis.Size() > 0)
		{
			//If normal vector is not (0,0,0)
			FindActorsToRotate(cubeRotation, rotAxis);
			bStartRotation = true;
			bRotating = true;
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Rotation cancelled: Cube_A - rotAxis cannot be (0,0,0)");
		}
	}
}

void ACube_A::SetRotation(FQuat &rotation, FVector &rotationAxis)
{
	rotAxis = rotationAxis;
	cubeRotation = rotation;
	bStartRotation = true;
}

void ACube_A::FindActorsToRotate(FQuat &rotation, FVector &normal)
{
	//Find cubes on same plane then iterate and rotate
	for (int i = 0; i < otherCubes.Num(); i++)
	{
		//Are the vectors equal on the rotation axis (position/normal of "plane")
		if ((GetActorLocation() * normal.GetAbs()).Equals(otherCubes[i]->GetActorLocation() * normal.GetAbs(), 10))
		{
			otherCubes[i]->SetRotation(rotation, normal);
		}
	}
}

bool ACube_A::GetRotationState()
{
	return !bRotating;
}