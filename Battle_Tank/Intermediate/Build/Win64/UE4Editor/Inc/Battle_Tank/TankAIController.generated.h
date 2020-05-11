// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLE_TANK_TankAIController_generated_h
#error "TankAIController.generated.h already included, missing '#pragma once' in TankAIController.h"
#endif
#define BATTLE_TANK_TankAIController_generated_h

#define Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_16_SPARSE_DATA
#define Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_16_RPC_WRAPPERS
#define Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankAIController(); \
	friend struct Z_Construct_UClass_ATankAIController_Statics; \
public: \
	DECLARE_CLASS(ATankAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battle_Tank"), NO_API) \
	DECLARE_SERIALIZER(ATankAIController)


#define Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATankAIController(); \
	friend struct Z_Construct_UClass_ATankAIController_Statics; \
public: \
	DECLARE_CLASS(ATankAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battle_Tank"), NO_API) \
	DECLARE_SERIALIZER(ATankAIController)


#define Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankAIController(ATankAIController&&); \
	NO_API ATankAIController(const ATankAIController&); \
public:


#define Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankAIController(ATankAIController&&); \
	NO_API ATankAIController(const ATankAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankAIController)


#define Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_16_PRIVATE_PROPERTY_OFFSET
#define Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_13_PROLOG
#define Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_16_PRIVATE_PROPERTY_OFFSET \
	Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_16_SPARSE_DATA \
	Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_16_RPC_WRAPPERS \
	Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_16_INCLASS \
	Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_16_PRIVATE_PROPERTY_OFFSET \
	Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_16_SPARSE_DATA \
	Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_16_INCLASS_NO_PURE_DECLS \
	Battle_Tank_Source_Battle_Tank_Public_TankAIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLE_TANK_API UClass* StaticClass<class ATankAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Battle_Tank_Source_Battle_Tank_Public_TankAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
