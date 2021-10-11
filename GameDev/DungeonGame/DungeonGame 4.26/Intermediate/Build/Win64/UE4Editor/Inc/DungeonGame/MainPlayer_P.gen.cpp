// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonGame/MainPlayer_P.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainPlayer_P() {}
// Cross Module References
	DUNGEONGAME_API UClass* Z_Construct_UClass_AMainPlayer_P_NoRegister();
	DUNGEONGAME_API UClass* Z_Construct_UClass_AMainPlayer_P();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_DungeonGame();
	DUNGEONGAME_API UClass* Z_Construct_UClass_AMainChar_Object_A_NoRegister();
	DUNGEONGAME_API UClass* Z_Construct_UClass_ACube_A_NoRegister();
// End Cross Module References
	void AMainPlayer_P::StaticRegisterNativesAMainPlayer_P()
	{
	}
	UClass* Z_Construct_UClass_AMainPlayer_P_NoRegister()
	{
		return AMainPlayer_P::StaticClass();
	}
	struct Z_Construct_UClass_AMainPlayer_P_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mainCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mainCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minVectorSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minVectorSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_swipeSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_swipeSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_idleHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_idleHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainPlayer_P_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_P_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainPlayer_P.h" },
		{ "ModuleRelativePath", "MainPlayer_P.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_mainCharacter_MetaData[] = {
		{ "Category", "MainPlayer_P" },
		{ "ModuleRelativePath", "MainPlayer_P.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_mainCharacter = { "mainCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayer_P, mainCharacter), Z_Construct_UClass_AMainChar_Object_A_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_mainCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_mainCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_hitActor_MetaData[] = {
		{ "Category", "MainPlayer_P" },
		{ "ModuleRelativePath", "MainPlayer_P.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_hitActor = { "hitActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayer_P, hitActor), Z_Construct_UClass_ACube_A_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_hitActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_hitActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_minVectorSize_MetaData[] = {
		{ "Category", "MainPlayer_P" },
		{ "ModuleRelativePath", "MainPlayer_P.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_minVectorSize = { "minVectorSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayer_P, minVectorSize), METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_minVectorSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_minVectorSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_swipeSensitivity_MetaData[] = {
		{ "Category", "MainPlayer_P" },
		{ "ModuleRelativePath", "MainPlayer_P.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_swipeSensitivity = { "swipeSensitivity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayer_P, swipeSensitivity), METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_swipeSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_swipeSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_idleHeight_MetaData[] = {
		{ "Category", "MainPlayer_P" },
		{ "ModuleRelativePath", "MainPlayer_P.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_idleHeight = { "idleHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayer_P, idleHeight), METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_idleHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_idleHeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainPlayer_P_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_mainCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_hitActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_minVectorSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_swipeSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_P_Statics::NewProp_idleHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainPlayer_P_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainPlayer_P>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainPlayer_P_Statics::ClassParams = {
		&AMainPlayer_P::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMainPlayer_P_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_P_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_P_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_P_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainPlayer_P()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainPlayer_P_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainPlayer_P, 685636135);
	template<> DUNGEONGAME_API UClass* StaticClass<AMainPlayer_P>()
	{
		return AMainPlayer_P::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainPlayer_P(Z_Construct_UClass_AMainPlayer_P, &AMainPlayer_P::StaticClass, TEXT("/Script/DungeonGame"), TEXT("AMainPlayer_P"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainPlayer_P);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
