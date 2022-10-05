// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef METAMETA_MetaMetaCharacter_generated_h
#error "MetaMetaCharacter.generated.h already included, missing '#pragma once' in MetaMetaCharacter.h"
#endif
#define METAMETA_MetaMetaCharacter_generated_h

#define MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_12_SPARSE_DATA
#define MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_12_RPC_WRAPPERS
#define MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMetaMetaCharacter(); \
	friend struct Z_Construct_UClass_AMetaMetaCharacter_Statics; \
public: \
	DECLARE_CLASS(AMetaMetaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MetaMeta"), NO_API) \
	DECLARE_SERIALIZER(AMetaMetaCharacter)


#define MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMetaMetaCharacter(); \
	friend struct Z_Construct_UClass_AMetaMetaCharacter_Statics; \
public: \
	DECLARE_CLASS(AMetaMetaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MetaMeta"), NO_API) \
	DECLARE_SERIALIZER(AMetaMetaCharacter)


#define MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMetaMetaCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMetaMetaCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMetaMetaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMetaMetaCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMetaMetaCharacter(AMetaMetaCharacter&&); \
	NO_API AMetaMetaCharacter(const AMetaMetaCharacter&); \
public:


#define MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMetaMetaCharacter(AMetaMetaCharacter&&); \
	NO_API AMetaMetaCharacter(const AMetaMetaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMetaMetaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMetaMetaCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMetaMetaCharacter)


#define MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMetaMetaCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMetaMetaCharacter, FollowCamera); }


#define MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_9_PROLOG
#define MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_12_SPARSE_DATA \
	MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_12_RPC_WRAPPERS \
	MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_12_INCLASS \
	MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_12_SPARSE_DATA \
	MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_12_INCLASS_NO_PURE_DECLS \
	MetaMeta_Source_MetaMeta_MetaMetaCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METAMETA_API UClass* StaticClass<class AMetaMetaCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MetaMeta_Source_MetaMeta_MetaMetaCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
