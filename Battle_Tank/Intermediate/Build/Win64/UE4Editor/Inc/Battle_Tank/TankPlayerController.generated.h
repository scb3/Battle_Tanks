// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATank;
class UTankAimingComponent;
#ifdef BATTLE_TANK_TankPlayerController_generated_h
#error "TankPlayerController.generated.h already included, missing '#pragma once' in TankPlayerController.h"
#endif
#define BATTLE_TANK_TankPlayerController_generated_h

#define Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_SPARSE_DATA
#define Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetControlledTank) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATank**)Z_Param__Result=P_THIS->GetControlledTank(); \
		P_NATIVE_END; \
	}


#define Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetControlledTank) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATank**)Z_Param__Result=P_THIS->GetControlledTank(); \
		P_NATIVE_END; \
	}


#define Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_EVENT_PARMS \
	struct TankPlayerController_eventFoundAimingComponent_Parms \
	{ \
		UTankAimingComponent* AimCompRef; \
	};


#define Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_CALLBACK_WRAPPERS
#define Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankPlayerController(); \
	friend struct Z_Construct_UClass_ATankPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATankPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battle_Tank"), NO_API) \
	DECLARE_SERIALIZER(ATankPlayerController)


#define Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesATankPlayerController(); \
	friend struct Z_Construct_UClass_ATankPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATankPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battle_Tank"), NO_API) \
	DECLARE_SERIALIZER(ATankPlayerController)


#define Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_STANDARD_CONSTRUCTORS \
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


#define Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_ENHANCED_CONSTRUCTORS \
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


#define Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CrosshairXLocation() { return STRUCT_OFFSET(ATankPlayerController, CrosshairXLocation); } \
	FORCEINLINE static uint32 __PPO__CrosshairYLocation() { return STRUCT_OFFSET(ATankPlayerController, CrosshairYLocation); } \
	FORCEINLINE static uint32 __PPO__LineTraceRange() { return STRUCT_OFFSET(ATankPlayerController, LineTraceRange); }


#define Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_15_PROLOG \
	Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_EVENT_PARMS


#define Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_SPARSE_DATA \
	Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_RPC_WRAPPERS \
	Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_CALLBACK_WRAPPERS \
	Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_INCLASS \
	Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_SPARSE_DATA \
	Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_CALLBACK_WRAPPERS \
	Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLE_TANK_API UClass* StaticClass<class ATankPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Battle_Tank_Source_Battle_Tank_Public_TankPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
