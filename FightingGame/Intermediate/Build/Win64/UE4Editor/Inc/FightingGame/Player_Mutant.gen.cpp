// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FightingGame/Player_Mutant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_Mutant() {}
// Cross Module References
	FIGHTINGGAME_API UClass* Z_Construct_UClass_APlayer_Mutant_NoRegister();
	FIGHTINGGAME_API UClass* Z_Construct_UClass_APlayer_Mutant();
	FIGHTINGGAME_API UClass* Z_Construct_UClass_APlayer_Base();
	UPackage* Z_Construct_UPackage__Script_FightingGame();
// End Cross Module References
	void APlayer_Mutant::StaticRegisterNativesAPlayer_Mutant()
	{
	}
	UClass* Z_Construct_UClass_APlayer_Mutant_NoRegister()
	{
		return APlayer_Mutant::StaticClass();
	}
	struct Z_Construct_UClass_APlayer_Mutant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer_Mutant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayer_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_FightingGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Mutant_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player_Mutant.h" },
		{ "ModuleRelativePath", "Player_Mutant.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer_Mutant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_Mutant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer_Mutant_Statics::ClassParams = {
		&APlayer_Mutant::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APlayer_Mutant_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayer_Mutant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer_Mutant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayer_Mutant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer_Mutant, 3281107440);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer_Mutant(Z_Construct_UClass_APlayer_Mutant, &APlayer_Mutant::StaticClass, TEXT("/Script/FightingGame"), TEXT("APlayer_Mutant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_Mutant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
