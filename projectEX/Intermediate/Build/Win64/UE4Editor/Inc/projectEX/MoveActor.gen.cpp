// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projectEX/MoveActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveActor() {}
// Cross Module References
	PROJECTEX_API UClass* Z_Construct_UClass_AMoveActor_NoRegister();
	PROJECTEX_API UClass* Z_Construct_UClass_AMoveActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_projectEX();
// End Cross Module References
	void AMoveActor::StaticRegisterNativesAMoveActor()
	{
	}
	UClass* Z_Construct_UClass_AMoveActor_NoRegister()
	{
		return AMoveActor::StaticClass();
	}
	struct Z_Construct_UClass_AMoveActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoveActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_projectEX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MoveActor.h" },
		{ "ModuleRelativePath", "MoveActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoveActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMoveActor_Statics::ClassParams = {
		&AMoveActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMoveActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoveActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMoveActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMoveActor, 2944991060);
	template<> PROJECTEX_API UClass* StaticClass<AMoveActor>()
	{
		return AMoveActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMoveActor(Z_Construct_UClass_AMoveActor, &AMoveActor::StaticClass, TEXT("/Script/projectEX"), TEXT("AMoveActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
