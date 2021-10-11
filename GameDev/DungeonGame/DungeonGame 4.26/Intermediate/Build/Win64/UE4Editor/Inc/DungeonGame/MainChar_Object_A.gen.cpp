// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonGame/MainChar_Object_A.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainChar_Object_A() {}
// Cross Module References
	DUNGEONGAME_API UClass* Z_Construct_UClass_AMainChar_Object_A_NoRegister();
	DUNGEONGAME_API UClass* Z_Construct_UClass_AMainChar_Object_A();
	DUNGEONGAME_API UClass* Z_Construct_UClass_AObject_A();
	UPackage* Z_Construct_UPackage__Script_DungeonGame();
// End Cross Module References
	void AMainChar_Object_A::StaticRegisterNativesAMainChar_Object_A()
	{
	}
	UClass* Z_Construct_UClass_AMainChar_Object_A_NoRegister()
	{
		return AMainChar_Object_A::StaticClass();
	}
	struct Z_Construct_UClass_AMainChar_Object_A_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainChar_Object_A_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObject_A,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainChar_Object_A_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MainChar_Object_A.h" },
		{ "ModuleRelativePath", "MainChar_Object_A.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainChar_Object_A_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainChar_Object_A>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainChar_Object_A_Statics::ClassParams = {
		&AMainChar_Object_A::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainChar_Object_A_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainChar_Object_A_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainChar_Object_A()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainChar_Object_A_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainChar_Object_A, 2075236838);
	template<> DUNGEONGAME_API UClass* StaticClass<AMainChar_Object_A>()
	{
		return AMainChar_Object_A::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainChar_Object_A(Z_Construct_UClass_AMainChar_Object_A, &AMainChar_Object_A::StaticClass, TEXT("/Script/DungeonGame"), TEXT("AMainChar_Object_A"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainChar_Object_A);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
