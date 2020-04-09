// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Koala/Potato.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePotato() {}
// Cross Module References
	KOALA_API UClass* Z_Construct_UClass_APotato_NoRegister();
	KOALA_API UClass* Z_Construct_UClass_APotato();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Koala();
	KOALA_API UFunction* Z_Construct_UFunction_APotato_DamageReception();
// End Cross Module References
	void APotato::StaticRegisterNativesAPotato()
	{
		UClass* Class = APotato::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageReception", &APotato::execDamageReception },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APotato_DamageReception_Statics
	{
		struct Potato_eventDamageReception_Parms
		{
			int32 DamageTaken;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DamageTaken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APotato_DamageReception_Statics::NewProp_DamageTaken = { "DamageTaken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Potato_eventDamageReception_Parms, DamageTaken), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APotato_DamageReception_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APotato_DamageReception_Statics::NewProp_DamageTaken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APotato_DamageReception_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Potato.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APotato_DamageReception_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APotato, nullptr, "DamageReception", nullptr, nullptr, sizeof(Potato_eventDamageReception_Parms), Z_Construct_UFunction_APotato_DamageReception_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APotato_DamageReception_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APotato_DamageReception_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APotato_DamageReception_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APotato_DamageReception()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APotato_DamageReception_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APotato_NoRegister()
	{
		return APotato::StaticClass();
	}
	struct Z_Construct_UClass_APotato_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[];
#endif
		static void NewProp_bIsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PotatoHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PotatoHP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APotato_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Koala,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APotato_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APotato_DamageReception, "DamageReception" }, // 2040145000
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotato_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Potato.h" },
		{ "ModuleRelativePath", "Potato.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotato_Statics::NewProp_bIsDead_MetaData[] = {
		{ "Category", "HP" },
		{ "ModuleRelativePath", "Potato.h" },
	};
#endif
	void Z_Construct_UClass_APotato_Statics::NewProp_bIsDead_SetBit(void* Obj)
	{
		((APotato*)Obj)->bIsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APotato_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APotato), &Z_Construct_UClass_APotato_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_APotato_Statics::NewProp_bIsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotato_Statics::NewProp_bIsDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotato_Statics::NewProp_PotatoHP_MetaData[] = {
		{ "Category", "HP" },
		{ "ModuleRelativePath", "Potato.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APotato_Statics::NewProp_PotatoHP = { "PotatoHP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APotato, PotatoHP), METADATA_PARAMS(Z_Construct_UClass_APotato_Statics::NewProp_PotatoHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotato_Statics::NewProp_PotatoHP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APotato_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotato_Statics::NewProp_bIsDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotato_Statics::NewProp_PotatoHP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APotato_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APotato>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APotato_Statics::ClassParams = {
		&APotato::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APotato_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APotato_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APotato_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APotato_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APotato()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APotato_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APotato, 3859516306);
	template<> KOALA_API UClass* StaticClass<APotato>()
	{
		return APotato::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APotato(Z_Construct_UClass_APotato, &APotato::StaticClass, TEXT("/Script/Koala"), TEXT("APotato"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APotato);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
