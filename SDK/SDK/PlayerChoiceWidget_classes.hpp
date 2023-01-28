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

// 0xAD (0x2ED - 0x240)
// WidgetBlueprintGeneratedClass PlayerChoiceWidget.PlayerChoiceWidget_C
class UPlayerChoiceWidget_C : public UFortUserChoiceWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UBasicStrokeBox_C*                     BasicStrokeBox_26;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          ChoicePanel;                                       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DecriptionText;                                    // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_21;                                          // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollButtonPanel;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Choice1Text;                                       // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Choice2Text;                                       // 0x288(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                  SurvivorStoryChoiceSelected;                       // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        SelectedChoice;                                    // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Choice3Text;                                       // 0x2B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Description;                                       // 0x2D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        MenuID;                                            // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CompletedSuccessfully;                             // 0x2EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerChoiceWidget_C");
		return Clss;
	}

	class UPlayerChoiceButtonWidget_C* CreateButtonAndSetText(const struct FChoiceDataEntry& ChoiceData, int32 ChoiceID, class UPlayerChoiceButtonWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	class FText GetText_0();
	void Get_TextBlock_Choice3_Text_0();
	void Get_TextBlock_Choice2_Text_0();
	void Get_TextBlock_Choice1_Text_0();
	void Construct();
	void ChoiceSelected(int32 ChoiceID);
	void SetChoices(struct FChoiceData& ChoiceItems);
	void Destruct();
	void ExecuteUbergraph_PlayerChoiceWidget(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_CustomEvent_ChoiceID, const struct FChoiceData& K2Node_Event_ChoiceItems, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FChoiceDataEntry& CallFunc_Array_Get_Item, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UPlayerChoiceButtonWidget_C* CallFunc_CreateButtonAndSetText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller2, bool K2Node_DynamicCast_bSuccess2);
	void SurvivorStoryChoiceSelected__DelegateSignature(int32 SelectedChoice);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
