// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCPMessages/Public/MessageClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMessageClient() {}
// Cross Module References
	TCPMESSAGES_API UFunction* Z_Construct_UDelegateFunction_TCPMessages_OnResponseTimeOut__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TCPMessages();
	TCPMESSAGES_API UFunction* Z_Construct_UDelegateFunction_TCPMessages_OnResponseReceived__DelegateSignature();
	TCPMESSAGES_API UFunction* Z_Construct_UDelegateFunction_TCPMessages_OnMessageReceived__DelegateSignature();
	TCPMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FMessage();
	TCPMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FMessagePart();
	TCPMESSAGES_API UClass* Z_Construct_UClass_UMessageRoute_NoRegister();
	TCPMESSAGES_API UClass* Z_Construct_UClass_UMessageRoute();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TCPMESSAGES_API UClass* Z_Construct_UClass_URequest_NoRegister();
	TCPMESSAGES_API UClass* Z_Construct_UClass_URequest();
	TCPMESSAGES_API UClass* Z_Construct_UClass_UMessageClient_NoRegister();
	TCPMESSAGES_API UClass* Z_Construct_UClass_UMessageClient();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TCPMessages_OnResponseTimeOut__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TCPMessages_OnResponseTimeOut__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TCPMessages_OnResponseTimeOut__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TCPMessages, nullptr, "OnResponseTimeOut__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TCPMessages_OnResponseTimeOut__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCPMessages_OnResponseTimeOut__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TCPMessages_OnResponseTimeOut__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TCPMessages_OnResponseTimeOut__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TCPMessages_OnResponseReceived__DelegateSignature_Statics
	{
		struct _Script_TCPMessages_eventOnResponseReceived_Parms
		{
			FString response;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TCPMessages_OnResponseReceived__DelegateSignature_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TCPMessages_eventOnResponseReceived_Parms, response), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TCPMessages_OnResponseReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TCPMessages_OnResponseReceived__DelegateSignature_Statics::NewProp_response,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TCPMessages_OnResponseReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TCPMessages_OnResponseReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TCPMessages, nullptr, "OnResponseReceived__DelegateSignature", nullptr, nullptr, sizeof(_Script_TCPMessages_eventOnResponseReceived_Parms), Z_Construct_UDelegateFunction_TCPMessages_OnResponseReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCPMessages_OnResponseReceived__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TCPMessages_OnResponseReceived__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCPMessages_OnResponseReceived__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TCPMessages_OnResponseReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TCPMessages_OnResponseReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TCPMessages_OnMessageReceived__DelegateSignature_Statics
	{
		struct _Script_TCPMessages_eventOnMessageReceived_Parms
		{
			FMessage message;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TCPMessages_OnMessageReceived__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TCPMessages_eventOnMessageReceived_Parms, message), Z_Construct_UScriptStruct_FMessage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TCPMessages_OnMessageReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TCPMessages_OnMessageReceived__DelegateSignature_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TCPMessages_OnMessageReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TCPMessages_OnMessageReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TCPMessages, nullptr, "OnMessageReceived__DelegateSignature", nullptr, nullptr, sizeof(_Script_TCPMessages_eventOnMessageReceived_Parms), Z_Construct_UDelegateFunction_TCPMessages_OnMessageReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCPMessages_OnMessageReceived__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TCPMessages_OnMessageReceived__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCPMessages_OnMessageReceived__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TCPMessages_OnMessageReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TCPMessages_OnMessageReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FMessagePart::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TCPMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FMessagePart_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMessagePart, Z_Construct_UPackage__Script_TCPMessages(), TEXT("MessagePart"), sizeof(FMessagePart), Get_Z_Construct_UScriptStruct_FMessagePart_Hash());
	}
	return Singleton;
}
template<> TCPMESSAGES_API UScriptStruct* StaticStruct<FMessagePart>()
{
	return FMessagePart::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMessagePart(FMessagePart::StaticStruct, TEXT("/Script/TCPMessages"), TEXT("MessagePart"), false, nullptr, nullptr);
static struct FScriptStruct_TCPMessages_StaticRegisterNativesFMessagePart
{
	FScriptStruct_TCPMessages_StaticRegisterNativesFMessagePart()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MessagePart")),new UScriptStruct::TCppStructOps<FMessagePart>);
	}
} ScriptStruct_TCPMessages_StaticRegisterNativesFMessagePart;
	struct Z_Construct_UScriptStruct_FMessagePart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_header_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_header;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_body_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_seq_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seq;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parts_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_parts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessagePart_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMessagePart_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMessagePart>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_header_MetaData[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_header = { "header", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMessagePart, header), METADATA_PARAMS(Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_header_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_header_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_body_MetaData[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_body = { "body", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMessagePart, body), METADATA_PARAMS(Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_body_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_id_MetaData[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMessagePart, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_seq_MetaData[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_seq = { "seq", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMessagePart, seq), METADATA_PARAMS(Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_seq_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_seq_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_parts_MetaData[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_parts = { "parts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMessagePart, parts), METADATA_PARAMS(Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_parts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_parts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMessagePart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_seq,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessagePart_Statics::NewProp_parts,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMessagePart_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TCPMessages,
		nullptr,
		&NewStructOps,
		"MessagePart",
		sizeof(FMessagePart),
		alignof(FMessagePart),
		Z_Construct_UScriptStruct_FMessagePart_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessagePart_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMessagePart_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessagePart_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMessagePart()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMessagePart_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TCPMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MessagePart"), sizeof(FMessagePart), Get_Z_Construct_UScriptStruct_FMessagePart_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMessagePart_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMessagePart_Hash() { return 3387356742U; }
class UScriptStruct* FMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TCPMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMessage, Z_Construct_UPackage__Script_TCPMessages(), TEXT("Message"), sizeof(FMessage), Get_Z_Construct_UScriptStruct_FMessage_Hash());
	}
	return Singleton;
}
template<> TCPMESSAGES_API UScriptStruct* StaticStruct<FMessage>()
{
	return FMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMessage(FMessage::StaticStruct, TEXT("/Script/TCPMessages"), TEXT("Message"), false, nullptr, nullptr);
static struct FScriptStruct_TCPMessages_StaticRegisterNativesFMessage
{
	FScriptStruct_TCPMessages_StaticRegisterNativesFMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Message")),new UScriptStruct::TCppStructOps<FMessage>);
	}
} ScriptStruct_TCPMessages_StaticRegisterNativesFMessage;
	struct Z_Construct_UScriptStruct_FMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_header_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_header;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_body_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessage_Statics::NewProp_header_MetaData[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMessage_Statics::NewProp_header = { "header", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMessage, header), METADATA_PARAMS(Z_Construct_UScriptStruct_FMessage_Statics::NewProp_header_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessage_Statics::NewProp_header_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessage_Statics::NewProp_body_MetaData[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMessage_Statics::NewProp_body = { "body", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMessage, body), METADATA_PARAMS(Z_Construct_UScriptStruct_FMessage_Statics::NewProp_body_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessage_Statics::NewProp_body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessage_Statics::NewProp_id_MetaData[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMessage_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMessage, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FMessage_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessage_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessage_Statics::NewProp_header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessage_Statics::NewProp_body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessage_Statics::NewProp_id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TCPMessages,
		nullptr,
		&NewStructOps,
		"Message",
		sizeof(FMessage),
		alignof(FMessage),
		Z_Construct_UScriptStruct_FMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TCPMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Message"), sizeof(FMessage), Get_Z_Construct_UScriptStruct_FMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMessage_Hash() { return 1817888577U; }
	void UMessageRoute::StaticRegisterNativesUMessageRoute()
	{
	}
	UClass* Z_Construct_UClass_UMessageRoute_NoRegister()
	{
		return UMessageRoute::StaticClass();
	}
	struct Z_Construct_UClass_UMessageRoute_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_MessageReceived;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMessageRoute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TCPMessages,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageRoute_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MessageClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageRoute_Statics::NewProp_MessageReceived_MetaData[] = {
		{ "Category", "TCPMessagesEvents" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMessageRoute_Statics::NewProp_MessageReceived = { "MessageReceived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMessageRoute, MessageReceived), Z_Construct_UDelegateFunction_TCPMessages_OnMessageReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMessageRoute_Statics::NewProp_MessageReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageRoute_Statics::NewProp_MessageReceived_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMessageRoute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageRoute_Statics::NewProp_MessageReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMessageRoute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMessageRoute>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMessageRoute_Statics::ClassParams = {
		&UMessageRoute::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMessageRoute_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMessageRoute_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMessageRoute_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageRoute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMessageRoute()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMessageRoute_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMessageRoute, 633913501);
	template<> TCPMESSAGES_API UClass* StaticClass<UMessageRoute>()
	{
		return UMessageRoute::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMessageRoute(Z_Construct_UClass_UMessageRoute, &UMessageRoute::StaticClass, TEXT("/Script/TCPMessages"), TEXT("UMessageRoute"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMessageRoute);
	void URequest::StaticRegisterNativesURequest()
	{
	}
	UClass* Z_Construct_UClass_URequest_NoRegister()
	{
		return URequest::StaticClass();
	}
	struct Z_Construct_UClass_URequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ResponseReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimedOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_TimedOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TCPMessages,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URequest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MessageClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URequest_Statics::NewProp_ResponseReceived_MetaData[] = {
		{ "Category", "TCPMessagesEvents" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URequest_Statics::NewProp_ResponseReceived = { "ResponseReceived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URequest, ResponseReceived), Z_Construct_UDelegateFunction_TCPMessages_OnResponseReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URequest_Statics::NewProp_ResponseReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URequest_Statics::NewProp_ResponseReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URequest_Statics::NewProp_TimedOut_MetaData[] = {
		{ "Category", "TCPMessagesEvents" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URequest_Statics::NewProp_TimedOut = { "TimedOut", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URequest, TimedOut), Z_Construct_UDelegateFunction_TCPMessages_OnResponseTimeOut__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URequest_Statics::NewProp_TimedOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URequest_Statics::NewProp_TimedOut_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URequest_Statics::NewProp_ResponseReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URequest_Statics::NewProp_TimedOut,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URequest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URequest_Statics::ClassParams = {
		&URequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URequest_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URequest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URequest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URequest, 189251711);
	template<> TCPMESSAGES_API UClass* StaticClass<URequest>()
	{
		return URequest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URequest(Z_Construct_UClass_URequest, &URequest::StaticClass, TEXT("/Script/TCPMessages"), TEXT("URequest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URequest);
	DEFINE_FUNCTION(UMessageClient::execAddRoute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_header);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMessageRoute**)Z_Param__Result=P_THIS->AddRoute(Z_Param_header);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageClient::execDisconnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Disconnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageClient::execIsConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageClient::execConnect)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerIp);
		P_GET_PROPERTY(FIntProperty,Z_Param_ServerPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Connect(Z_Param_ServerIp,Z_Param_ServerPort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageClient::execSendRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Header);
		P_GET_PROPERTY(FStrProperty,Z_Param_Body);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URequest**)Z_Param__Result=P_THIS->SendRequest(Z_Param_Header,Z_Param_Body,Z_Param_TimeOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageClient::execSendMessage)
	{
		P_GET_STRUCT_REF(FMessage,Z_Param_Out_message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendMessage(Z_Param_Out_message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageClient::execPing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URequest**)Z_Param__Result=P_THIS->Ping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageClient::execSubscribe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URequest**)Z_Param__Result=P_THIS->Subscribe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageClient::execNewMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_header);
		P_GET_PROPERTY(FStrProperty,Z_Param_body);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMessage*)Z_Param__Result=UMessageClient::NewMessage(Z_Param_header,Z_Param_body);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageClient::execNewMessageClient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMessageClient**)Z_Param__Result=UMessageClient::NewMessageClient();
		P_NATIVE_END;
	}
	void UMessageClient::StaticRegisterNativesUMessageClient()
	{
		UClass* Class = UMessageClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRoute", &UMessageClient::execAddRoute },
			{ "Connect", &UMessageClient::execConnect },
			{ "Disconnect", &UMessageClient::execDisconnect },
			{ "IsConnected", &UMessageClient::execIsConnected },
			{ "NewMessage", &UMessageClient::execNewMessage },
			{ "NewMessageClient", &UMessageClient::execNewMessageClient },
			{ "Ping", &UMessageClient::execPing },
			{ "SendMessage", &UMessageClient::execSendMessage },
			{ "SendRequest", &UMessageClient::execSendRequest },
			{ "Subscribe", &UMessageClient::execSubscribe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMessageClient_AddRoute_Statics
	{
		struct MessageClient_eventAddRoute_Parms
		{
			FString header;
			UMessageRoute* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_header;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageClient_AddRoute_Statics::NewProp_header = { "header", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageClient_eventAddRoute_Parms, header), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMessageClient_AddRoute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageClient_eventAddRoute_Parms, ReturnValue), Z_Construct_UClass_UMessageRoute_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageClient_AddRoute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageClient_AddRoute_Statics::NewProp_header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageClient_AddRoute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageClient_AddRoute_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCPMessages" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageClient_AddRoute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageClient, nullptr, "AddRoute", nullptr, nullptr, sizeof(MessageClient_eventAddRoute_Parms), Z_Construct_UFunction_UMessageClient_AddRoute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_AddRoute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageClient_AddRoute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_AddRoute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageClient_AddRoute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMessageClient_AddRoute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageClient_Connect_Statics
	{
		struct MessageClient_eventConnect_Parms
		{
			FString ServerIp;
			int32 ServerPort;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerIp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ServerPort;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageClient_Connect_Statics::NewProp_ServerIp = { "ServerIp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageClient_eventConnect_Parms, ServerIp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMessageClient_Connect_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageClient_eventConnect_Parms, ServerPort), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMessageClient_Connect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MessageClient_eventConnect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMessageClient_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MessageClient_eventConnect_Parms), &Z_Construct_UFunction_UMessageClient_Connect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageClient_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageClient_Connect_Statics::NewProp_ServerIp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageClient_Connect_Statics::NewProp_ServerPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageClient_Connect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageClient_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCPMessages" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageClient_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageClient, nullptr, "Connect", nullptr, nullptr, sizeof(MessageClient_eventConnect_Parms), Z_Construct_UFunction_UMessageClient_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageClient_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageClient_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMessageClient_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageClient_Disconnect_Statics
	{
		struct MessageClient_eventDisconnect_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMessageClient_Disconnect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MessageClient_eventDisconnect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMessageClient_Disconnect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MessageClient_eventDisconnect_Parms), &Z_Construct_UFunction_UMessageClient_Disconnect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageClient_Disconnect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageClient_Disconnect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageClient_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCPMessages" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageClient_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageClient, nullptr, "Disconnect", nullptr, nullptr, sizeof(MessageClient_eventDisconnect_Parms), Z_Construct_UFunction_UMessageClient_Disconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_Disconnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageClient_Disconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageClient_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMessageClient_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageClient_IsConnected_Statics
	{
		struct MessageClient_eventIsConnected_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMessageClient_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MessageClient_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMessageClient_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MessageClient_eventIsConnected_Parms), &Z_Construct_UFunction_UMessageClient_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageClient_IsConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageClient_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageClient_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCPMessages" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageClient_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageClient, nullptr, "IsConnected", nullptr, nullptr, sizeof(MessageClient_eventIsConnected_Parms), Z_Construct_UFunction_UMessageClient_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_IsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageClient_IsConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageClient_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMessageClient_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageClient_NewMessage_Statics
	{
		struct MessageClient_eventNewMessage_Parms
		{
			FString header;
			FString body;
			FMessage ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_header_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_header;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_body_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_body;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageClient_NewMessage_Statics::NewProp_header_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageClient_NewMessage_Statics::NewProp_header = { "header", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageClient_eventNewMessage_Parms, header), METADATA_PARAMS(Z_Construct_UFunction_UMessageClient_NewMessage_Statics::NewProp_header_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_NewMessage_Statics::NewProp_header_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageClient_NewMessage_Statics::NewProp_body_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageClient_NewMessage_Statics::NewProp_body = { "body", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageClient_eventNewMessage_Parms, body), METADATA_PARAMS(Z_Construct_UFunction_UMessageClient_NewMessage_Statics::NewProp_body_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_NewMessage_Statics::NewProp_body_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMessageClient_NewMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageClient_eventNewMessage_Parms, ReturnValue), Z_Construct_UScriptStruct_FMessage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageClient_NewMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageClient_NewMessage_Statics::NewProp_header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageClient_NewMessage_Statics::NewProp_body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageClient_NewMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageClient_NewMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCPMessages" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageClient_NewMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageClient, nullptr, "NewMessage", nullptr, nullptr, sizeof(MessageClient_eventNewMessage_Parms), Z_Construct_UFunction_UMessageClient_NewMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_NewMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageClient_NewMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_NewMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageClient_NewMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMessageClient_NewMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageClient_NewMessageClient_Statics
	{
		struct MessageClient_eventNewMessageClient_Parms
		{
			UMessageClient* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMessageClient_NewMessageClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageClient_eventNewMessageClient_Parms, ReturnValue), Z_Construct_UClass_UMessageClient_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageClient_NewMessageClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageClient_NewMessageClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageClient_NewMessageClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCPMessages" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageClient_NewMessageClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageClient, nullptr, "NewMessageClient", nullptr, nullptr, sizeof(MessageClient_eventNewMessageClient_Parms), Z_Construct_UFunction_UMessageClient_NewMessageClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_NewMessageClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageClient_NewMessageClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_NewMessageClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageClient_NewMessageClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMessageClient_NewMessageClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageClient_Ping_Statics
	{
		struct MessageClient_eventPing_Parms
		{
			URequest* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMessageClient_Ping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageClient_eventPing_Parms, ReturnValue), Z_Construct_UClass_URequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageClient_Ping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageClient_Ping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageClient_Ping_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCPMessages" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageClient_Ping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageClient, nullptr, "Ping", nullptr, nullptr, sizeof(MessageClient_eventPing_Parms), Z_Construct_UFunction_UMessageClient_Ping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_Ping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageClient_Ping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_Ping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageClient_Ping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMessageClient_Ping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageClient_SendMessage_Statics
	{
		struct MessageClient_eventSendMessage_Parms
		{
			FMessage message;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_message;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageClient_SendMessage_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMessageClient_SendMessage_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageClient_eventSendMessage_Parms, message), Z_Construct_UScriptStruct_FMessage, METADATA_PARAMS(Z_Construct_UFunction_UMessageClient_SendMessage_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_SendMessage_Statics::NewProp_message_MetaData)) };
	void Z_Construct_UFunction_UMessageClient_SendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MessageClient_eventSendMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMessageClient_SendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MessageClient_eventSendMessage_Parms), &Z_Construct_UFunction_UMessageClient_SendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageClient_SendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageClient_SendMessage_Statics::NewProp_message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageClient_SendMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageClient_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCPMessages" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageClient_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageClient, nullptr, "SendMessage", nullptr, nullptr, sizeof(MessageClient_eventSendMessage_Parms), Z_Construct_UFunction_UMessageClient_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_SendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageClient_SendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_SendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageClient_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMessageClient_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageClient_SendRequest_Statics
	{
		struct MessageClient_eventSendRequest_Parms
		{
			FString Header;
			FString Body;
			float TimeOut;
			URequest* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Header;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Body;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeOut;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageClient_SendRequest_Statics::NewProp_Header_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageClient_SendRequest_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageClient_eventSendRequest_Parms, Header), METADATA_PARAMS(Z_Construct_UFunction_UMessageClient_SendRequest_Statics::NewProp_Header_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_SendRequest_Statics::NewProp_Header_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageClient_SendRequest_Statics::NewProp_Body_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageClient_SendRequest_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageClient_eventSendRequest_Parms, Body), METADATA_PARAMS(Z_Construct_UFunction_UMessageClient_SendRequest_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_SendRequest_Statics::NewProp_Body_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMessageClient_SendRequest_Statics::NewProp_TimeOut = { "TimeOut", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageClient_eventSendRequest_Parms, TimeOut), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMessageClient_SendRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageClient_eventSendRequest_Parms, ReturnValue), Z_Construct_UClass_URequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageClient_SendRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageClient_SendRequest_Statics::NewProp_Header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageClient_SendRequest_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageClient_SendRequest_Statics::NewProp_TimeOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageClient_SendRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageClient_SendRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCPMessages" },
		{ "CPP_Default_TimeOut", "-1.000000" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageClient_SendRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageClient, nullptr, "SendRequest", nullptr, nullptr, sizeof(MessageClient_eventSendRequest_Parms), Z_Construct_UFunction_UMessageClient_SendRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_SendRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageClient_SendRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_SendRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageClient_SendRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMessageClient_SendRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageClient_Subscribe_Statics
	{
		struct MessageClient_eventSubscribe_Parms
		{
			URequest* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMessageClient_Subscribe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageClient_eventSubscribe_Parms, ReturnValue), Z_Construct_UClass_URequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageClient_Subscribe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageClient_Subscribe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageClient_Subscribe_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCPMessages" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageClient_Subscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageClient, nullptr, "Subscribe", nullptr, nullptr, sizeof(MessageClient_eventSubscribe_Parms), Z_Construct_UFunction_UMessageClient_Subscribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_Subscribe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageClient_Subscribe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageClient_Subscribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageClient_Subscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMessageClient_Subscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMessageClient_NoRegister()
	{
		return UMessageClient::StaticClass();
	}
	struct Z_Construct_UClass_UMessageClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageReceivedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_MessageReceivedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnroutedMessageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_UnroutedMessageEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMessageClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TCPMessages,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMessageClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMessageClient_AddRoute, "AddRoute" }, // 4294501301
		{ &Z_Construct_UFunction_UMessageClient_Connect, "Connect" }, // 3576559325
		{ &Z_Construct_UFunction_UMessageClient_Disconnect, "Disconnect" }, // 1977430715
		{ &Z_Construct_UFunction_UMessageClient_IsConnected, "IsConnected" }, // 3896330697
		{ &Z_Construct_UFunction_UMessageClient_NewMessage, "NewMessage" }, // 1128695846
		{ &Z_Construct_UFunction_UMessageClient_NewMessageClient, "NewMessageClient" }, // 893872545
		{ &Z_Construct_UFunction_UMessageClient_Ping, "Ping" }, // 3686324502
		{ &Z_Construct_UFunction_UMessageClient_SendMessage, "SendMessage" }, // 2709181936
		{ &Z_Construct_UFunction_UMessageClient_SendRequest, "SendRequest" }, // 2523502234
		{ &Z_Construct_UFunction_UMessageClient_Subscribe, "Subscribe" }, // 190691596
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MessageClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageClient_Statics::NewProp_MessageReceivedEvent_MetaData[] = {
		{ "Category", "TCPMessagesEvents" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMessageClient_Statics::NewProp_MessageReceivedEvent = { "MessageReceivedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMessageClient, MessageReceivedEvent), Z_Construct_UDelegateFunction_TCPMessages_OnMessageReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMessageClient_Statics::NewProp_MessageReceivedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageClient_Statics::NewProp_MessageReceivedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageClient_Statics::NewProp_UnroutedMessageEvent_MetaData[] = {
		{ "Category", "TCPMessagesEvents" },
		{ "ModuleRelativePath", "Public/MessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMessageClient_Statics::NewProp_UnroutedMessageEvent = { "UnroutedMessageEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMessageClient, UnroutedMessageEvent), Z_Construct_UDelegateFunction_TCPMessages_OnMessageReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMessageClient_Statics::NewProp_UnroutedMessageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageClient_Statics::NewProp_UnroutedMessageEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMessageClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageClient_Statics::NewProp_MessageReceivedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageClient_Statics::NewProp_UnroutedMessageEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMessageClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMessageClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMessageClient_Statics::ClassParams = {
		&UMessageClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMessageClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMessageClient_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMessageClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMessageClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMessageClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMessageClient, 3536842093);
	template<> TCPMESSAGES_API UClass* StaticClass<UMessageClient>()
	{
		return UMessageClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMessageClient(Z_Construct_UClass_UMessageClient, &UMessageClient::StaticClass, TEXT("/Script/TCPMessages"), TEXT("UMessageClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMessageClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
