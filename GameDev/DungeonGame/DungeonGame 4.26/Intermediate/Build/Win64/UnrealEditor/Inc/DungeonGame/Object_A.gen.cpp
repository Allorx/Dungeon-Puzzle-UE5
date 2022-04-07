// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonGame/Object_A.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObject_A() {}
// Cross Module References
	DUNGEONGAME_API UClass* Z_Construct_UClass_AObject_A_NoRegister();
	DUNGEONGAME_API UClass* Z_Construct_UClass_AObject_A();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DungeonGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AObject_A::execRotateObject)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateObject(Z_Param_Out_direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObject_A::execAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObject_A::execDamage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_GET_PROPERTY(FIntProperty,Z_Param_type);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_originOfDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Damage(Z_Param_amount,Z_Param_type,Z_Param_Out_originOfDamage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObject_A::execGetMovementState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMovementState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObject_A::execDestroyedObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DestroyedObject();
		P_NATIVE_END;
	}
	void AObject_A::StaticRegisterNativesAObject_A()
	{
		UClass* Class = AObject_A::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack", &AObject_A::execAttack },
			{ "Damage", &AObject_A::execDamage },
			{ "DestroyedObject", &AObject_A::execDestroyedObject },
			{ "GetMovementState", &AObject_A::execGetMovementState },
			{ "RotateObject", &AObject_A::execRotateObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AObject_A_Attack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObject_A_Attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Object_A.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AObject_A_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObject_A, nullptr, "Attack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObject_A_Attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObject_A_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObject_A_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AObject_A_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObject_A_Damage_Statics
	{
		struct Object_A_eventDamage_Parms
		{
			int32 amount;
			int32 type;
			FVector originOfDamage;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_amount;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_originOfDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_originOfDamage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AObject_A_Damage_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Object_A_eventDamage_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AObject_A_Damage_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Object_A_eventDamage_Parms, type), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObject_A_Damage_Statics::NewProp_originOfDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AObject_A_Damage_Statics::NewProp_originOfDamage = { "originOfDamage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Object_A_eventDamage_Parms, originOfDamage), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AObject_A_Damage_Statics::NewProp_originOfDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AObject_A_Damage_Statics::NewProp_originOfDamage_MetaData)) };
	void Z_Construct_UFunction_AObject_A_Damage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Object_A_eventDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AObject_A_Damage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Object_A_eventDamage_Parms), &Z_Construct_UFunction_AObject_A_Damage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObject_A_Damage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObject_A_Damage_Statics::NewProp_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObject_A_Damage_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObject_A_Damage_Statics::NewProp_originOfDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObject_A_Damage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObject_A_Damage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Object_A.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AObject_A_Damage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObject_A, nullptr, "Damage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AObject_A_Damage_Statics::Object_A_eventDamage_Parms), Z_Construct_UFunction_AObject_A_Damage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObject_A_Damage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObject_A_Damage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObject_A_Damage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObject_A_Damage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AObject_A_Damage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObject_A_DestroyedObject_Statics
	{
		struct Object_A_eventDestroyedObject_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AObject_A_DestroyedObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Object_A_eventDestroyedObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AObject_A_DestroyedObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Object_A_eventDestroyedObject_Parms), &Z_Construct_UFunction_AObject_A_DestroyedObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObject_A_DestroyedObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObject_A_DestroyedObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObject_A_DestroyedObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Object_A.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AObject_A_DestroyedObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObject_A, nullptr, "DestroyedObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_AObject_A_DestroyedObject_Statics::Object_A_eventDestroyedObject_Parms), Z_Construct_UFunction_AObject_A_DestroyedObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObject_A_DestroyedObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObject_A_DestroyedObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObject_A_DestroyedObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObject_A_DestroyedObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AObject_A_DestroyedObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObject_A_GetMovementState_Statics
	{
		struct Object_A_eventGetMovementState_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AObject_A_GetMovementState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Object_A_eventGetMovementState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AObject_A_GetMovementState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Object_A_eventGetMovementState_Parms), &Z_Construct_UFunction_AObject_A_GetMovementState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObject_A_GetMovementState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObject_A_GetMovementState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObject_A_GetMovementState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Object_A.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AObject_A_GetMovementState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObject_A, nullptr, "GetMovementState", nullptr, nullptr, sizeof(Z_Construct_UFunction_AObject_A_GetMovementState_Statics::Object_A_eventGetMovementState_Parms), Z_Construct_UFunction_AObject_A_GetMovementState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObject_A_GetMovementState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObject_A_GetMovementState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObject_A_GetMovementState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObject_A_GetMovementState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AObject_A_GetMovementState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObject_A_RotateObject_Statics
	{
		struct Object_A_eventRotateObject_Parms
		{
			FVector direction;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObject_A_RotateObject_Statics::NewProp_direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AObject_A_RotateObject_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Object_A_eventRotateObject_Parms, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AObject_A_RotateObject_Statics::NewProp_direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AObject_A_RotateObject_Statics::NewProp_direction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObject_A_RotateObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObject_A_RotateObject_Statics::NewProp_direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObject_A_RotateObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Object_A.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AObject_A_RotateObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObject_A, nullptr, "RotateObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_AObject_A_RotateObject_Statics::Object_A_eventRotateObject_Parms), Z_Construct_UFunction_AObject_A_RotateObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObject_A_RotateObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObject_A_RotateObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObject_A_RotateObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObject_A_RotateObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AObject_A_RotateObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObject_A);
	UClass* Z_Construct_UClass_AObject_A_NoRegister()
	{
		return AObject_A::StaticClass();
	}
	struct Z_Construct_UClass_AObject_A_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_visualMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_visualMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_objectLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_objectLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanMoveAnywhereOnPlane_MetaData[];
#endif
		static void NewProp_bCanMoveAnywhereOnPlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanMoveAnywhereOnPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_adjacentDist_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_adjacentDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stepSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stepSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_health;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObject_A_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AObject_A_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AObject_A_Attack, "Attack" }, // 3753601268
		{ &Z_Construct_UFunction_AObject_A_Damage, "Damage" }, // 1008859213
		{ &Z_Construct_UFunction_AObject_A_DestroyedObject, "DestroyedObject" }, // 2328402876
		{ &Z_Construct_UFunction_AObject_A_GetMovementState, "GetMovementState" }, // 2617794070
		{ &Z_Construct_UFunction_AObject_A_RotateObject, "RotateObject" }, // 3677154625
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObject_A_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Object_A.h" },
		{ "ModuleRelativePath", "Object_A.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObject_A_Statics::NewProp_visualMesh_MetaData[] = {
		{ "Category", "Object_A" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Object_A.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObject_A_Statics::NewProp_visualMesh = { "visualMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObject_A, visualMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObject_A_Statics::NewProp_visualMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObject_A_Statics::NewProp_visualMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObject_A_Statics::NewProp_objectLocation_MetaData[] = {
		{ "Category", "Object_A" },
		{ "ModuleRelativePath", "Object_A.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AObject_A_Statics::NewProp_objectLocation = { "objectLocation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObject_A, objectLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AObject_A_Statics::NewProp_objectLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObject_A_Statics::NewProp_objectLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObject_A_Statics::NewProp_bCanMoveAnywhereOnPlane_MetaData[] = {
		{ "Category", "Object_A" },
		{ "ModuleRelativePath", "Object_A.h" },
	};
#endif
	void Z_Construct_UClass_AObject_A_Statics::NewProp_bCanMoveAnywhereOnPlane_SetBit(void* Obj)
	{
		((AObject_A*)Obj)->bCanMoveAnywhereOnPlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AObject_A_Statics::NewProp_bCanMoveAnywhereOnPlane = { "bCanMoveAnywhereOnPlane", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AObject_A), &Z_Construct_UClass_AObject_A_Statics::NewProp_bCanMoveAnywhereOnPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_AObject_A_Statics::NewProp_bCanMoveAnywhereOnPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObject_A_Statics::NewProp_bCanMoveAnywhereOnPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObject_A_Statics::NewProp_adjacentDist_MetaData[] = {
		{ "Category", "Object_A" },
		{ "ModuleRelativePath", "Object_A.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObject_A_Statics::NewProp_adjacentDist = { "adjacentDist", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObject_A, adjacentDist), METADATA_PARAMS(Z_Construct_UClass_AObject_A_Statics::NewProp_adjacentDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObject_A_Statics::NewProp_adjacentDist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObject_A_Statics::NewProp_stepSize_MetaData[] = {
		{ "Category", "Object_A" },
		{ "ModuleRelativePath", "Object_A.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AObject_A_Statics::NewProp_stepSize = { "stepSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObject_A, stepSize), METADATA_PARAMS(Z_Construct_UClass_AObject_A_Statics::NewProp_stepSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObject_A_Statics::NewProp_stepSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObject_A_Statics::NewProp_health_MetaData[] = {
		{ "Category", "Object_A" },
		{ "ModuleRelativePath", "Object_A.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AObject_A_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObject_A, health), METADATA_PARAMS(Z_Construct_UClass_AObject_A_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObject_A_Statics::NewProp_health_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObject_A_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObject_A_Statics::NewProp_visualMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObject_A_Statics::NewProp_objectLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObject_A_Statics::NewProp_bCanMoveAnywhereOnPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObject_A_Statics::NewProp_adjacentDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObject_A_Statics::NewProp_stepSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObject_A_Statics::NewProp_health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObject_A_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObject_A>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AObject_A_Statics::ClassParams = {
		&AObject_A::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AObject_A_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AObject_A_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObject_A_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObject_A_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObject_A()
	{
		if (!Z_Registration_Info_UClass_AObject_A.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObject_A.OuterSingleton, Z_Construct_UClass_AObject_A_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AObject_A.OuterSingleton;
	}
	template<> DUNGEONGAME_API UClass* StaticClass<AObject_A>()
	{
		return AObject_A::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObject_A);
	struct Z_CompiledInDeferFile_FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AObject_A, AObject_A::StaticClass, TEXT("AObject_A"), &Z_Registration_Info_UClass_AObject_A, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObject_A), 3909786233U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_3444239687(TEXT("/Script/DungeonGame"),
		Z_CompiledInDeferFile_FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DungeonGame_4_26_Source_DungeonGame_Object_A_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
