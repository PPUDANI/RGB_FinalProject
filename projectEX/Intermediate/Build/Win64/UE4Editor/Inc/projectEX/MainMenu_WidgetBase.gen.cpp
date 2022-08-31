// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projectEX/MainMenu_WidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenu_WidgetBase() {}
// Cross Module References
	PROJECTEX_API UClass* Z_Construct_UClass_UMainMenu_WidgetBase_NoRegister();
	PROJECTEX_API UClass* Z_Construct_UClass_UMainMenu_WidgetBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_projectEX();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMainMenu_WidgetBase::execjoinServerHandler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->joinServerHandler();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu_WidgetBase::execCreateServerHandler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateServerHandler();
		P_NATIVE_END;
	}
	void UMainMenu_WidgetBase::StaticRegisterNativesUMainMenu_WidgetBase()
	{
		UClass* Class = UMainMenu_WidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateServerHandler", &UMainMenu_WidgetBase::execCreateServerHandler },
			{ "joinServerHandler", &UMainMenu_WidgetBase::execjoinServerHandler },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainMenu_WidgetBase_CreateServerHandler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_WidgetBase_CreateServerHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu_WidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_WidgetBase_CreateServerHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu_WidgetBase, nullptr, "CreateServerHandler", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_WidgetBase_CreateServerHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_WidgetBase_CreateServerHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_WidgetBase_CreateServerHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_WidgetBase_CreateServerHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_WidgetBase_joinServerHandler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_WidgetBase_joinServerHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu_WidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_WidgetBase_joinServerHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu_WidgetBase, nullptr, "joinServerHandler", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_WidgetBase_joinServerHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_WidgetBase_joinServerHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_WidgetBase_joinServerHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_WidgetBase_joinServerHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainMenu_WidgetBase_NoRegister()
	{
		return UMainMenu_WidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UMainMenu_WidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateServerBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CreateServerBtn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinSeeverBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JoinSeeverBtn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainMenu_WidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_projectEX,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainMenu_WidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenu_WidgetBase_CreateServerHandler, "CreateServerHandler" }, // 1003395773
		{ &Z_Construct_UFunction_UMainMenu_WidgetBase_joinServerHandler, "joinServerHandler" }, // 3667471
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_WidgetBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MainMenu_WidgetBase.h" },
		{ "ModuleRelativePath", "MainMenu_WidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_WidgetBase_Statics::NewProp_CreateServerBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu_WidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_WidgetBase_Statics::NewProp_CreateServerBtn = { "CreateServerBtn", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu_WidgetBase, CreateServerBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_WidgetBase_Statics::NewProp_CreateServerBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_WidgetBase_Statics::NewProp_CreateServerBtn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_WidgetBase_Statics::NewProp_JoinSeeverBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu_WidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_WidgetBase_Statics::NewProp_JoinSeeverBtn = { "JoinSeeverBtn", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu_WidgetBase, JoinSeeverBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_WidgetBase_Statics::NewProp_JoinSeeverBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_WidgetBase_Statics::NewProp_JoinSeeverBtn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenu_WidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_WidgetBase_Statics::NewProp_CreateServerBtn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_WidgetBase_Statics::NewProp_JoinSeeverBtn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainMenu_WidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenu_WidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainMenu_WidgetBase_Statics::ClassParams = {
		&UMainMenu_WidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainMenu_WidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_WidgetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainMenu_WidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_WidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainMenu_WidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainMenu_WidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainMenu_WidgetBase, 2758976418);
	template<> PROJECTEX_API UClass* StaticClass<UMainMenu_WidgetBase>()
	{
		return UMainMenu_WidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainMenu_WidgetBase(Z_Construct_UClass_UMainMenu_WidgetBase, &UMainMenu_WidgetBase::StaticClass, TEXT("/Script/projectEX"), TEXT("UMainMenu_WidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenu_WidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
