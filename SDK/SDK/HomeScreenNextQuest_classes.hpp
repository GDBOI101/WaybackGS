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

// 0x79 (0x459 - 0x3E0)
// WidgetBlueprintGeneratedClass HomeScreenNextQuest.HomeScreenNextQuest_C
class UHomeScreenNextQuest_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         BorderQuestMapToggle;                              // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCampaignMapWidget_C*                  CampaignMapWidget;                                 // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 DetailsSwitcher;                                   // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHalloween_QuestMapWidget_C*           Halloween_QuestMapWidget;                          // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHalloweenQuestsTile_C*                HalloweenQuestsTile;                               // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageEvent;                                        // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainQuestsTile_C*                     MainQuestsTile;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 QuestMapSwitcher;                                  // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_HalloweenEvent_QuestMap;                   // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_QuestMap;                                  // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeboxEventDetails;                               // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeboxMainQuest;                                  // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     SwitchQuestMap;                                    // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              CutOffQuest;                                       // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MainQuestMapShown;                                 // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HomeScreenNextQuest_C");
		return Clss;
	}

	void Center_on_Play_Button(bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2);
	void HandleBeyondCutOffQuest(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void ConfigureScreenForEvent(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, enum class EFrontEndCamera CallFunc_GetFrontEndCamera_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void UpdateSceenBasedOnQuestMapShown(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue);
	void UpdateButtonBasedOnEventStatus(bool* EventIsActive, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue2, bool CallFunc_IsEventFlagActive_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void BndEvt__SwitchQuestMap_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Handle_Event_Flags_Changed(TArray<class FString>& ActiveEventFlags);
	void Construct();
	void HandleTabSwitch();
	void OnActivated();
	void CustomEvent_0(class UFortQuestItemDefinition* InFinalQuestItemDef);
	void ExecuteUbergraph_HomeScreenNextQuest(int32 EntryPoint, TArray<class FString>& K2Node_CustomEvent_ActiveEventFlags, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_UpdateButtonBasedOnEventStatus_EventIsActive, bool CallFunc_UpdateButtonBasedOnEventStatus_EventIsActive2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortQuestItemDefinition* K2Node_CustomEvent_inFinalQuestItemDef, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue5, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
