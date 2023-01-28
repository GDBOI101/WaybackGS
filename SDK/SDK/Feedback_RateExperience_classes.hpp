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

// 0xD0 (0x4D8 - 0x408)
// WidgetBlueprintGeneratedClass Feedback_RateExperience.Feedback_RateExperience_C
class UFeedback_RateExperience_C : public UFortActivatablePanel
{
public:
	uint8                                        Pad_3E8C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	class ULegacyButtonIconText_C*               _1Star;                                            // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULegacyButtonIconText_C*               _2Star;                                            // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULegacyButtonIconText_C*               _3Star;                                            // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULegacyButtonIconText_C*               _4Star;                                            // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULegacyButtonIconText_C*               _5Star;                                            // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableText*                BodyEditable;                                      // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CancelButton;                                      // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          EntryVbox;                                         // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULegacyButtonIconText_C*               HiddenInitialStar;                                 // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_LStick_Left;                                 // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_LStick_Right;                                // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     SendButton;                                        // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        StarCount;                                         // 0x480(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ULegacyButtonIconText_C*>       StarButtons;                                       // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                          TooltipHeaders;                                    // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                          TooltipBodys;                                      // 0x4A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ULegacyButtonIconText_C*               LastClickedStar;                                   // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  FeedbackTitle;                                     // 0x4C0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Feedback_RateExperience_C");
		return Clss;
	}

	void CreateToolTip(class UWidget* Star_Widget, int32 WidgetIndex, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_Array_Get_Item, class FText CallFunc_Array_Get_Item2, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void CloseWidget(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void SendAnalyticsEvent(const class FString& FeedbackSentBy, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetText_ReturnValue, const struct FGameSummaryInfo& CallFunc_GetLastGameSummaryInfo_ReturnValue, const struct FGameSummaryInfo& CallFunc_GetLastGameSummaryInfo_ReturnValue2, class FText CallFunc_GetText_ReturnValue2, const class FString& K2Node_Select_Default, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void SetupStarButtons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortBaseButton* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class ULegacyButtonIconText_C*>& K2Node_MakeArray_Array);
	void SetStarCount(int32 Star_Count, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ULegacyButtonIconText_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue2);
	void Construct();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void BndEvt__5Star_K2Node_ComponentBoundEvent_868_On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered);
	void BndEvt__4Star_K2Node_ComponentBoundEvent_890_On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered);
	void BndEvt__3Star_K2Node_ComponentBoundEvent_907_On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered);
	void BndEvt__2Star_K2Node_ComponentBoundEvent_925_On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered);
	void BndEvt__1Star_K2Node_ComponentBoundEvent_944_On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered);
	void OnClientPartyStateChanged(enum class EFortPartyState PartyState);
	void OnStarButtonClicked(class UFortBaseButton* Button_Clicked);
	void OnInputMethodChanged(bool bUsingGamepad);
	void Destruct();
	void ExecuteUbergraph_Feedback_RateExperience(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2, enum class ESlateVisibility K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_Is_Hovered5, bool K2Node_ComponentBoundEvent_Is_Hovered4, bool K2Node_ComponentBoundEvent_Is_Hovered3, bool K2Node_ComponentBoundEvent_Is_Hovered2, bool K2Node_ComponentBoundEvent_Is_Hovered, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool Temp_bool_Variable2, enum class EFortPartyState K2Node_CustomEvent_PartyState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, bool CallFunc_IsUsingGamepad_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue5, class UFortBaseButton* K2Node_CustomEvent_Button_Clicked, bool CallFunc_IsUsingGamepad_ReturnValue4, class ULegacyButtonIconText_C* K2Node_DynamicCast_AsLegacy_Button_Icon_Text, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue6, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue5, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue7, bool K2Node_CustomEvent_bUsingGamepad, bool CallFunc_IsUsingGamepad_ReturnValue6, enum class ESlateVisibility K2Node_Select2_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortPartyContext* CallFunc_GetContext_ReturnValue8);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
