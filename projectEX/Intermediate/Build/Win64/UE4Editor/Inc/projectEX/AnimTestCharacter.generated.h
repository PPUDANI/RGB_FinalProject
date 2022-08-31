// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTEX_AnimTestCharacter_generated_h
#error "AnimTestCharacter.generated.h already included, missing '#pragma once' in AnimTestCharacter.h"
#endif
#define PROJECTEX_AnimTestCharacter_generated_h

#define projectEX_Source_projectEX_AnimTestCharacter_h_12_SPARSE_DATA
#define projectEX_Source_projectEX_AnimTestCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define projectEX_Source_projectEX_AnimTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define projectEX_Source_projectEX_AnimTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAnimTestCharacter(); \
	friend struct Z_Construct_UClass_AAnimTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AAnimTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/projectEX"), NO_API) \
	DECLARE_SERIALIZER(AAnimTestCharacter)


#define projectEX_Source_projectEX_AnimTestCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAnimTestCharacter(); \
	friend struct Z_Construct_UClass_AAnimTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AAnimTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/projectEX"), NO_API) \
	DECLARE_SERIALIZER(AAnimTestCharacter)


#define projectEX_Source_projectEX_AnimTestCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAnimTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAnimTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnimTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAnimTestCharacter(AAnimTestCharacter&&); \
	NO_API AAnimTestCharacter(const AAnimTestCharacter&); \
public:


#define projectEX_Source_projectEX_AnimTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAnimTestCharacter(AAnimTestCharacter&&); \
	NO_API AAnimTestCharacter(const AAnimTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnimTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAnimTestCharacter)


#define projectEX_Source_projectEX_AnimTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define projectEX_Source_projectEX_AnimTestCharacter_h_9_PROLOG
#define projectEX_Source_projectEX_AnimTestCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	projectEX_Source_projectEX_AnimTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	projectEX_Source_projectEX_AnimTestCharacter_h_12_SPARSE_DATA \
	projectEX_Source_projectEX_AnimTestCharacter_h_12_RPC_WRAPPERS \
	projectEX_Source_projectEX_AnimTestCharacter_h_12_INCLASS \
	projectEX_Source_projectEX_AnimTestCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define projectEX_Source_projectEX_AnimTestCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	projectEX_Source_projectEX_AnimTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	projectEX_Source_projectEX_AnimTestCharacter_h_12_SPARSE_DATA \
	projectEX_Source_projectEX_AnimTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	projectEX_Source_projectEX_AnimTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
	projectEX_Source_projectEX_AnimTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTEX_API UClass* StaticClass<class AAnimTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID projectEX_Source_projectEX_AnimTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
