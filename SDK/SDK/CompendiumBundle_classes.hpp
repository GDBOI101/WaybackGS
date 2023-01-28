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

// 0x49 (0x469 - 0x420)
// WidgetBlueprintGeneratedClass CompendiumBundle.CompendiumBundle_C
class UCompendiumBundle_C : public UAthenaCompendiumScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(Transient, DuplicateTransient)
	class UCommonWidgetSwitcher*                 CompendiumPageSwitcher;                            // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalTabList_C*                  CompendiumPageTabList;                             // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortCompendiumBundle*                 CompendiumBundle;                                  // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortCompendiumItem*>           ActiveCompendiums;                                 // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UFortCompendiumItemDefinition*> UnlockableCompendiums;                             // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FName                                  LastActiveTab;                                     // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bConstructed;                                      // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CompendiumBundle_C");
		return Clss;
	}

	void HandleTabSelected(class FName TabId, class FName CallFunc_GetActiveTab_ReturnValue);
	void HandleTabCreated(class FName TabId, class UCommonButton* Button, class UCommonButton* LocalTab, class FName LocalTabId, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_TextToUpper_ReturnValue);
	void CreateTab(class UFortCompendiumItemDefinition* CompendiumItemDefinition, class UWidget* ContentWidget, class FText CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetPersistentName_ReturnValue, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_RegisterFortTab_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void ResetTabs();
	void UpdateTabs(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UFortCompendiumItem*>& CallFunc_GetCompendiumItems_OutActiveItems, TArray<class UFortCompendiumItemDefinition*>& CallFunc_GetCompendiumItems_OutUnlockableItems, int32 Temp_int_Array_Index_Variable2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, class UCompendiumUpsellPage_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UCompendiumPage_C* CallFunc_Create_ReturnValue2, class UFortCompendiumItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortCompendiumItemDefinition* CallFunc_GetCompendiumDefinitionBP_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, class UFortCompendiumItemDefinition* CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue2);
	void SetBundle(class UFortCompendiumBundle* CompendiumBundle);
	void Construct();
	void BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature(class FName TabId);
	void BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_12_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void OnDeactivated();
	void OnActivated();
	void ExecuteUbergraph_CompendiumBundle(int32 EntryPoint, class FName K2Node_ComponentBoundEvent_TabId2, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
