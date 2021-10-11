// Copyright Misty Blue Tech Ltd

#include "MainPlayer_P.h"

// Sets default values
AMainPlayer_P::AMainPlayer_P()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMainPlayer_P::BeginPlay()
{
	Super::BeginPlay();
	playerController = Cast<APlayerController>(GetController());
}

// Called every frame
void AMainPlayer_P::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Uncomment to enable idle effect
	IdleEffect(DeltaTime);
	if (bClicked)
	{
		RotateActor();
	}
}

void AMainPlayer_P::IdleEffect(float &DeltaTime)
{
	idleLoc = GetActorLocation();
	runningTime = GetGameTimeSinceCreation();
	deltaHeight = FMath::Sin(runningTime + DeltaTime) - FMath::Sin(runningTime);
	idleLoc.Z += deltaHeight * idleHeight; //Scale our height
	SetActorLocation(idleLoc);
}

//Calculates swipe direction and rotates actor
void AMainPlayer_P::RotateActor()
{
	playerController->GetMousePosition(endVector2D.X, endVector2D.Y);
	deltaVector2D = endVector2D - startVector2D;

	if (deltaVector2D.Size() > minVectorSize && bCanRotateMainPlayer)
	{
		//Rotate this - split so that rotations are done on each axis separately (no roll produced)
		FRotator newRotation = FRotator(-deltaVector2D.Y, 0.0, 0.0);
		AddActorLocalRotation(newRotation * swipeSensitivity, false, 0, ETeleportType::None);

		if (GetActorUpVector().Z > 0)
		{
			newRotation = FRotator(0.0, deltaVector2D.X, 0.0);
			AddActorWorldRotation(newRotation * swipeSensitivity, false, 0, ETeleportType::None);
		}
		else
		{
			newRotation = FRotator(0.0, -deltaVector2D.X, 0.0);
			AddActorWorldRotation(newRotation * swipeSensitivity, false, 0, ETeleportType::None);
		}
	}
	else if (!bActorSet && deltaVector.Size() > minVectorSize)
	{
		//Pass delta vector 3D to cube
		hitActor->RotateCube(deltaVector, impactNormHitActor);
		bActorSet = true;
	}
	else if (!bCanRotateMainPlayer)
	{
		const bool bTraceComplex = false;
		if (deltaVector2D.Size() > minVectorSize && playerController->GetHitResultAtScreenPosition(endVector2D, ECC_GameTraceChannel3, bTraceComplex, hitResult))
		{
			// Do a trace and see if the position intersects cube
			endVector = hitResult.ImpactPoint;
			deltaVector = endVector - startVector;
		}
	}

	//Set start vector to new location
	playerController->GetMousePosition(startVector2D.X, startVector2D.Y);
}

// Called to bind functionality to input
void AMainPlayer_P::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);
	// Respond when our "Click" key is pressed or released.
	InputComponent->BindAction("Click", IE_Pressed, this, &AMainPlayer_P::ClickStart);
	InputComponent->BindAction("Click", IE_Released, this, &AMainPlayer_P::ClickEnd);
}

void AMainPlayer_P::ClickStart()
{
	if (mainCharacter->GetMovementState() && hitActor->GetRotationState() && !bClicked)
	{
		//Find mouse coordinates
		playerController->GetMousePosition(startVector2D.X, startVector2D.Y);
		// Do a trace and see if the position intersects something in the world
		const bool bTraceComplex = false;
		if (playerController->GetHitResultAtScreenPosition(startVector2D, ECC_GameTraceChannel3, bTraceComplex, hitResult) == true)
		{
			// If we hit cube actor
			startVector = hitResult.ImpactPoint;
			impactNormHitActor = hitResult.ImpactNormal;
			hitActor = Cast<ACube_A>(hitResult.GetActor());
			// Start Timer
			GetWorldTimerManager().SetTimer(ClickTimerHandle, this, &AMainPlayer_P::HoldFunction, 1.0f, false, 1.0f);
		}
		else
		{
			bCanRotateMainPlayer = true;
		}
		bClicked = true;
	}
}

void AMainPlayer_P::ClickEnd()
{
	playerController->GetMousePosition(endVector2D.X, endVector2D.Y);
	const bool bTraceComplex = false;
	if (bClickHeld && playerController->GetHitResultAtScreenPosition(endVector2D, ECC_GameTraceChannel1, bTraceComplex, hitResult) == true)
	{
		// May be useless
		// Select Object (i.e. display info)
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "Object has been held");
	}
	else if (!bClickHeld && !bActorSet && !bCanRotateMainPlayer)
	{
		// Try to move main character to location - interaction handled by main character
		mainCharacter->InteractWithTarget(hitActor, impactNormHitActor);
	}
	else
	{
		// Turn off selected object ie turn off UI
	}
	//Reset
	GetWorldTimerManager().ClearTimer(ClickTimerHandle);
	deltaVector = FVector(0, 0, 0);
	bCanRotateMainPlayer = false;
	bActorSet = false;
	bClickHeld = false;
	bClicked = false;
}

void AMainPlayer_P::HoldFunction()
{
	// Set off by timer if click has been held
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, "Timer End");
	GetWorldTimerManager().ClearTimer(ClickTimerHandle);
	bClickHeld = true;
	ClickEnd();
}
