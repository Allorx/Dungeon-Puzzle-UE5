// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONGAME_Object_A_generated_h
#error "Object_A.generated.h already included, missing '#pragma once' in Object_A.h"
#endif
#define DUNGEONGAME_Object_A_generated_h

#define FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_14_SPARSE_DATA
#define FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRotateObject); \
	DECLARE_FUNCTION(execAttack); \
	DECLARE_FUNCTION(execDamage); \
	DECLARE_FUNCTION(execGetMovementState); \
	DECLARE_FUNCTION(execDestroyedObject);


#define FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRotateObject); \
	DECLARE_FUNCTION(execAttack); \
	DECLARE_FUNCTION(execDamage); \
	DECLARE_FUNCTION(execGetMovementState); \
	DECLARE_FUNCTION(execDestroyedObject);


#define FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObject_A(); \
	friend struct Z_Construct_UClass_AObject_A_Statics; \
public: \
	DECLARE_CLASS(AObject_A, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonGame"), NO_API) \
	DECLARE_SERIALIZER(AObject_A)


#define FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAObject_A(); \
	friend struct Z_Construct_UClass_AObject_A_Statics; \
public: \
	DECLARE_CLASS(AObject_A, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonGame"), NO_API) \
	DECLARE_SERIALIZER(AObject_A)


#define FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObject_A(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObject_A) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObject_A); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObject_A); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObject_A(AObject_A&&); \
	NO_API AObject_A(const AObject_A&); \
public:


#define FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObject_A(AObject_A&&); \
	NO_API AObject_A(const AObject_A&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObject_A); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObject_A); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AObject_A)


#define FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_11_PROLOG
#define FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_14_SPARSE_DATA \
	FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_14_RPC_WRAPPERS \
	FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_14_INCLASS \
	FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_14_SPARSE_DATA \
	FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_14_INCLASS_NO_PURE_DECLS \
	FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONGAME_API UClass* StaticClass<class AObject_A>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
