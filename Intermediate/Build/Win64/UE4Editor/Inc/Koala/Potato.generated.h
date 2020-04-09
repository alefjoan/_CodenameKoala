// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KOALA_Potato_generated_h
#error "Potato.generated.h already included, missing '#pragma once' in Potato.h"
#endif
#define KOALA_Potato_generated_h

#define Koala_Source_Koala_Potato_h_12_SPARSE_DATA
#define Koala_Source_Koala_Potato_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDamageReception) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_DamageTaken); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DamageReception(Z_Param_DamageTaken); \
		P_NATIVE_END; \
	}


#define Koala_Source_Koala_Potato_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDamageReception) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_DamageTaken); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DamageReception(Z_Param_DamageTaken); \
		P_NATIVE_END; \
	}


#define Koala_Source_Koala_Potato_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPotato(); \
	friend struct Z_Construct_UClass_APotato_Statics; \
public: \
	DECLARE_CLASS(APotato, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Koala"), NO_API) \
	DECLARE_SERIALIZER(APotato)


#define Koala_Source_Koala_Potato_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPotato(); \
	friend struct Z_Construct_UClass_APotato_Statics; \
public: \
	DECLARE_CLASS(APotato, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Koala"), NO_API) \
	DECLARE_SERIALIZER(APotato)


#define Koala_Source_Koala_Potato_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APotato(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APotato) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APotato); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APotato); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APotato(APotato&&); \
	NO_API APotato(const APotato&); \
public:


#define Koala_Source_Koala_Potato_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APotato(APotato&&); \
	NO_API APotato(const APotato&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APotato); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APotato); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APotato)


#define Koala_Source_Koala_Potato_h_12_PRIVATE_PROPERTY_OFFSET
#define Koala_Source_Koala_Potato_h_9_PROLOG
#define Koala_Source_Koala_Potato_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Koala_Source_Koala_Potato_h_12_PRIVATE_PROPERTY_OFFSET \
	Koala_Source_Koala_Potato_h_12_SPARSE_DATA \
	Koala_Source_Koala_Potato_h_12_RPC_WRAPPERS \
	Koala_Source_Koala_Potato_h_12_INCLASS \
	Koala_Source_Koala_Potato_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Koala_Source_Koala_Potato_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Koala_Source_Koala_Potato_h_12_PRIVATE_PROPERTY_OFFSET \
	Koala_Source_Koala_Potato_h_12_SPARSE_DATA \
	Koala_Source_Koala_Potato_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Koala_Source_Koala_Potato_h_12_INCLASS_NO_PURE_DECLS \
	Koala_Source_Koala_Potato_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KOALA_API UClass* StaticClass<class APotato>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Koala_Source_Koala_Potato_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
