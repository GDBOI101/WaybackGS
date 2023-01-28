#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function UACCommon.UACNetComponent.SendPacketToServer
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// uint8                              Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      Packet                                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UUACNetComponent::SendPacketToServer(uint8 Type, TArray<uint8>& Packet)
{
	static auto Func = Class->GetFunction("UACNetComponent", "SendPacketToServer");

	Params::UUACNetComponent_SendPacketToServer_Params Parms;
	Parms.Type = Type;
	Parms.Packet = Packet;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UACCommon.UACNetComponent.SendPacketToClient
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// uint8                              Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      Packet                                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UUACNetComponent::SendPacketToClient(uint8 Type, TArray<uint8>& Packet)
{
	static auto Func = Class->GetFunction("UACNetComponent", "SendPacketToClient");

	Params::UUACNetComponent_SendPacketToClient_Params Parms;
	Parms.Type = Type;
	Parms.Packet = Packet;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UACCommon.UACNetComponent.SendClientHello
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void UUACNetComponent::SendClientHello()
{
	static auto Func = Class->GetFunction("UACNetComponent", "SendClientHello");

	Params::UUACNetComponent_SendClientHello_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
