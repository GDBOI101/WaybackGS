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

// 0x30 (0x268 - 0x238)
// WidgetBlueprintGeneratedClass MessageCenterListItem.MessageCenterListItem_C
class UMessageCenterListItem_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      Description;                                       // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Selection;                                         // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortUINotification*                   MESSAGE;                                           // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MessageCenterListItem_C");
		return Clss;
	}

	int32 DoesItemHaveChildren();
	int32 GetIndentLevel();
	bool IsItemExpanded();
	class UObject* GetData();
	void ShowText(class FText Text, class UCommonTextBlock* TextBlock, class UCommonTextBlock* LocalTextBlock, class FText LocalText, bool CallFunc_TextIsEmpty_ReturnValue);
	void SetMessage(class UFortUINotification* MESSAGE);
	void OnAcquireFromPool();
	void OnReleaseToPool();
	void Private_OnExpanderArrowShiftClicked();
	void RegisterOnClicked(UDelegateProperty_& Callback);
	void SetExpanded(bool bExpanded);
	void SetIndexInList(int32 InIndexInList);
	void ToggleExpansion();
	void Reset();
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void Construct();
	void SetSelected(bool bSelected);
	void ExecuteUbergraph_MessageCenterListItem(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, UDelegateProperty_ K2Node_Event_Callback, bool K2Node_Event_bExpanded, int32 K2Node_Event_InIndexInList, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, class UFortUINotification* K2Node_DynamicCast_AsFort_UINotification, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bSelected, enum class ESlateVisibility K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
