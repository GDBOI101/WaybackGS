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

// 0x20 (0x2A8 - 0x288)
// WidgetBlueprintGeneratedClass TabGameOptions.TabGameOptions_C
class UTabGameOptions_C : public UFortGameOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(Transient, DuplicateTransient)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_0;                            // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalTabList_C*                  GameTabs;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TooltipDisplay;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabGameOptions_C");
		return Clss;
	}

	void Construct();
	void UpdateOptionsTab();
	void CenterOnTab();
	void Tab_Settings_Changed();
	void BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_1004_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void BndEvt__GameTabs_K2Node_ComponentBoundEvent_21_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void ExecuteUbergraph_TabGameOptions(int32 EntryPoint, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, int32 CallFunc_GetNumWidgets_ReturnValue, class UTabGameOptions_C* K2Node_DynamicCast_AsTab_Game_Options, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UTabGameOptions_C* K2Node_DynamicCast_AsTab_Game_Options2, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, class UTabGameOptions_C* K2Node_DynamicCast_AsTab_Game_Options3, bool K2Node_DynamicCast_bSuccess3, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UTabGameOptionsMain_C* CallFunc_Create_ReturnValue, bool CallFunc_RegisterFortTab_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo2, class APlayerController* CallFunc_GetPlayerController_ReturnValue2, class UTabGameOptionsHud_C* CallFunc_Create_ReturnValue2, bool CallFunc_RegisterFortTab_ReturnValue2, class UPanelSlot* CallFunc_AddChild_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue3, class UTabGameOptionsMain_C* CallFunc_Create_ReturnValue3, class UPanelSlot* CallFunc_AddChild_ReturnValue3, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess4, class UWidget* CallFunc_GetChildAt_ReturnValue2, class UTabGameOptions_C* K2Node_DynamicCast_AsTab_Game_Options4, bool K2Node_DynamicCast_bSuccess5, int32 CallFunc_GetChildrenCount_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue2, bool CallFunc_IsInZone_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
