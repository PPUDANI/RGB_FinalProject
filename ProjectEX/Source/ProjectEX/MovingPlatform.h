// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTEX_API AMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()

public:
	AMovingPlatform();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Staters")
	float Speed = 20.0f;

	UPROPERTY(EditAnywhere, Meta = (MakeEditWidget = true), Category = "Staters")
	FVector TargetLocation;
	
private:

	FVector StartLocation;
	FVector TurningLocation;

};
