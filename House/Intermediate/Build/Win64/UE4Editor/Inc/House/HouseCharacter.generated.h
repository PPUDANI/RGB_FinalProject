// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUSE_HouseCharacter_generated_h
#error "HouseCharacter.generated.h already included, missing '#pragma once' in HouseCharacter.h"
#endif
#define HOUSE_HouseCharacter_generated_h

#define House_Source_House_HouseCharacter_h_20_SPARSE_DATA
#define House_Source_House_HouseCharacter_h_20_RPC_WRAPPERS
#define House_Source_House_HouseCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define House_Source_House_HouseCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHouseCharacter(); \
	friend struct Z_Construct_UClass_AHouseCharacter_Statics; \
public: \
	DECLARE_CLASS(AHouseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/House"), NO_API) \
	DECLARE_SERIALIZER(AHouseCharacter)


#define House_Source_House_HouseCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAHouseCharacter(); \
	friend struct Z_Construct_UClass_AHouseCharacter_Statics; \
public: \
	DECLARE_CLASS(AHouseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/House"), NO_API) \
	DECLARE_SERIALIZER(AHouseCharacter)


#define House_Source_House_HouseCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHouseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHouseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHouseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHouseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHouseCharacter(AHouseCharacter&&); \
	NO_API AHouseCharacter(const AHouseCharacter&); \
public:


#define House_Source_House_HouseCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHouseCharacter(AHouseCharacter&&); \
	NO_API AHouseCharacter(const AHouseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHouseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHouseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHouseCharacter)


#define House_Source_House_HouseCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AHouseCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AHouseCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AHouseCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AHouseCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AHouseCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AHouseCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AHouseCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AHouseCharacter, L_MotionController); }


#define House_Source_House_HouseCharacter_h_17_PROLOG
#define House_Source_House_HouseCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	House_Source_House_HouseCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	House_Source_House_HouseCharacter_h_20_SPARSE_DATA \
	House_Source_House_HouseCharacter_h_20_RPC_WRAPPERS \
	House_Source_House_HouseCharacter_h_20_INCLASS \
	House_Source_House_HouseCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define House_Source_House_HouseCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	House_Source_House_HouseCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	House_Source_House_HouseCharacter_h_20_SPARSE_DATA \
	House_Source_House_HouseCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	House_Source_House_HouseCharacter_h_20_INCLASS_NO_PURE_DECLS \
	House_Source_House_HouseCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUSE_API UClass* StaticClass<class AHouseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID House_Source_House_HouseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
