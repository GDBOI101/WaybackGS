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

// 0xA0 (0x4B0 - 0x410)
// WidgetBlueprintGeneratedClass AthenaCustomizationTab.AthenaCustomizationTab_C
class UAthenaCustomizationTab_C : public UAthenaCustomizationScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      IntroPicker;                                       // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* BackpackSlot;                                      // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationBannerButton_C*    BannerSlot;                                        // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* BattleBusSlot;                                     // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* CharacterSlot;                                     // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* DanceSlot;                                         // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider;                                           // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* GliderSlot;                                        // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* HarvestToolSlot;                                   // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* HatSlot;                                           // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HeaderItemType;                                    // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* LoadScreenSlot;                                    // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerRankEmblem_C*                   PlayerRankEmblem_C_9;                              // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* TauntSlot;                                         // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* VictoryPoseSlot;                                   // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         PickingCosmetic;                                   // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_244A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               PickingRestoreFocusWidget;                         // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressModalWidget_C*                ProgressModal;                                     // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_LocalPlayerProfileModal_C*         NewLocalPlayerWidget;                              // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaCustomizationTab_C");
		return Clss;
	}

	void SelectFirstWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void ShowThrobber(class UFortUIManagerWidget_NUI* UIManager, class FText Temp_text_Variable, class FText Temp_text_Variable2, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void RefreshInputActions(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, enum class EInputActionState K2Node_Select_Default);
	void SelectInitialWidgetForGamepad();
	void EndPickingCustomization(bool RestoreFocus, float CallFunc_GetEndTime_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void BeginPickingCustomization(enum class EAthenaCustomizationCategory Category, class UWidget* WidgetToReturnFocusTo, class FText HeaderText, enum class EAthenaCustomizationCategory NewLocalVar_0);
	void RegisterInputActions();
	void RegisterCancel(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void HandleCancel(bool* PassThrough);
	void OnActivated();
	void OnInputModeChanged(bool bUsingGamepad);
	void OnDeactivated();
	void Construct();
	void BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature();
	void BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature();
	void BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__LoadScreenSlot_K2Node_ComponentBoundEvent_40_OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel);
	void BndEvt__HatSlot_K2Node_ComponentBoundEvent_335_OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel);
	void BndEvt__BackpackSlot_K2Node_ComponentBoundEvent_344_OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel);
	void BndEvt__BattleBusSlot_K2Node_ComponentBoundEvent_354_OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel);
	void BndEvt__DanceSlot_K2Node_ComponentBoundEvent_365_OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel);
	void BndEvt__TauntSlot_K2Node_ComponentBoundEvent_377_OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel);
	void BndEvt__VictoryPoseSlot_K2Node_ComponentBoundEvent_390_OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel);
	void BndEvt__GliderSlot_K2Node_ComponentBoundEvent_540_OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel);
	void BndEvt__CharacterSlot_K2Node_ComponentBoundEvent_785_OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel);
	void BndEvt__HarvestToolSlot_K2Node_ComponentBoundEvent_800_OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel);
	void ExecuteUbergraph_AthenaCustomizationTab(int32 EntryPoint, enum class EAthenaCustomizationCategory K2Node_ComponentBoundEvent_CustomizationType, class UCommonButton* K2Node_ComponentBoundEvent_Button, class FText K2Node_ComponentBoundEvent_BannerLabel, bool K2Node_Event_bUsingGamepad, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaBannerSelectModal_C* CallFunc_Create_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button11, enum class EAthenaCustomizationCategory K2Node_ComponentBoundEvent_CustomizationType10, class UCommonButton* K2Node_ComponentBoundEvent_Button10, class FText K2Node_ComponentBoundEvent_BannerLabel10, enum class EAthenaCustomizationCategory K2Node_ComponentBoundEvent_CustomizationType9, class UCommonButton* K2Node_ComponentBoundEvent_Button9, class FText K2Node_ComponentBoundEvent_BannerLabel9, enum class EAthenaCustomizationCategory K2Node_ComponentBoundEvent_CustomizationType8, class UCommonButton* K2Node_ComponentBoundEvent_Button8, class FText K2Node_ComponentBoundEvent_BannerLabel8, enum class EAthenaCustomizationCategory K2Node_ComponentBoundEvent_CustomizationType7, class UCommonButton* K2Node_ComponentBoundEvent_Button7, class FText K2Node_ComponentBoundEvent_BannerLabel7, enum class EAthenaCustomizationCategory K2Node_ComponentBoundEvent_CustomizationType6, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class FText K2Node_ComponentBoundEvent_BannerLabel6, enum class EAthenaCustomizationCategory K2Node_ComponentBoundEvent_CustomizationType5, class UCommonButton* K2Node_ComponentBoundEvent_Button5, class FText K2Node_ComponentBoundEvent_BannerLabel5, enum class EAthenaCustomizationCategory K2Node_ComponentBoundEvent_CustomizationType4, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class FText K2Node_ComponentBoundEvent_BannerLabel4, enum class EAthenaCustomizationCategory K2Node_ComponentBoundEvent_CustomizationType3, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class FText K2Node_ComponentBoundEvent_BannerLabel3, enum class EAthenaCustomizationCategory K2Node_ComponentBoundEvent_CustomizationType2, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class FText K2Node_ComponentBoundEvent_BannerLabel2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
