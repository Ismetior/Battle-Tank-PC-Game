// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTankTurret;
class UTankBarrel;
#ifdef BATTLETANK_Tank_generated_h
#error "Tank.generated.h already included, missing '#pragma once' in Tank.h"
#endif
#define BATTLETANK_Tank_generated_h

#define BattleTank_Source_BattleTank_Public_Tank_h_17_SPARSE_DATA
#define BattleTank_Source_BattleTank_Public_Tank_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTurretReference) \
	{ \
		P_GET_OBJECT(UTankTurret,Z_Param_TurretToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTurretReference(Z_Param_TurretToSet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBarrelReference) \
	{ \
		P_GET_OBJECT(UTankBarrel,Z_Param_BarrelToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBarrelReference(Z_Param_BarrelToSet); \
		P_NATIVE_END; \
	}


#define BattleTank_Source_BattleTank_Public_Tank_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTurretReference) \
	{ \
		P_GET_OBJECT(UTankTurret,Z_Param_TurretToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTurretReference(Z_Param_TurretToSet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBarrelReference) \
	{ \
		P_GET_OBJECT(UTankBarrel,Z_Param_BarrelToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBarrelReference(Z_Param_BarrelToSet); \
		P_NATIVE_END; \
	}


#define BattleTank_Source_BattleTank_Public_Tank_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATank(); \
	friend struct Z_Construct_UClass_ATank_Statics; \
public: \
	DECLARE_CLASS(ATank, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(ATank)


#define BattleTank_Source_BattleTank_Public_Tank_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATank(); \
	friend struct Z_Construct_UClass_ATank_Statics; \
public: \
	DECLARE_CLASS(ATank, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(ATank)


#define BattleTank_Source_BattleTank_Public_Tank_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATank(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATank) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public:


#define BattleTank_Source_BattleTank_Public_Tank_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATank)


#define BattleTank_Source_BattleTank_Public_Tank_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LaunchSpeed() { return STRUCT_OFFSET(ATank, LaunchSpeed); } \
	FORCEINLINE static uint32 __PPO__ProjectileBlueprint() { return STRUCT_OFFSET(ATank, ProjectileBlueprint); } \
	FORCEINLINE static uint32 __PPO__ReloadTimeInSeconds() { return STRUCT_OFFSET(ATank, ReloadTimeInSeconds); }


#define BattleTank_Source_BattleTank_Public_Tank_h_14_PROLOG
#define BattleTank_Source_BattleTank_Public_Tank_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_Tank_h_17_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_Tank_h_17_SPARSE_DATA \
	BattleTank_Source_BattleTank_Public_Tank_h_17_RPC_WRAPPERS \
	BattleTank_Source_BattleTank_Public_Tank_h_17_INCLASS \
	BattleTank_Source_BattleTank_Public_Tank_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleTank_Source_BattleTank_Public_Tank_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_Tank_h_17_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_Tank_h_17_SPARSE_DATA \
	BattleTank_Source_BattleTank_Public_Tank_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_Tank_h_17_INCLASS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_Tank_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLETANK_API UClass* StaticClass<class ATank>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleTank_Source_BattleTank_Public_Tank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
