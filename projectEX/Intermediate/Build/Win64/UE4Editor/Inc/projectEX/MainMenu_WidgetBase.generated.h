// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTEX_MainMenu_WidgetBase_generated_h
#error "MainMenu_WidgetBase.generated.h already included, missing '#pragma once' in MainMenu_WidgetBase.h"
#endif
#define PROJECTEX_MainMenu_WidgetBase_generated_h

#define projectEX_Source_projectEX_MainMenu_WidgetBase_h_15_SPARSE_DATA
#define projectEX_Source_projectEX_MainMenu_WidgetBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execjoinServerHandler); \
	DECLARE_FUNCTION(execCreateServerHandler);


#define projectEX_Source_projectEX_MainMenu_WidgetBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execjoinServerHandler); \
	DECLARE_FUNCTION(execCreateServerHandler);


#define projectEX_Source_projectEX_MainMenu_WidgetBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenu_WidgetBase(); \
	friend struct Z_Construct_UClass_UMainMenu_WidgetBase_Statics; \
public: \
	DECLARE_CLASS(UMainMenu_WidgetBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/projectEX"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu_WidgetBase)


#define projectEX_Source_projectEX_MainMenu_WidgetBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenu_WidgetBase(); \
	friend struct Z_Construct_UClass_UMainMenu_WidgetBase_Statics; \
public: \
	DECLARE_CLASS(UMainMenu_WidgetBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/projectEX"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu_WidgetBase)


#define projectEX_Source_projectEX_MainMenu_WidgetBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu_WidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu_WidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu_WidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu_WidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu_WidgetBase(UMainMenu_WidgetBase&&); \
	NO_API UMainMenu_WidgetBase(const UMainMenu_WidgetBase&); \
public:


#define projectEX_Source_projectEX_MainMenu_WidgetBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu_WidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu_WidgetBase(UMainMenu_WidgetBase&&); \
	NO_API UMainMenu_WidgetBase(const UMainMenu_WidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu_WidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu_WidgetBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu_WidgetBase)


#define projectEX_Source_projectEX_MainMenu_WidgetBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CreateServerBtn() { return STRUCT_OFFSET(UMainMenu_WidgetBase, CreateServerBtn); } \
	FORCEINLINE static uint32 __PPO__JoinSeeverBtn() { return STRUCT_OFFSET(UMainMenu_WidgetBase, JoinSeeverBtn); }


#define projectEX_Source_projectEX_MainMenu_WidgetBase_h_12_PROLOG
#define projectEX_Source_projectEX_MainMenu_WidgetBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	projectEX_Source_projectEX_MainMenu_WidgetBase_h_15_PRIVATE_PROPERTY_OFFSET \
	projectEX_Source_projectEX_MainMenu_WidgetBase_h_15_SPARSE_DATA \
	projectEX_Source_projectEX_MainMenu_WidgetBase_h_15_RPC_WRAPPERS \
	projectEX_Source_projectEX_MainMenu_WidgetBase_h_15_INCLASS \
	projectEX_Source_projectEX_MainMenu_WidgetBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define projectEX_Source_projectEX_MainMenu_WidgetBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	projectEX_Source_projectEX_MainMenu_WidgetBase_h_15_PRIVATE_PROPERTY_OFFSET \
	projectEX_Source_projectEX_MainMenu_WidgetBase_h_15_SPARSE_DATA \
	projectEX_Source_projectEX_MainMenu_WidgetBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	projectEX_Source_projectEX_MainMenu_WidgetBase_h_15_INCLASS_NO_PURE_DECLS \
	projectEX_Source_projectEX_MainMenu_WidgetBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTEX_API UClass* StaticClass<class UMainMenu_WidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID projectEX_Source_projectEX_MainMenu_WidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
