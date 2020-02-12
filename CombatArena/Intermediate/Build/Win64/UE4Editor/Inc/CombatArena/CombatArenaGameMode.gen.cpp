// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatArena/CombatArenaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatArenaGameMode() {}
// Cross Module References
	COMBATARENA_API UClass* Z_Construct_UClass_ACombatArenaGameMode_NoRegister();
	COMBATARENA_API UClass* Z_Construct_UClass_ACombatArenaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CombatArena();
// End Cross Module References
	void ACombatArenaGameMode::StaticRegisterNativesACombatArenaGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACombatArenaGameMode_NoRegister()
	{
		return ACombatArenaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACombatArenaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACombatArenaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatArena,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatArenaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CombatArenaGameMode.h" },
		{ "ModuleRelativePath", "CombatArenaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACombatArenaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombatArenaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACombatArenaGameMode_Statics::ClassParams = {
		&ACombatArenaGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ACombatArenaGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACombatArenaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACombatArenaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACombatArenaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACombatArenaGameMode, 4013330380);
	template<> COMBATARENA_API UClass* StaticClass<ACombatArenaGameMode>()
	{
		return ACombatArenaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACombatArenaGameMode(Z_Construct_UClass_ACombatArenaGameMode, &ACombatArenaGameMode::StaticClass, TEXT("/Script/CombatArena"), TEXT("ACombatArenaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACombatArenaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
