// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FQuat;
struct FVector;
#ifdef DUNGEONGAME_Cube_A_generated_h
#error "Cube_A.generated.h already included, missing '#pragma once' in Cube_A.h"
#endif
#define DUNGEONGAME_Cube_A_generated_h

#define DungeonGame_4_26_Source_DungeonGame_Cube_A_h_13_SPARSE_DATA
#define DungeonGame_4_26_Source_DungeonGame_Cube_A_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRotationState); \
	DECLARE_FUNCTION(execFindActorsToRotate); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execRotateCube);


#define DungeonGame_4_26_Source_DungeonGame_Cube_A_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRotationState); \
	DECLARE_FUNCTION(execFindActorsToRotate); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execRotateCube);


#define DungeonGame_4_26_Source_DungeonGame_Cube_A_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACube_A(); \
	friend struct Z_Construct_UClass_ACube_A_Statics; \
public: \
	DECLARE_CLASS(ACube_A, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonGame"), NO_API) \
	DECLARE_SERIALIZER(ACube_A)


#define DungeonGame_4_26_Source_DungeonGame_Cube_A_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACube_A(); \
	friend struct Z_Construct_UClass_ACube_A_Statics; \
public: \
	DECLARE_CLASS(ACube_A, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonGame"), NO_API) \
	DECLARE_SERIALIZER(ACube_A)


#define DungeonGame_4_26_Source_DungeonGame_Cube_A_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACube_A(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACube_A) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACube_A); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACube_A); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACube_A(ACube_A&&); \
	NO_API ACube_A(const ACube_A&); \
public:


#define DungeonGame_4_26_Source_DungeonGame_Cube_A_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACube_A(ACube_A&&); \
	NO_API ACube_A(const ACube_A&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACube_A); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACube_A); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACube_A)


#define DungeonGame_4_26_Source_DungeonGame_Cube_A_h_13_PRIVATE_PROPERTY_OFFSET
#define DungeonGame_4_26_Source_DungeonGame_Cube_A_h_10_PROLOG
#define DungeonGame_4_26_Source_DungeonGame_Cube_A_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DungeonGame_4_26_Source_DungeonGame_Cube_A_h_13_PRIVATE_PROPERTY_OFFSET \
	DungeonGame_4_26_Source_DungeonGame_Cube_A_h_13_SPARSE_DATA \
	DungeonGame_4_26_Source_DungeonGame_Cube_A_h_13_RPC_WRAPPERS \
	DungeonGame_4_26_Source_DungeonGame_Cube_A_h_13_INCLASS \
	DungeonGame_4_26_Source_DungeonGame_Cube_A_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DungeonGame_4_26_Source_DungeonGame_Cube_A_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DungeonGame_4_26_Source_DungeonGame_Cube_A_h_13_PRIVATE_PROPERTY_OFFSET \
	DungeonGame_4_26_Source_DungeonGame_Cube_A_h_13_SPARSE_DATA \
	DungeonGame_4_26_Source_DungeonGame_Cube_A_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DungeonGame_4_26_Source_DungeonGame_Cube_A_h_13_INCLASS_NO_PURE_DECLS \
	DungeonGame_4_26_Source_DungeonGame_Cube_A_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONGAME_API UClass* StaticClass<class ACube_A>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DungeonGame_4_26_Source_DungeonGame_Cube_A_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
