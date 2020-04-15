// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLE_TANK_Tank_generated_h
#error "Tank.generated.h already included, missing '#pragma once' in Tank.h"
#endif
#define BATTLE_TANK_Tank_generated_h

#define Battle_Tank_Source_Battle_Tank_Public_Tank_h_12_SPARSE_DATA
#define Battle_Tank_Source_Battle_Tank_Public_Tank_h_12_RPC_WRAPPERS
#define Battle_Tank_Source_Battle_Tank_Public_Tank_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Battle_Tank_Source_Battle_Tank_Public_Tank_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATank(); \
	friend struct Z_Construct_UClass_ATank_Statics; \
public: \
	DECLARE_CLASS(ATank, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battle_Tank"), NO_API) \
	DECLARE_SERIALIZER(ATank)


#define Battle_Tank_Source_Battle_Tank_Public_Tank_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATank(); \
	friend struct Z_Construct_UClass_ATank_Statics; \
public: \
	DECLARE_CLASS(ATank, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battle_Tank"), NO_API) \
	DECLARE_SERIALIZER(ATank)


#define Battle_Tank_Source_Battle_Tank_Public_Tank_h_12_STANDARD_CONSTRUCTORS \
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


#define Battle_Tank_Source_Battle_Tank_Public_Tank_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATank)


#define Battle_Tank_Source_Battle_Tank_Public_Tank_h_12_PRIVATE_PROPERTY_OFFSET
#define Battle_Tank_Source_Battle_Tank_Public_Tank_h_9_PROLOG
#define Battle_Tank_Source_Battle_Tank_Public_Tank_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Tank_Source_Battle_Tank_Public_Tank_h_12_PRIVATE_PROPERTY_OFFSET \
	Battle_Tank_Source_Battle_Tank_Public_Tank_h_12_SPARSE_DATA \
	Battle_Tank_Source_Battle_Tank_Public_Tank_h_12_RPC_WRAPPERS \
	Battle_Tank_Source_Battle_Tank_Public_Tank_h_12_INCLASS \
	Battle_Tank_Source_Battle_Tank_Public_Tank_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Battle_Tank_Source_Battle_Tank_Public_Tank_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Tank_Source_Battle_Tank_Public_Tank_h_12_PRIVATE_PROPERTY_OFFSET \
	Battle_Tank_Source_Battle_Tank_Public_Tank_h_12_SPARSE_DATA \
	Battle_Tank_Source_Battle_Tank_Public_Tank_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Battle_Tank_Source_Battle_Tank_Public_Tank_h_12_INCLASS_NO_PURE_DECLS \
	Battle_Tank_Source_Battle_Tank_Public_Tank_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLE_TANK_API UClass* StaticClass<class ATank>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Battle_Tank_Source_Battle_Tank_Public_Tank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
