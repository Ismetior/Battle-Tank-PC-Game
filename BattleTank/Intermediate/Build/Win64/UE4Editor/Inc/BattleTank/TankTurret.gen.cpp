// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTank/Public/TankTurret.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankTurret() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_UTankTurret_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankTurret();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
// End Cross Module References
	void UTankTurret::StaticRegisterNativesUTankTurret()
	{
	}
	UClass* Z_Construct_UClass_UTankTurret_NoRegister()
	{
		return UTankTurret::StaticClass();
	}
	struct Z_Construct_UClass_UTankTurret_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDegreesPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDegreesPerSecond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTankTurret_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankTurret_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Object Activation Components|Activation Trigger" },
		{ "IncludePath", "TankTurret.h" },
		{ "ModuleRelativePath", "Public/TankTurret.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankTurret_Statics::NewProp_MaxDegreesPerSecond_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TankTurret.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankTurret_Statics::NewProp_MaxDegreesPerSecond = { "MaxDegreesPerSecond", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankTurret, MaxDegreesPerSecond), METADATA_PARAMS(Z_Construct_UClass_UTankTurret_Statics::NewProp_MaxDegreesPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTankTurret_Statics::NewProp_MaxDegreesPerSecond_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTankTurret_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankTurret_Statics::NewProp_MaxDegreesPerSecond,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTankTurret_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTankTurret>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTankTurret_Statics::ClassParams = {
		&UTankTurret::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTankTurret_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTankTurret_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTankTurret_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTankTurret_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTankTurret()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTankTurret_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankTurret, 1723751821);
	template<> BATTLETANK_API UClass* StaticClass<UTankTurret>()
	{
		return UTankTurret::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankTurret(Z_Construct_UClass_UTankTurret, &UTankTurret::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankTurret"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankTurret);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
