// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projectEX/projectEXGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeprojectEXGameModeBase() {}
// Cross Module References
	PROJECTEX_API UClass* Z_Construct_UClass_AprojectEXGameModeBase_NoRegister();
	PROJECTEX_API UClass* Z_Construct_UClass_AprojectEXGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_projectEX();
// End Cross Module References
	void AprojectEXGameModeBase::StaticRegisterNativesAprojectEXGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AprojectEXGameModeBase_NoRegister()
	{
		return AprojectEXGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AprojectEXGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AprojectEXGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_projectEX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AprojectEXGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "projectEXGameModeBase.h" },
		{ "ModuleRelativePath", "projectEXGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AprojectEXGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AprojectEXGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AprojectEXGameModeBase_Statics::ClassParams = {
		&AprojectEXGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AprojectEXGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AprojectEXGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AprojectEXGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AprojectEXGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AprojectEXGameModeBase, 200099340);
	template<> PROJECTEX_API UClass* StaticClass<AprojectEXGameModeBase>()
	{
		return AprojectEXGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AprojectEXGameModeBase(Z_Construct_UClass_AprojectEXGameModeBase, &AprojectEXGameModeBase::StaticClass, TEXT("/Script/projectEX"), TEXT("AprojectEXGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AprojectEXGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
