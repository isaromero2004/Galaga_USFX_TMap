// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_TMap/Galaga_USFX_TMapGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGalaga_USFX_TMapGameMode() {}
// Cross Module References
	GALAGA_USFX_TMAP_API UClass* Z_Construct_UClass_AGalaga_USFX_TMapGameMode_NoRegister();
	GALAGA_USFX_TMAP_API UClass* Z_Construct_UClass_AGalaga_USFX_TMapGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_TMap();
// End Cross Module References
	void AGalaga_USFX_TMapGameMode::StaticRegisterNativesAGalaga_USFX_TMapGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGalaga_USFX_TMapGameMode_NoRegister()
	{
		return AGalaga_USFX_TMapGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGalaga_USFX_TMapGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGalaga_USFX_TMapGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_TMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_TMapGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//class ANaveEnemigaTransporte;\n//class ANaveEnemigaNodriza;\n" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Galaga_USFX_TMapGameMode.h" },
		{ "ModuleRelativePath", "Galaga_USFX_TMapGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "class ANaveEnemigaTransporte;\nclass ANaveEnemigaNodriza;" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGalaga_USFX_TMapGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGalaga_USFX_TMapGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGalaga_USFX_TMapGameMode_Statics::ClassParams = {
		&AGalaga_USFX_TMapGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_TMapGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_TMapGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGalaga_USFX_TMapGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGalaga_USFX_TMapGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGalaga_USFX_TMapGameMode, 2203591235);
	template<> GALAGA_USFX_TMAP_API UClass* StaticClass<AGalaga_USFX_TMapGameMode>()
	{
		return AGalaga_USFX_TMapGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGalaga_USFX_TMapGameMode(Z_Construct_UClass_AGalaga_USFX_TMapGameMode, &AGalaga_USFX_TMapGameMode::StaticClass, TEXT("/Script/Galaga_USFX_TMap"), TEXT("AGalaga_USFX_TMapGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGalaga_USFX_TMapGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
