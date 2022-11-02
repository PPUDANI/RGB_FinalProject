// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetaMeta/MetangCharacterCPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetangCharacterCPP() {}
// Cross Module References
	METAMETA_API UClass* Z_Construct_UClass_AMetangCharacterCPP_NoRegister();
	METAMETA_API UClass* Z_Construct_UClass_AMetangCharacterCPP();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MetaMeta();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMetangCharacterCPP::execStopJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMetangCharacterCPP::execStartJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMetangCharacterCPP::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMetangCharacterCPP::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	void AMetangCharacterCPP::StaticRegisterNativesAMetangCharacterCPP()
	{
		UClass* Class = AMetangCharacterCPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveForward", &AMetangCharacterCPP::execMoveForward },
			{ "MoveRight", &AMetangCharacterCPP::execMoveRight },
			{ "StartJump", &AMetangCharacterCPP::execStartJump },
			{ "StopJump", &AMetangCharacterCPP::execStopJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMetangCharacterCPP_MoveForward_Statics
	{
		struct MetangCharacterCPP_eventMoveForward_Parms
		{
			float AxisValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMetangCharacterCPP_MoveForward_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MetangCharacterCPP_eventMoveForward_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMetangCharacterCPP_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMetangCharacterCPP_MoveForward_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMetangCharacterCPP_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MetangCharacterCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMetangCharacterCPP_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMetangCharacterCPP, nullptr, "MoveForward", nullptr, nullptr, sizeof(MetangCharacterCPP_eventMoveForward_Parms), Z_Construct_UFunction_AMetangCharacterCPP_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMetangCharacterCPP_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMetangCharacterCPP_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMetangCharacterCPP_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMetangCharacterCPP_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMetangCharacterCPP_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMetangCharacterCPP_MoveRight_Statics
	{
		struct MetangCharacterCPP_eventMoveRight_Parms
		{
			float AxisValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMetangCharacterCPP_MoveRight_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MetangCharacterCPP_eventMoveRight_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMetangCharacterCPP_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMetangCharacterCPP_MoveRight_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMetangCharacterCPP_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MetangCharacterCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMetangCharacterCPP_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMetangCharacterCPP, nullptr, "MoveRight", nullptr, nullptr, sizeof(MetangCharacterCPP_eventMoveRight_Parms), Z_Construct_UFunction_AMetangCharacterCPP_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMetangCharacterCPP_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMetangCharacterCPP_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMetangCharacterCPP_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMetangCharacterCPP_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMetangCharacterCPP_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMetangCharacterCPP_StartJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMetangCharacterCPP_StartJump_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xc5\xb0?? ?????? ???? ?\xc3\xb7??\xd7\xb8? ?????\xd5\xb4\xcf\xb4?.\n" },
		{ "ModuleRelativePath", "MetangCharacterCPP.h" },
		{ "ToolTip", "\xc5\xb0?? ?????? ???? ?\xc3\xb7??\xd7\xb8? ?????\xd5\xb4\xcf\xb4?." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMetangCharacterCPP_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMetangCharacterCPP, nullptr, "StartJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMetangCharacterCPP_StartJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMetangCharacterCPP_StartJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMetangCharacterCPP_StartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMetangCharacterCPP_StartJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMetangCharacterCPP_StopJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMetangCharacterCPP_StopJump_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xc5\xb0?? ???? ???? ?\xc3\xb7??\xd7\xb8? ?????\xcf\xb4?.\n" },
		{ "ModuleRelativePath", "MetangCharacterCPP.h" },
		{ "ToolTip", "\xc5\xb0?? ???? ???? ?\xc3\xb7??\xd7\xb8? ?????\xcf\xb4?." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMetangCharacterCPP_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMetangCharacterCPP, nullptr, "StopJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMetangCharacterCPP_StopJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMetangCharacterCPP_StopJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMetangCharacterCPP_StopJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMetangCharacterCPP_StopJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMetangCharacterCPP_NoRegister()
	{
		return AMetangCharacterCPP::StaticClass();
	}
	struct Z_Construct_UClass_AMetangCharacterCPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TPSCameraSpringArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TPSCameraSpringArmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TPSCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TPSCameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMetangCharacterCPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MetaMeta,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMetangCharacterCPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMetangCharacterCPP_MoveForward, "MoveForward" }, // 68386686
		{ &Z_Construct_UFunction_AMetangCharacterCPP_MoveRight, "MoveRight" }, // 121036392
		{ &Z_Construct_UFunction_AMetangCharacterCPP_StartJump, "StartJump" }, // 4247429176
		{ &Z_Construct_UFunction_AMetangCharacterCPP_StopJump, "StopJump" }, // 3127125918
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMetangCharacterCPP_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MetangCharacterCPP.h" },
		{ "ModuleRelativePath", "MetangCharacterCPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMetangCharacterCPP_Statics::NewProp_TPSCameraSpringArmComponent_MetaData[] = {
		{ "Category", "MetangCharacterCPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MetangCharacterCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMetangCharacterCPP_Statics::NewProp_TPSCameraSpringArmComponent = { "TPSCameraSpringArmComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMetangCharacterCPP, TPSCameraSpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMetangCharacterCPP_Statics::NewProp_TPSCameraSpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMetangCharacterCPP_Statics::NewProp_TPSCameraSpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMetangCharacterCPP_Statics::NewProp_TPSCameraComponent_MetaData[] = {
		{ "Category", "MetangCharacterCPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MetangCharacterCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMetangCharacterCPP_Statics::NewProp_TPSCameraComponent = { "TPSCameraComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMetangCharacterCPP, TPSCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMetangCharacterCPP_Statics::NewProp_TPSCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMetangCharacterCPP_Statics::NewProp_TPSCameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMetangCharacterCPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMetangCharacterCPP_Statics::NewProp_TPSCameraSpringArmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMetangCharacterCPP_Statics::NewProp_TPSCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMetangCharacterCPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMetangCharacterCPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMetangCharacterCPP_Statics::ClassParams = {
		&AMetangCharacterCPP::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMetangCharacterCPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMetangCharacterCPP_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMetangCharacterCPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMetangCharacterCPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMetangCharacterCPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMetangCharacterCPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMetangCharacterCPP, 601238360);
	template<> METAMETA_API UClass* StaticClass<AMetangCharacterCPP>()
	{
		return AMetangCharacterCPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMetangCharacterCPP(Z_Construct_UClass_AMetangCharacterCPP, &AMetangCharacterCPP::StaticClass, TEXT("/Script/MetaMeta"), TEXT("AMetangCharacterCPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMetangCharacterCPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
