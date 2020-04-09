// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Koala/KoalaCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKoalaCharacter() {}
// Cross Module References
	KOALA_API UClass* Z_Construct_UClass_AKoalaCharacter_NoRegister();
	KOALA_API UClass* Z_Construct_UClass_AKoalaCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Koala();
	KOALA_API UFunction* Z_Construct_UFunction_AKoalaCharacter_EquipBlueWeapon();
	KOALA_API UFunction* Z_Construct_UFunction_AKoalaCharacter_EquipGreenWeapon();
	KOALA_API UFunction* Z_Construct_UFunction_AKoalaCharacter_EquipRedWeapon();
	KOALA_API UFunction* Z_Construct_UFunction_AKoalaCharacter_Fire();
	KOALA_API UFunction* Z_Construct_UFunction_AKoalaCharacter_LookRight();
	KOALA_API UFunction* Z_Construct_UFunction_AKoalaCharacter_LookUp();
	KOALA_API UFunction* Z_Construct_UFunction_AKoalaCharacter_MoveForward();
	KOALA_API UFunction* Z_Construct_UFunction_AKoalaCharacter_MoveRight();
	KOALA_API UFunction* Z_Construct_UFunction_AKoalaCharacter_NextWeapon();
	KOALA_API UFunction* Z_Construct_UFunction_AKoalaCharacter_PreviousWeapon();
	KOALA_API UFunction* Z_Construct_UFunction_AKoalaCharacter_SpawnWeapons();
	KOALA_API UFunction* Z_Construct_UFunction_AKoalaCharacter_Sprint();
	KOALA_API UFunction* Z_Construct_UFunction_AKoalaCharacter_StopFire();
	KOALA_API UFunction* Z_Construct_UFunction_AKoalaCharacter_StopSprinting();
	KOALA_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AKoalaCharacter::StaticRegisterNativesAKoalaCharacter()
	{
		UClass* Class = AKoalaCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EquipBlueWeapon", &AKoalaCharacter::execEquipBlueWeapon },
			{ "EquipGreenWeapon", &AKoalaCharacter::execEquipGreenWeapon },
			{ "EquipRedWeapon", &AKoalaCharacter::execEquipRedWeapon },
			{ "Fire", &AKoalaCharacter::execFire },
			{ "LookRight", &AKoalaCharacter::execLookRight },
			{ "LookUp", &AKoalaCharacter::execLookUp },
			{ "MoveForward", &AKoalaCharacter::execMoveForward },
			{ "MoveRight", &AKoalaCharacter::execMoveRight },
			{ "NextWeapon", &AKoalaCharacter::execNextWeapon },
			{ "PreviousWeapon", &AKoalaCharacter::execPreviousWeapon },
			{ "SpawnWeapons", &AKoalaCharacter::execSpawnWeapons },
			{ "Sprint", &AKoalaCharacter::execSprint },
			{ "StopFire", &AKoalaCharacter::execStopFire },
			{ "StopSprinting", &AKoalaCharacter::execStopSprinting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AKoalaCharacter_EquipBlueWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKoalaCharacter_EquipBlueWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKoalaCharacter_EquipBlueWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKoalaCharacter, nullptr, "EquipBlueWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKoalaCharacter_EquipBlueWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKoalaCharacter_EquipBlueWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKoalaCharacter_EquipBlueWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKoalaCharacter_EquipBlueWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKoalaCharacter_EquipGreenWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKoalaCharacter_EquipGreenWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKoalaCharacter_EquipGreenWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKoalaCharacter, nullptr, "EquipGreenWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKoalaCharacter_EquipGreenWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKoalaCharacter_EquipGreenWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKoalaCharacter_EquipGreenWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKoalaCharacter_EquipGreenWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKoalaCharacter_EquipRedWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKoalaCharacter_EquipRedWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKoalaCharacter_EquipRedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKoalaCharacter, nullptr, "EquipRedWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKoalaCharacter_EquipRedWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKoalaCharacter_EquipRedWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKoalaCharacter_EquipRedWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKoalaCharacter_EquipRedWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKoalaCharacter_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKoalaCharacter_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKoalaCharacter_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKoalaCharacter, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKoalaCharacter_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKoalaCharacter_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKoalaCharacter_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKoalaCharacter_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKoalaCharacter_LookRight_Statics
	{
		struct KoalaCharacter_eventLookRight_Parms
		{
			float Axis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKoalaCharacter_LookRight_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KoalaCharacter_eventLookRight_Parms, Axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKoalaCharacter_LookRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKoalaCharacter_LookRight_Statics::NewProp_Axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKoalaCharacter_LookRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKoalaCharacter_LookRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKoalaCharacter, nullptr, "LookRight", nullptr, nullptr, sizeof(KoalaCharacter_eventLookRight_Parms), Z_Construct_UFunction_AKoalaCharacter_LookRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKoalaCharacter_LookRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKoalaCharacter_LookRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKoalaCharacter_LookRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKoalaCharacter_LookRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKoalaCharacter_LookRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKoalaCharacter_LookUp_Statics
	{
		struct KoalaCharacter_eventLookUp_Parms
		{
			float Axis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKoalaCharacter_LookUp_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KoalaCharacter_eventLookUp_Parms, Axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKoalaCharacter_LookUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKoalaCharacter_LookUp_Statics::NewProp_Axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKoalaCharacter_LookUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKoalaCharacter_LookUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKoalaCharacter, nullptr, "LookUp", nullptr, nullptr, sizeof(KoalaCharacter_eventLookUp_Parms), Z_Construct_UFunction_AKoalaCharacter_LookUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKoalaCharacter_LookUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKoalaCharacter_LookUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKoalaCharacter_LookUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKoalaCharacter_LookUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKoalaCharacter_LookUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKoalaCharacter_MoveForward_Statics
	{
		struct KoalaCharacter_eventMoveForward_Parms
		{
			float Axis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKoalaCharacter_MoveForward_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KoalaCharacter_eventMoveForward_Parms, Axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKoalaCharacter_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKoalaCharacter_MoveForward_Statics::NewProp_Axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKoalaCharacter_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKoalaCharacter_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKoalaCharacter, nullptr, "MoveForward", nullptr, nullptr, sizeof(KoalaCharacter_eventMoveForward_Parms), Z_Construct_UFunction_AKoalaCharacter_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKoalaCharacter_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKoalaCharacter_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKoalaCharacter_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKoalaCharacter_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKoalaCharacter_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKoalaCharacter_MoveRight_Statics
	{
		struct KoalaCharacter_eventMoveRight_Parms
		{
			float Axis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKoalaCharacter_MoveRight_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KoalaCharacter_eventMoveRight_Parms, Axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKoalaCharacter_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKoalaCharacter_MoveRight_Statics::NewProp_Axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKoalaCharacter_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKoalaCharacter_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKoalaCharacter, nullptr, "MoveRight", nullptr, nullptr, sizeof(KoalaCharacter_eventMoveRight_Parms), Z_Construct_UFunction_AKoalaCharacter_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKoalaCharacter_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKoalaCharacter_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKoalaCharacter_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKoalaCharacter_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKoalaCharacter_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKoalaCharacter_NextWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKoalaCharacter_NextWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKoalaCharacter_NextWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKoalaCharacter, nullptr, "NextWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKoalaCharacter_NextWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKoalaCharacter_NextWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKoalaCharacter_NextWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKoalaCharacter_NextWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKoalaCharacter_PreviousWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKoalaCharacter_PreviousWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKoalaCharacter_PreviousWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKoalaCharacter, nullptr, "PreviousWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKoalaCharacter_PreviousWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKoalaCharacter_PreviousWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKoalaCharacter_PreviousWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKoalaCharacter_PreviousWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKoalaCharacter_SpawnWeapons_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKoalaCharacter_SpawnWeapons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKoalaCharacter_SpawnWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKoalaCharacter, nullptr, "SpawnWeapons", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKoalaCharacter_SpawnWeapons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKoalaCharacter_SpawnWeapons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKoalaCharacter_SpawnWeapons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKoalaCharacter_SpawnWeapons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKoalaCharacter_Sprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKoalaCharacter_Sprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKoalaCharacter_Sprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKoalaCharacter, nullptr, "Sprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKoalaCharacter_Sprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKoalaCharacter_Sprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKoalaCharacter_Sprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKoalaCharacter_Sprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKoalaCharacter_StopFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKoalaCharacter_StopFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKoalaCharacter_StopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKoalaCharacter, nullptr, "StopFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKoalaCharacter_StopFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKoalaCharacter_StopFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKoalaCharacter_StopFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKoalaCharacter_StopFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKoalaCharacter_StopSprinting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKoalaCharacter_StopSprinting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKoalaCharacter_StopSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKoalaCharacter, nullptr, "StopSprinting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKoalaCharacter_StopSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKoalaCharacter_StopSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKoalaCharacter_StopSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKoalaCharacter_StopSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AKoalaCharacter_NoRegister()
	{
		return AKoalaCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AKoalaCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GreenWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BlueWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKoalaCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Koala,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AKoalaCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AKoalaCharacter_EquipBlueWeapon, "EquipBlueWeapon" }, // 3470370965
		{ &Z_Construct_UFunction_AKoalaCharacter_EquipGreenWeapon, "EquipGreenWeapon" }, // 1125453326
		{ &Z_Construct_UFunction_AKoalaCharacter_EquipRedWeapon, "EquipRedWeapon" }, // 154706060
		{ &Z_Construct_UFunction_AKoalaCharacter_Fire, "Fire" }, // 1195586744
		{ &Z_Construct_UFunction_AKoalaCharacter_LookRight, "LookRight" }, // 976766692
		{ &Z_Construct_UFunction_AKoalaCharacter_LookUp, "LookUp" }, // 384475689
		{ &Z_Construct_UFunction_AKoalaCharacter_MoveForward, "MoveForward" }, // 2166289820
		{ &Z_Construct_UFunction_AKoalaCharacter_MoveRight, "MoveRight" }, // 2106165104
		{ &Z_Construct_UFunction_AKoalaCharacter_NextWeapon, "NextWeapon" }, // 3279405635
		{ &Z_Construct_UFunction_AKoalaCharacter_PreviousWeapon, "PreviousWeapon" }, // 1713898068
		{ &Z_Construct_UFunction_AKoalaCharacter_SpawnWeapons, "SpawnWeapons" }, // 4029406878
		{ &Z_Construct_UFunction_AKoalaCharacter_Sprint, "Sprint" }, // 3400000698
		{ &Z_Construct_UFunction_AKoalaCharacter_StopFire, "StopFire" }, // 1570571109
		{ &Z_Construct_UFunction_AKoalaCharacter_StopSprinting, "StopSprinting" }, // 4155955629
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKoalaCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "KoalaCharacter.h" },
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKoalaCharacter, Inventory), METADATA_PARAMS(Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_GreenWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_GreenWeapon = { "GreenWeapon", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKoalaCharacter, GreenWeapon), Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_GreenWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_GreenWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_BlueWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_BlueWeapon = { "BlueWeapon", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKoalaCharacter, BlueWeapon), Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_BlueWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_BlueWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_RedWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_RedWeapon = { "RedWeapon", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKoalaCharacter, RedWeapon), Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_RedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_RedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKoalaCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KoalaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKoalaCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKoalaCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_Inventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_GreenWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_BlueWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_RedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKoalaCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKoalaCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKoalaCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKoalaCharacter_Statics::ClassParams = {
		&AKoalaCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AKoalaCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AKoalaCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKoalaCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKoalaCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKoalaCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKoalaCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKoalaCharacter, 2527585136);
	template<> KOALA_API UClass* StaticClass<AKoalaCharacter>()
	{
		return AKoalaCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKoalaCharacter(Z_Construct_UClass_AKoalaCharacter, &AKoalaCharacter::StaticClass, TEXT("/Script/Koala"), TEXT("AKoalaCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKoalaCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
