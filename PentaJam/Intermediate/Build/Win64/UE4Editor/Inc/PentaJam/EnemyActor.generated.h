// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef PENTAJAM_EnemyActor_generated_h
#error "EnemyActor.generated.h already included, missing '#pragma once' in EnemyActor.h"
#endif
#define PENTAJAM_EnemyActor_generated_h

#define PentaJam_Source_PentaJam_EnemyActor_h_13_SPARSE_DATA
#define PentaJam_Source_PentaJam_EnemyActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execChasePlayer);


#define PentaJam_Source_PentaJam_EnemyActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execChasePlayer);


#define PentaJam_Source_PentaJam_EnemyActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyActor(); \
	friend struct Z_Construct_UClass_AEnemyActor_Statics; \
public: \
	DECLARE_CLASS(AEnemyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PentaJam"), NO_API) \
	DECLARE_SERIALIZER(AEnemyActor)


#define PentaJam_Source_PentaJam_EnemyActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyActor(); \
	friend struct Z_Construct_UClass_AEnemyActor_Statics; \
public: \
	DECLARE_CLASS(AEnemyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PentaJam"), NO_API) \
	DECLARE_SERIALIZER(AEnemyActor)


#define PentaJam_Source_PentaJam_EnemyActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyActor(AEnemyActor&&); \
	NO_API AEnemyActor(const AEnemyActor&); \
public:


#define PentaJam_Source_PentaJam_EnemyActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyActor(AEnemyActor&&); \
	NO_API AEnemyActor(const AEnemyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyActor)


#define PentaJam_Source_PentaJam_EnemyActor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__playerLocation() { return STRUCT_OFFSET(AEnemyActor, playerLocation); }


#define PentaJam_Source_PentaJam_EnemyActor_h_10_PROLOG
#define PentaJam_Source_PentaJam_EnemyActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PentaJam_Source_PentaJam_EnemyActor_h_13_PRIVATE_PROPERTY_OFFSET \
	PentaJam_Source_PentaJam_EnemyActor_h_13_SPARSE_DATA \
	PentaJam_Source_PentaJam_EnemyActor_h_13_RPC_WRAPPERS \
	PentaJam_Source_PentaJam_EnemyActor_h_13_INCLASS \
	PentaJam_Source_PentaJam_EnemyActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PentaJam_Source_PentaJam_EnemyActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PentaJam_Source_PentaJam_EnemyActor_h_13_PRIVATE_PROPERTY_OFFSET \
	PentaJam_Source_PentaJam_EnemyActor_h_13_SPARSE_DATA \
	PentaJam_Source_PentaJam_EnemyActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PentaJam_Source_PentaJam_EnemyActor_h_13_INCLASS_NO_PURE_DECLS \
	PentaJam_Source_PentaJam_EnemyActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PENTAJAM_API UClass* StaticClass<class AEnemyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PentaJam_Source_PentaJam_EnemyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
