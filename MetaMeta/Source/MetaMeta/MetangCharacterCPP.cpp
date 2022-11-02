// Fill out your copyright notice in the Description page of Project Settings.


#include "MetangCharacterCPP.h"
#include <Engine/Classes/Camera/CameraComponent.h>
#include <Engine/Classes/Components/CapsuleComponent.h>
#include <Engine/Classes/GameFramework/SpringArmComponent.h>
// Sets default values
AMetangCharacterCPP::AMetangCharacterCPP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TPSCameraSpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("TPSCameraSpringArm"));
	TPSCameraSpringArmComponent->SetupAttachment(GetCapsuleComponent());
	TPSCameraSpringArmComponent->SetRelativeLocation(FVector(0.0f, 0.0f, BaseEyeHeight));
	TPSCameraSpringArmComponent->bUsePawnControlRotation = true;

	TPSCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TPSCamera"));
	TPSCameraComponent->SetupAttachment(TPSCameraSpringArmComponent, USpringArmComponent::SocketName);
} 

// Called when the game starts or when spawned
void AMetangCharacterCPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMetangCharacterCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMetangCharacterCPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("MoveForward", this, &AMetangCharacterCPP::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AMetangCharacterCPP::MoveRight);
	InputComponent->BindAxis("Turn", this, &AMetangCharacterCPP::AddControllerYawInput);
	InputComponent->BindAxis("LookUp", this, &AMetangCharacterCPP::AddControllerPitchInput);
	InputComponent->BindAction("Jump", IE_Pressed, this, &AMetangCharacterCPP::StartJump);
	InputComponent->BindAction("Jump", IE_Released, this, &AMetangCharacterCPP::StopJump);
}

void AMetangCharacterCPP::MoveForward(float AxisValue)
{ 
	AddMovementInput(GetActorForwardVector(), AxisValue);
}

void AMetangCharacterCPP::MoveRight(float AxisValue)
{
	AddMovementInput(GetActorRightVector(), AxisValue);
}

void AMetangCharacterCPP::StartJump()
{
	bPressedJump = true;
}

void AMetangCharacterCPP::StopJump()
{
	bPressedJump = false;
}

