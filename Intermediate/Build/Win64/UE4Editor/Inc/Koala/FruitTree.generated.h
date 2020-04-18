// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef KOALA_FruitTree_generated_h
#error "FruitTree.generated.h already included, missing '#pragma once' in FruitTree.h"
#endif
#define KOALA_FruitTree_generated_h

#define Koala_Source_Koala_FruitTree_h_20_SPARSE_DATA
#define Koala_Source_Koala_FruitTree_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Koala_Source_Koala_FruitTree_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Koala_Source_Koala_FruitTree_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFruitTree(); \
	friend struct Z_Construct_UClass_AFruitTree_Statics; \
public: \
	DECLARE_CLASS(AFruitTree, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Koala"), NO_API) \
	DECLARE_SERIALIZER(AFruitTree)


#define Koala_Source_Koala_FruitTree_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFruitTree(); \
	friend struct Z_Construct_UClass_AFruitTree_Statics; \
public: \
	DECLARE_CLASS(AFruitTree, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Koala"), NO_API) \
	DECLARE_SERIALIZER(AFruitTree)


#define Koala_Source_Koala_FruitTree_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFruitTree(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFruitTree) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFruitTree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFruitTree); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFruitTree(AFruitTree&&); \
	NO_API AFruitTree(const AFruitTree&); \
public:


#define Koala_Source_Koala_FruitTree_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFruitTree(AFruitTree&&); \
	NO_API AFruitTree(const AFruitTree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFruitTree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFruitTree); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFruitTree)


#define Koala_Source_Koala_FruitTree_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFruitTree, CollisionComp); }


#define Koala_Source_Koala_FruitTree_h_17_PROLOG
#define Koala_Source_Koala_FruitTree_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Koala_Source_Koala_FruitTree_h_20_PRIVATE_PROPERTY_OFFSET \
	Koala_Source_Koala_FruitTree_h_20_SPARSE_DATA \
	Koala_Source_Koala_FruitTree_h_20_RPC_WRAPPERS \
	Koala_Source_Koala_FruitTree_h_20_INCLASS \
	Koala_Source_Koala_FruitTree_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Koala_Source_Koala_FruitTree_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Koala_Source_Koala_FruitTree_h_20_PRIVATE_PROPERTY_OFFSET \
	Koala_Source_Koala_FruitTree_h_20_SPARSE_DATA \
	Koala_Source_Koala_FruitTree_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Koala_Source_Koala_FruitTree_h_20_INCLASS_NO_PURE_DECLS \
	Koala_Source_Koala_FruitTree_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KOALA_API UClass* StaticClass<class AFruitTree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Koala_Source_Koala_FruitTree_h


#define FOREACH_ENUM_TREETYPE(op) \
	op(RedFruitTree) \
	op(BlueFruitTree) \
	op(GreenFruitTree) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
