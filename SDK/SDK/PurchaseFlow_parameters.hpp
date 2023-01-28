#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose
struct UPurchaseFlowJSBridge_RequestClose_Params
{
public:
	class FString                                CloseInfo;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function PurchaseFlow.PurchaseFlowJSBridge.RECEIPT
struct UPurchaseFlowJSBridge_RECEIPT_Params
{
public:
	struct FPurchaseFlowReceiptParam             RECEIPT;                                           // 0x0(0x30)(Parm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
