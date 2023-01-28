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

// 0x8 (0x448 - 0x440)
// WidgetBlueprintGeneratedClass CollectionBookWidget.CollectionBookWidget_C
class UCollectionBookWidget_C : public UFortCollectionBookWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CollectionBookWidget_C");
		return Clss;
	}

	void Construct();
	void SlotItemComplete(class UFortAccountItem* ItemSlotted, class FName SlotId);
	void Destruct();
	void OnActivated();
	void ExecuteUbergraph_CollectionBookWidget(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, int32 CallFunc_CalculateBookXp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue2, class UFortAccountItem* K2Node_CustomEvent_ItemSlotted, class FName K2Node_CustomEvent_SlotId, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsValid_ReturnValue, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCollectionBookPrimaryPanel_C* K2Node_DynamicCast_AsCollection_Book_Primary_Panel, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
