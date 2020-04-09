// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KOALA_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define KOALA_Weapon_generated_h

#define Koala_Source_Koala_Weapon_h_20_SPARSE_DATA
#define Koala_Source_Koala_Weapon_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAutomaticRedFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutomaticRedFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRedWeaponFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RedWeaponFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWeaponFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WeaponFire(); \
		P_NATIVE_END; \
	}


#define Koala_Source_Koala_Weapon_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAutomaticRedFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutomaticRedFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRedWeaponFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RedWeaponFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWeaponFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WeaponFire(); \
		P_NATIVE_END; \
	}


#define Koala_Source_Koala_Weapon_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Koala"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define Koala_Source_Koala_Weapon_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Koala"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define Koala_Source_Koala_Weapon_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define Koala_Source_Koala_Weapon_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define Koala_Source_Koala_Weapon_h_20_PRIVATE_PROPERTY_OFFSET
#define Koala_Source_Koala_Weapon_h_17_PROLOG
#define Koala_Source_Koala_Weapon_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Koala_Source_Koala_Weapon_h_20_PRIVATE_PROPERTY_OFFSET \
	Koala_Source_Koala_Weapon_h_20_SPARSE_DATA \
	Koala_Source_Koala_Weapon_h_20_RPC_WRAPPERS \
	Koala_Source_Koala_Weapon_h_20_INCLASS \
	Koala_Source_Koala_Weapon_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Koala_Source_Koala_Weapon_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Koala_Source_Koala_Weapon_h_20_PRIVATE_PROPERTY_OFFSET \
	Koala_Source_Koala_Weapon_h_20_SPARSE_DATA \
	Koala_Source_Koala_Weapon_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Koala_Source_Koala_Weapon_h_20_INCLASS_NO_PURE_DECLS \
	Koala_Source_Koala_Weapon_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KOALA_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Koala_Source_Koala_Weapon_h


#define FOREACH_ENUM_WEAPONTYPE(op) \
	op(RedWeapon) \
	op(BlueWeapon) \
	op(GreenWeapon) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
