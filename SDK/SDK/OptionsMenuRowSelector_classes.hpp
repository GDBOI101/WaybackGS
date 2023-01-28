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

// 0x58 (0x288 - 0x230)
// WidgetBlueprintGeneratedClass OptionsMenuRowSelector.OptionsMenuRowSelector_C
class UOptionsMenuRowSelector_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      RowSelectorText;                                   // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        SelectorButtonsBox;                                // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  Selector_Button_Selected;                          // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FText>                          Hover_Texts;                                       // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCommonButtonGroup*                    Selector_Buttons;                                  // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Common_Button_Group_Type;                          // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      Tab_Tooltip_Text;                                  // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ButtonStyle;                                       // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptionsMenuRowSelector_C");
		return Clss;
	}

	void Button_Hovered(class UCommonButton* Button_Hovered, int32 CallFunc_GetChildrenCount_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void Deselect_All_Rows();
	void Update_Row_Selector(int32 Tab_Number);
	void Initialize_Row_Selector(class FText Row_Text, TArray<class FText>& Buttons, TArray<class FText>& Hover_Texts, bool Require_Selection, class UCommonTextBlock* Tab_Tooltip, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UIconTextButton_C* CallFunc_Create_ReturnValue, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess);
	void Construct();
	void OnSelectedButtonChanged_Event_0(class UCommonButton* AssociatedButton, int32 ButtonIndex);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_OptionsMenuRowSelector(int32 EntryPoint, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UIconTextButton_C* CallFunc_Create_ReturnValue, class UCommonButton* K2Node_CustomEvent_AssociatedButton, int32 K2Node_CustomEvent_ButtonIndex, const struct FPointerEvent& K2Node_Event_MouseEvent, class UCommonButtonGroup* CallFunc_SpawnObject_ReturnValue, bool K2Node_Event_IsDesignTime, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText Temp_text_Variable, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Selector_Button_Selected__DelegateSignature(int32 Tab_Id);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
