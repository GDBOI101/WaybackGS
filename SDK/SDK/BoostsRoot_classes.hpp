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

// 0x48 (0x428 - 0x3E0)
// WidgetBlueprintGeneratedClass BoostsRoot.BoostsRoot_C
class UBoostsRoot_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	class UHorizontalTabList_C*                  BoostsTabs;                                        // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CurrentTabSwitcher;                                // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SelectedOption;                                    // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Current_Tab;                                       // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Accept_Input;                                      // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Video_Tab_Selected;                                // 0x411(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Apply_Visible;                                     // 0x412(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36A7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortOptionsTab*>               AllTabWidgets;                                     // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BoostsRoot_C");
		return Clss;
	}

	void HandleStore(bool* PassThrough, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void HandleCursorModeChanging(bool IsEnabled, bool CallFunc_Not_PreBool_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue);
	void Set_Input_Action_Handlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
	void HandleBack(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Construct();
	void Destruct();
	void OnActivated();
	void BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_29_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void ExecuteUbergraph_BoostsRoot(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, bool Temp_bool_Variable, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UAccountBonuses_C* K2Node_DynamicCast_AsAccount_Bonuses, bool K2Node_DynamicCast_bSuccess2, class UXpBoosts_C* K2Node_DynamicCast_AsXp_Boosts, bool K2Node_DynamicCast_bSuccess3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue, enum class EInputActionState K2Node_Select_Default, class UFortHUDContext* CallFunc_GetContext_ReturnValue3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
