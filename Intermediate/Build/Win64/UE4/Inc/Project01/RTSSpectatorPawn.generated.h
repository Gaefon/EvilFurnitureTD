// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT01_RTSSpectatorPawn_generated_h
#error "RTSSpectatorPawn.generated.h already included, missing '#pragma once' in RTSSpectatorPawn.h"
#endif
#define PROJECT01_RTSSpectatorPawn_generated_h

#define Project01_Source_Project01_RTSSpectatorPawn_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Tick(Z_Param_deltaSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execrepositionCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->repositionCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execzoomOut) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->zoomOut(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execzoomIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->zoomIn(); \
		P_NATIVE_END; \
	}


#define Project01_Source_Project01_RTSSpectatorPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Tick(Z_Param_deltaSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execrepositionCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->repositionCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execzoomOut) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->zoomOut(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execzoomIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->zoomIn(); \
		P_NATIVE_END; \
	}


#define Project01_Source_Project01_RTSSpectatorPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTSSpectatorPawn(); \
	friend PROJECT01_API class UClass* Z_Construct_UClass_ARTSSpectatorPawn(); \
public: \
	DECLARE_CLASS(ARTSSpectatorPawn, ASpectatorPawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Project01"), NO_API) \
	DECLARE_SERIALIZER(ARTSSpectatorPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Project01_Source_Project01_RTSSpectatorPawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesARTSSpectatorPawn(); \
	friend PROJECT01_API class UClass* Z_Construct_UClass_ARTSSpectatorPawn(); \
public: \
	DECLARE_CLASS(ARTSSpectatorPawn, ASpectatorPawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Project01"), NO_API) \
	DECLARE_SERIALIZER(ARTSSpectatorPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Project01_Source_Project01_RTSSpectatorPawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTSSpectatorPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTSSpectatorPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSSpectatorPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSSpectatorPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSSpectatorPawn(ARTSSpectatorPawn&&); \
	NO_API ARTSSpectatorPawn(const ARTSSpectatorPawn&); \
public:


#define Project01_Source_Project01_RTSSpectatorPawn_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTSSpectatorPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSSpectatorPawn(ARTSSpectatorPawn&&); \
	NO_API ARTSSpectatorPawn(const ARTSSpectatorPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSSpectatorPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSSpectatorPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTSSpectatorPawn)


#define Project01_Source_Project01_RTSSpectatorPawn_h_17_PRIVATE_PROPERTY_OFFSET
#define Project01_Source_Project01_RTSSpectatorPawn_h_14_PROLOG
#define Project01_Source_Project01_RTSSpectatorPawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project01_Source_Project01_RTSSpectatorPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	Project01_Source_Project01_RTSSpectatorPawn_h_17_RPC_WRAPPERS \
	Project01_Source_Project01_RTSSpectatorPawn_h_17_INCLASS \
	Project01_Source_Project01_RTSSpectatorPawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project01_Source_Project01_RTSSpectatorPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project01_Source_Project01_RTSSpectatorPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	Project01_Source_Project01_RTSSpectatorPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Project01_Source_Project01_RTSSpectatorPawn_h_17_INCLASS_NO_PURE_DECLS \
	Project01_Source_Project01_RTSSpectatorPawn_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RTSSpectatorPawn."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project01_Source_Project01_RTSSpectatorPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
