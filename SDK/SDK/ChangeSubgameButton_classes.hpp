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

// 0x31 (0x269 - 0x238)
// WidgetBlueprintGeneratedClass ChangeSubgameButton.ChangeSubgameButton_C
class UChangeSubgameButton_C : public UFortSubGameSelectButtonBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     ChangeSubgame;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxContainer;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnClicked;                                         // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClass*                                ButtonStyle;                                       // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBrushSize                    BrushSize;                                         // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChangeSubgameButton_C");
		return Clss;
	}

	void DialogResult_3A1F478D47C301F9F1E029927174E059(enum class EFortDialogResult Result, class FName ResultName);
	void Construct();
	void BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void UpdateButtonState(bool bVisible);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_ChangeSubgameButton(int32 EntryPoint, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, bool Temp_bool_Variable, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, class UCommonButton* K2Node_ComponentBoundEvent_Button, class FText CallFunc_MakeLiteralText_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bVisible, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility K2Node_Select_Default, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent);
	void OnClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
