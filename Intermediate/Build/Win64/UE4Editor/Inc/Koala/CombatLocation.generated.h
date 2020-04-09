// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KOALA_CombatLocation_generated_h
#error "CombatLocation.generated.h already included, missing '#pragma once' in CombatLocation.h"
#endif
#define KOALA_CombatLocation_generated_h

#define Koala_Source_Koala_CombatLocation_h_14_SPARSE_DATA
#define Koala_Source_Koala_CombatLocation_h_14_RPC_WRAPPERS
#define Koala_Source_Koala_CombatLocation_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Koala_Source_Koala_CombatLocation_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombatLocation(); \
	friend struct Z_Construct_UClass_ACombatLocation_Statics; \
public: \
	DECLARE_CLASS(ACombatLocation, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Koala"), NO_API) \
	DECLARE_SERIALIZER(ACombatLocation)


#define Koala_Source_Koala_CombatLocation_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACombatLocation(); \
	friend struct Z_Construct_UClass_ACombatLocation_Statics; \
public: \
	DECLARE_CLASS(ACombatLocation, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Koala"), NO_API) \
	DECLARE_SERIALIZER(ACombatLocation)


#define Koala_Source_Koala_CombatLocation_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACombatLocation(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACombatLocation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatLocation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatLocation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACombatLocation(ACombatLocation&&); \
	NO_API ACombatLocation(const ACombatLocation&); \
public:


#define Koala_Source_Koala_CombatLocation_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACombatLocation(ACombatLocation&&); \
	NO_API ACombatLocation(const ACombatLocation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatLocation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatLocation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACombatLocation)


#define Koala_Source_Koala_CombatLocation_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TriggerBox() { return STRUCT_OFFSET(ACombatLocation, TriggerBox); }


#define Koala_Source_Koala_CombatLocation_h_11_PROLOG
#define Koala_Source_Koala_CombatLocation_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Koala_Source_Koala_CombatLocation_h_14_PRIVATE_PROPERTY_OFFSET \
	Koala_Source_Koala_CombatLocation_h_14_SPARSE_DATA \
	Koala_Source_Koala_CombatLocation_h_14_RPC_WRAPPERS \
	Koala_Source_Koala_CombatLocation_h_14_INCLASS \
	Koala_Source_Koala_CombatLocation_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Koala_Source_Koala_CombatLocation_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Koala_Source_Koala_CombatLocation_h_14_PRIVATE_PROPERTY_OFFSET \
	Koala_Source_Koala_CombatLocation_h_14_SPARSE_DATA \
	Koala_Source_Koala_CombatLocation_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Koala_Source_Koala_CombatLocation_h_14_INCLASS_NO_PURE_DECLS \
	Koala_Source_Koala_CombatLocation_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KOALA_API UClass* StaticClass<class ACombatLocation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Koala_Source_Koala_CombatLocation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
