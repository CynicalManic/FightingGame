// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIGHTINGGAME_Animation_Handler_generated_h
#error "Animation_Handler.generated.h already included, missing '#pragma once' in Animation_Handler.h"
#endif
#define FIGHTINGGAME_Animation_Handler_generated_h

#define FightingGame_Source_FightingGame_Animation_Handler_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAttackType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAttackType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttackDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAttackDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttackingStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetAttackingStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGroundedStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGroundedStatus(); \
		P_NATIVE_END; \
	}


#define FightingGame_Source_FightingGame_Animation_Handler_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttackType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAttackType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttackDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAttackDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttackingStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetAttackingStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGroundedStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGroundedStatus(); \
		P_NATIVE_END; \
	}


#define FightingGame_Source_FightingGame_Animation_Handler_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimation_Handler(); \
	friend struct Z_Construct_UClass_UAnimation_Handler_Statics; \
public: \
	DECLARE_CLASS(UAnimation_Handler, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FightingGame"), NO_API) \
	DECLARE_SERIALIZER(UAnimation_Handler)


#define FightingGame_Source_FightingGame_Animation_Handler_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimation_Handler(); \
	friend struct Z_Construct_UClass_UAnimation_Handler_Statics; \
public: \
	DECLARE_CLASS(UAnimation_Handler, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FightingGame"), NO_API) \
	DECLARE_SERIALIZER(UAnimation_Handler)


#define FightingGame_Source_FightingGame_Animation_Handler_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimation_Handler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimation_Handler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimation_Handler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimation_Handler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimation_Handler(UAnimation_Handler&&); \
	NO_API UAnimation_Handler(const UAnimation_Handler&); \
public:


#define FightingGame_Source_FightingGame_Animation_Handler_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimation_Handler(UAnimation_Handler&&); \
	NO_API UAnimation_Handler(const UAnimation_Handler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimation_Handler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimation_Handler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimation_Handler)


#define FightingGame_Source_FightingGame_Animation_Handler_h_13_PRIVATE_PROPERTY_OFFSET
#define FightingGame_Source_FightingGame_Animation_Handler_h_10_PROLOG
#define FightingGame_Source_FightingGame_Animation_Handler_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightingGame_Source_FightingGame_Animation_Handler_h_13_PRIVATE_PROPERTY_OFFSET \
	FightingGame_Source_FightingGame_Animation_Handler_h_13_RPC_WRAPPERS \
	FightingGame_Source_FightingGame_Animation_Handler_h_13_INCLASS \
	FightingGame_Source_FightingGame_Animation_Handler_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FightingGame_Source_FightingGame_Animation_Handler_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightingGame_Source_FightingGame_Animation_Handler_h_13_PRIVATE_PROPERTY_OFFSET \
	FightingGame_Source_FightingGame_Animation_Handler_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FightingGame_Source_FightingGame_Animation_Handler_h_13_INCLASS_NO_PURE_DECLS \
	FightingGame_Source_FightingGame_Animation_Handler_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FightingGame_Source_FightingGame_Animation_Handler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
