// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Battle_Tank/Public/TankPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankPlayerController() {}
// Cross Module References
	BATTLE_TANK_API UClass* Z_Construct_UClass_ATankPlayerController_NoRegister();
	BATTLE_TANK_API UClass* Z_Construct_UClass_ATankPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Battle_Tank();
	BATTLE_TANK_API UFunction* Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent();
	BATTLE_TANK_API UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister();
// End Cross Module References
	static FName NAME_ATankPlayerController_FoundAimingComponent = FName(TEXT("FoundAimingComponent"));
	void ATankPlayerController::FoundAimingComponent(UTankAimingComponent* AimCompRef)
	{
		TankPlayerController_eventFoundAimingComponent_Parms Parms;
		Parms.AimCompRef=AimCompRef;
		ProcessEvent(FindFunctionChecked(NAME_ATankPlayerController_FoundAimingComponent),&Parms);
	}
	void ATankPlayerController::StaticRegisterNativesATankPlayerController()
	{
	}
	struct Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimCompRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimCompRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::NewProp_AimCompRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::NewProp_AimCompRef = { "AimCompRef", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankPlayerController_eventFoundAimingComponent_Parms, AimCompRef), Z_Construct_UClass_UTankAimingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::NewProp_AimCompRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::NewProp_AimCompRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::NewProp_AimCompRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TankPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPlayerController, nullptr, "FoundAimingComponent", nullptr, nullptr, sizeof(TankPlayerController_eventFoundAimingComponent_Parms), Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATankPlayerController_NoRegister()
	{
		return ATankPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATankPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineTraceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineTraceRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairYLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairYLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairXLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairXLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Battle_Tank,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATankPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent, "FoundAimingComponent" }, // 821482729
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TankPlayerController.h" },
		{ "ModuleRelativePath", "Public/TankPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerController_Statics::NewProp_LineTraceRange_MetaData[] = {
		{ "Category", "TankPlayerController" },
		{ "ModuleRelativePath", "Public/TankPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPlayerController_Statics::NewProp_LineTraceRange = { "LineTraceRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPlayerController, LineTraceRange), METADATA_PARAMS(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_LineTraceRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_LineTraceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairYLocation_MetaData[] = {
		{ "Category", "TankPlayerController" },
		{ "ModuleRelativePath", "Public/TankPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairYLocation = { "CrosshairYLocation", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPlayerController, CrosshairYLocation), METADATA_PARAMS(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairYLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairYLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairXLocation_MetaData[] = {
		{ "Category", "TankPlayerController" },
		{ "ModuleRelativePath", "Public/TankPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairXLocation = { "CrosshairXLocation", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPlayerController, CrosshairXLocation), METADATA_PARAMS(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairXLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairXLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerController_Statics::NewProp_LineTraceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairYLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairXLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATankPlayerController_Statics::ClassParams = {
		&ATankPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATankPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATankPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATankPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankPlayerController, 4291018972);
	template<> BATTLE_TANK_API UClass* StaticClass<ATankPlayerController>()
	{
		return ATankPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankPlayerController(Z_Construct_UClass_ATankPlayerController, &ATankPlayerController::StaticClass, TEXT("/Script/Battle_Tank"), TEXT("ATankPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
