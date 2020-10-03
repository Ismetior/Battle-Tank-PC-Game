// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTank/Public/TankBarrel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankBarrel() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_UTankBarrel_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankBarrel();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
// End Cross Module References
	void UTankBarrel::StaticRegisterNativesUTankBarrel()
	{
	}
	UClass* Z_Construct_UClass_UTankBarrel_NoRegister()
	{
		return UTankBarrel::StaticClass();
	}
	struct Z_Construct_UClass_UTankBarrel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinElevationDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinElevationDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxElevationDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxElevationDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDegreesPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDegreesPerSecond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTankBarrel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankBarrel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Object Activation Components|Activation Trigger" },
		{ "IncludePath", "TankBarrel.h" },
		{ "ModuleRelativePath", "Public/TankBarrel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankBarrel_Statics::NewProp_MinElevationDegrees_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TankBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankBarrel_Statics::NewProp_MinElevationDegrees = { "MinElevationDegrees", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankBarrel, MinElevationDegrees), METADATA_PARAMS(Z_Construct_UClass_UTankBarrel_Statics::NewProp_MinElevationDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTankBarrel_Statics::NewProp_MinElevationDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankBarrel_Statics::NewProp_MaxElevationDegrees_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TankBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankBarrel_Statics::NewProp_MaxElevationDegrees = { "MaxElevationDegrees", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankBarrel, MaxElevationDegrees), METADATA_PARAMS(Z_Construct_UClass_UTankBarrel_Statics::NewProp_MaxElevationDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTankBarrel_Statics::NewProp_MaxElevationDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankBarrel_Statics::NewProp_MaxDegreesPerSecond_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TankBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankBarrel_Statics::NewProp_MaxDegreesPerSecond = { "MaxDegreesPerSecond", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankBarrel, MaxDegreesPerSecond), METADATA_PARAMS(Z_Construct_UClass_UTankBarrel_Statics::NewProp_MaxDegreesPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTankBarrel_Statics::NewProp_MaxDegreesPerSecond_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTankBarrel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankBarrel_Statics::NewProp_MinElevationDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankBarrel_Statics::NewProp_MaxElevationDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankBarrel_Statics::NewProp_MaxDegreesPerSecond,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTankBarrel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTankBarrel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTankBarrel_Statics::ClassParams = {
		&UTankBarrel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTankBarrel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTankBarrel_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTankBarrel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTankBarrel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTankBarrel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTankBarrel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankBarrel, 2801551236);
	template<> BATTLETANK_API UClass* StaticClass<UTankBarrel>()
	{
		return UTankBarrel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankBarrel(Z_Construct_UClass_UTankBarrel, &UTankBarrel::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankBarrel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankBarrel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
