// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FightingGame/Player_Eve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_Eve() {}
// Cross Module References
	FIGHTINGGAME_API UClass* Z_Construct_UClass_APlayer_Eve_NoRegister();
	FIGHTINGGAME_API UClass* Z_Construct_UClass_APlayer_Eve();
	FIGHTINGGAME_API UClass* Z_Construct_UClass_APlayer_Base();
	UPackage* Z_Construct_UPackage__Script_FightingGame();
// End Cross Module References
	void APlayer_Eve::StaticRegisterNativesAPlayer_Eve()
	{
	}
	UClass* Z_Construct_UClass_APlayer_Eve_NoRegister()
	{
		return APlayer_Eve::StaticClass();
	}
	struct Z_Construct_UClass_APlayer_Eve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer_Eve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayer_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_FightingGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Eve_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player_Eve.h" },
		{ "ModuleRelativePath", "Player_Eve.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer_Eve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_Eve>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer_Eve_Statics::ClassParams = {
		&APlayer_Eve::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APlayer_Eve_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayer_Eve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer_Eve()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayer_Eve_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer_Eve, 729588952);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer_Eve(Z_Construct_UClass_APlayer_Eve, &APlayer_Eve::StaticClass, TEXT("/Script/FightingGame"), TEXT("APlayer_Eve"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_Eve);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
