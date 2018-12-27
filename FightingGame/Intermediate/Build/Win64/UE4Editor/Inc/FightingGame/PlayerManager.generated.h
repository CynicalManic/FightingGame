// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayer_Base;
#ifdef FIGHTINGGAME_PlayerManager_generated_h
#error "PlayerManager.generated.h already included, missing '#pragma once' in PlayerManager.h"
#endif
#define FIGHTINGGAME_PlayerManager_generated_h

#define FightingGame_Source_FightingGame_PlayerManager_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPlayers) \
	{ \
		P_GET_TARRAY(APlayer_Base*,Z_Param_Players); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayers(Z_Param_Players); \
		P_NATIVE_END; \
	}


#define FightingGame_Source_FightingGame_PlayerManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPlayers) \
	{ \
		P_GET_TARRAY(APlayer_Base*,Z_Param_Players); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayers(Z_Param_Players); \
		P_NATIVE_END; \
	}


#define FightingGame_Source_FightingGame_PlayerManager_h_12_EVENT_PARMS
#define FightingGame_Source_FightingGame_PlayerManager_h_12_CALLBACK_WRAPPERS
#define FightingGame_Source_FightingGame_PlayerManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerManager(); \
	friend struct Z_Construct_UClass_APlayerManager_Statics; \
public: \
	DECLARE_CLASS(APlayerManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FightingGame"), NO_API) \
	DECLARE_SERIALIZER(APlayerManager)


#define FightingGame_Source_FightingGame_PlayerManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerManager(); \
	friend struct Z_Construct_UClass_APlayerManager_Statics; \
public: \
	DECLARE_CLASS(APlayerManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FightingGame"), NO_API) \
	DECLARE_SERIALIZER(APlayerManager)


#define FightingGame_Source_FightingGame_PlayerManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerManager(APlayerManager&&); \
	NO_API APlayerManager(const APlayerManager&); \
public:


#define FightingGame_Source_FightingGame_PlayerManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerManager(APlayerManager&&); \
	NO_API APlayerManager(const APlayerManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerManager)


#define FightingGame_Source_FightingGame_PlayerManager_h_12_PRIVATE_PROPERTY_OFFSET
#define FightingGame_Source_FightingGame_PlayerManager_h_9_PROLOG \
	FightingGame_Source_FightingGame_PlayerManager_h_12_EVENT_PARMS


#define FightingGame_Source_FightingGame_PlayerManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightingGame_Source_FightingGame_PlayerManager_h_12_PRIVATE_PROPERTY_OFFSET \
	FightingGame_Source_FightingGame_PlayerManager_h_12_RPC_WRAPPERS \
	FightingGame_Source_FightingGame_PlayerManager_h_12_CALLBACK_WRAPPERS \
	FightingGame_Source_FightingGame_PlayerManager_h_12_INCLASS \
	FightingGame_Source_FightingGame_PlayerManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FightingGame_Source_FightingGame_PlayerManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightingGame_Source_FightingGame_PlayerManager_h_12_PRIVATE_PROPERTY_OFFSET \
	FightingGame_Source_FightingGame_PlayerManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FightingGame_Source_FightingGame_PlayerManager_h_12_CALLBACK_WRAPPERS \
	FightingGame_Source_FightingGame_PlayerManager_h_12_INCLASS_NO_PURE_DECLS \
	FightingGame_Source_FightingGame_PlayerManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FightingGame_Source_FightingGame_PlayerManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
