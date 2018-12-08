// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FightingGame/Animation_Handler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimation_Handler() {}
// Cross Module References
	FIGHTINGGAME_API UClass* Z_Construct_UClass_UAnimation_Handler_NoRegister();
	FIGHTINGGAME_API UClass* Z_Construct_UClass_UAnimation_Handler();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FightingGame();
	FIGHTINGGAME_API UFunction* Z_Construct_UFunction_UAnimation_Handler_GetAttackDirection();
	FIGHTINGGAME_API UFunction* Z_Construct_UFunction_UAnimation_Handler_GetAttackingStatus();
	FIGHTINGGAME_API UFunction* Z_Construct_UFunction_UAnimation_Handler_GetAttackType();
	FIGHTINGGAME_API UFunction* Z_Construct_UFunction_UAnimation_Handler_GetGroundedStatus();
	FIGHTINGGAME_API UFunction* Z_Construct_UFunction_UAnimation_Handler_GetMovementSpeed();
// End Cross Module References
	void UAnimation_Handler::StaticRegisterNativesUAnimation_Handler()
	{
		UClass* Class = UAnimation_Handler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttackDirection", &UAnimation_Handler::execGetAttackDirection },
			{ "GetAttackingStatus", &UAnimation_Handler::execGetAttackingStatus },
			{ "GetAttackType", &UAnimation_Handler::execGetAttackType },
			{ "GetGroundedStatus", &UAnimation_Handler::execGetGroundedStatus },
			{ "GetMovementSpeed", &UAnimation_Handler::execGetMovementSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimation_Handler_GetAttackDirection_Statics
	{
		struct Animation_Handler_eventGetAttackDirection_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimation_Handler_GetAttackDirection_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Animation_Handler_eventGetAttackDirection_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimation_Handler_GetAttackDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimation_Handler_GetAttackDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimation_Handler_GetAttackDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Animation_Handler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimation_Handler_GetAttackDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimation_Handler, "GetAttackDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Animation_Handler_eventGetAttackDirection_Parms), Z_Construct_UFunction_UAnimation_Handler_GetAttackDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimation_Handler_GetAttackDirection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimation_Handler_GetAttackDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimation_Handler_GetAttackDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimation_Handler_GetAttackDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimation_Handler_GetAttackDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimation_Handler_GetAttackingStatus_Statics
	{
		struct Animation_Handler_eventGetAttackingStatus_Parms
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
	void Z_Construct_UFunction_UAnimation_Handler_GetAttackingStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Animation_Handler_eventGetAttackingStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimation_Handler_GetAttackingStatus_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Animation_Handler_eventGetAttackingStatus_Parms), &Z_Construct_UFunction_UAnimation_Handler_GetAttackingStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimation_Handler_GetAttackingStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimation_Handler_GetAttackingStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimation_Handler_GetAttackingStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Animation_Handler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimation_Handler_GetAttackingStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimation_Handler, "GetAttackingStatus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Animation_Handler_eventGetAttackingStatus_Parms), Z_Construct_UFunction_UAnimation_Handler_GetAttackingStatus_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimation_Handler_GetAttackingStatus_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimation_Handler_GetAttackingStatus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimation_Handler_GetAttackingStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimation_Handler_GetAttackingStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimation_Handler_GetAttackingStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimation_Handler_GetAttackType_Statics
	{
		struct Animation_Handler_eventGetAttackType_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAnimation_Handler_GetAttackType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Animation_Handler_eventGetAttackType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimation_Handler_GetAttackType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimation_Handler_GetAttackType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimation_Handler_GetAttackType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Animation_Handler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimation_Handler_GetAttackType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimation_Handler, "GetAttackType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Animation_Handler_eventGetAttackType_Parms), Z_Construct_UFunction_UAnimation_Handler_GetAttackType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimation_Handler_GetAttackType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimation_Handler_GetAttackType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimation_Handler_GetAttackType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimation_Handler_GetAttackType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimation_Handler_GetAttackType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimation_Handler_GetGroundedStatus_Statics
	{
		struct Animation_Handler_eventGetGroundedStatus_Parms
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
	void Z_Construct_UFunction_UAnimation_Handler_GetGroundedStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Animation_Handler_eventGetGroundedStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimation_Handler_GetGroundedStatus_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Animation_Handler_eventGetGroundedStatus_Parms), &Z_Construct_UFunction_UAnimation_Handler_GetGroundedStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimation_Handler_GetGroundedStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimation_Handler_GetGroundedStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimation_Handler_GetGroundedStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Animation_Handler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimation_Handler_GetGroundedStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimation_Handler, "GetGroundedStatus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Animation_Handler_eventGetGroundedStatus_Parms), Z_Construct_UFunction_UAnimation_Handler_GetGroundedStatus_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimation_Handler_GetGroundedStatus_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimation_Handler_GetGroundedStatus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimation_Handler_GetGroundedStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimation_Handler_GetGroundedStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimation_Handler_GetGroundedStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimation_Handler_GetMovementSpeed_Statics
	{
		struct Animation_Handler_eventGetMovementSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimation_Handler_GetMovementSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Animation_Handler_eventGetMovementSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimation_Handler_GetMovementSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimation_Handler_GetMovementSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimation_Handler_GetMovementSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Animation_Handler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimation_Handler_GetMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimation_Handler, "GetMovementSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Animation_Handler_eventGetMovementSpeed_Parms), Z_Construct_UFunction_UAnimation_Handler_GetMovementSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimation_Handler_GetMovementSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimation_Handler_GetMovementSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimation_Handler_GetMovementSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimation_Handler_GetMovementSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimation_Handler_GetMovementSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimation_Handler_NoRegister()
	{
		return UAnimation_Handler::StaticClass();
	}
	struct Z_Construct_UClass_UAnimation_Handler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimation_Handler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FightingGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimation_Handler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimation_Handler_GetAttackDirection, "GetAttackDirection" }, // 112585812
		{ &Z_Construct_UFunction_UAnimation_Handler_GetAttackingStatus, "GetAttackingStatus" }, // 4069984330
		{ &Z_Construct_UFunction_UAnimation_Handler_GetAttackType, "GetAttackType" }, // 340151508
		{ &Z_Construct_UFunction_UAnimation_Handler_GetGroundedStatus, "GetGroundedStatus" }, // 151337544
		{ &Z_Construct_UFunction_UAnimation_Handler_GetMovementSpeed, "GetMovementSpeed" }, // 83557952
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimation_Handler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Animation_Handler.h" },
		{ "ModuleRelativePath", "Animation_Handler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimation_Handler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimation_Handler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimation_Handler_Statics::ClassParams = {
		&UAnimation_Handler::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAnimation_Handler_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimation_Handler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimation_Handler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimation_Handler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimation_Handler, 552146778);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimation_Handler(Z_Construct_UClass_UAnimation_Handler, &UAnimation_Handler::StaticClass, TEXT("/Script/FightingGame"), TEXT("UAnimation_Handler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimation_Handler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
