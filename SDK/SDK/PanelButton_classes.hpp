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

// 0x30 (0x8D0 - 0x8A0)
// WidgetBlueprintGeneratedClass PanelButton.PanelButton_C
class UPanelButton_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8A0(0x8)(Transient, DuplicateTransient)
	class UNamedSlot*                            ContentSlot;                                       // 0x8A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                ControllerInputStyle;                              // 0x8B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                MouseKeyboardStyle;                                // 0x8B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ButtonClickAction;                                 // 0x8C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PanelButton_C");
		return Clss;
	}

	void UpdateStyle(bool bUsingGamepad, class FText ActionText);
	void InitializeButton();
	void UpdateTextAndStyle(class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction);
	void OnActionProgress(float HeldPercent);
	void OnActionComplete();
	void Construct();
	void OnHovered();
	void OnUnhovered();
	void ExecuteUbergraph_PanelButton(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool K2Node_Event_IsDesignTime, bool CallFunc_HasAnyChildren_ReturnValue, bool Temp_bool_Variable, bool K2Node_ComponentBoundEvent_bUsingGamepad, enum class ESlateVisibility K2Node_Select_Default, const struct FDataTableRowHandle& K2Node_Event_NewTriggeredAction, float K2Node_Event_HeldPercent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
