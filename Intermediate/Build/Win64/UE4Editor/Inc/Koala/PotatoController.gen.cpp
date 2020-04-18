// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Koala/PotatoController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePotatoController() {}
// Cross Module References
	KOALA_API UClass* Z_Construct_UClass_APotatoController_NoRegister();
	KOALA_API UClass* Z_Construct_UClass_APotatoController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Koala();
	KOALA_API UFunction* Z_Construct_UFunction_APotatoController_BehaviourOne();
	KOALA_API UFunction* Z_Construct_UFunction_APotatoController_BehaviourThree();
	KOALA_API UFunction* Z_Construct_UFunction_APotatoController_BehaviourTwo();
	KOALA_API UFunction* Z_Construct_UFunction_APotatoController_CheckPlayerSpotted();
	KOALA_API UFunction* Z_Construct_UFunction_APotatoController_DamageTaken();
	KOALA_API UFunction* Z_Construct_UFunction_APotatoController_ForgetDamageTaken();
	KOALA_API UFunction* Z_Construct_UFunction_APotatoController_ForgetPlayer();
	KOALA_API UFunction* Z_Construct_UFunction_APotatoController_OnPawnDetect();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	KOALA_API UFunction* Z_Construct_UFunction_APotatoController_PotatoDeath();
	KOALA_API UFunction* Z_Construct_UFunction_APotatoController_ReactToDeaths();
	KOALA_API UFunction* Z_Construct_UFunction_APotatoController_SetRandomLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
// End Cross Module References
	void APotatoController::StaticRegisterNativesAPotatoController()
	{
		UClass* Class = APotatoController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BehaviourOne", &APotatoController::execBehaviourOne },
			{ "BehaviourThree", &APotatoController::execBehaviourThree },
			{ "BehaviourTwo", &APotatoController::execBehaviourTwo },
			{ "CheckPlayerSpotted", &APotatoController::execCheckPlayerSpotted },
			{ "DamageTaken", &APotatoController::execDamageTaken },
			{ "ForgetDamageTaken", &APotatoController::execForgetDamageTaken },
			{ "ForgetPlayer", &APotatoController::execForgetPlayer },
			{ "OnPawnDetect", &APotatoController::execOnPawnDetect },
			{ "PotatoDeath", &APotatoController::execPotatoDeath },
			{ "ReactToDeaths", &APotatoController::execReactToDeaths },
			{ "SetRandomLocation", &APotatoController::execSetRandomLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APotatoController_BehaviourOne_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APotatoController_BehaviourOne_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APotatoController_BehaviourOne_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APotatoController, nullptr, "BehaviourOne", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APotatoController_BehaviourOne_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APotatoController_BehaviourOne_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APotatoController_BehaviourOne()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APotatoController_BehaviourOne_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APotatoController_BehaviourThree_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APotatoController_BehaviourThree_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APotatoController_BehaviourThree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APotatoController, nullptr, "BehaviourThree", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APotatoController_BehaviourThree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APotatoController_BehaviourThree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APotatoController_BehaviourThree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APotatoController_BehaviourThree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APotatoController_BehaviourTwo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APotatoController_BehaviourTwo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APotatoController_BehaviourTwo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APotatoController, nullptr, "BehaviourTwo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APotatoController_BehaviourTwo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APotatoController_BehaviourTwo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APotatoController_BehaviourTwo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APotatoController_BehaviourTwo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APotatoController_CheckPlayerSpotted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APotatoController_CheckPlayerSpotted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APotatoController_CheckPlayerSpotted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APotatoController, nullptr, "CheckPlayerSpotted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APotatoController_CheckPlayerSpotted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APotatoController_CheckPlayerSpotted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APotatoController_CheckPlayerSpotted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APotatoController_CheckPlayerSpotted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APotatoController_DamageTaken_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APotatoController_DamageTaken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APotatoController_DamageTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APotatoController, nullptr, "DamageTaken", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APotatoController_DamageTaken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APotatoController_DamageTaken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APotatoController_DamageTaken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APotatoController_DamageTaken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APotatoController_ForgetDamageTaken_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APotatoController_ForgetDamageTaken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APotatoController_ForgetDamageTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APotatoController, nullptr, "ForgetDamageTaken", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APotatoController_ForgetDamageTaken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APotatoController_ForgetDamageTaken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APotatoController_ForgetDamageTaken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APotatoController_ForgetDamageTaken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APotatoController_ForgetPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APotatoController_ForgetPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APotatoController_ForgetPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APotatoController, nullptr, "ForgetPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APotatoController_ForgetPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APotatoController_ForgetPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APotatoController_ForgetPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APotatoController_ForgetPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APotatoController_OnPawnDetect_Statics
	{
		struct PotatoController_eventOnPawnDetect_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APotatoController_OnPawnDetect_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PotatoController_eventOnPawnDetect_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APotatoController_OnPawnDetect_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PotatoController_eventOnPawnDetect_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APotatoController_OnPawnDetect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APotatoController_OnPawnDetect_Statics::NewProp_Stimulus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APotatoController_OnPawnDetect_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APotatoController_OnPawnDetect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APotatoController_OnPawnDetect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APotatoController, nullptr, "OnPawnDetect", nullptr, nullptr, sizeof(PotatoController_eventOnPawnDetect_Parms), Z_Construct_UFunction_APotatoController_OnPawnDetect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APotatoController_OnPawnDetect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APotatoController_OnPawnDetect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APotatoController_OnPawnDetect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APotatoController_OnPawnDetect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APotatoController_OnPawnDetect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APotatoController_PotatoDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APotatoController_PotatoDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APotatoController_PotatoDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APotatoController, nullptr, "PotatoDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APotatoController_PotatoDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APotatoController_PotatoDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APotatoController_PotatoDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APotatoController_PotatoDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APotatoController_ReactToDeaths_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APotatoController_ReactToDeaths_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APotatoController_ReactToDeaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APotatoController, nullptr, "ReactToDeaths", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APotatoController_ReactToDeaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APotatoController_ReactToDeaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APotatoController_ReactToDeaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APotatoController_ReactToDeaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APotatoController_SetRandomLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APotatoController_SetRandomLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APotatoController_SetRandomLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APotatoController, nullptr, "SetRandomLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APotatoController_SetRandomLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APotatoController_SetRandomLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APotatoController_SetRandomLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APotatoController_SetRandomLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APotatoController_NoRegister()
	{
		return APotatoController::StaticClass();
	}
	struct Z_Construct_UClass_APotatoController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KoalaDamaged_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KoalaDamaged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Koala_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Koala;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomBehaviour_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomBehaviour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomReactionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomReactionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomPatrollingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomPatrollingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReactToDeaths_MetaData[];
#endif
		static void NewProp_bReactToDeaths_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReactToDeaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayerDetected_MetaData[];
#endif
		static void NewProp_bPlayerDetected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerDetected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoseSightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoseSightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APotatoController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Koala,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APotatoController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APotatoController_BehaviourOne, "BehaviourOne" }, // 3156522179
		{ &Z_Construct_UFunction_APotatoController_BehaviourThree, "BehaviourThree" }, // 969105786
		{ &Z_Construct_UFunction_APotatoController_BehaviourTwo, "BehaviourTwo" }, // 2825689731
		{ &Z_Construct_UFunction_APotatoController_CheckPlayerSpotted, "CheckPlayerSpotted" }, // 3640180669
		{ &Z_Construct_UFunction_APotatoController_DamageTaken, "DamageTaken" }, // 3251490332
		{ &Z_Construct_UFunction_APotatoController_ForgetDamageTaken, "ForgetDamageTaken" }, // 2583331626
		{ &Z_Construct_UFunction_APotatoController_ForgetPlayer, "ForgetPlayer" }, // 3852216021
		{ &Z_Construct_UFunction_APotatoController_OnPawnDetect, "OnPawnDetect" }, // 2608597438
		{ &Z_Construct_UFunction_APotatoController_PotatoDeath, "PotatoDeath" }, // 3501563531
		{ &Z_Construct_UFunction_APotatoController_ReactToDeaths, "ReactToDeaths" }, // 1018562664
		{ &Z_Construct_UFunction_APotatoController_SetRandomLocation, "SetRandomLocation" }, // 2932124549
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotatoController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PotatoController.h" },
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotatoController_Statics::NewProp_Actors_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APotatoController_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APotatoController, Actors), METADATA_PARAMS(Z_Construct_UClass_APotatoController_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotatoController_Statics::NewProp_Actors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APotatoController_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotatoController_Statics::NewProp_KoalaDamaged_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APotatoController_Statics::NewProp_KoalaDamaged = { "KoalaDamaged", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APotatoController, KoalaDamaged), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APotatoController_Statics::NewProp_KoalaDamaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotatoController_Statics::NewProp_KoalaDamaged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotatoController_Statics::NewProp_Koala_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APotatoController_Statics::NewProp_Koala = { "Koala", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APotatoController, Koala), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APotatoController_Statics::NewProp_Koala_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotatoController_Statics::NewProp_Koala_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotatoController_Statics::NewProp_RandomBehaviour_MetaData[] = {
		{ "Category", "Behaviour" },
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APotatoController_Statics::NewProp_RandomBehaviour = { "RandomBehaviour", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APotatoController, RandomBehaviour), METADATA_PARAMS(Z_Construct_UClass_APotatoController_Statics::NewProp_RandomBehaviour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotatoController_Statics::NewProp_RandomBehaviour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotatoController_Statics::NewProp_RandomReactionTime_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APotatoController_Statics::NewProp_RandomReactionTime = { "RandomReactionTime", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APotatoController, RandomReactionTime), METADATA_PARAMS(Z_Construct_UClass_APotatoController_Statics::NewProp_RandomReactionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotatoController_Statics::NewProp_RandomReactionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotatoController_Statics::NewProp_RandomPatrollingTime_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APotatoController_Statics::NewProp_RandomPatrollingTime = { "RandomPatrollingTime", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APotatoController, RandomPatrollingTime), METADATA_PARAMS(Z_Construct_UClass_APotatoController_Statics::NewProp_RandomPatrollingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotatoController_Statics::NewProp_RandomPatrollingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotatoController_Statics::NewProp_RandomLocation_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APotatoController_Statics::NewProp_RandomLocation = { "RandomLocation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APotatoController, RandomLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APotatoController_Statics::NewProp_RandomLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotatoController_Statics::NewProp_RandomLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotatoController_Statics::NewProp_bReactToDeaths_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	void Z_Construct_UClass_APotatoController_Statics::NewProp_bReactToDeaths_SetBit(void* Obj)
	{
		((APotatoController*)Obj)->bReactToDeaths = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APotatoController_Statics::NewProp_bReactToDeaths = { "bReactToDeaths", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APotatoController), &Z_Construct_UClass_APotatoController_Statics::NewProp_bReactToDeaths_SetBit, METADATA_PARAMS(Z_Construct_UClass_APotatoController_Statics::NewProp_bReactToDeaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotatoController_Statics::NewProp_bReactToDeaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotatoController_Statics::NewProp_bPlayerDetected_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	void Z_Construct_UClass_APotatoController_Statics::NewProp_bPlayerDetected_SetBit(void* Obj)
	{
		((APotatoController*)Obj)->bPlayerDetected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APotatoController_Statics::NewProp_bPlayerDetected = { "bPlayerDetected", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APotatoController), &Z_Construct_UClass_APotatoController_Statics::NewProp_bPlayerDetected_SetBit, METADATA_PARAMS(Z_Construct_UClass_APotatoController_Statics::NewProp_bPlayerDetected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotatoController_Statics::NewProp_bPlayerDetected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotatoController_Statics::NewProp_FieldOfView_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APotatoController_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APotatoController, FieldOfView), METADATA_PARAMS(Z_Construct_UClass_APotatoController_Statics::NewProp_FieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotatoController_Statics::NewProp_FieldOfView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotatoController_Statics::NewProp_LoseSightRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APotatoController_Statics::NewProp_LoseSightRadius = { "LoseSightRadius", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APotatoController, LoseSightRadius), METADATA_PARAMS(Z_Construct_UClass_APotatoController_Statics::NewProp_LoseSightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotatoController_Statics::NewProp_LoseSightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotatoController_Statics::NewProp_SightAge_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APotatoController_Statics::NewProp_SightAge = { "SightAge", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APotatoController, SightAge), METADATA_PARAMS(Z_Construct_UClass_APotatoController_Statics::NewProp_SightAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotatoController_Statics::NewProp_SightAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotatoController_Statics::NewProp_SightRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APotatoController_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APotatoController, SightRadius), METADATA_PARAMS(Z_Construct_UClass_APotatoController_Statics::NewProp_SightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotatoController_Statics::NewProp_SightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotatoController_Statics::NewProp_SightConfig_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "PotatoController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APotatoController_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APotatoController, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APotatoController_Statics::NewProp_SightConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotatoController_Statics::NewProp_SightConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APotatoController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotatoController_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotatoController_Statics::NewProp_Actors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotatoController_Statics::NewProp_KoalaDamaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotatoController_Statics::NewProp_Koala,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotatoController_Statics::NewProp_RandomBehaviour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotatoController_Statics::NewProp_RandomReactionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotatoController_Statics::NewProp_RandomPatrollingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotatoController_Statics::NewProp_RandomLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotatoController_Statics::NewProp_bReactToDeaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotatoController_Statics::NewProp_bPlayerDetected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotatoController_Statics::NewProp_FieldOfView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotatoController_Statics::NewProp_LoseSightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotatoController_Statics::NewProp_SightAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotatoController_Statics::NewProp_SightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotatoController_Statics::NewProp_SightConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APotatoController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APotatoController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APotatoController_Statics::ClassParams = {
		&APotatoController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APotatoController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APotatoController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APotatoController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APotatoController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APotatoController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APotatoController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APotatoController, 1208253595);
	template<> KOALA_API UClass* StaticClass<APotatoController>()
	{
		return APotatoController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APotatoController(Z_Construct_UClass_APotatoController, &APotatoController::StaticClass, TEXT("/Script/Koala"), TEXT("APotatoController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APotatoController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
