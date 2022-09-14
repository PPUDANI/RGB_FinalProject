// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef HOUSE_HouseProjectile_generated_h
#error "HouseProjectile.generated.h already included, missing '#pragma once' in HouseProjectile.h"
#endif
#define HOUSE_HouseProjectile_generated_h

#define House_Source_House_HouseProjectile_h_15_SPARSE_DATA
#define House_Source_House_HouseProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define House_Source_House_HouseProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define House_Source_House_HouseProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHouseProjectile(); \
	friend struct Z_Construct_UClass_AHouseProjectile_Statics; \
public: \
	DECLARE_CLASS(AHouseProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/House"), NO_API) \
	DECLARE_SERIALIZER(AHouseProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define House_Source_House_HouseProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAHouseProjectile(); \
	friend struct Z_Construct_UClass_AHouseProjectile_Statics; \
public: \
	DECLARE_CLASS(AHouseProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/House"), NO_API) \
	DECLARE_SERIALIZER(AHouseProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define House_Source_House_HouseProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHouseProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHouseProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHouseProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHouseProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHouseProjectile(AHouseProjectile&&); \
	NO_API AHouseProjectile(const AHouseProjectile&); \
public:


#define House_Source_House_HouseProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHouseProjectile(AHouseProjectile&&); \
	NO_API AHouseProjectile(const AHouseProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHouseProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHouseProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHouseProjectile)


#define House_Source_House_HouseProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AHouseProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AHouseProjectile, ProjectileMovement); }


#define House_Source_House_HouseProjectile_h_12_PROLOG
#define House_Source_House_HouseProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	House_Source_House_HouseProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	House_Source_House_HouseProjectile_h_15_SPARSE_DATA \
	House_Source_House_HouseProjectile_h_15_RPC_WRAPPERS \
	House_Source_House_HouseProjectile_h_15_INCLASS \
	House_Source_House_HouseProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define House_Source_House_HouseProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	House_Source_House_HouseProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	House_Source_House_HouseProjectile_h_15_SPARSE_DATA \
	House_Source_House_HouseProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	House_Source_House_HouseProjectile_h_15_INCLASS_NO_PURE_DECLS \
	House_Source_House_HouseProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUSE_API UClass* StaticClass<class AHouseProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID House_Source_House_HouseProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
