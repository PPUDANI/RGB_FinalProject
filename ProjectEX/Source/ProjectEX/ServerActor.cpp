// Fill out your copyright notice in the Description page of Project Settings.


#include "ServerActor.h"

AServerActor::AServerActor() {

	SetMobility(EComponentMobility::Movable);

}

void AServerActor::BeginPlay() {

	Super::BeginPlay();
	if (HasAuthority())
	{
		SetReplicates(true);
		SetReplicateMovement(true);
	}
}

void AServerActor::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

}