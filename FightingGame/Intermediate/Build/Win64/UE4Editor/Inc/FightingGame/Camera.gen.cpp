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
// End Cross Module References
	void ACamera::StaticRegisterNativesACamera()
	{
		UClass* Class = ACamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCamera", &ACamera::execGetCamera },
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_CameraOne,
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
	IMPLEMENT_CLASS(ACamera, 421937882);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACamera(Z_Construct_UClass_ACamera, &ACamera::StaticClass, TEXT("/Script/FightingGame"), TEXT("ACamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
