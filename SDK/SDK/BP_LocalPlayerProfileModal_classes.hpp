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

// 0x68 (0x478 - 0x410)
// WidgetBlueprintGeneratedClass BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C
class UBP_LocalPlayerProfileModal_C : public UFortPlayerProfileModalWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	class UBP_LocalPlayerBannerEditor_C*         BP_LocalPlayerBannerEditor;                        // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_LocalPlayerProfileManagement_C*    BP_LocalPlayerProfileManagement;                   // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_0;                            // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CloseAction;                                       // 0x438(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                  LastChosenIcon;                                    // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LastChosenColor;                                   // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   PreviousAction;                                    // 0x458(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   NextAction;                                        // 0x468(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_LocalPlayerProfileModal_C");
		return Clss;
	}

	void Handle_Leaving_Banner_Editor();
	void HandleNextAction(bool* PassThrough, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void HandlePreviousAction(bool* PassThrough, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Setup_Input_Action_Handlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3);
	void HandleCloseAction(bool* PassThrough, bool CallFunc_Attempt_Leave_Picker_Left, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Activate_Widget(int32 Selection, bool K2Node_SwitchInteger_CmpSuccess);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_11_OpenBannerEditor__DelegateSignature();
	void BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_66_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void OnActivated();
	void Construct();
	void BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_14_CloseProfileModal__DelegateSignature();
	void BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature(class FName IconId, class FName ColorId);
	void OnDeactivated();
	void ExecuteUbergraph_BP_LocalPlayerProfileModal(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class FName K2Node_ComponentBoundEvent_IconId, class FName K2Node_ComponentBoundEvent_ColorId, bool CallFunc_HandleCloseAction_PassThrough, bool CallFunc_HandleCloseAction_PassThrough2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
