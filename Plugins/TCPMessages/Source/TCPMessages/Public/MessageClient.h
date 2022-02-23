#pragma once
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "JsonObjectConverter.h"
#include "HAL/Runnable.h"
#include "GenericPlatform/GenericPlatformProcess.h"
#include "MessageClient.generated.h"

USTRUCT(Blueprintable)
struct FMessage
{
	GENERATED_BODY()
public:

	FMessage() {
		id = FGuid::NewGuid().ToString(EGuidFormats::DigitsWithHyphens);
	}

	FMessage(const FString &header):
	header(header),
	id(FGuid::NewGuid().ToString(EGuidFormats::DigitsWithHyphens)){	}


	static FString CleanJson(const FString& jsonString) {
		return jsonString.Replace(TEXT("\r\n"), TEXT("")).Replace(TEXT("\t"), TEXT(""));
	}

	template<typename InStructType>
	static FMessage NewMessage(char* header_str, const InStructType& BodyStruct) {
		auto message = FMessage();
		message.header = FString(header_str);
		FString Buffer;
		FJsonObjectConverter::UStructToJsonObjectString(BodyStruct, Buffer, 0, 0, 0);
		message.body = CleanJson(Buffer);
		return message;
	}

	template<typename OutStructType>
	OutStructType GetBody() const {
		auto BodyStruct = OutStructType();
		FJsonObjectConverter::JsonObjectStringToUStruct(body, &BodyStruct, 0, 0);
		return BodyStruct;
	}


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Environment)
		FString header;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Environment)
		FString body;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Environment)
		FString id;
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMessageReceived, FMessage, message);


USTRUCT(Blueprintable)
struct FMessagePart
{
	GENERATED_BODY()
public:

	FMessage to_message();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Environment)
		FString header;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Environment)
		FString body;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Environment)
		FString id;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Environment)
		int seq;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Environment)
		int parts;
};


struct FMessageParts
{
public:
	FMessageParts() = default;
	FMessageParts(const FMessage& message);
	TArray<FMessagePart> parts;
	void Add(FMessagePart part);
	bool IsReady();
	FMessage Join();
	FMessagePart& GetPart(int seq);
};

struct FMessageEvent {
	FMessageEvent();
	~FMessageEvent();
	FMessage Wait(int timeout);
	void Trigger(FMessage message);
	FMessage response;
	TAtomic<bool> ready;
};

UCLASS(Blueprintable)
class UMessageRoute : public UObject {
	GENERATED_BODY()
public:
	UMessageRoute() {}

	UPROPERTY(BlueprintAssignable, Category = "TCPMessagesEvents")
	FOnMessageReceived MessageReceived;
};


class UMessageClientThread : public FRunnable
{
public:
	UMessageClientThread(FSocket* host, FOnMessageReceived& message_received_event, FOnMessageReceived& unrouted_message_event);

	virtual bool Init();
	virtual uint32 Run();
	virtual void Stop();
	
	bool AddMessageEvent(FString, FMessageEvent *);
	bool Receive(FString &MessageString);
	TMap<FString, FMessageEvent *> pending_responses;
	FSocket* host;
	TQueue<FMessage> messages;
	TMap <FString, FMessageParts> partial_messages;
	TMap <FString, UMessageRoute *> routes;
	TAtomic<bool> is_running;
	TAtomic<bool> finished;
	FOnMessageReceived &message_received_event;
	FOnMessageReceived &unrouted_message_event;
	
};


UCLASS(Blueprintable)
class TCPMESSAGES_API UMessageClient : public UObject
{
	GENERATED_BODY()

public:
	UMessageClient();

	UFUNCTION(BlueprintCallable, Category = "TCPMessages")
	static UMessageClient *NewMessageClient();

	UFUNCTION(BlueprintCallable, Category = "TCPMessages")
	static FMessage NewMessage(const FString &header, const FString &body);

	bool Send(const FString & messageString);

	UFUNCTION(BlueprintCallable, Category = "TCPMessages")
	bool Subscribe();

	UFUNCTION(BlueprintCallable, Category = "TCPMessages")
	bool SendMessage(const FMessage & message);
	
	UFUNCTION(BlueprintCallable, Category = "TCPMessages")
	FString SendRequest(const FString &header, const FString& body = "", int timeout = 0);
	
	UFUNCTION(BlueprintCallable, Category = "TCPMessages")
	bool Connect(FString ServerIp, int ServerPort);
	
	UFUNCTION(BlueprintCallable, Category = "TCPMessages")
	bool IsConnected();
	
	UFUNCTION(BlueprintCallable, Category = "TCPMessages")
	bool Disconnect();

	UFUNCTION(BlueprintCallable, Category = "TCPMessages")
	UMessageRoute *AddRoute(FString header);

	UPROPERTY(BlueprintAssignable, Category = "TCPMessagesEvents")
	FOnMessageReceived MessageReceivedEvent;

	UPROPERTY(BlueprintAssignable, Category = "TCPMessagesEvents")
	FOnMessageReceived UnroutedMessageEvent;


	FSocket* host;
	TMap <FString, FMessageParts> partials;
	FRunnableThread* receiver_thread;
	UMessageClientThread *client_thread = nullptr;
	FRunnableThread* running_thread = nullptr;
};

