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

// 0x20 (0x8C0 - 0x8A0)
// WidgetBlueprintGeneratedClass ItemEntry.ItemEntry_C
class UItemEntry_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8A0(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      Name;                                              // 0x8A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  Entry_Selected;                                    // 0x8B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemEntry_C");
		return Clss;
	}

	int32 DoesItemHaveChildren();
	int32 GetIndentLevel();
	bool IsItemExpanded();
	class UObject* GetData();
	void OnAcquireFromPool();
	void OnReleaseToPool();
	void Private_OnExpanderArrowShiftClicked();
	void RegisterOnClicked(UDelegateProperty_& Callback);
	void SetExpanded(bool bExpanded);
	void SetIndexInList(int32 InIndexInList);
	void SetSelected(bool bSelected);
	void ToggleExpansion();
	void Reset();
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void Construct();
	void ExecuteUbergraph_ItemEntry(int32 EntryPoint, UDelegateProperty_ K2Node_Event_Callback, bool K2Node_Event_bExpanded, int32 K2Node_Event_InIndexInList, bool K2Node_Event_bSelected, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList);
	void Entry_Selected__DelegateSignature(class UFortItemDefinition* Items_Definition);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
