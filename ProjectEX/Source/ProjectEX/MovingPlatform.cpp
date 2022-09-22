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

	StartLocation = GetActorLocation(); // Actor가 배치된 좌표 저장
	TurningLocation = GetTransform().TransformPosition(TargetLocation);// Target의 좌표값은 로컬 좌표이므로 World 좌표로 변환 
}

void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (HasAuthority()) 
	{
		FVector Location = GetActorLocation(); //Actor의 현재 위치값 불러오기
		
		if ((Location - StartLocation).Size() >= (TurningLocation - StartLocation).Size()) {
			FVector temp = StartLocation;
			StartLocation = TurningLocation;
			TurningLocation = temp;
		}
		

		FVector Direction = (TurningLocation - StartLocation).GetSafeNormal(); // Direction은 정규화로 0 ~ 1의 값이 됨

		Location += Speed * DeltaTime * Direction; // Location의 값을   

		SetActorLocation(Location); // Actor 위치 변경된 Location 좌표로 초기화
	}
	
}


