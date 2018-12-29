// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FightingGame/PlayerManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerManager() {}
// Cross Module References
	FIGHTINGGAME_API UClass* Z_Construct_UClass_APlayerManager_NoRegister();
	FIGHTINGGAME_API UClass* Z_Construct_UClass_APlayerManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FightingGame();
	FIGHTINGGAME_API UFunction* Z_Construct_UFunction_APlayerManager_GetAllPlayers();
	FIGHTINGGAME_API UFunction* Z_Construct_UFunction_APlayerManager_SetPlayers();
	FIGHTINGGAME_API UClass* Z_Construct_UClass_APlayer_Base_NoRegister();
// End Cross Module References
	static FName NAME_APlayerManager_GetAllPlayers = FName(TEXT("GetAllPlayers"));
	void APlayerManager::GetAllPlayers()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerManager_GetAllPlayers),NULL);
	}
	void APlayerManager::StaticRegisterNativesAPlayerManager()
	{
		UClass* Class = APlayerManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPlayers", &APlayerManager::execSetPlayers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerManager_GetAllPlayers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerManager_GetAllPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Management" },
		{ "ModuleRelativePath", "PlayerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerManager_GetAllPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerManager, "GetAllPlayers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerManager_GetAllPlayers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerManager_GetAllPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerManager_GetAllPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerManager_GetAllPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerManager_SetPlayers_Statics
	{
		struct PlayerManager_eventSetPlayers_Parms
		{
			TArray<APlayer_Base*> Players;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Players;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Players_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlayerManager_SetPlayers_Statics::NewProp_Players = { UE4CodeGen_Private::EPropertyClass::Array, "Players", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerManager_eventSetPlayers_Parms, Players), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerManager_SetPlayers_Statics::NewProp_Players_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Players", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_APlayer_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerManager_SetPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerManager_SetPlayers_Statics::NewProp_Players,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerManager_SetPlayers_Statics::NewProp_Players_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerManager_SetPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Management" },
		{ "ModuleRelativePath", "PlayerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerManager_SetPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerManager, "SetPlayers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(PlayerManager_eventSetPlayers_Parms), Z_Construct_UFunction_APlayerManager_SetPlayers_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerManager_SetPlayers_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerManager_SetPlayers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerManager_SetPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerManager_SetPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerManager_SetPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerManager_NoRegister()
	{
		return APlayerManager::StaticClass();
	}
	struct Z_Construct_UClass_APlayerManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_allPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_allPlayers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_allPlayers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FightingGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerManager_GetAllPlayers, "GetAllPlayers" }, // 2198089039
		{ &Z_Construct_UFunction_APlayerManager_SetPlayers, "SetPlayers" }, // 1856033705
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerManager.h" },
		{ "ModuleRelativePath", "PlayerManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerManager_Statics::NewProp_allPlayers_MetaData[] = {
		{ "Category", "PlayerManager" },
		{ "ModuleRelativePath", "PlayerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerManager_Statics::NewProp_allPlayers = { UE4CodeGen_Private::EPropertyClass::Array, "allPlayers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(APlayerManager, allPlayers), METADATA_PARAMS(Z_Construct_UClass_APlayerManager_Statics::NewProp_allPlayers_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerManager_Statics::NewProp_allPlayers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerManager_Statics::NewProp_allPlayers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "allPlayers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_APlayer_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerManager_Statics::NewProp_allPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerManager_Statics::NewProp_allPlayers_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerManager_Statics::ClassParams = {
		&APlayerManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_APlayerManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APlayerManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APlayerManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerManager, 2952835493);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerManager(Z_Construct_UClass_APlayerManager, &APlayerManager::StaticClass, TEXT("/Script/FightingGame"), TEXT("APlayerManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
