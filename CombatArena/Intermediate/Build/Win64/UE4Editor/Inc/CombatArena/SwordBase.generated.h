// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBATARENA_SwordBase_generated_h
#error "SwordBase.generated.h already included, missing '#pragma once' in SwordBase.h"
#endif
#define COMBATARENA_SwordBase_generated_h

#define CombatArena_Source_CombatArena_SwordBase_h_12_RPC_WRAPPERS
#define CombatArena_Source_CombatArena_SwordBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define CombatArena_Source_CombatArena_SwordBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASwordBase(); \
	friend struct Z_Construct_UClass_ASwordBase_Statics; \
public: \
	DECLARE_CLASS(ASwordBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CombatArena"), NO_API) \
	DECLARE_SERIALIZER(ASwordBase)


#define CombatArena_Source_CombatArena_SwordBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASwordBase(); \
	friend struct Z_Construct_UClass_ASwordBase_Statics; \
public: \
	DECLARE_CLASS(ASwordBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CombatArena"), NO_API) \
	DECLARE_SERIALIZER(ASwordBase)


#define CombatArena_Source_CombatArena_SwordBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASwordBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASwordBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwordBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwordBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwordBase(ASwordBase&&); \
	NO_API ASwordBase(const ASwordBase&); \
public:


#define CombatArena_Source_CombatArena_SwordBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwordBase(ASwordBase&&); \
	NO_API ASwordBase(const ASwordBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwordBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwordBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASwordBase)


#define CombatArena_Source_CombatArena_SwordBase_h_12_PRIVATE_PROPERTY_OFFSET
#define CombatArena_Source_CombatArena_SwordBase_h_9_PROLOG
#define CombatArena_Source_CombatArena_SwordBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatArena_Source_CombatArena_SwordBase_h_12_PRIVATE_PROPERTY_OFFSET \
	CombatArena_Source_CombatArena_SwordBase_h_12_RPC_WRAPPERS \
	CombatArena_Source_CombatArena_SwordBase_h_12_INCLASS \
	CombatArena_Source_CombatArena_SwordBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CombatArena_Source_CombatArena_SwordBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatArena_Source_CombatArena_SwordBase_h_12_PRIVATE_PROPERTY_OFFSET \
	CombatArena_Source_CombatArena_SwordBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CombatArena_Source_CombatArena_SwordBase_h_12_INCLASS_NO_PURE_DECLS \
	CombatArena_Source_CombatArena_SwordBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATARENA_API UClass* StaticClass<class ASwordBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CombatArena_Source_CombatArena_SwordBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
