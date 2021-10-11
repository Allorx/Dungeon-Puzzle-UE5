// Copyright Misty Blue Tech Ltd

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Cube_A.h"
#include "MainChar_Object_A.h"
#include "MainPlayer_P.generated.h"

UCLASS()
class DUNGEONGAME_API AMainPlayer_P : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMainPlayer_P();
	APlayerController *playerController;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AMainChar_Object_A *mainCharacter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ACube_A *hitActor;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere)
	float minVectorSize = 3;
	UPROPERTY(EditAnywhere)
	float swipeSensitivity = 0.05;
	UPROPERTY(EditAnywhere)
	float idleHeight = 10.0f;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent *PlayerInputComponent) override;
	void ClickStart();
	void ClickEnd();

private:
	FVector impactNormHitActor;
	FVector2D startVector2D;
	FVector2D endVector2D;
	FVector2D deltaVector2D;
	FVector startVector;
	FVector endVector;
	FVector deltaVector = FVector(0, 0, 0);
	FVector idleLoc;
	FHitResult hitResult;
	FTimerHandle ClickTimerHandle;
	float minSelectTime = 0.5;
	float deltaHeight;
	float runningTime;
	bool bClicked = false;
	bool bClickHeld = false;
	bool bCanRotateMainPlayer = false;
	bool bActorSet = false;
	void RotateActor();
	void IdleEffect(float &DeltaTime);
	void HoldFunction();
};
