// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FIGHTINGGAME_Player_Base_generated_h
#error "Player_Base.generated.h already included, missing '#pragma once' in Player_Base.h"
#endif
#define FIGHTINGGAME_Player_Base_generated_h

#define FightingGame_Source_FightingGame_Player_Base_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetLives) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->getLives(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRespawnArray) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_respawns); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRespawnArray(Z_Param_respawns); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define FightingGame_Source_FightingGame_Player_Base_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetLives) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->getLives(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRespawnArray) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_respawns); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRespawnArray(Z_Param_respawns); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define FightingGame_Source_FightingGame_Player_Base_h_15_EVENT_PARMS \
	struct Player_Base_eventCollisionType_Parms \
	{ \
		AActor* OtherActor; \
		FString ReturnValue; \
	};


#define FightingGame_Source_FightingGame_Player_Base_h_15_CALLBACK_WRAPPERS
#define FightingGame_Source_FightingGame_Player_Base_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayer_Base(); \
	friend struct Z_Construct_UClass_APlayer_Base_Statics; \
public: \
	DECLARE_CLASS(APlayer_Base, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FightingGame"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Base)


#define FightingGame_Source_FightingGame_Player_Base_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayer_Base(); \
	friend struct Z_Construct_UClass_APlayer_Base_Statics; \
public: \
	DECLARE_CLASS(APlayer_Base, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FightingGame"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Base)


#define FightingGame_Source_FightingGame_Player_Base_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayer_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayer_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_Base(APlayer_Base&&); \
	NO_API APlayer_Base(const APlayer_Base&); \
public:


#define FightingGame_Source_FightingGame_Player_Base_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_Base(APlayer_Base&&); \
	NO_API APlayer_Base(const APlayer_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayer_Base)


#define FightingGame_Source_FightingGame_Player_Base_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AnimationHandler() { return STRUCT_OFFSET(APlayer_Base, AnimationHandler); } \
	FORCEINLINE static uint32 __PPO__movementInput() { return STRUCT_OFFSET(APlayer_Base, movementInput); } \
	FORCEINLINE static uint32 __PPO__knockbackMod() { return STRUCT_OFFSET(APlayer_Base, knockbackMod); } \
	FORCEINLINE static uint32 __PPO__knockbackModString() { return STRUCT_OFFSET(APlayer_Base, knockbackModString); } \
	FORCEINLINE static uint32 __PPO__attackDirection() { return STRUCT_OFFSET(APlayer_Base, attackDirection); }


#define FightingGame_Source_FightingGame_Player_Base_h_12_PROLOG \
	FightingGame_Source_FightingGame_Player_Base_h_15_EVENT_PARMS


#define FightingGame_Source_FightingGame_Player_Base_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightingGame_Source_FightingGame_Player_Base_h_15_PRIVATE_PROPERTY_OFFSET \
	FightingGame_Source_FightingGame_Player_Base_h_15_RPC_WRAPPERS \
	FightingGame_Source_FightingGame_Player_Base_h_15_CALLBACK_WRAPPERS \
	FightingGame_Source_FightingGame_Player_Base_h_15_INCLASS \
	FightingGame_Source_FightingGame_Player_Base_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FightingGame_Source_FightingGame_Player_Base_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightingGame_Source_FightingGame_Player_Base_h_15_PRIVATE_PROPERTY_OFFSET \
	FightingGame_Source_FightingGame_Player_Base_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FightingGame_Source_FightingGame_Player_Base_h_15_CALLBACK_WRAPPERS \
	FightingGame_Source_FightingGame_Player_Base_h_15_INCLASS_NO_PURE_DECLS \
	FightingGame_Source_FightingGame_Player_Base_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FightingGame_Source_FightingGame_Player_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
