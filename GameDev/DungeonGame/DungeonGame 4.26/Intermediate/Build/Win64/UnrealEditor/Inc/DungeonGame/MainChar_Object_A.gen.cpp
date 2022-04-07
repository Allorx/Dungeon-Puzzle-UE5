// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonGame/MainChar_Object_A.h"
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainChar_Object_A);
	UClass* Z_Construct_UClass_AMainChar_Object_A_NoRegister()
	{
		return AMainChar_Object_A::StaticClass();
	}
	struct Z_Construct_UClass_AMainChar_Object_A_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainChar_Object_A_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObject_A,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainChar_Object_A_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MainChar_Object_A.h" },
		{ "ModuleRelativePath", "MainChar_Object_A.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainChar_Object_A_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainChar_Object_A>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainChar_Object_A_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_AMainChar_Object_A.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainChar_Object_A.OuterSingleton, Z_Construct_UClass_AMainChar_Object_A_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainChar_Object_A.OuterSingleton;
	}
	template<> DUNGEONGAME_API UClass* StaticClass<AMainChar_Object_A>()
	{
		return AMainChar_Object_A::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainChar_Object_A);
	struct Z_CompiledInDeferFile_FID_DungeonGame_4_26_Source_DungeonGame_MainChar_Object_A_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DungeonGame_4_26_Source_DungeonGame_MainChar_Object_A_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainChar_Object_A, AMainChar_Object_A::StaticClass, TEXT("AMainChar_Object_A"), &Z_Registration_Info_UClass_AMainChar_Object_A, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainChar_Object_A), 1105832098U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DungeonGame_4_26_Source_DungeonGame_MainChar_Object_A_h_1988705172(TEXT("/Script/DungeonGame"),
		Z_CompiledInDeferFile_FID_DungeonGame_4_26_Source_DungeonGame_MainChar_Object_A_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DungeonGame_4_26_Source_DungeonGame_MainChar_Object_A_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
