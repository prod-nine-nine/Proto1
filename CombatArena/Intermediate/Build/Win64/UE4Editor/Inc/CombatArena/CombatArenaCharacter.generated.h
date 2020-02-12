// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBATARENA_CombatArenaCharacter_generated_h
#error "CombatArenaCharacter.generated.h already included, missing '#pragma once' in CombatArenaCharacter.h"
#endif
#define COMBATARENA_CombatArenaCharacter_generated_h

#define CombatArena_Source_CombatArena_CombatArenaCharacter_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execdamagePlayer) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->damagePlayer(Z_Param_damage); \
		P_NATIVE_END; \
	}


#define CombatArena_Source_CombatArena_CombatArenaCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execdamagePlayer) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->damagePlayer(Z_Param_damage); \
		P_NATIVE_END; \
	}


#define CombatArena_Source_CombatArena_CombatArenaCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombatArenaCharacter(); \
	friend struct Z_Construct_UClass_ACombatArenaCharacter_Statics; \
public: \
	DECLARE_CLASS(ACombatArenaCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CombatArena"), NO_API) \
	DECLARE_SERIALIZER(ACombatArenaCharacter)


#define CombatArena_Source_CombatArena_CombatArenaCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACombatArenaCharacter(); \
	friend struct Z_Construct_UClass_ACombatArenaCharacter_Statics; \
public: \
	DECLARE_CLASS(ACombatArenaCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CombatArena"), NO_API) \
	DECLARE_SERIALIZER(ACombatArenaCharacter)


#define CombatArena_Source_CombatArena_CombatArenaCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACombatArenaCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACombatArenaCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatArenaCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatArenaCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACombatArenaCharacter(ACombatArenaCharacter&&); \
	NO_API ACombatArenaCharacter(const ACombatArenaCharacter&); \
public:


#define CombatArena_Source_CombatArena_CombatArenaCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACombatArenaCharacter(ACombatArenaCharacter&&); \
	NO_API ACombatArenaCharacter(const ACombatArenaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatArenaCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatArenaCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACombatArenaCharacter)


#define CombatArena_Source_CombatArena_CombatArenaCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACombatArenaCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ACombatArenaCharacter, FollowCamera); }


#define CombatArena_Source_CombatArena_CombatArenaCharacter_h_10_PROLOG
#define CombatArena_Source_CombatArena_CombatArenaCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatArena_Source_CombatArena_CombatArenaCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	CombatArena_Source_CombatArena_CombatArenaCharacter_h_13_RPC_WRAPPERS \
	CombatArena_Source_CombatArena_CombatArenaCharacter_h_13_INCLASS \
	CombatArena_Source_CombatArena_CombatArenaCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CombatArena_Source_CombatArena_CombatArenaCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatArena_Source_CombatArena_CombatArenaCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	CombatArena_Source_CombatArena_CombatArenaCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CombatArena_Source_CombatArena_CombatArenaCharacter_h_13_INCLASS_NO_PURE_DECLS \
	CombatArena_Source_CombatArena_CombatArenaCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATARENA_API UClass* StaticClass<class ACombatArenaCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CombatArena_Source_CombatArena_CombatArenaCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
