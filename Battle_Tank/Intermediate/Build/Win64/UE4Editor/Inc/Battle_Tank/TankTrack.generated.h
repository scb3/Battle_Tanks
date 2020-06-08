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
struct FVector;
struct FHitResult;
#ifdef BATTLE_TANK_TankTrack_generated_h
#error "TankTrack.generated.h already included, missing '#pragma once' in TankTrack.h"
#endif
#define BATTLE_TANK_TankTrack_generated_h

#define Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_15_SPARSE_DATA
#define Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetThrottle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throttle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetThrottle(Z_Param_Throttle); \
		P_NATIVE_END; \
	}


#define Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetThrottle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throttle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetThrottle(Z_Param_Throttle); \
		P_NATIVE_END; \
	}


#define Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankTrack(); \
	friend struct Z_Construct_UClass_UTankTrack_Statics; \
public: \
	DECLARE_CLASS(UTankTrack, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battle_Tank"), NO_API) \
	DECLARE_SERIALIZER(UTankTrack)


#define Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTankTrack(); \
	friend struct Z_Construct_UClass_UTankTrack_Statics; \
public: \
	DECLARE_CLASS(UTankTrack, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battle_Tank"), NO_API) \
	DECLARE_SERIALIZER(UTankTrack)


#define Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankTrack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankTrack(UTankTrack&&); \
	NO_API UTankTrack(const UTankTrack&); \
public:


#define Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankTrack(UTankTrack&&); \
	NO_API UTankTrack(const UTankTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankTrack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTankTrack)


#define Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_15_PRIVATE_PROPERTY_OFFSET
#define Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_12_PROLOG
#define Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_15_PRIVATE_PROPERTY_OFFSET \
	Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_15_SPARSE_DATA \
	Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_15_RPC_WRAPPERS \
	Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_15_INCLASS \
	Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_15_PRIVATE_PROPERTY_OFFSET \
	Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_15_SPARSE_DATA \
	Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_15_INCLASS_NO_PURE_DECLS \
	Battle_Tank_Source_Battle_Tank_Public_TankTrack_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLE_TANK_API UClass* StaticClass<class UTankTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Battle_Tank_Source_Battle_Tank_Public_TankTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
