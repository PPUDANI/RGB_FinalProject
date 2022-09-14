// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetaMeta/MetaMetaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetaMetaGameMode() {}
// Cross Module References
	METAMETA_API UClass* Z_Construct_UClass_AMetaMetaGameMode_NoRegister();
	METAMETA_API UClass* Z_Construct_UClass_AMetaMetaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MetaMeta();
// End Cross Module References
	void AMetaMetaGameMode::StaticRegisterNativesAMetaMetaGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMetaMetaGameMode_NoRegister()
	{
		return AMetaMetaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMetaMetaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMetaMetaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MetaMeta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMetaMetaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MetaMetaGameMode.h" },
		{ "ModuleRelativePath", "MetaMetaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMetaMetaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMetaMetaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMetaMetaGameMode_Statics::ClassParams = {
		&AMetaMetaGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMetaMetaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMetaMetaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMetaMetaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMetaMetaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMetaMetaGameMode, 4136117886);
	template<> METAMETA_API UClass* StaticClass<AMetaMetaGameMode>()
	{
		return AMetaMetaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMetaMetaGameMode(Z_Construct_UClass_AMetaMetaGameMode, &AMetaMetaGameMode::StaticClass, TEXT("/Script/MetaMeta"), TEXT("AMetaMetaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMetaMetaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
