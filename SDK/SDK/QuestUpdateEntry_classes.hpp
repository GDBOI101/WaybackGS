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

// 0x6A (0x2A2 - 0x238)
// WidgetBlueprintGeneratedClass QuestUpdateEntry.QuestUpdateEntry_C
class UQuestUpdateEntry_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Disappear;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Appear;                                            // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ObjectivesBox;                                     // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         OuterBorder;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      QuestName;                                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Separator;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  AllQuestUpdatesFinished;                           // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FDynamicQuestUpdateInfo>       QuestUpdates;                                      // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        UpdateTweenTime;                                   // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostUpdatesDelay;                                  // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          PostUpdatesDelayTimerHandle;                       // 0x298(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         bIsAppearAnimationFinished;                        // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bConfigureAsAnnouncement;                          // 0x2A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuestUpdateEntry_C");
		return Clss;
	}

	void GetNumDisplayedObjectives(int32* NumObjectives, const TArray<class UFortQuestObjectiveInfo*>& UniqueObjectives, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDynamicQuestUpdateInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void CreateObjectiveEntryWidget(class UFortQuestObjectiveInfo* Objective, int32 LastAchievedCount, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UQuestObjectiveEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void OnDisappearAnimationFinished();
	void OnPostUpdatesDelayFinished(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void HaveAllUpdatesFinished(bool* Result, bool bAllUpdatesFinished, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDynamicQuestUpdateInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasUpdateFinished_Result, bool CallFunc_BooleanAND_ReturnValue);
	void IsUpdateActive(struct FDynamicQuestUpdateInfo& Update, bool* Result, bool CallFunc_HasUpdateStarted_Result, bool CallFunc_HasUpdateFinished_Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetObjectiveWidget(class UFortQuestObjectiveInfo* QuestObjective, class UQuestObjectiveEntry_C** ObjectiveWidget, class UQuestObjectiveEntry_C* FoundWidget, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UQuestObjectiveEntry_C* K2Node_DynamicCast_AsQuest_Objective_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void HasUpdateStarted(struct FDynamicQuestUpdateInfo& Update, bool* Result);
	void OnUpdateFinished(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HaveAllUpdatesFinished_Result, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void HasUpdateFinished(struct FDynamicQuestUpdateInfo& Update, bool* Result, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void CanStartUpdate(int32 UpdateIndex, bool* Result, bool bCanStart, const struct FDynamicQuestUpdateInfo& UpdateToTest, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDynamicQuestUpdateInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsUpdateActive_Result, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, const struct FDynamicQuestUpdateInfo& CallFunc_Array_Get_Item2, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_HasUpdateStarted_Result, bool CallFunc_Not_PreBool_ReturnValue2);
	void TryStartUpdates(int32 Temp_int_Array_Index_Variable, bool CallFunc_CanStartUpdate_Result, const struct FDynamicQuestUpdateInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UQuestObjectiveEntry_C* CallFunc_GetObjectiveWidget_ObjectiveWidget, const struct FDynamicQuestUpdateInfo& K2Node_MakeStruct_DynamicQuestUpdateInfo, bool CallFunc_IsValid_ReturnValue);
	void OnAppearAnimationFinished();
	void CanAddUpdate(const struct FDynamicQuestUpdateInfo& UpdateToAdd, bool* Result, bool bCanAddUpdate, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, const struct FDynamicQuestUpdateInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnReceiveQuestUpdate(const struct FDynamicQuestUpdateInfo& QuestUpdateInfo, bool* Success, bool bIsFirstUpdate, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, bool CallFunc_CanAddUpdate_Result, class FText CallFunc_GetDisplayName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_QuestUpdateEntry(int32 EntryPoint, class UPanelSlot* CallFunc_GetContentSlot_ReturnValue, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FDynamicQuestUpdateInfo& CallFunc_Array_Get_Item, bool CallFunc_IsUpdateActive_Result, float CallFunc_Subtract_FloatFloat_ReturnValue, class UQuestObjectiveEntry_C* CallFunc_GetObjectiveWidget_ObjectiveWidget, float CallFunc_FMax_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue2, const struct FDynamicQuestUpdateInfo& K2Node_MakeStruct_DynamicQuestUpdateInfo, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_HasUpdateFinished_Result, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Lerp_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue2);
	void AllQuestUpdatesFinished__DelegateSignature(class UQuestUpdateEntry_C* UpdateWidget);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
