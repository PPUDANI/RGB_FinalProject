// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimTestCharacter.h"
#include <Engine/Classes/Camera/CameraComponent.h>
#include <Engine/Classes/Components/CapsuleComponent.h>
#include <Engine/Classes/GameFramework/SpringArmComponent.h>

// Sets default values
AAnimTestCharacter::AAnimTestCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TPSCameraSpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("TPSCameraSpringArm"));
	TPSCameraSpringArmComponent -> SetupAttachment(GetCapsuleComponent());
	TPSCameraSpringArmComponent -> SetRelativeLocation(FVector(0.0f, 0.0f, BaseEyeHeight));
	TPSCameraSpringArmComponent -> bUsePawnControlRotation = true;

	TPSCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TPSCamera"));
	TPSCameraComponent->SetupAttachment(TPSCameraSpringArmComponent, USpringArmComponent::SocketName);
}

// Called when the game starts or when spawned
void AAnimTestCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAnimTestCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAnimTestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("MoveForward", this, &AAnimTestCharacter::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AAnimTestCharacter::MoveRight);
	InputComponent->BindAxis("Turn", this, &AAnimTestCharacter::AddControllerYawInput);
	InputComponent->BindAxis("LookUp", this, &AAnimTestCharacter::AddControllerPitchInput);
	InputComponent->BindAction("Jump", IE_Pressed, this, &AAnimTestCharacter::StartJump);
	InputComponent->BindAction("Jump", IE_Released, this, &AAnimTestCharacter::StopJump);
}

void AAnimTestCharacter::MoveForward(float AxisValue)
{
	// AddMovementInput()�� AnimTestCahracterŬ������ �θ��Լ��� Character Ŭ������ ����� �Լ���
	// character Movement component�� �̵������ �ӵ��� �Ѱ��༭ ĳ���͸� �̵���Ű�� ����� �Լ��̴�.

	// GetActorForwardVector()�� Actor�� ������ ����Ű�� ���͸� ��ȯ�ϴ� �Լ��̴�.

	// AddMovementInput()�� GetActorForwardVector()�� �Է°��� �Ķ���ͷ� �Ѱ��ش�.
	AddMovementInput(GetActorForwardVector(), AxisValue);
}

void AAnimTestCharacter::MoveRight(float AxisValue)
{
	// GetActorRightVector()�� Actor�� �������� ����Ű�� ���͸� ��ȯ�ϴ� �Լ��̴�.
	AddMovementInput(GetActorRightVector(), AxisValue);
}

void AAnimTestCharacter::StartJump() {

	bPressedJump = true;
}
void AAnimTestCharacter::StopJump() {

	bPressedJump = false;
}