// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonGame/Cube_A.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCube_A() {}
// Cross Module References
	DUNGEONGAME_API UClass* Z_Construct_UClass_ACube_A_NoRegister();
	DUNGEONGAME_API UClass* Z_Construct_UClass_ACube_A();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DungeonGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACube_A::execGetRotationState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRotationState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACube_A::execFindActorsToRotate)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_rotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_normal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindActorsToRotate(Z_Param_Out_rotation,Z_Param_Out_normal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACube_A::execSetRotation)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_rotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_rotationAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotation(Z_Param_Out_rotation,Z_Param_Out_rotationAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACube_A::execRotateCube)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_direction);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_impactNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateCube(Z_Param_Out_direction,Z_Param_Out_impactNormal);
		P_NATIVE_END;
	}
	void ACube_A::StaticRegisterNativesACube_A()
	{
		UClass* Class = ACube_A::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindActorsToRotate", &ACube_A::execFindActorsToRotate },
			{ "GetRotationState", &ACube_A::execGetRotationState },
			{ "RotateCube", &ACube_A::execRotateCube },
			{ "SetRotation", &ACube_A::execSetRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACube_A_FindActorsToRotate_Statics
	{
		struct Cube_A_eventFindActorsToRotate_Parms
		{
			FQuat rotation;
			FVector normal;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_normal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACube_A_FindActorsToRotate_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Cube_A_eventFindActorsToRotate_Parms, rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACube_A_FindActorsToRotate_Statics::NewProp_normal = { "normal", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Cube_A_eventFindActorsToRotate_Parms, normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACube_A_FindActorsToRotate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACube_A_FindActorsToRotate_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACube_A_FindActorsToRotate_Statics::NewProp_normal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACube_A_FindActorsToRotate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cube_A.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACube_A_FindActorsToRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACube_A, nullptr, "FindActorsToRotate", nullptr, nullptr, sizeof(Cube_A_eventFindActorsToRotate_Parms), Z_Construct_UFunction_ACube_A_FindActorsToRotate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACube_A_FindActorsToRotate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACube_A_FindActorsToRotate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACube_A_FindActorsToRotate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACube_A_FindActorsToRotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACube_A_FindActorsToRotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACube_A_GetRotationState_Statics
	{
		struct Cube_A_eventGetRotationState_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACube_A_GetRotationState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Cube_A_eventGetRotationState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACube_A_GetRotationState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Cube_A_eventGetRotationState_Parms), &Z_Construct_UFunction_ACube_A_GetRotationState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACube_A_GetRotationState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACube_A_GetRotationState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACube_A_GetRotationState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cube_A.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACube_A_GetRotationState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACube_A, nullptr, "GetRotationState", nullptr, nullptr, sizeof(Cube_A_eventGetRotationState_Parms), Z_Construct_UFunction_ACube_A_GetRotationState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACube_A_GetRotationState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACube_A_GetRotationState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACube_A_GetRotationState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACube_A_GetRotationState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACube_A_GetRotationState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACube_A_RotateCube_Statics
	{
		struct Cube_A_eventRotateCube_Parms
		{
			FVector direction;
			FVector impactNormal;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_direction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactNormal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACube_A_RotateCube_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Cube_A_eventRotateCube_Parms, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACube_A_RotateCube_Statics::NewProp_impactNormal = { "impactNormal", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Cube_A_eventRotateCube_Parms, impactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACube_A_RotateCube_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACube_A_RotateCube_Statics::NewProp_direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACube_A_RotateCube_Statics::NewProp_impactNormal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACube_A_RotateCube_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cube_A.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACube_A_RotateCube_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACube_A, nullptr, "RotateCube", nullptr, nullptr, sizeof(Cube_A_eventRotateCube_Parms), Z_Construct_UFunction_ACube_A_RotateCube_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACube_A_RotateCube_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACube_A_RotateCube_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACube_A_RotateCube_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACube_A_RotateCube()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACube_A_RotateCube_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACube_A_SetRotation_Statics
	{
		struct Cube_A_eventSetRotation_Parms
		{
			FQuat rotation;
			FVector rotationAxis;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotationAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACube_A_SetRotation_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Cube_A_eventSetRotation_Parms, rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACube_A_SetRotation_Statics::NewProp_rotationAxis = { "rotationAxis", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Cube_A_eventSetRotation_Parms, rotationAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACube_A_SetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACube_A_SetRotation_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACube_A_SetRotation_Statics::NewProp_rotationAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACube_A_SetRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cube_A.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACube_A_SetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACube_A, nullptr, "SetRotation", nullptr, nullptr, sizeof(Cube_A_eventSetRotation_Parms), Z_Construct_UFunction_ACube_A_SetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACube_A_SetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACube_A_SetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACube_A_SetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACube_A_SetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACube_A_SetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACube_A_NoRegister()
	{
		return ACube_A::StaticClass();
	}
	struct Z_Construct_UClass_ACube_A_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_visualMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_visualMesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherCubes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherCubes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_otherCubes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACube_A_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACube_A_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACube_A_FindActorsToRotate, "FindActorsToRotate" }, // 4168119196
		{ &Z_Construct_UFunction_ACube_A_GetRotationState, "GetRotationState" }, // 1685161613
		{ &Z_Construct_UFunction_ACube_A_RotateCube, "RotateCube" }, // 3804500959
		{ &Z_Construct_UFunction_ACube_A_SetRotation, "SetRotation" }, // 1297811160
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_A_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cube_A.h" },
		{ "ModuleRelativePath", "Cube_A.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_A_Statics::NewProp_visualMesh_MetaData[] = {
		{ "Category", "Cube_A" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cube_A.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACube_A_Statics::NewProp_visualMesh = { "visualMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube_A, visualMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACube_A_Statics::NewProp_visualMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_A_Statics::NewProp_visualMesh_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACube_A_Statics::NewProp_otherCubes_Inner = { "otherCubes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACube_A_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_A_Statics::NewProp_otherCubes_MetaData[] = {
		{ "Category", "Cube_A" },
		{ "Comment", "//This must be set so cubes can access each other -> set in blueprints\n" },
		{ "ModuleRelativePath", "Cube_A.h" },
		{ "ToolTip", "This must be set so cubes can access each other -> set in blueprints" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACube_A_Statics::NewProp_otherCubes = { "otherCubes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube_A, otherCubes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACube_A_Statics::NewProp_otherCubes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_A_Statics::NewProp_otherCubes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACube_A_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_A_Statics::NewProp_visualMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_A_Statics::NewProp_otherCubes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_A_Statics::NewProp_otherCubes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACube_A_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACube_A>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACube_A_Statics::ClassParams = {
		&ACube_A::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACube_A_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACube_A_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACube_A_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_A_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACube_A()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACube_A_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACube_A, 3106413271);
	template<> DUNGEONGAME_API UClass* StaticClass<ACube_A>()
	{
		return ACube_A::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACube_A(Z_Construct_UClass_ACube_A, &ACube_A::StaticClass, TEXT("/Script/DungeonGame"), TEXT("ACube_A"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACube_A);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
