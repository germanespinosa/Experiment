#include "MessageClient.h"
#include "Networking.h"
#include "JsonObjectConverter.h"
#include "Misc/Guid.h"

bool UMessageClient::SendMessage(const FMessage& message) {
	if (!IsConnected()) return false;
	auto parts = FMessageParts(message);
	for (auto& part : parts.parts) {
		FString Buffer;
		FJsonObjectConverter::UStructToJsonObjectString(part, Buffer, 0, 0, 0, 0, false);
		auto messageString = FMessage::CleanJson(Buffer);
		//UE_LOG(LogTemp, Warning, TEXT("SENDING MESSAGE: %s "), *messageString);
		if (!Send(messageString)) return false;
	}
	return true;
}
FString UMessageClient::SendRequest(const FString& header, const FString& body, int timeout)
{
	FMessage request(header);
	request.body = body;
	FMessageEvent response_received;
	client_thread->AddMessageEvent(request.id, &response_received);
	//UE_LOG(LogTemp, Warning, TEXT("REQUEST: %s %s"), *(request.header), *(request.body));
	SendMessage(request);
	//UE_LOG(LogTemp, Warning, TEXT("AWAITING RESPONSE"));
	FMessage response = response_received.Wait(0);
	//UE_LOG(LogTemp, Warning, TEXT("RESPONSE: %d %s"), response.body.Len(), *(response.body));
	return response.body;
}

UMessageClient::UMessageClient() {
	host = nullptr;
}

bool UMessageClient::Connect(FString ServerIp, int ServerPort) {
	if (IsConnected()) return false;
	FIPv4Address ip;
	FIPv4Address::Parse(ServerIp, ip);
	TSharedPtr<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	addr->SetIp(ip.Value);
	addr->SetPort(ServerPort);
	FSocket *HostT = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false);
	if (HostT->Connect(*addr)) {
		host = HostT;
		client_thread = new UMessageClientThread(host, MessageReceivedEvent, UnroutedMessageEvent);
		running_thread = FRunnableThread::Create(client_thread, TEXT("Tcp-messages Thread"));
		return true;
	}
	return false;
}

bool UMessageClient::IsConnected() {
	return (host != nullptr);
}

bool UMessageClient::Disconnect() {
	if (!IsConnected()) return false;
	client_thread->is_running = false;
	while(!client_thread->finished);
	client_thread->Stop();
	client_thread->Exit();
	delete client_thread;
	host->Close();
	host = nullptr;
	return true;
}

UMessageRoute *UMessageClient::AddRoute(FString header)
{
	auto c = NewObject<UMessageRoute>();
	client_thread->routes.Add(header, c);
	c->AddToRoot();
	return c;
}

UMessageClient* UMessageClient::NewMessageClient()
{
	auto c = NewObject<UMessageClient>();
	c->AddToRoot();
	return c;
}

FMessage UMessageClient::NewMessage(const FString& header, const FString& body)
{
	FMessage message(header);
	message.body = body;
	return message;
}

bool UMessageClient::Send(const FString& messageString) {
	const TCHAR* seriallizedChar = messageString.GetCharArray().GetData();
	int32 size = FCString::Strlen(seriallizedChar) + 1;
	int32 sent = 0;
	if (!host->Send((uint8*)TCHAR_TO_UTF8(seriallizedChar), size, sent))
	{
		Disconnect();
		return false;
	}
	return sent == size;
}

bool UMessageClient::Subscribe()
{
	auto response = SendRequest("!subscribe","");
	return response == "success";
}


FMessageParts::FMessageParts(const FMessage& message)
{
	int parts_count = (message.body.Len() / 1024) + 1;
	for (int i = 0; i < parts_count; i++) {
		auto part = FMessagePart();
		part.header = message.header;
		part.id = message.id;
		part.body = message.body.Mid(i * 1024, 1024);
		part.parts = parts_count;
		part.seq = i;
		parts.Add(part);
	}
}

bool FMessageParts::IsReady()
{
	if (parts.Num() == 0) return false;
	return parts[0].parts == parts.Num();
}

void FMessageParts::Add(FMessagePart part) {
	parts.Add(part);
}

FMessage FMessageParts::Join()
{
	if (parts.Num() == 0) return FMessage();
	auto message = GetPart(0).to_message();
	for (int i = 1; i < parts.Num(); i++) {
		message.body += GetPart(i).body;
	}
	return message;
}

FMessagePart& FMessageParts::GetPart(int seq)
{
	for (auto& p : parts) {
		if (p.seq == seq) return p;
	}
	return parts[0];
	// TODO: insert return statement here
}


FMessage FMessagePart::to_message()
{
	FMessage message;
	message.body = body;
	message.header = header;
	message.id = id;
	return message;
}

UMessageClientThread::UMessageClientThread(FSocket* host, FOnMessageReceived &message_received_event, FOnMessageReceived& unrouted_message_event) : 
	host(host), 
	message_received_event(message_received_event),
	unrouted_message_event(unrouted_message_event)
{
}

bool UMessageClientThread::Init()
{
	return true;
}

#define buffersize 40000
uint32 UMessageClientThread::Run()
{
	is_running = true;
	finished = false;
	FString messageString;
	FMessagePart message_part;
	while (is_running) {
		if (Receive(messageString)) {
			//UE_LOG(LogTemp, Warning, TEXT("data received, %d %s"), messageString.Len(), *messageString);
			FJsonObjectConverter::JsonObjectStringToUStruct(messageString, &message_part, 0, 0);
			if (!partial_messages.Contains(message_part.id)) {
				partial_messages.Add(message_part.id, FMessageParts());
			}
			partial_messages[message_part.id].Add(message_part);
			if (partial_messages[message_part.id].IsReady()) {
				auto message = partial_messages[message_part.id].Join();
				if (pending_responses.Contains(message.id)) {
					pending_responses[message.id]->Trigger(message);
					pending_responses.Remove(message.id);
				}
				else {
					message_received_event.Broadcast(message);
					if (routes.Contains(message.header)) {
						routes[message.header]->MessageReceived.Broadcast(message);
					}
					else {
						unrouted_message_event.Broadcast(message);
					}
				}
				partial_messages.Remove(message_part.id);
			}
		}
	}
	finished = true;
	return 0;
}

void UMessageClientThread::Stop()
{
	is_running = false;
}

bool UMessageClientThread::AddMessageEvent(FString message_id, FMessageEvent *event)
{
	if (pending_responses.Contains(message_id)) return false;
	auto& pending_response = pending_responses.Add(message_id, event);
	return true;
}

bool UMessageClientThread::Receive(FString& MessageString)
{
	uint8 buffer[buffersize];
	auto received_data = reinterpret_cast<const char*>(buffer);
	int offset = 0;
	is_running = true;
	finished = false;
	uint32 pendingData = 0;
	bool complete = false;
	bool broken_pipe = false;
	while ((host->HasPendingData(pendingData) || offset) && !complete && !broken_pipe)
	{
		while (!host->HasPendingData(pendingData));
		int32 read = 0;
		if (host->Recv(buffer + offset, 1, read)) {
			if (read == 0) {
				*(buffer + offset) = 0;
				broken_pipe = true;
				break;
			}
			if (*(buffer + offset) == 0) {
				complete = true;
				break;
			}
			offset++;
		}
		else {
			break;
		}
	}
	if (complete) {
		MessageString = FString(ANSI_TO_TCHAR(received_data));
		return true;
	} else {
		return false;
	}
}

FMessageEvent::FMessageEvent()
{
	ready = false;
}

FMessageEvent::~FMessageEvent()
{
}

FMessage FMessageEvent::Wait(int timeout)
{
	auto wait_start = FDateTime::UtcNow();
	while (!ready) { 
		if (timeout) {
			if ((FDateTime::UtcNow() - wait_start).GetTotalMilliseconds() > timeout){
				throw "Request timed out"; // timeout
			}
		}
	}
	return response;
}

void FMessageEvent::Trigger(FMessage message)
{
	response = message;
	ready = true;
}