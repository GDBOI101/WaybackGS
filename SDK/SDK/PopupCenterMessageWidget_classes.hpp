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

// 0x18 (0x280 - 0x268)
// WidgetBlueprintGeneratedClass PopupCenterMessageWidget.PopupCenterMessageWidget_C
class UPopupCenterMessageWidget_C : public UFortHUDCenterPopupMessageWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(Transient, DuplicateTransient)
	class UPopupCenterMessageModalPanel_C*       CenterPopupModal;                                  // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          UpdateStateTimer;                                  // 0x278(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PopupCenterMessageWidget_C");
		return Clss;
	}

	void OnModalDisplayed(enum class ECenterPopupMessageStateEnum NewState, class UCommonActivatablePanel* ModalPopup);
	void Construct();
	void UpdateStateEvent();
	void Destruct();
	void ExecuteUbergraph_PopupCenterMessageWidget(int32 EntryPoint, enum class ECenterPopupMessageStateEnum K2Node_Event_NewState, class UCommonActivatablePanel* K2Node_Event_ModalPopup, class UPopupCenterMessageModalPanel_C* K2Node_DynamicCast_AsPopup_Center_Message_Modal_Panel, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
