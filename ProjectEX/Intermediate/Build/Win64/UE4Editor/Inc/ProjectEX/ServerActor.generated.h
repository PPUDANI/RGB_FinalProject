// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTEX_ServerActor_generated_h
#error "ServerActor.generated.h already included, missing '#pragma once' in ServerActor.h"
#endif
#define PROJECTEX_ServerActor_generated_h

#define ProjectEX_Source_ProjectEX_ServerActor_h_15_SPARSE_DATA
#define ProjectEX_Source_ProjectEX_ServerActor_h_15_RPC_WRAPPERS
#define ProjectEX_Source_ProjectEX_ServerActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectEX_Source_ProjectEX_ServerActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAServerActor(); \
	friend struct Z_Construct_UClass_AServerActor_Statics; \
public: \
	DECLARE_CLASS(AServerActor, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectEX"), NO_API) \
	DECLARE_SERIALIZER(AServerActor)


#define ProjectEX_Source_ProjectEX_ServerActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAServerActor(); \
	friend struct Z_Construct_UClass_AServerActor_Statics; \
public: \
	DECLARE_CLASS(AServerActor, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectEX"), NO_API) \
	DECLARE_SERIALIZER(AServerActor)


#define ProjectEX_Source_ProjectEX_ServerActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AServerActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AServerActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AServerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AServerActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AServerActor(AServerActor&&); \
	NO_API AServerActor(const AServerActor&); \
public:


#define ProjectEX_Source_ProjectEX_ServerActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AServerActor(AServerActor&&); \
	NO_API AServerActor(const AServerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AServerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AServerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AServerActor)


#define ProjectEX_Source_ProjectEX_ServerActor_h_15_PRIVATE_PROPERTY_OFFSET
#define ProjectEX_Source_ProjectEX_ServerActor_h_12_PROLOG
#define ProjectEX_Source_ProjectEX_ServerActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectEX_Source_ProjectEX_ServerActor_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectEX_Source_ProjectEX_ServerActor_h_15_SPARSE_DATA \
	ProjectEX_Source_ProjectEX_ServerActor_h_15_RPC_WRAPPERS \
	ProjectEX_Source_ProjectEX_ServerActor_h_15_INCLASS \
	ProjectEX_Source_ProjectEX_ServerActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectEX_Source_ProjectEX_ServerActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectEX_Source_ProjectEX_ServerActor_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectEX_Source_ProjectEX_ServerActor_h_15_SPARSE_DATA \
	ProjectEX_Source_ProjectEX_ServerActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectEX_Source_ProjectEX_ServerActor_h_15_INCLASS_NO_PURE_DECLS \
	ProjectEX_Source_ProjectEX_ServerActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTEX_API UClass* StaticClass<class AServerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectEX_Source_ProjectEX_ServerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
