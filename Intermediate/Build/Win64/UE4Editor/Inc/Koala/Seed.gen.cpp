// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Koala/Seed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeed() {}
// Cross Module References
	KOALA_API UEnum* Z_Construct_UEnum_Koala_SeedType();
	UPackage* Z_Construct_UPackage__Script_Koala();
	KOALA_API UClass* Z_Construct_UClass_ASeed_NoRegister();
	KOALA_API UClass* Z_Construct_UClass_ASeed();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* SeedType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Koala_SeedType, Z_Construct_UPackage__Script_Koala(), TEXT("SeedType"));
		}
		return Singleton;
	}
	template<> KOALA_API UEnum* StaticEnum<SeedType>()
	{
		return SeedType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SeedType(SeedType_StaticEnum, TEXT("/Script/Koala"), TEXT("SeedType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Koala_SeedType_Hash() { return 1911993814U; }
	UEnum* Z_Construct_UEnum_Koala_SeedType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Koala();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SeedType"), 0, Get_Z_Construct_UEnum_Koala_SeedType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RedSeed", (int64)RedSeed },
				{ "BlueSeed", (int64)BlueSeed },
				{ "GreenSeed", (int64)GreenSeed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueSeed.Name", "BlueSeed" },
				{ "GreenSeed.Name", "GreenSeed" },
				{ "ModuleRelativePath", "Seed.h" },
				{ "RedSeed.Name", "RedSeed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Koala,
				nullptr,
				"SeedType",
				"SeedType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ASeed::StaticRegisterNativesASeed()
	{
	}
	UClass* Z_Construct_UClass_ASeed_NoRegister()
	{
		return ASeed::StaticClass();
	}
	struct Z_Construct_UClass_ASeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeedType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SeedType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Koala,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeed_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Seed.h" },
		{ "ModuleRelativePath", "Seed.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeed_Statics::NewProp_SeedType_MetaData[] = {
		{ "Category", "SeedType" },
		{ "ModuleRelativePath", "Seed.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASeed_Statics::NewProp_SeedType = { "SeedType", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASeed, SeedType), Z_Construct_UEnum_Koala_SeedType, METADATA_PARAMS(Z_Construct_UClass_ASeed_Statics::NewProp_SeedType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASeed_Statics::NewProp_SeedType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeed_Statics::NewProp_SeedType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASeed>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASeed_Statics::ClassParams = {
		&ASeed::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASeed_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASeed_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASeed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASeed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASeed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASeed_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASeed, 1091300330);
	template<> KOALA_API UClass* StaticClass<ASeed>()
	{
		return ASeed::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASeed(Z_Construct_UClass_ASeed, &ASeed::StaticClass, TEXT("/Script/Koala"), TEXT("ASeed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASeed);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
