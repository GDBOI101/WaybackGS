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

// 0x10 (0x2C8 - 0x2B8)
// WidgetBlueprintGeneratedClass MulchRefundItemQuantityList.MulchRefundItemQuantityList_C
class UMulchRefundItemQuantityList_C : public UFortItemQuantityListBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(Transient, DuplicateTransient)
	class UVerticalBox*                          ContainerBox;                                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MulchRefundItemQuantityList_C");
		return Clss;
	}

	void AddListEntry(class UFortItemQuantityListEntryBase* ListEntry);
	void ExecuteUbergraph_MulchRefundItemQuantityList(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, class UFortItemQuantityListEntryBase* K2Node_Event_ListEntry, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
