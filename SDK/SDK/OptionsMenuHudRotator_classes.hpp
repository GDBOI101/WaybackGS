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

// 0x58 (0x290 - 0x238)
// WidgetBlueprintGeneratedClass OptionsMenuHudRotator.OptionsMenuHudRotator_C
class UOptionsMenuHudRotator_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      DisplayText;                                       // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextRotator_C*                        TextRotator;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SelectedIndex;                                     // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A71[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  HoverText;                                         // 0x258(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                  Selection_Changed;                                 // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UCommonTextBlock*                      Tab_Tooltip_Text;                                  // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Gameplay_Tag;                                      // 0x288(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptionsMenuHudRotator_C");
		return Clss;
	}

	int32 DoesItemHaveChildren();
	int32 GetIndentLevel();
	bool IsItemExpanded();
	class UObject* GetData();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Update_Options(TArray<class FText>& NewParam);
	void Center_on_Widget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Update_Row_Selector(int32 Currently_Selected);
	void OnAcquireFromPool();
	void OnReleaseToPool();
	void Private_OnExpanderArrowShiftClicked();
	void RegisterOnClicked(UDelegateProperty_& Callback);
	void SetExpanded(bool bExpanded);
	void SetIndexInList(int32 InIndexInList);
	void SetSelected(bool bSelected);
	void ToggleExpansion();
	void Reset();
	void Construct();
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature(int32 Value);
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void ExecuteUbergraph_OptionsMenuHudRotator(int32 EntryPoint, UDelegateProperty_ K2Node_Event_Callback, bool K2Node_Event_bExpanded, int32 K2Node_Event_InIndexInList, bool K2Node_Event_bSelected, const struct FPointerEvent& K2Node_Event_MouseEvent2, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, int32 K2Node_ComponentBoundEvent_Value, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, class UFortHUDVisibilityData* K2Node_DynamicCast_AsFort_HUDVisibility_Data, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Conv_BoolToInt_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array);
	void Selection_Changed__DelegateSignature(int32 Selected_Index, const struct FGameplayTag& Gameplay_Tag);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
