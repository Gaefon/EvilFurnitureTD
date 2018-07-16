// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "RTSSpectatorPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSSpectatorPawn() {}
// Cross Module References
	PROJECT01_API UClass* Z_Construct_UClass_ARTSSpectatorPawn_NoRegister();
	PROJECT01_API UClass* Z_Construct_UClass_ARTSSpectatorPawn();
	ENGINE_API UClass* Z_Construct_UClass_ASpectatorPawn();
	UPackage* Z_Construct_UPackage__Script_Project01();
	PROJECT01_API UFunction* Z_Construct_UFunction_ARTSSpectatorPawn_repositionCamera();
	PROJECT01_API UFunction* Z_Construct_UFunction_ARTSSpectatorPawn_Tick();
	PROJECT01_API UFunction* Z_Construct_UFunction_ARTSSpectatorPawn_zoomIn();
	PROJECT01_API UFunction* Z_Construct_UFunction_ARTSSpectatorPawn_zoomOut();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ARTSSpectatorPawn::StaticRegisterNativesARTSSpectatorPawn()
	{
		UClass* Class = ARTSSpectatorPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "repositionCamera", (Native)&ARTSSpectatorPawn::execrepositionCamera },
			{ "Tick", (Native)&ARTSSpectatorPawn::execTick },
			{ "zoomIn", (Native)&ARTSSpectatorPawn::execzoomIn },
			{ "zoomOut", (Native)&ARTSSpectatorPawn::execzoomOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ARTSSpectatorPawn_repositionCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "RTSSpectatorPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSSpectatorPawn, "repositionCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ARTSSpectatorPawn_Tick()
	{
		struct RTSSpectatorPawn_eventTick_Parms
		{
			float deltaSeconds;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "deltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RTSSpectatorPawn_eventTick_Parms, deltaSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_deltaSeconds,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "RTSSpectatorPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSSpectatorPawn, "Tick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(RTSSpectatorPawn_eventTick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ARTSSpectatorPawn_zoomIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "RTSSpectatorPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSSpectatorPawn, "zoomIn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ARTSSpectatorPawn_zoomOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "RTSSpectatorPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSSpectatorPawn, "zoomOut", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARTSSpectatorPawn_NoRegister()
	{
		return ARTSSpectatorPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_ARTSSpectatorPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ASpectatorPawn,
				(UObject* (*)())Z_Construct_UPackage__Script_Project01,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ARTSSpectatorPawn_repositionCamera, "repositionCamera" }, // 3121062792
				{ &Z_Construct_UFunction_ARTSSpectatorPawn_Tick, "Tick" }, // 3303395574
				{ &Z_Construct_UFunction_ARTSSpectatorPawn_zoomIn, "zoomIn" }, // 2330632788
				{ &Z_Construct_UFunction_ARTSSpectatorPawn_zoomOut, "zoomOut" }, // 3495639905
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "RTSSpectatorPawn.h" },
				{ "ModuleRelativePath", "RTSSpectatorPawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zoom_sensivity_MetaData[] = {
				{ "Category", "RTS Camera" },
				{ "ModuleRelativePath", "RTSSpectatorPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_zoom_sensivity = { UE4CodeGen_Private::EPropertyClass::Float, "zoom_sensivity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ARTSSpectatorPawn, zoom_sensivity), METADATA_PARAMS(NewProp_zoom_sensivity_MetaData, ARRAY_COUNT(NewProp_zoom_sensivity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scroll_sensivity_MetaData[] = {
				{ "Category", "RTS Camera" },
				{ "ModuleRelativePath", "RTSSpectatorPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scroll_sensivity = { UE4CodeGen_Private::EPropertyClass::Float, "scroll_sensivity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ARTSSpectatorPawn, scroll_sensivity), METADATA_PARAMS(NewProp_scroll_sensivity_MetaData, ARRAY_COUNT(NewProp_scroll_sensivity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scroll_boundary_MetaData[] = {
				{ "Category", "RTS Camera" },
				{ "ModuleRelativePath", "RTSSpectatorPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scroll_boundary = { UE4CodeGen_Private::EPropertyClass::Float, "scroll_boundary", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ARTSSpectatorPawn, scroll_boundary), METADATA_PARAMS(NewProp_scroll_boundary_MetaData, ARRAY_COUNT(NewProp_scroll_boundary_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_angle_MetaData[] = {
				{ "Category", "RTS Camera" },
				{ "ModuleRelativePath", "RTSSpectatorPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_camera_angle = { UE4CodeGen_Private::EPropertyClass::Float, "camera_angle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ARTSSpectatorPawn, camera_angle), METADATA_PARAMS(NewProp_camera_angle_MetaData, ARRAY_COUNT(NewProp_camera_angle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_distance_MetaData[] = {
				{ "Category", "RTS Camera" },
				{ "ModuleRelativePath", "RTSSpectatorPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_camera_distance = { UE4CodeGen_Private::EPropertyClass::Float, "camera_distance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ARTSSpectatorPawn, camera_distance), METADATA_PARAMS(NewProp_camera_distance_MetaData, ARRAY_COUNT(NewProp_camera_distance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_component_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "RTS Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "RTSSpectatorPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_component = { UE4CodeGen_Private::EPropertyClass::Object, "camera_component", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(ARTSSpectatorPawn, camera_component), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_camera_component_MetaData, ARRAY_COUNT(NewProp_camera_component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_zoom_sensivity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_scroll_sensivity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_scroll_boundary,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_angle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_distance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_component,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ARTSSpectatorPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ARTSSpectatorPawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ARTSSpectatorPawn, 483923575);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARTSSpectatorPawn(Z_Construct_UClass_ARTSSpectatorPawn, &ARTSSpectatorPawn::StaticClass, TEXT("/Script/Project01"), TEXT("ARTSSpectatorPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSSpectatorPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
