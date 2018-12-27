// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FightingGame/Player_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_Base() {}
// Cross Module References
	FIGHTINGGAME_API UClass* Z_Construct_UClass_APlayer_Base_NoRegister();
	FIGHTINGGAME_API UClass* Z_Construct_UClass_APlayer_Base();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FightingGame();
	FIGHTINGGAME_API UClass* Z_Construct_UClass_UAnimation_Handler_NoRegister();
// End Cross Module References
	void APlayer_Base::StaticRegisterNativesAPlayer_Base()
	{
	}
	UClass* Z_Construct_UClass_APlayer_Base_NoRegister()
	{
		return APlayer_Base::StaticClass();
	}
	struct Z_Construct_UClass_APlayer_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_playerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_knockbackModString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_knockbackModString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_knockbackMod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_knockbackMod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_playerNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FightingGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player_Base.h" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_playerID_MetaData[] = {
		{ "Category", "Player_Base" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_playerID = { UE4CodeGen_Private::EPropertyClass::Int, "playerID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000014, 1, nullptr, STRUCT_OFFSET(APlayer_Base, playerID), METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_playerID_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_playerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_knockbackModString_MetaData[] = {
		{ "Category", "Player_Base" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_knockbackModString = { UE4CodeGen_Private::EPropertyClass::Str, "knockbackModString", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000014, 1, nullptr, STRUCT_OFFSET(APlayer_Base, knockbackModString), METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_knockbackModString_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_knockbackModString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_knockbackMod_MetaData[] = {
		{ "Category", "Player_Base" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_knockbackMod = { UE4CodeGen_Private::EPropertyClass::Float, "knockbackMod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000014, 1, nullptr, STRUCT_OFFSET(APlayer_Base, knockbackMod), METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_knockbackMod_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_knockbackMod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_AnimationHandler_MetaData[] = {
		{ "Category", "Animation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_AnimationHandler = { UE4CodeGen_Private::EPropertyClass::Object, "AnimationHandler", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(APlayer_Base, AnimationHandler), Z_Construct_UClass_UAnimation_Handler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_AnimationHandler_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_AnimationHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_playerNum_MetaData[] = {
		{ "Category", "Player_Base" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_playerNum = { UE4CodeGen_Private::EPropertyClass::Int, "playerNum", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayer_Base, playerNum), METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_playerNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_playerNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayer_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_playerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_knockbackModString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_knockbackMod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_AnimationHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_playerNum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer_Base_Statics::ClassParams = {
		&APlayer_Base::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_APlayer_Base_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayer_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer_Base, 3049319205);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer_Base(Z_Construct_UClass_APlayer_Base, &APlayer_Base::StaticClass, TEXT("/Script/FightingGame"), TEXT("APlayer_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
