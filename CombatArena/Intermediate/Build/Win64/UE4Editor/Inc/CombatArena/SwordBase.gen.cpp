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
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASwordBase::StaticRegisterNativesASwordBase()
	{
	}
	UClass* Z_Construct_UClass_ASwordBase_NoRegister()
	{
		return ASwordBase::StaticClass();
	}
	struct Z_Construct_UClass_ASwordBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OffMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnMaterial;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SwordBase.h" },
		{ "ModuleRelativePath", "SwordBase.h" },
	};
#endif
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwordBase_Statics::NewProp_MyMesh_MetaData[] = {
		{ "Category", "SwordBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SwordBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordBase_Statics::NewProp_MyMesh = { "MyMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwordBase, MyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwordBase_Statics::NewProp_MyMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwordBase_Statics::NewProp_MyMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwordBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordBase_Statics::NewProp_OffMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordBase_Statics::NewProp_OnMaterial,
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
		nullptr,
		Z_Construct_UClass_ASwordBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(ASwordBase, 1545940705);
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
