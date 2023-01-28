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

// 0x80 (0x460 - 0x3E0)
// WidgetBlueprintGeneratedClass ObjectivesPage.ObjectivesPage_C
class UObjectivesPage_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	class UActiveModifiersPanelContent_C*        ActiveModifiersPanelContent;                       // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     BadgesButton;                                      // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBadgesEarnedPanelContent_C*           BadgesEarnedPanelContent_0;                        // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ContentPanelScrollBox;                             // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ContentPanelSwitcher;                              // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     MissionButton;                                     // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMissionPanelContent_C*                MissionPanelContent_0;                             // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ModifiersButton;                                   // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ObjectivesButton;                                  // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObjectivesPanelContent_C*             ObjectivesPanelContent_0;                          // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Scorebutton;                                       // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTeamScorePanelContent_C*              TeamScorePanelContent_0;                           // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UZoneDetails_C*                        ZoneDetails;                                       // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonGroup*                    ButtonGroup;                                       // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ObjectivesPage_C");
		return Clss;
	}

	void MissionHasModifiers(bool* MissionHasModifiers, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasActiveGameplayModifiers_ReturnValue);
	void ConfigureModifiersView(bool ShowModifiers, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, TArray<class UFortGameplayModifierItemDefinition*>& CallFunc_GetActiveModifiers_OutActiveModifiers);
	void HandleInventory(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	void HandleSelectedButtonChanged(class UCommonButton* InButton, int32 InButtonIndex);
	void HandleBack(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	void Construct();
	void OnActivated();
	void Destruct();
	void OnActiveGameplayModifiersChanged_Event_0(TArray<class UFortGameplayModifierItemDefinition*>& AppliedModifiers);
	void ExecuteUbergraph_ObjectivesPage(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UCommonButtonGroup* CallFunc_SpawnObject_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, int32 CallFunc_GetSelectedButtonIndex_ReturnValue, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle3, bool CallFunc_MissionHasModifiers_MissionHasModifiers, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, TArray<class UFortGameplayModifierItemDefinition*>& K2Node_CustomEvent_AppliedModifiers, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
