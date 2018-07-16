// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT01_FloatingActor_generated_h
#error "FloatingActor.generated.h already included, missing '#pragma once' in FloatingActor.h"
#endif
#define PROJECT01_FloatingActor_generated_h

#define Project01_Source_Project01_FloatingActor_h_12_RPC_WRAPPERS
#define Project01_Source_Project01_FloatingActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Project01_Source_Project01_FloatingActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloatingActor(); \
	friend PROJECT01_API class UClass* Z_Construct_UClass_AFloatingActor(); \
public: \
	DECLARE_CLASS(AFloatingActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Project01"), NO_API) \
	DECLARE_SERIALIZER(AFloatingActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Project01_Source_Project01_FloatingActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFloatingActor(); \
	friend PROJECT01_API class UClass* Z_Construct_UClass_AFloatingActor(); \
public: \
	DECLARE_CLASS(AFloatingActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Project01"), NO_API) \
	DECLARE_SERIALIZER(AFloatingActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Project01_Source_Project01_FloatingActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFloatingActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFloatingActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloatingActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloatingActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloatingActor(AFloatingActor&&); \
	NO_API AFloatingActor(const AFloatingActor&); \
public:


#define Project01_Source_Project01_FloatingActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloatingActor(AFloatingActor&&); \
	NO_API AFloatingActor(const AFloatingActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloatingActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloatingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFloatingActor)


#define Project01_Source_Project01_FloatingActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_translation_speed() { return STRUCT_OFFSET(AFloatingActor, m_translation_speed); } \
	FORCEINLINE static uint32 __PPO__m_rotation_speed() { return STRUCT_OFFSET(AFloatingActor, m_rotation_speed); }


#define Project01_Source_Project01_FloatingActor_h_9_PROLOG
#define Project01_Source_Project01_FloatingActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project01_Source_Project01_FloatingActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Project01_Source_Project01_FloatingActor_h_12_RPC_WRAPPERS \
	Project01_Source_Project01_FloatingActor_h_12_INCLASS \
	Project01_Source_Project01_FloatingActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project01_Source_Project01_FloatingActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project01_Source_Project01_FloatingActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Project01_Source_Project01_FloatingActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Project01_Source_Project01_FloatingActor_h_12_INCLASS_NO_PURE_DECLS \
	Project01_Source_Project01_FloatingActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project01_Source_Project01_FloatingActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
