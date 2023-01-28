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

// 0x40 (0x460 - 0x420)
// WidgetBlueprintGeneratedClass AthenaCompendiumTab.AthenaCompendiumTab_C
class UAthenaCompendiumTab_C : public UAthenaCompendiumScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(Transient, DuplicateTransient)
	class UHorizontalTabList_C*                  CompendiumBundleTabList;                           // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CompendiumSwitcher;                                // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFortCompendiumBundleDefinition*> UnlockableBundles;                                 // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UFortCompendiumBundle*>         ActiveBundles;                                     // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FName                                  LastActiveTab;                                     // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaCompendiumTab_C");
		return Clss;
	}

	void HandleTabButtonCreated(class FName TabId, class UCommonButton* Button, class UCommonButton* LocalTab, class FName LocalTabId, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_TextToUpper_ReturnValue);
	void HandleTabSelected(class FName TabId, class FName CallFunc_GetActiveTab_ReturnValue);
	void ResetTabs();
	void CreateTab(class UFortCompendiumBundleDefinition* CompendiumBundleDefinition, class UWidget* ContentWidget, class FText CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetPersistentName_ReturnValue, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_RegisterFortTab_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void UpdateCompendiumViews(const TArray<class UFortCompendiumBundle*>& CompendiumBundles, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable2, int32 CallFunc_Array_Length_ReturnValue, class UFortCompendiumBundleDefinition* CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCompendiumBundleUpsellPage_C* CallFunc_Create_ReturnValue, class UFortCompendiumBundle* CallFunc_Array_Get_Item2, class UFortCompendiumBundleDefinition* CallFunc_GetCompendiumBundleDefinitionBP_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UCompendiumBundle_C* CallFunc_Create_ReturnValue2, TArray<class UFortCompendiumBundle*>& CallFunc_GetCompendiumBundles_OutActiveBundles, TArray<class UFortCompendiumBundleDefinition*>& CallFunc_GetCompendiumBundles_OutUnlockableBundles);
	void HandleCompendiumChanged();
	void RegisterEventListeners(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Construct();
	void OnActivated();
	void OnDeactivated();
	void BndEvt__CompendiumBundleTabList_K2Node_ComponentBoundEvent_45_OnTabSelected__DelegateSignature(class FName TabId);
	void BndEvt__CompendiumBundleTabList_K2Node_ComponentBoundEvent_56_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void ExecuteUbergraph_AthenaCompendiumTab(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class FName K2Node_ComponentBoundEvent_TabId2, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
