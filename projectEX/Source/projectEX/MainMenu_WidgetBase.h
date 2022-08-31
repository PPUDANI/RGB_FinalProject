// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenu_WidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTEX_API UMainMenu_WidgetBase : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;
private:
	UPROPERTY(Meta = (BindWidget));
	class UButton* CreateServerBtn;

	UPROPERTY(Meta = (BindWidget));
	class UButton* JoinSeeverBtn;
	
	UFUNCTION()
	void CreateServerHandler();

	UFUNCTION()
	void joinServerHandler();

};
