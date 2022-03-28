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
struct FVector;
struct FHitResult;
#ifdef PENTAJAM_PentaJamProjectile_generated_h
#error "PentaJamProjectile.generated.h already included, missing '#pragma once' in PentaJamProjectile.h"
#endif
#define PENTAJAM_PentaJamProjectile_generated_h

#define PentaJam_Source_PentaJam_PentaJamProjectile_h_15_SPARSE_DATA
#define PentaJam_Source_PentaJam_PentaJamProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PentaJam_Source_PentaJam_PentaJamProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PentaJam_Source_PentaJam_PentaJamProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPentaJamProjectile(); \
	friend struct Z_Construct_UClass_APentaJamProjectile_Statics; \
public: \
	DECLARE_CLASS(APentaJamProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PentaJam"), NO_API) \
	DECLARE_SERIALIZER(APentaJamProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PentaJam_Source_PentaJam_PentaJamProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPentaJamProjectile(); \
	friend struct Z_Construct_UClass_APentaJamProjectile_Statics; \
public: \
	DECLARE_CLASS(APentaJamProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PentaJam"), NO_API) \
	DECLARE_SERIALIZER(APentaJamProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PentaJam_Source_PentaJam_PentaJamProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APentaJamProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APentaJamProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APentaJamProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APentaJamProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APentaJamProjectile(APentaJamProjectile&&); \
	NO_API APentaJamProjectile(const APentaJamProjectile&); \
public:


#define PentaJam_Source_PentaJam_PentaJamProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APentaJamProjectile(APentaJamProjectile&&); \
	NO_API APentaJamProjectile(const APentaJamProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APentaJamProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APentaJamProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APentaJamProjectile)


#define PentaJam_Source_PentaJam_PentaJamProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(APentaJamProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APentaJamProjectile, ProjectileMovement); }


#define PentaJam_Source_PentaJam_PentaJamProjectile_h_12_PROLOG
#define PentaJam_Source_PentaJam_PentaJamProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PentaJam_Source_PentaJam_PentaJamProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PentaJam_Source_PentaJam_PentaJamProjectile_h_15_SPARSE_DATA \
	PentaJam_Source_PentaJam_PentaJamProjectile_h_15_RPC_WRAPPERS \
	PentaJam_Source_PentaJam_PentaJamProjectile_h_15_INCLASS \
	PentaJam_Source_PentaJam_PentaJamProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PentaJam_Source_PentaJam_PentaJamProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PentaJam_Source_PentaJam_PentaJamProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PentaJam_Source_PentaJam_PentaJamProjectile_h_15_SPARSE_DATA \
	PentaJam_Source_PentaJam_PentaJamProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PentaJam_Source_PentaJam_PentaJamProjectile_h_15_INCLASS_NO_PURE_DECLS \
	PentaJam_Source_PentaJam_PentaJamProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PENTAJAM_API UClass* StaticClass<class APentaJamProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PentaJam_Source_PentaJam_PentaJamProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
