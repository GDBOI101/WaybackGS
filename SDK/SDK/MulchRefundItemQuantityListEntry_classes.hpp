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

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C
class UMulchRefundItemQuantityListEntry_C : public UFortItemQuantityListEntryBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UItemCountRecycling_C*                 ItemCountRecycling;                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MulchRefundItemQuantityListEntry_C");
		return Clss;
	}

	void UpdateItemAndQuantity(bool DirectlySetQuantity, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue);
	void HandleDifferentItemOrQuantitySetBP(bool IsBeingReset);
	void Construct();
	void ExecuteUbergraph_MulchRefundItemQuantityListEntry(int32 EntryPoint, bool K2Node_Event_IsBeingReset);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
