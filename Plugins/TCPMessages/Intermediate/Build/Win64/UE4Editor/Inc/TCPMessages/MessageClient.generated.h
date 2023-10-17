// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMessage;
class UMessageRoute;
class URequest;
class UMessageClient;
#ifdef TCPMESSAGES_MessageClient_generated_h
#error "MessageClient.generated.h already included, missing '#pragma once' in MessageClient.h"
#endif
#define TCPMESSAGES_MessageClient_generated_h

#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMessagePart_Statics; \
	TCPMESSAGES_API static class UScriptStruct* StaticStruct();


template<> TCPMESSAGES_API UScriptStruct* StaticStruct<struct FMessagePart>();

#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMessage_Statics; \
	TCPMESSAGES_API static class UScriptStruct* StaticStruct();


template<> TCPMESSAGES_API UScriptStruct* StaticStruct<struct FMessage>();

#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_92_DELEGATE \
static inline void FOnResponseTimeOut_DelegateWrapper(const FMulticastScriptDelegate& OnResponseTimeOut) \
{ \
	OnResponseTimeOut.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_90_DELEGATE \
struct _Script_TCPMessages_eventOnResponseReceived_Parms \
{ \
	FString response; \
}; \
static inline void FOnResponseReceived_DelegateWrapper(const FMulticastScriptDelegate& OnResponseReceived, const FString& response) \
{ \
	_Script_TCPMessages_eventOnResponseReceived_Parms Parms; \
	Parms.response=response; \
	OnResponseReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_88_DELEGATE \
struct _Script_TCPMessages_eventOnMessageReceived_Parms \
{ \
	FMessage message; \
}; \
static inline void FOnMessageReceived_DelegateWrapper(const FMulticastScriptDelegate& OnMessageReceived, FMessage message) \
{ \
	_Script_TCPMessages_eventOnMessageReceived_Parms Parms; \
	Parms.message=message; \
	OnMessageReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_97_SPARSE_DATA
#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_97_RPC_WRAPPERS
#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_97_RPC_WRAPPERS_NO_PURE_DECLS
#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMessageRoute(); \
	friend struct Z_Construct_UClass_UMessageRoute_Statics; \
public: \
	DECLARE_CLASS(UMessageRoute, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TCPMessages"), NO_API) \
	DECLARE_SERIALIZER(UMessageRoute)


#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_97_INCLASS \
private: \
	static void StaticRegisterNativesUMessageRoute(); \
	friend struct Z_Construct_UClass_UMessageRoute_Statics; \
public: \
	DECLARE_CLASS(UMessageRoute, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TCPMessages"), NO_API) \
	DECLARE_SERIALIZER(UMessageRoute)


#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_97_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMessageRoute(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMessageRoute) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMessageRoute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMessageRoute); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMessageRoute(UMessageRoute&&); \
	NO_API UMessageRoute(const UMessageRoute&); \
public:


#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_97_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMessageRoute(UMessageRoute&&); \
	NO_API UMessageRoute(const UMessageRoute&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMessageRoute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMessageRoute); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMessageRoute)


#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_97_PRIVATE_PROPERTY_OFFSET
#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_95_PROLOG
#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_97_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_97_PRIVATE_PROPERTY_OFFSET \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_97_SPARSE_DATA \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_97_RPC_WRAPPERS \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_97_INCLASS \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_97_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_97_PRIVATE_PROPERTY_OFFSET \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_97_SPARSE_DATA \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_97_INCLASS_NO_PURE_DECLS \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCPMESSAGES_API UClass* StaticClass<class UMessageRoute>();

#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_108_SPARSE_DATA
#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_108_RPC_WRAPPERS
#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_108_RPC_WRAPPERS_NO_PURE_DECLS
#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURequest(); \
	friend struct Z_Construct_UClass_URequest_Statics; \
public: \
	DECLARE_CLASS(URequest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TCPMessages"), NO_API) \
	DECLARE_SERIALIZER(URequest)


#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_108_INCLASS \
private: \
	static void StaticRegisterNativesURequest(); \
	friend struct Z_Construct_UClass_URequest_Statics; \
public: \
	DECLARE_CLASS(URequest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TCPMessages"), NO_API) \
	DECLARE_SERIALIZER(URequest)


#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_108_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URequest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URequest(URequest&&); \
	NO_API URequest(const URequest&); \
public:


#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_108_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URequest(URequest&&); \
	NO_API URequest(const URequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URequest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URequest)


#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_108_PRIVATE_PROPERTY_OFFSET
#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_106_PROLOG
#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_108_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_108_PRIVATE_PROPERTY_OFFSET \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_108_SPARSE_DATA \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_108_RPC_WRAPPERS \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_108_INCLASS \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_108_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_108_PRIVATE_PROPERTY_OFFSET \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_108_SPARSE_DATA \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_108_INCLASS_NO_PURE_DECLS \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCPMESSAGES_API UClass* StaticClass<class URequest>();

#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_142_SPARSE_DATA
#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_142_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddRoute); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execSendRequest); \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execPing); \
	DECLARE_FUNCTION(execSubscribe); \
	DECLARE_FUNCTION(execNewMessage); \
	DECLARE_FUNCTION(execNewMessageClient);


#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_142_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddRoute); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execSendRequest); \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execPing); \
	DECLARE_FUNCTION(execSubscribe); \
	DECLARE_FUNCTION(execNewMessage); \
	DECLARE_FUNCTION(execNewMessageClient);


#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_142_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMessageClient(); \
	friend struct Z_Construct_UClass_UMessageClient_Statics; \
public: \
	DECLARE_CLASS(UMessageClient, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TCPMessages"), NO_API) \
	DECLARE_SERIALIZER(UMessageClient)


#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_142_INCLASS \
private: \
	static void StaticRegisterNativesUMessageClient(); \
	friend struct Z_Construct_UClass_UMessageClient_Statics; \
public: \
	DECLARE_CLASS(UMessageClient, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TCPMessages"), NO_API) \
	DECLARE_SERIALIZER(UMessageClient)


#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_142_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMessageClient(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMessageClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMessageClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMessageClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMessageClient(UMessageClient&&); \
	NO_API UMessageClient(const UMessageClient&); \
public:


#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_142_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMessageClient(UMessageClient&&); \
	NO_API UMessageClient(const UMessageClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMessageClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMessageClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMessageClient)


#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_142_PRIVATE_PROPERTY_OFFSET
#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_139_PROLOG
#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_142_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_142_PRIVATE_PROPERTY_OFFSET \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_142_SPARSE_DATA \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_142_RPC_WRAPPERS \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_142_INCLASS \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_142_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_142_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_142_PRIVATE_PROPERTY_OFFSET \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_142_SPARSE_DATA \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_142_RPC_WRAPPERS_NO_PURE_DECLS \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_142_INCLASS_NO_PURE_DECLS \
	Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h_142_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCPMESSAGES_API UClass* StaticClass<class UMessageClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Experiment_4_27_Plugins_TCPMessages_Source_TCPMessages_Public_MessageClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
