// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT_GAME_310_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define PROJECT_GAME_310_MainCharacter_generated_h

#define Project_Game_310_Source_Project_Game_310_Public_MainCharacter_h_14_RPC_WRAPPERS
#define Project_Game_310_Source_Project_Game_310_Public_MainCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Project_Game_310_Source_Project_Game_310_Public_MainCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Game_310"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define Project_Game_310_Source_Project_Game_310_Public_MainCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Game_310"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define Project_Game_310_Source_Project_Game_310_Public_MainCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public:


#define Project_Game_310_Source_Project_Game_310_Public_MainCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter)


#define Project_Game_310_Source_Project_Game_310_Public_MainCharacter_h_14_PRIVATE_PROPERTY_OFFSET
#define Project_Game_310_Source_Project_Game_310_Public_MainCharacter_h_11_PROLOG
#define Project_Game_310_Source_Project_Game_310_Public_MainCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Game_310_Source_Project_Game_310_Public_MainCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Project_Game_310_Source_Project_Game_310_Public_MainCharacter_h_14_RPC_WRAPPERS \
	Project_Game_310_Source_Project_Game_310_Public_MainCharacter_h_14_INCLASS \
	Project_Game_310_Source_Project_Game_310_Public_MainCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Game_310_Source_Project_Game_310_Public_MainCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Game_310_Source_Project_Game_310_Public_MainCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Project_Game_310_Source_Project_Game_310_Public_MainCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Game_310_Source_Project_Game_310_Public_MainCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Project_Game_310_Source_Project_Game_310_Public_MainCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT_GAME_310_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Game_310_Source_Project_Game_310_Public_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
