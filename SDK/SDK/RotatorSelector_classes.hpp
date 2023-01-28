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

// 0x50 (0x288 - 0x238)
// WidgetBlueprintGeneratedClass RotatorSelector.RotatorSelector_C
class URotatorSelector_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      DisplayText;                                       // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextRotator_C*                        TextRotator;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SelectedIndex;                                     // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A46[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  HoverText;                                         // 0x258(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                  Selection_Changed;                                 // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UCommonTextBlock*                      Tab_Tooltip_Text;                                  // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RotatorSelector_C");
		return Clss;
	}

	void Update_Options(TArray<class FText>& NewParam);
	void Center_on_Widget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Initialize(class FText Display_Text, TArray<class FText>& Options, class FText Hover_Text, class UCommonTextBlock* Tab_Tooltip);
	void Update_Row_Selector(int32 Currently_Selected);
	void Construct();
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature(int32 Value);
	void ExecuteUbergraph_RotatorSelector(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Value, const struct FPointerEvent& K2Node_Event_MouseEvent2, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent);
	void Selection_Changed__DelegateSignature(int32 Selected_Index);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
