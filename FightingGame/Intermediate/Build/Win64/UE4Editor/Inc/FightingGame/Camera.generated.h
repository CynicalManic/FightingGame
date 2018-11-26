// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef FIGHTINGGAME_Camera_generated_h
#error "Camera.generated.h already included, missing '#pragma once' in Camera.h"
#endif
#define FIGHTINGGAME_Camera_generated_h

#define FightingGame_Source_FightingGame_Camera_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCameraMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCameraMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCameraTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCameraTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayerArray) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_players); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayerArray(Z_Param_players); \
		P_NATIVE_END; \
	}


#define FightingGame_Source_FightingGame_Camera_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCameraMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCameraMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCameraTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCameraTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayerArray) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_players); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayerArray(Z_Param_players); \
		P_NATIVE_END; \
	}


#define FightingGame_Source_FightingGame_Camera_h_16_EVENT_PARMS
#define FightingGame_Source_FightingGame_Camera_h_16_CALLBACK_WRAPPERS
#define FightingGame_Source_FightingGame_Camera_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACamera(); \
	friend struct Z_Construct_UClass_ACamera_Statics; \
public: \
	DECLARE_CLASS(ACamera, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FightingGame"), NO_API) \
	DECLARE_SERIALIZER(ACamera)


#define FightingGame_Source_FightingGame_Camera_h_16_INCLASS \
private: \
	static void StaticRegisterNativesACamera(); \
	friend struct Z_Construct_UClass_ACamera_Statics; \
public: \
	DECLARE_CLASS(ACamera, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FightingGame"), NO_API) \
	DECLARE_SERIALIZER(ACamera)


#define FightingGame_Source_FightingGame_Camera_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamera(ACamera&&); \
	NO_API ACamera(const ACamera&); \
public:


#define FightingGame_Source_FightingGame_Camera_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamera(ACamera&&); \
	NO_API ACamera(const ACamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACamera)


#define FightingGame_Source_FightingGame_Camera_h_16_PRIVATE_PROPERTY_OFFSET
#define FightingGame_Source_FightingGame_Camera_h_13_PROLOG \
	FightingGame_Source_FightingGame_Camera_h_16_EVENT_PARMS


#define FightingGame_Source_FightingGame_Camera_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightingGame_Source_FightingGame_Camera_h_16_PRIVATE_PROPERTY_OFFSET \
	FightingGame_Source_FightingGame_Camera_h_16_RPC_WRAPPERS \
	FightingGame_Source_FightingGame_Camera_h_16_CALLBACK_WRAPPERS \
	FightingGame_Source_FightingGame_Camera_h_16_INCLASS \
	FightingGame_Source_FightingGame_Camera_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FightingGame_Source_FightingGame_Camera_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightingGame_Source_FightingGame_Camera_h_16_PRIVATE_PROPERTY_OFFSET \
	FightingGame_Source_FightingGame_Camera_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FightingGame_Source_FightingGame_Camera_h_16_CALLBACK_WRAPPERS \
	FightingGame_Source_FightingGame_Camera_h_16_INCLASS_NO_PURE_DECLS \
	FightingGame_Source_FightingGame_Camera_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FightingGame_Source_FightingGame_Camera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
