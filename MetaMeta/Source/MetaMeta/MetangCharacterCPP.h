// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MetangCharacterCPP.generated.h"

UCLASS()
class METAMETA_API AMetangCharacterCPP : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMetangCharacterCPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void MoveForward(float AxisValue);

	UFUNCTION()
	void MoveRight(float AxisValue);

	UPROPERTY(VisibleAnyWhere)
	class USpringArmComponent* TPSCameraSpringArmComponent;

	UPROPERTY(VisibleAnyWhere)
	class UCameraComponent* TPSCameraComponent;

	// Ű�� ������ ���� �÷��׸� �����մϴ�.
	UFUNCTION()
		void StartJump();

	// Ű�� ���� ���� �÷��׸� ����ϴ�.
	UFUNCTION()
		void StopJump();
};
