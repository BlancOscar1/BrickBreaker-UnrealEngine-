// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BrickBreaker/PaddlePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaddlePlayerController() {}
// Cross Module References
	BRICKBREAKER_API UClass* Z_Construct_UClass_APaddlePlayerController_NoRegister();
	BRICKBREAKER_API UClass* Z_Construct_UClass_APaddlePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_BrickBreaker();
// End Cross Module References
	void APaddlePlayerController::StaticRegisterNativesAPaddlePlayerController()
	{
	}
	UClass* Z_Construct_UClass_APaddlePlayerController_NoRegister()
	{
		return APaddlePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_APaddlePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaddlePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_BrickBreaker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddlePlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PaddlePlayerController.h" },
		{ "ModuleRelativePath", "PaddlePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaddlePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaddlePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaddlePlayerController_Statics::ClassParams = {
		&APaddlePlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaddlePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaddlePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaddlePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaddlePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaddlePlayerController, 3584393707);
	template<> BRICKBREAKER_API UClass* StaticClass<APaddlePlayerController>()
	{
		return APaddlePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaddlePlayerController(Z_Construct_UClass_APaddlePlayerController, &APaddlePlayerController::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("APaddlePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaddlePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
