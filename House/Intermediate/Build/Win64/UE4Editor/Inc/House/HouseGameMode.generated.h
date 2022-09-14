// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUSE_HouseGameMode_generated_h
#error "HouseGameMode.generated.h already included, missing '#pragma once' in HouseGameMode.h"
#endif
#define HOUSE_HouseGameMode_generated_h

#define House_Source_House_HouseGameMode_h_12_SPARSE_DATA
#define House_Source_House_HouseGameMode_h_12_RPC_WRAPPERS
#define House_Source_House_HouseGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define House_Source_House_HouseGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHouseGameMode(); \
	friend struct Z_Construct_UClass_AHouseGameMode_Statics; \
public: \
	DECLARE_CLASS(AHouseGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/House"), HOUSE_API) \
	DECLARE_SERIALIZER(AHouseGameMode)


#define House_Source_House_HouseGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHouseGameMode(); \
	friend struct Z_Construct_UClass_AHouseGameMode_Statics; \
public: \
	DECLARE_CLASS(AHouseGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/House"), HOUSE_API) \
	DECLARE_SERIALIZER(AHouseGameMode)


#define House_Source_House_HouseGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HOUSE_API AHouseGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHouseGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HOUSE_API, AHouseGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHouseGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HOUSE_API AHouseGameMode(AHouseGameMode&&); \
	HOUSE_API AHouseGameMode(const AHouseGameMode&); \
public:


#define House_Source_House_HouseGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HOUSE_API AHouseGameMode(AHouseGameMode&&); \
	HOUSE_API AHouseGameMode(const AHouseGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HOUSE_API, AHouseGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHouseGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHouseGameMode)


#define House_Source_House_HouseGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define House_Source_House_HouseGameMode_h_9_PROLOG
#define House_Source_House_HouseGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	House_Source_House_HouseGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	House_Source_House_HouseGameMode_h_12_SPARSE_DATA \
	House_Source_House_HouseGameMode_h_12_RPC_WRAPPERS \
	House_Source_House_HouseGameMode_h_12_INCLASS \
	House_Source_House_HouseGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define House_Source_House_HouseGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	House_Source_House_HouseGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	House_Source_House_HouseGameMode_h_12_SPARSE_DATA \
	House_Source_House_HouseGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	House_Source_House_HouseGameMode_h_12_INCLASS_NO_PURE_DECLS \
	House_Source_House_HouseGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUSE_API UClass* StaticClass<class AHouseGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID House_Source_House_HouseGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
