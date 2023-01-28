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

// 0x30 (0x268 - 0x238)
// WidgetBlueprintGeneratedClass DailyQuestWidget.DailyQuestWidget_C
class UDailyQuestWidget_C : public UCommonUserWidget
{
public:
	class UDailyQuestRewardInfo_C*               DailyQuestRewardInfo;                              // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ObjectivesBox;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      QuestName;                                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestItem*                        Quest;                                             // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortQuestObjectiveInfo*>       VisibleObjectives;                                 // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DailyQuestWidget_C");
		return Clss;
	}

	void CreateAllObjectiveWidgets(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortQuestObjectiveInfo* CallFunc_Array_Get_Item, class UDailyQuestObjectiveEntry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void UpdateObjectiveWidgets(int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UDailyQuestObjectiveEntry_C* K2Node_DynamicCast_AsDaily_Quest_Objective_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void FilterObjectives(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortQuestObjectiveInfo* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsVisibleToUser_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetQuestItem(class UFortQuestItem* Quest, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, const struct FFortRewardInfo& CallFunc_GetRewardInfo_BP_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
