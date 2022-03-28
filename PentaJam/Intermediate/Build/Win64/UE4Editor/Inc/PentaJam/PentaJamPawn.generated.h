// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PENTAJAM_PentaJamPawn_generated_h
#error "PentaJamPawn.generated.h already included, missing '#pragma once' in PentaJamPawn.h"
#endif
#define PENTAJAM_PentaJamPawn_generated_h

#define PentaJam_Source_PentaJam_PentaJamPawn_h_14_SPARSE_DATA
#define PentaJam_Source_PentaJam_PentaJamPawn_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRespawnPlayer); \
	DECLARE_FUNCTION(execRefillAmmo);


#define PentaJam_Source_PentaJam_PentaJamPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRespawnPlayer); \
	DECLARE_FUNCTION(execRefillAmmo);


#define PentaJam_Source_PentaJam_PentaJamPawn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPentaJamPawn(); \
	friend struct Z_Construct_UClass_APentaJamPawn_Statics; \
public: \
	DECLARE_CLASS(APentaJamPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PentaJam"), NO_API) \
	DECLARE_SERIALIZER(APentaJamPawn)


#define PentaJam_Source_PentaJam_PentaJamPawn_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPentaJamPawn(); \
	friend struct Z_Construct_UClass_APentaJamPawn_Statics; \
public: \
	DECLARE_CLASS(APentaJamPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PentaJam"), NO_API) \
	DECLARE_SERIALIZER(APentaJamPawn)


#define PentaJam_Source_PentaJam_PentaJamPawn_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APentaJamPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APentaJamPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APentaJamPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APentaJamPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APentaJamPawn(APentaJamPawn&&); \
	NO_API APentaJamPawn(const APentaJamPawn&); \
public:


#define PentaJam_Source_PentaJam_PentaJamPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APentaJamPawn(APentaJamPawn&&); \
	NO_API APentaJamPawn(const APentaJamPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APentaJamPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APentaJamPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APentaJamPawn)


#define PentaJam_Source_PentaJam_PentaJamPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(APentaJamPawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__SpriteComponent() { return STRUCT_OFFSET(APentaJamPawn, SpriteComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(APentaJamPawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APentaJamPawn, CameraBoom); }


#define PentaJam_Source_PentaJam_PentaJamPawn_h_11_PROLOG
#define PentaJam_Source_PentaJam_PentaJamPawn_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PentaJam_Source_PentaJam_PentaJamPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	PentaJam_Source_PentaJam_PentaJamPawn_h_14_SPARSE_DATA \
	PentaJam_Source_PentaJam_PentaJamPawn_h_14_RPC_WRAPPERS \
	PentaJam_Source_PentaJam_PentaJamPawn_h_14_INCLASS \
	PentaJam_Source_PentaJam_PentaJamPawn_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PentaJam_Source_PentaJam_PentaJamPawn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PentaJam_Source_PentaJam_PentaJamPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	PentaJam_Source_PentaJam_PentaJamPawn_h_14_SPARSE_DATA \
	PentaJam_Source_PentaJam_PentaJamPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PentaJam_Source_PentaJam_PentaJamPawn_h_14_INCLASS_NO_PURE_DECLS \
	PentaJam_Source_PentaJam_PentaJamPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PENTAJAM_API UClass* StaticClass<class APentaJamPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PentaJam_Source_PentaJam_PentaJamPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
