// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLETANK_TankPlayerController_generated_h
#error "TankPlayerController.generated.h already included, missing '#pragma once' in TankPlayerController.h"
#endif
#define BATTLETANK_TankPlayerController_generated_h

#define BattleTank_Source_BattleTank_TankPlayerController_h_15_SPARSE_DATA
#define BattleTank_Source_BattleTank_TankPlayerController_h_15_RPC_WRAPPERS
#define BattleTank_Source_BattleTank_TankPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define BattleTank_Source_BattleTank_TankPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankPlayerController(); \
	friend struct Z_Construct_UClass_ATankPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATankPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(ATankPlayerController)


#define BattleTank_Source_BattleTank_TankPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATankPlayerController(); \
	friend struct Z_Construct_UClass_ATankPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATankPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(ATankPlayerController)


#define BattleTank_Source_BattleTank_TankPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankPlayerController(ATankPlayerController&&); \
	NO_API ATankPlayerController(const ATankPlayerController&); \
public:


#define BattleTank_Source_BattleTank_TankPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankPlayerController(ATankPlayerController&&); \
	NO_API ATankPlayerController(const ATankPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankPlayerController)


#define BattleTank_Source_BattleTank_TankPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CrossHairXLocation() { return STRUCT_OFFSET(ATankPlayerController, CrossHairXLocation); } \
	FORCEINLINE static uint32 __PPO__CrossHairYLocation() { return STRUCT_OFFSET(ATankPlayerController, CrossHairYLocation); } \
	FORCEINLINE static uint32 __PPO__LineTraceRange() { return STRUCT_OFFSET(ATankPlayerController, LineTraceRange); }


#define BattleTank_Source_BattleTank_TankPlayerController_h_12_PROLOG
#define BattleTank_Source_BattleTank_TankPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_TankPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_TankPlayerController_h_15_SPARSE_DATA \
	BattleTank_Source_BattleTank_TankPlayerController_h_15_RPC_WRAPPERS \
	BattleTank_Source_BattleTank_TankPlayerController_h_15_INCLASS \
	BattleTank_Source_BattleTank_TankPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleTank_Source_BattleTank_TankPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_TankPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_TankPlayerController_h_15_SPARSE_DATA \
	BattleTank_Source_BattleTank_TankPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_TankPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_TankPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLETANK_API UClass* StaticClass<class ATankPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleTank_Source_BattleTank_TankPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
