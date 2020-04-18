// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KOALA_Seed_generated_h
#error "Seed.generated.h already included, missing '#pragma once' in Seed.h"
#endif
#define KOALA_Seed_generated_h

#define Koala_Source_Koala_Seed_h_21_SPARSE_DATA
#define Koala_Source_Koala_Seed_h_21_RPC_WRAPPERS
#define Koala_Source_Koala_Seed_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Koala_Source_Koala_Seed_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASeed(); \
	friend struct Z_Construct_UClass_ASeed_Statics; \
public: \
	DECLARE_CLASS(ASeed, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Koala"), NO_API) \
	DECLARE_SERIALIZER(ASeed)


#define Koala_Source_Koala_Seed_h_21_INCLASS \
private: \
	static void StaticRegisterNativesASeed(); \
	friend struct Z_Construct_UClass_ASeed_Statics; \
public: \
	DECLARE_CLASS(ASeed, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Koala"), NO_API) \
	DECLARE_SERIALIZER(ASeed)


#define Koala_Source_Koala_Seed_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASeed(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASeed) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASeed); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASeed); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASeed(ASeed&&); \
	NO_API ASeed(const ASeed&); \
public:


#define Koala_Source_Koala_Seed_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASeed(ASeed&&); \
	NO_API ASeed(const ASeed&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASeed); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASeed); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASeed)


#define Koala_Source_Koala_Seed_h_21_PRIVATE_PROPERTY_OFFSET
#define Koala_Source_Koala_Seed_h_18_PROLOG
#define Koala_Source_Koala_Seed_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Koala_Source_Koala_Seed_h_21_PRIVATE_PROPERTY_OFFSET \
	Koala_Source_Koala_Seed_h_21_SPARSE_DATA \
	Koala_Source_Koala_Seed_h_21_RPC_WRAPPERS \
	Koala_Source_Koala_Seed_h_21_INCLASS \
	Koala_Source_Koala_Seed_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Koala_Source_Koala_Seed_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Koala_Source_Koala_Seed_h_21_PRIVATE_PROPERTY_OFFSET \
	Koala_Source_Koala_Seed_h_21_SPARSE_DATA \
	Koala_Source_Koala_Seed_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Koala_Source_Koala_Seed_h_21_INCLASS_NO_PURE_DECLS \
	Koala_Source_Koala_Seed_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KOALA_API UClass* StaticClass<class ASeed>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Koala_Source_Koala_Seed_h


#define FOREACH_ENUM_SEEDTYPE(op) \
	op(RedSeed) \
	op(BlueSeed) \
	op(GreenSeed) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
