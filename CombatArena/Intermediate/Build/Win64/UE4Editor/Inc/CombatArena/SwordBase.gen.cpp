// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatArena/SwordBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwordBase() {}
// Cross Module References
	COMBATARENA_API UClass* Z_Construct_UClass_ASwordBase_NoRegister();
	COMBATARENA_API UClass* Z_Construct_UClass_ASwordBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CombatArena();
	COMBATARENA_API UFunction* Z_Construct_UFunction_ASwordBase_DamageWeapon();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASwordBase::StaticRegisterNativesASwordBase()
	{
		UClass* Class = ASwordBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageWeapon", &ASwordBase::execDamageWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASwordBase_DamageWeapon_Statics
	{
		struct SwordBase_eventDamageWeapon_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASwordBase_DamageWeapon_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwordBase_eventDamageWeapon_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASwordBase_DamageWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwordBase_DamageWeapon_Statics::NewProp_damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwordBase_DamageWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SwordBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwordBase_DamageWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwordBase, nullptr, "DamageWeapon", sizeof(SwordBase_eventDamageWeapon_Parms), Z_Construct_UFunction_ASwordBase_DamageWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASwordBase_DamageWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwordBase_DamageWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASwordBase_DamageWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwordBase_DamageWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwordBase_DamageWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASwordBase_NoRegister()
	{
		return ASwordBase::StaticClass();
	}
	struct Z_Construct_UClass_ASwordBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_durability_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_durability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OffMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwordBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatArena,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASwordBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASwordBase_DamageWeapon, "DamageWeapon" }, // 3703565602
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SwordBase.h" },
		{ "ModuleRelativePath", "SwordBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordBase_Statics::NewProp_durability_MetaData[] = {
		{ "Category", "Sword" },
		{ "ModuleRelativePath", "SwordBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASwordBase_Statics::NewProp_durability = { "durability", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordBase, durability), METADATA_PARAMS(Z_Construct_UClass_ASwordBase_Statics::NewProp_durability_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordBase_Statics::NewProp_durability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordBase_Statics::NewProp_OffMaterial_MetaData[] = {
		{ "Category", "SwordBase" },
		{ "ModuleRelativePath", "SwordBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordBase_Statics::NewProp_OffMaterial = { "OffMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordBase, OffMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordBase_Statics::NewProp_OffMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordBase_Statics::NewProp_OffMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordBase_Statics::NewProp_OnMaterial_MetaData[] = {
		{ "Category", "SwordBase" },
		{ "ModuleRelativePath", "SwordBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordBase_Statics::NewProp_OnMaterial = { "OnMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordBase, OnMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordBase_Statics::NewProp_OnMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordBase_Statics::NewProp_OnMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordBase_Statics::NewProp_BoxCollision_MetaData[] = {
		{ "Category", "SwordBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SwordBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordBase_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordBase, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordBase_Statics::NewProp_BoxCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordBase_Statics::NewProp_BoxCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordBase_Statics::NewProp_ProjMovement_MetaData[] = {
		{ "Category", "SwordBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SwordBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordBase_Statics::NewProp_ProjMovement = { "ProjMovement", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordBase, ProjMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordBase_Statics::NewProp_ProjMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordBase_Statics::NewProp_ProjMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordBase_Statics::NewProp_MyMesh_MetaData[] = {
		{ "Category", "SwordBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SwordBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordBase_Statics::NewProp_MyMesh = { "MyMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordBase, MyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordBase_Statics::NewProp_MyMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordBase_Statics::NewProp_MyMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwordBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordBase_Statics::NewProp_durability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordBase_Statics::NewProp_OffMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordBase_Statics::NewProp_OnMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordBase_Statics::NewProp_BoxCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordBase_Statics::NewProp_ProjMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordBase_Statics::NewProp_MyMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwordBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwordBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASwordBase_Statics::ClassParams = {
		&ASwordBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASwordBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASwordBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASwordBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASwordBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASwordBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASwordBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASwordBase, 3403411);
	template<> COMBATARENA_API UClass* StaticClass<ASwordBase>()
	{
		return ASwordBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwordBase(Z_Construct_UClass_ASwordBase, &ASwordBase::StaticClass, TEXT("/Script/CombatArena"), TEXT("ASwordBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwordBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
