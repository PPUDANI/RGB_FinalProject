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
	// AddMovementInput()는 AnimTestCahracter클래스의 부모함수인 Character 클래스에 내장된 함수로
	// character Movement component의 이동방향과 속도를 넘겨줘서 캐릭터를 이동시키게 만드는 함수이다.

	// GetActorForwardVector()는 Actor의 정면을 가리키는 벡터를 반환하는 함수이다.

	// AddMovementInput()에 GetActorForwardVector()와 입력값을 파라메터로 넘겨준다.
	AddMovementInput(GetActorForwardVector(), AxisValue);
}

void AAnimTestCharacter::MoveRight(float AxisValue)
{
	// GetActorRightVector()는 Actor의 오른쪽을 가리키는 벡터를 반환하는 함수이다.
	AddMovementInput(GetActorRightVector(), AxisValue);
}

void AAnimTestCharacter::StartJump() {

	bPressedJump = true;
}
void AAnimTestCharacter::StopJump() {

	bPressedJump = false;
}