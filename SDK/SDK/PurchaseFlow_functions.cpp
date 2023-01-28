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


// Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose
// (Final, Native, Public)
// Parameters:
// class FString                      CloseInfo                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPurchaseFlowJSBridge::RequestClose(const class FString& CloseInfo)
{
	static auto Func = Class->GetFunction("PurchaseFlowJSBridge", "RequestClose");

	Params::UPurchaseFlowJSBridge_RequestClose_Params Parms;
	Parms.CloseInfo = CloseInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function PurchaseFlow.PurchaseFlowJSBridge.RECEIPT
// (Final, Native, Public)
// Parameters:
// struct FPurchaseFlowReceiptParam   RECEIPT                                                          (Parm, NativeAccessSpecifierPublic)

void UPurchaseFlowJSBridge::RECEIPT(const struct FPurchaseFlowReceiptParam& RECEIPT)
{
	static auto Func = Class->GetFunction("PurchaseFlowJSBridge", "RECEIPT");

	Params::UPurchaseFlowJSBridge_RECEIPT_Params Parms;
	Parms.RECEIPT = RECEIPT;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
