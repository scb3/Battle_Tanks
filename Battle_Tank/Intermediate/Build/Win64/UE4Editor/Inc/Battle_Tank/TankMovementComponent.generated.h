// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTankTrack;
#ifdef BATTLE_TANK_TankMovementComponent_generated_h
#error "TankMovementComponent.generated.h already included, missing '#pragma once' in TankMovementComponent.h"
#endif
#define BATTLE_TANK_TankMovementComponent_generated_h

#define Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_20_SPARSE_DATA
#define Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIntendTurnRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IntendTurnRight(Z_Param_Throw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialise) \
	{ \
		P_GET_OBJECT(UTankTrack,Z_Param_LeftTrackToSet); \
		P_GET_OBJECT(UTankTrack,Z_Param_RightTrackToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialise(Z_Param_LeftTrackToSet,Z_Param_RightTrackToSet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntendMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IntendMoveForward(Z_Param_Throw); \
		P_NATIVE_END; \
	}


#define Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIntendTurnRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IntendTurnRight(Z_Param_Throw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialise) \
	{ \
		P_GET_OBJECT(UTankTrack,Z_Param_LeftTrackToSet); \
		P_GET_OBJECT(UTankTrack,Z_Param_RightTrackToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialise(Z_Param_LeftTrackToSet,Z_Param_RightTrackToSet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntendMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IntendMoveForward(Z_Param_Throw); \
		P_NATIVE_END; \
	}


#define Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankMovementComponent(); \
	friend struct Z_Construct_UClass_UTankMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UTankMovementComponent, UNavMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battle_Tank"), NO_API) \
	DECLARE_SERIALIZER(UTankMovementComponent)


#define Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUTankMovementComponent(); \
	friend struct Z_Construct_UClass_UTankMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UTankMovementComponent, UNavMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battle_Tank"), NO_API) \
	DECLARE_SERIALIZER(UTankMovementComponent)


#define Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankMovementComponent(UTankMovementComponent&&); \
	NO_API UTankMovementComponent(const UTankMovementComponent&); \
public:


#define Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankMovementComponent(UTankMovementComponent&&); \
	NO_API UTankMovementComponent(const UTankMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankMovementComponent)


#define Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_20_PRIVATE_PROPERTY_OFFSET
#define Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_17_PROLOG
#define Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_20_SPARSE_DATA \
	Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_20_RPC_WRAPPERS \
	Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_20_INCLASS \
	Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_20_SPARSE_DATA \
	Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_20_INCLASS_NO_PURE_DECLS \
	Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLE_TANK_API UClass* StaticClass<class UTankMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Battle_Tank_Source_Battle_Tank_Public_TankMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
