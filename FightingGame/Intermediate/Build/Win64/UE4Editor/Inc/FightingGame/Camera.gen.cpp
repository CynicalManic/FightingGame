// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FightingGame/Camera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamera() {}
// Cross Module References
	FIGHTINGGAME_API UClass* Z_Construct_UClass_ACamera_NoRegister();
	FIGHTINGGAME_API UClass* Z_Construct_UClass_ACamera();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FightingGame();
	FIGHTINGGAME_API UFunction* Z_Construct_UFunction_ACamera_GetCamera();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FIGHTINGGAME_API UFunction* Z_Construct_UFunction_ACamera_GetPlayerArray();
	FIGHTINGGAME_API UFunction* Z_Construct_UFunction_ACamera_SetCameraMode();
	FIGHTINGGAME_API UFunction* Z_Construct_UFunction_ACamera_SetCameraTarget();
	FIGHTINGGAME_API UFunction* Z_Construct_UFunction_ACamera_SetPlayerArray();
// End Cross Module References
	static FName NAME_ACamera_GetPlayerArray = FName(TEXT("GetPlayerArray"));
	void ACamera::GetPlayerArray()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACamera_GetPlayerArray),NULL);
	}
	void ACamera::StaticRegisterNativesACamera()
	{
		UClass* Class = ACamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCamera", &ACamera::execGetCamera },
			{ "SetCameraMode", &ACamera::execSetCameraMode },
			{ "SetCameraTarget", &ACamera::execSetCameraTarget },
			{ "SetPlayerArray", &ACamera::execSetPlayerArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACamera_GetCamera_Statics
	{
		struct Camera_eventGetCamera_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACamera_GetCamera_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Camera_eventGetCamera_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACamera_GetCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACamera_GetCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACamera_GetCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamera_GetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamera, "GetCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Camera_eventGetCamera_Parms), Z_Construct_UFunction_ACamera_GetCamera_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACamera_GetCamera_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACamera_GetCamera_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACamera_GetCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACamera_GetCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACamera_GetCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACamera_GetPlayerArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACamera_GetPlayerArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "GetFunction" },
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamera_GetPlayerArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamera, "GetPlayerArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACamera_GetPlayerArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACamera_GetPlayerArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACamera_GetPlayerArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACamera_GetPlayerArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACamera_SetCameraMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACamera_SetCameraMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamera_SetCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamera, "SetCameraMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACamera_SetCameraMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACamera_SetCameraMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACamera_SetCameraMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACamera_SetCameraMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACamera_SetCameraTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACamera_SetCameraTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamera_SetCameraTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamera, "SetCameraTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACamera_SetCameraTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACamera_SetCameraTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACamera_SetCameraTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACamera_SetCameraTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACamera_SetPlayerArray_Statics
	{
		struct Camera_eventSetPlayerArray_Parms
		{
			TArray<AActor*> players;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_players;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_players_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACamera_SetPlayerArray_Statics::NewProp_players = { UE4CodeGen_Private::EPropertyClass::Array, "players", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Camera_eventSetPlayerArray_Parms, players), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACamera_SetPlayerArray_Statics::NewProp_players_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "players", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACamera_SetPlayerArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACamera_SetPlayerArray_Statics::NewProp_players,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACamera_SetPlayerArray_Statics::NewProp_players_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACamera_SetPlayerArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamera_SetPlayerArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamera, "SetPlayerArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Camera_eventSetPlayerArray_Parms), Z_Construct_UFunction_ACamera_SetPlayerArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACamera_SetPlayerArray_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACamera_SetPlayerArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACamera_SetPlayerArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACamera_SetPlayerArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACamera_SetPlayerArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACamera_NoRegister()
	{
		return ACamera::StaticClass();
	}
	struct Z_Construct_UClass_ACamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__players_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__players;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__players_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FightingGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACamera_GetCamera, "GetCamera" }, // 2572844847
		{ &Z_Construct_UFunction_ACamera_GetPlayerArray, "GetPlayerArray" }, // 2874595533
		{ &Z_Construct_UFunction_ACamera_SetCameraMode, "SetCameraMode" }, // 1037806527
		{ &Z_Construct_UFunction_ACamera_SetCameraTarget, "SetCameraTarget" }, // 851447857
		{ &Z_Construct_UFunction_ACamera_SetPlayerArray, "SetPlayerArray" }, // 3614809456
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Camera.h" },
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera_Statics::NewProp_CameraOne_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_CameraOne = { UE4CodeGen_Private::EPropertyClass::Object, "CameraOne", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACamera, CameraOne), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamera_Statics::NewProp_CameraOne_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::NewProp_CameraOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera_Statics::NewProp__players_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp__players = { UE4CodeGen_Private::EPropertyClass::Array, "_players", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACamera, _players), METADATA_PARAMS(Z_Construct_UClass_ACamera_Statics::NewProp__players_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::NewProp__players_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp__players_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "_players", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_CameraOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp__players,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp__players_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACamera_Statics::ClassParams = {
		&ACamera::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ACamera_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACamera_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACamera, 4278150615);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACamera(Z_Construct_UClass_ACamera, &ACamera::StaticClass, TEXT("/Script/FightingGame"), TEXT("ACamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
