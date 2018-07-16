// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FloatingActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatingActor() {}
// Cross Module References
	PROJECT01_API UClass* Z_Construct_UClass_AFloatingActor_NoRegister();
	PROJECT01_API UClass* Z_Construct_UClass_AFloatingActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Project01();
// End Cross Module References
	void AFloatingActor::StaticRegisterNativesAFloatingActor()
	{
	}
	UClass* Z_Construct_UClass_AFloatingActor_NoRegister()
	{
		return AFloatingActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AFloatingActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Project01,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "FloatingActor.h" },
				{ "ModuleRelativePath", "FloatingActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_rotation_speed_MetaData[] = {
				{ "Category", "FloatingActor" },
				{ "ModuleRelativePath", "FloatingActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_rotation_speed = { UE4CodeGen_Private::EPropertyClass::Float, "m_rotation_speed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AFloatingActor, m_rotation_speed), METADATA_PARAMS(NewProp_m_rotation_speed_MetaData, ARRAY_COUNT(NewProp_m_rotation_speed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_translation_speed_MetaData[] = {
				{ "Category", "FloatingActor" },
				{ "ClampMax", "100" },
				{ "ClampMin", "10" },
				{ "ModuleRelativePath", "FloatingActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_translation_speed = { UE4CodeGen_Private::EPropertyClass::Float, "m_translation_speed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AFloatingActor, m_translation_speed), METADATA_PARAMS(NewProp_m_translation_speed_MetaData, ARRAY_COUNT(NewProp_m_translation_speed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_rotation_speed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_translation_speed,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFloatingActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFloatingActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloatingActor, 2566422691);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloatingActor(Z_Construct_UClass_AFloatingActor, &AFloatingActor::StaticClass, TEXT("/Script/Project01"), TEXT("AFloatingActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloatingActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
