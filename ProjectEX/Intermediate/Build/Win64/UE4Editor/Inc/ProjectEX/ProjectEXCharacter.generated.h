// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTEX_ProjectEXCharacter_generated_h
#error "ProjectEXCharacter.generated.h already included, missing '#pragma once' in ProjectEXCharacter.h"
#endif
#define PROJECTEX_ProjectEXCharacter_generated_h

#define ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_12_SPARSE_DATA
#define ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_12_RPC_WRAPPERS
#define ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectEXCharacter(); \
	friend struct Z_Construct_UClass_AProjectEXCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectEXCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectEX"), NO_API) \
	DECLARE_SERIALIZER(AProjectEXCharacter)


#define ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProjectEXCharacter(); \
	friend struct Z_Construct_UClass_AProjectEXCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectEXCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectEX"), NO_API) \
	DECLARE_SERIALIZER(AProjectEXCharacter)


#define ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectEXCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectEXCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectEXCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectEXCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectEXCharacter(AProjectEXCharacter&&); \
	NO_API AProjectEXCharacter(const AProjectEXCharacter&); \
public:


#define ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectEXCharacter(AProjectEXCharacter&&); \
	NO_API AProjectEXCharacter(const AProjectEXCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectEXCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectEXCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectEXCharacter)


#define ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AProjectEXCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AProjectEXCharacter, FollowCamera); }


#define ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_9_PROLOG
#define ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_12_SPARSE_DATA \
	ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_12_RPC_WRAPPERS \
	ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_12_INCLASS \
	ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_12_SPARSE_DATA \
	ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ProjectEX_Source_ProjectEX_ProjectEXCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTEX_API UClass* StaticClass<class AProjectEXCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectEX_Source_ProjectEX_ProjectEXCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
