// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"



AMovingPlatform::AMovingPlatform()
{
	PrimaryActorTick.bCanEverTick = true;

	SetMobility(EComponentMobility::Movable);

	
}
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	if (HasAuthority())
	{
		SetReplicates(true);
		SetReplicateMovement(true);
	}

	StartLocation = GetActorLocation(); // Actor�� ��ġ�� ��ǥ ����
	TurningLocation = GetTransform().TransformPosition(TargetLocation);// Target�� ��ǥ���� ���� ��ǥ�̹Ƿ� World ��ǥ�� ��ȯ 
}

void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (HasAuthority()) 
	{
		FVector Location = GetActorLocation(); //Actor�� ���� ��ġ�� �ҷ�����
		
		if ((Location - StartLocation).Size() >= (TurningLocation - StartLocation).Size()) {
			FVector temp = StartLocation;
			StartLocation = TurningLocation;
			TurningLocation = temp;
		}
		

		FVector Direction = (TurningLocation - StartLocation).GetSafeNormal(); // Direction�� ����ȭ�� 0 ~ 1�� ���� ��

		Location += Speed * DeltaTime * Direction; // Location�� ����   

		SetActorLocation(Location); // Actor ��ġ ����� Location ��ǥ�� �ʱ�ȭ
	}
	
}


