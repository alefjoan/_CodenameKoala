// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KOALA_KoalaCharacter_generated_h
#error "KoalaCharacter.generated.h already included, missing '#pragma once' in KoalaCharacter.h"
#endif
#define KOALA_KoalaCharacter_generated_h

#define Koala_Source_Koala_KoalaCharacter_h_14_SPARSE_DATA
#define Koala_Source_Koala_KoalaCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPreviousWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreviousWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipGreenWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipGreenWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipBlueWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipBlueWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipRedWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipRedWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Sprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LookRight(Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookUp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LookUp(Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnWeapons) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnWeapons(); \
		P_NATIVE_END; \
	}


#define Koala_Source_Koala_KoalaCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPreviousWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreviousWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipGreenWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipGreenWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipBlueWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipBlueWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipRedWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipRedWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Sprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LookRight(Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookUp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LookUp(Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnWeapons) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnWeapons(); \
		P_NATIVE_END; \
	}


#define Koala_Source_Koala_KoalaCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKoalaCharacter(); \
	friend struct Z_Construct_UClass_AKoalaCharacter_Statics; \
public: \
	DECLARE_CLASS(AKoalaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Koala"), NO_API) \
	DECLARE_SERIALIZER(AKoalaCharacter)


#define Koala_Source_Koala_KoalaCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAKoalaCharacter(); \
	friend struct Z_Construct_UClass_AKoalaCharacter_Statics; \
public: \
	DECLARE_CLASS(AKoalaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Koala"), NO_API) \
	DECLARE_SERIALIZER(AKoalaCharacter)


#define Koala_Source_Koala_KoalaCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKoalaCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKoalaCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKoalaCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKoalaCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKoalaCharacter(AKoalaCharacter&&); \
	NO_API AKoalaCharacter(const AKoalaCharacter&); \
public:


#define Koala_Source_Koala_KoalaCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKoalaCharacter(AKoalaCharacter&&); \
	NO_API AKoalaCharacter(const AKoalaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKoalaCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKoalaCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKoalaCharacter)


#define Koala_Source_Koala_KoalaCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AKoalaCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AKoalaCharacter, Camera); }


#define Koala_Source_Koala_KoalaCharacter_h_11_PROLOG
#define Koala_Source_Koala_KoalaCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Koala_Source_Koala_KoalaCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Koala_Source_Koala_KoalaCharacter_h_14_SPARSE_DATA \
	Koala_Source_Koala_KoalaCharacter_h_14_RPC_WRAPPERS \
	Koala_Source_Koala_KoalaCharacter_h_14_INCLASS \
	Koala_Source_Koala_KoalaCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Koala_Source_Koala_KoalaCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Koala_Source_Koala_KoalaCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Koala_Source_Koala_KoalaCharacter_h_14_SPARSE_DATA \
	Koala_Source_Koala_KoalaCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Koala_Source_Koala_KoalaCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Koala_Source_Koala_KoalaCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KOALA_API UClass* StaticClass<class AKoalaCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Koala_Source_Koala_KoalaCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
