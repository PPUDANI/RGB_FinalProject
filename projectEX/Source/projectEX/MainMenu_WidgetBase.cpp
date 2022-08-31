// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu_WidgetBase.h"

void UMainMenu_WidgetBase::NativeConstruct()
{
	Super::NativeConstruct();

	CreateServerBtn->OnClicked.AddDynamic(this, &UUW_NaviMenu::CreateServerHandler);
	JoinServerBtn->OnClicked.AddDynamic(this, &UUW_NaviMenu::JoinServerHandler);
}

void UMainMenu_WidgetBase::CreateServerHandler()
{
	ATitle_PC* MyPC = Cast<ATitle_PC>(GetOwningPlayer());
	if (MyPC)
	{
		MyPC->CreateServer();
	}
}

void UMainMenu_WidgetBase::JoinServerHandler()
{
	ATitle_PC* MyPC = Cast<ATitle_PC>(GetOwningPlayer());
	if (MyPC)
	{
		MyPC->JoinServer();
	}
}