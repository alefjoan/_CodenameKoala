// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef KOALA_PotatoController_generated_h
#error "PotatoController.generated.h already included, missing '#pragma once' in PotatoController.h"
#endif
#define KOALA_PotatoController_generated_h

#define Koala_Source_Koala_PotatoController_h_26_SPARSE_DATA
#define Koala_Source_Koala_PotatoController_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execForgetDamageTaken) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForgetDamageTaken(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckPlayerSpotted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckPlayerSpotted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDamageTaken) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DamageTaken(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReactToDeaths) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReactToDeaths(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBehaviourThree) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BehaviourThree(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBehaviourTwo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BehaviourTwo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBehaviourOne) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BehaviourOne(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRandomLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRandomLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForgetPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForgetPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPawnDetect) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnDetect(Z_Param_Actor,Z_Param_Stimulus); \
		P_NATIVE_END; \
	}


#define Koala_Source_Koala_PotatoController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execForgetDamageTaken) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForgetDamageTaken(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckPlayerSpotted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckPlayerSpotted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDamageTaken) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DamageTaken(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReactToDeaths) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReactToDeaths(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBehaviourThree) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BehaviourThree(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBehaviourTwo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BehaviourTwo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBehaviourOne) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BehaviourOne(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRandomLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRandomLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForgetPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForgetPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPawnDetect) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnDetect(Z_Param_Actor,Z_Param_Stimulus); \
		P_NATIVE_END; \
	}


#define Koala_Source_Koala_PotatoController_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPotatoController(); \
	friend struct Z_Construct_UClass_APotatoController_Statics; \
public: \
	DECLARE_CLASS(APotatoController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Koala"), NO_API) \
	DECLARE_SERIALIZER(APotatoController)


#define Koala_Source_Koala_PotatoController_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAPotatoController(); \
	friend struct Z_Construct_UClass_APotatoController_Statics; \
public: \
	DECLARE_CLASS(APotatoController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Koala"), NO_API) \
	DECLARE_SERIALIZER(APotatoController)


#define Koala_Source_Koala_PotatoController_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APotatoController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APotatoController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APotatoController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APotatoController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APotatoController(APotatoController&&); \
	NO_API APotatoController(const APotatoController&); \
public:


#define Koala_Source_Koala_PotatoController_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APotatoController(APotatoController&&); \
	NO_API APotatoController(const APotatoController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APotatoController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APotatoController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APotatoController)


#define Koala_Source_Koala_PotatoController_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SightConfig() { return STRUCT_OFFSET(APotatoController, SightConfig); }


#define Koala_Source_Koala_PotatoController_h_23_PROLOG
#define Koala_Source_Koala_PotatoController_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Koala_Source_Koala_PotatoController_h_26_PRIVATE_PROPERTY_OFFSET \
	Koala_Source_Koala_PotatoController_h_26_SPARSE_DATA \
	Koala_Source_Koala_PotatoController_h_26_RPC_WRAPPERS \
	Koala_Source_Koala_PotatoController_h_26_INCLASS \
	Koala_Source_Koala_PotatoController_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Koala_Source_Koala_PotatoController_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Koala_Source_Koala_PotatoController_h_26_PRIVATE_PROPERTY_OFFSET \
	Koala_Source_Koala_PotatoController_h_26_SPARSE_DATA \
	Koala_Source_Koala_PotatoController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Koala_Source_Koala_PotatoController_h_26_INCLASS_NO_PURE_DECLS \
	Koala_Source_Koala_PotatoController_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KOALA_API UClass* StaticClass<class APotatoController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Koala_Source_Koala_PotatoController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
