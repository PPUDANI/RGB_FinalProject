// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "ServerActor.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTEX_API AServerActor : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	AServerActor();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};
