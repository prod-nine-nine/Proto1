// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatArena/CombatArenaCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatArenaCharacter() {}
// Cross Module References
	COMBATARENA_API UClass* Z_Construct_UClass_ACombatArenaCharacter_NoRegister();
	COMBATARENA_API UClass* Z_Construct_UClass_ACombatArenaCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CombatArena();
	COMBATARENA_API UFunction* Z_Construct_UFunction_ACombatArenaCharacter_damagePlayer();
	COMBATARENA_API UClass* Z_Construct_UClass_ASwordBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void ACombatArenaCharacter::StaticRegisterNativesACombatArenaCharacter()
	{
		UClass* Class = ACombatArenaCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "damagePlayer", &ACombatArenaCharacter::execdamagePlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACombatArenaCharacter_damagePlayer_Statics
	{
		struct CombatArenaCharacter_eventdamagePlayer_Parms
		{
			float damage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACombatArenaCharacter_damagePlayer_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombatArenaCharacter_eventdamagePlayer_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACombatArenaCharacter_damagePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatArenaCharacter_damagePlayer_Statics::NewProp_damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACombatArenaCharacter_damagePlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "CombatArenaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACombatArenaCharacter_damagePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACombatArenaCharacter, nullptr, "damagePlayer", sizeof(CombatArenaCharacter_eventdamagePlayer_Parms), Z_Construct_UFunction_ACombatArenaCharacter_damagePlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACombatArenaCharacter_damagePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACombatArenaCharacter_damagePlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACombatArenaCharacter_damagePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACombatArenaCharacter_damagePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACombatArenaCharacter_damagePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACombatArenaCharacter_NoRegister()
	{
		return ACombatArenaCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACombatArenaCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dodgeRechargePercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dodgeRechargePercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_attackDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_blocking_MetaData[];
#endif
		static void NewProp_blocking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_blocking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gSlice_MetaData[];
#endif
		static void NewProp_gSlice_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_gSlice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attacking_MetaData[];
#endif
		static void NewProp_attacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_attacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACombatArenaCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatArena,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACombatArenaCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACombatArenaCharacter_damagePlayer, "damagePlayer" }, // 3155066914
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatArenaCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CombatArenaCharacter.h" },
		{ "ModuleRelativePath", "CombatArenaCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_dodgeRechargePercent_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "CombatArenaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_dodgeRechargePercent = { "dodgeRechargePercent", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACombatArenaCharacter, dodgeRechargePercent), METADATA_PARAMS(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_dodgeRechargePercent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_dodgeRechargePercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_currentWeapon_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "CombatArenaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_currentWeapon = { "currentWeapon", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACombatArenaCharacter, currentWeapon), Z_Construct_UClass_ASwordBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_currentWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_currentWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_attackDamage_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "CombatArenaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_attackDamage = { "attackDamage", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACombatArenaCharacter, attackDamage), METADATA_PARAMS(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_attackDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_attackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_blocking_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "CombatArenaCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_blocking_SetBit(void* Obj)
	{
		((ACombatArenaCharacter*)Obj)->blocking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_blocking = { "blocking", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACombatArenaCharacter), &Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_blocking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_blocking_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_blocking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "CombatArenaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACombatArenaCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_gSlice_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "CombatArenaCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_gSlice_SetBit(void* Obj)
	{
		((ACombatArenaCharacter*)Obj)->gSlice = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_gSlice = { "gSlice", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACombatArenaCharacter), &Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_gSlice_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_gSlice_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_gSlice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_attacking_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "CombatArenaCharacter.h" },
		{ "ToolTip", "custom variables" },
	};
#endif
	void Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_attacking_SetBit(void* Obj)
	{
		((ACombatArenaCharacter*)Obj)->attacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_attacking = { "attacking", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACombatArenaCharacter), &Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_attacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_attacking_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_attacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CombatArenaCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACombatArenaCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CombatArenaCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACombatArenaCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CombatArenaCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACombatArenaCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_FollowCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CombatArenaCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACombatArenaCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACombatArenaCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_dodgeRechargePercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_currentWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_attackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_blocking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_gSlice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_attacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatArenaCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACombatArenaCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombatArenaCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACombatArenaCharacter_Statics::ClassParams = {
		&ACombatArenaCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACombatArenaCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ACombatArenaCharacter_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACombatArenaCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACombatArenaCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACombatArenaCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACombatArenaCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACombatArenaCharacter, 1768613084);
	template<> COMBATARENA_API UClass* StaticClass<ACombatArenaCharacter>()
	{
		return ACombatArenaCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACombatArenaCharacter(Z_Construct_UClass_ACombatArenaCharacter, &ACombatArenaCharacter::StaticClass, TEXT("/Script/CombatArena"), TEXT("ACombatArenaCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACombatArenaCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
