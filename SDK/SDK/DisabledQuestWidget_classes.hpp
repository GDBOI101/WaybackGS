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

// 0x50 (0x288 - 0x238)
// WidgetBlueprintGeneratedClass DisabledQuestWidget.DisabledQuestWidget_C
class UDisabledQuestWidget_C : public UCommonUserWidget
{
public:
	class UDailyQuestRewardInfo_C*               DailyQuestRewardInfo;                              // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ObjectivesBox;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      QuestName;                                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestItem*                        Quest;                                             // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortQuestObjectiveInfo*>       VisibleObjectives;                                 // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortQuestItemDefinition*              QuestDefinition;                                   // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              ObjectiveDefintions;                               // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortMcpQuestObjectiveInfo>    Objectives;                                        // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DisabledQuestWidget_C");
		return Clss;
	}

	void CreateAllObjectiveWidgets(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFortMcpQuestObjectiveInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDailyQuestObjectiveEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void UpdateObjectiveWidgets();
	void FilterObjectives(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FFortMcpQuestObjectiveInfo>& CallFunc_GetObjectives_BP_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FFortMcpQuestObjectiveInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetQuestItem(class UFortQuestItemDefinition* QuestDefinition, const struct FFortRewardInfo& CallFunc_GetRewardInfo_BP_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
