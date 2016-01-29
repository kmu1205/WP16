// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JUHEEUMGTEST_JuHeeUMGTestCharacter_generated_h
#error "JuHeeUMGTestCharacter.generated.h already included, missing '#pragma once' in JuHeeUMGTestCharacter.h"
#endif
#define JUHEEUMGTEST_JuHeeUMGTestCharacter_generated_h

#define JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execsetHpTest) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inputHp); \
		P_FINISH; \
		this->setHpTest(Z_Param_inputHp); \
	} \
 \
	DECLARE_FUNCTION(execSubtractHpTest) \
	{ \
		P_FINISH; \
		this->SubtractHpTest(); \
	} \
 \
	DECLARE_FUNCTION(execAddHpTest) \
	{ \
		P_FINISH; \
		this->AddHpTest(); \
	}


#define JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execsetHpTest) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inputHp); \
		P_FINISH; \
		this->setHpTest(Z_Param_inputHp); \
	} \
 \
	DECLARE_FUNCTION(execSubtractHpTest) \
	{ \
		P_FINISH; \
		this->SubtractHpTest(); \
	} \
 \
	DECLARE_FUNCTION(execAddHpTest) \
	{ \
		P_FINISH; \
		this->AddHpTest(); \
	}


#define JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h_9_EVENT_PARMS
extern JUHEEUMGTEST_API  FName JUHEEUMGTEST_SubtractHpTestTest;
#define JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h_9_CALLBACK_WRAPPERS
#define JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAJuHeeUMGTestCharacter(); \
	friend JUHEEUMGTEST_API class UClass* Z_Construct_UClass_AJuHeeUMGTestCharacter(); \
	public: \
	DECLARE_CLASS(AJuHeeUMGTestCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, JuHeeUMGTest, NO_API) \
	DECLARE_SERIALIZER(AJuHeeUMGTestCharacter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AJuHeeUMGTestCharacter*>(this); }


#define JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesAJuHeeUMGTestCharacter(); \
	friend JUHEEUMGTEST_API class UClass* Z_Construct_UClass_AJuHeeUMGTestCharacter(); \
	public: \
	DECLARE_CLASS(AJuHeeUMGTestCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, JuHeeUMGTest, NO_API) \
	DECLARE_SERIALIZER(AJuHeeUMGTestCharacter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AJuHeeUMGTestCharacter*>(this); }


#define JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AJuHeeUMGTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AJuHeeUMGTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJuHeeUMGTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJuHeeUMGTestCharacter); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AJuHeeUMGTestCharacter(const AJuHeeUMGTestCharacter& InCopy); \
public:


#define JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AJuHeeUMGTestCharacter(const AJuHeeUMGTestCharacter& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJuHeeUMGTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJuHeeUMGTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJuHeeUMGTestCharacter)


#define JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h_6_PROLOG \
	JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h_9_EVENT_PARMS


#define JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h_9_RPC_WRAPPERS \
	JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h_9_CALLBACK_WRAPPERS \
	JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h_9_INCLASS \
	JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h_9_CALLBACK_WRAPPERS \
	JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h_9_INCLASS_NO_PURE_DECLS \
	JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JuHeeUMGTest_Source_JuHeeUMGTest_JuHeeUMGTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS