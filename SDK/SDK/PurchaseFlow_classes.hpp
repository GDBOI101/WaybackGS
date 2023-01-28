#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class PurchaseFlow.PurchaseFlowJSBridge
class UPurchaseFlowJSBridge : public UObject
{
public:
	uint8                                        Pad_1ACF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PurchaseFlowJSBridge");
		return Clss;
	}

	void RequestClose(const class FString& CloseInfo);
	void RECEIPT(const struct FPurchaseFlowReceiptParam& RECEIPT);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
