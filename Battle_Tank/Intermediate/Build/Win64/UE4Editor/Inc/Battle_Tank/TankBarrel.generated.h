// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLE_TANK_TankBarrel_generated_h
#error "TankBarrel.generated.h already included, missing '#pragma once' in TankBarrel.h"
#endif
#define BATTLE_TANK_TankBarrel_generated_h

#define Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_16_SPARSE_DATA
#define Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_16_RPC_WRAPPERS
#define Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankBarrel(); \
	friend struct Z_Construct_UClass_UTankBarrel_Statics; \
public: \
	DECLARE_CLASS(UTankBarrel, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battle_Tank"), NO_API) \
	DECLARE_SERIALIZER(UTankBarrel)


#define Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTankBarrel(); \
	friend struct Z_Construct_UClass_UTankBarrel_Statics; \
public: \
	DECLARE_CLASS(UTankBarrel, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battle_Tank"), NO_API) \
	DECLARE_SERIALIZER(UTankBarrel)


#define Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankBarrel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankBarrel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankBarrel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankBarrel(UTankBarrel&&); \
	NO_API UTankBarrel(const UTankBarrel&); \
public:


#define Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankBarrel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankBarrel(UTankBarrel&&); \
	NO_API UTankBarrel(const UTankBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankBarrel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankBarrel)


#define Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxDegreesPerSecond() { return STRUCT_OFFSET(UTankBarrel, MaxDegreesPerSecond); } \
	FORCEINLINE static uint32 __PPO__MaxElevationDegrees() { return STRUCT_OFFSET(UTankBarrel, MaxElevationDegrees); } \
	FORCEINLINE static uint32 __PPO__MinElevationDegrees() { return STRUCT_OFFSET(UTankBarrel, MinElevationDegrees); }


#define Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_13_PROLOG
#define Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_16_PRIVATE_PROPERTY_OFFSET \
	Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_16_SPARSE_DATA \
	Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_16_RPC_WRAPPERS \
	Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_16_INCLASS \
	Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_16_PRIVATE_PROPERTY_OFFSET \
	Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_16_SPARSE_DATA \
	Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_16_INCLASS_NO_PURE_DECLS \
	Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLE_TANK_API UClass* StaticClass<class UTankBarrel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Battle_Tank_Source_Battle_Tank_Public_TankBarrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
