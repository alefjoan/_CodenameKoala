// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Koala/PotatoSpawnPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePotatoSpawnPoint() {}
// Cross Module References
	KOALA_API UClass* Z_Construct_UClass_APotatoSpawnPoint_NoRegister();
	KOALA_API UClass* Z_Construct_UClass_APotatoSpawnPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Koala();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	KOALA_API UClass* Z_Construct_UClass_APotato_NoRegister();
// End Cross Module References
	void APotatoSpawnPoint::StaticRegisterNativesAPotatoSpawnPoint()
	{
	}
	UClass* Z_Construct_UClass_APotatoSpawnPoint_NoRegister()
	{
		return APotatoSpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_APotatoSpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PotatoSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PotatoSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APotatoSpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Koala,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotatoSpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PotatoSpawnPoint.h" },
		{ "ModuleRelativePath", "PotatoSpawnPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotatoSpawnPoint_Statics::NewProp_PotatoSpawn_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "PotatoSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APotatoSpawnPoint_Statics::NewProp_PotatoSpawn = { "PotatoSpawn", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APotatoSpawnPoint, PotatoSpawn), Z_Construct_UClass_APotato_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APotatoSpawnPoint_Statics::NewProp_PotatoSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotatoSpawnPoint_Statics::NewProp_PotatoSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APotatoSpawnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotatoSpawnPoint_Statics::NewProp_PotatoSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APotatoSpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APotatoSpawnPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APotatoSpawnPoint_Statics::ClassParams = {
		&APotatoSpawnPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APotatoSpawnPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APotatoSpawnPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APotatoSpawnPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APotatoSpawnPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APotatoSpawnPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APotatoSpawnPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APotatoSpawnPoint, 1095113348);
	template<> KOALA_API UClass* StaticClass<APotatoSpawnPoint>()
	{
		return APotatoSpawnPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APotatoSpawnPoint(Z_Construct_UClass_APotatoSpawnPoint, &APotatoSpawnPoint::StaticClass, TEXT("/Script/Koala"), TEXT("APotatoSpawnPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APotatoSpawnPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
