// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PentaJam/PentaJamGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePentaJamGameMode() {}
// Cross Module References
	PENTAJAM_API UClass* Z_Construct_UClass_APentaJamGameMode_NoRegister();
	PENTAJAM_API UClass* Z_Construct_UClass_APentaJamGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PentaJam();
// End Cross Module References
	void APentaJamGameMode::StaticRegisterNativesAPentaJamGameMode()
	{
	}
	UClass* Z_Construct_UClass_APentaJamGameMode_NoRegister()
	{
		return APentaJamGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APentaJamGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APentaJamGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PentaJam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APentaJamGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PentaJamGameMode.h" },
		{ "ModuleRelativePath", "PentaJamGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APentaJamGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APentaJamGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APentaJamGameMode_Statics::ClassParams = {
		&APentaJamGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APentaJamGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APentaJamGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APentaJamGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APentaJamGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APentaJamGameMode, 3895986398);
	template<> PENTAJAM_API UClass* StaticClass<APentaJamGameMode>()
	{
		return APentaJamGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APentaJamGameMode(Z_Construct_UClass_APentaJamGameMode, &APentaJamGameMode::StaticClass, TEXT("/Script/PentaJam"), TEXT("APentaJamGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APentaJamGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
