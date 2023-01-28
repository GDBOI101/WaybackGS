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
// WidgetBlueprintGeneratedClass DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C
class UDailyQuestObjectiveEntry_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Appear;                                            // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDailyQuestProgressWidget_C*           DailyQuestProgressWidget;                          // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LockIcon;                                          // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TaskName;                                          // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestObjectiveInfo*               TrackedObjective;                                  // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DailyQuestObjectiveEntry_C");
		return Clss;
	}

	void UpdateFromObjectiveInfo(const struct FFortMcpQuestObjectiveInfo& ObjectiveInfo);
	void PlayAppearAnimation();
	void Update(class UFortQuestObjectiveInfo* Objective, int32 AchievedCount, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateProgress(class UFortQuestObjectiveInfo* Objective, int32 AchievedCount);
	void SetData(class UObject* InData);
	void ExecuteUbergraph_DailyQuestObjectiveEntry(int32 EntryPoint, class UObject* K2Node_CustomEvent_InData, class UFortQuestObjectiveInfo* K2Node_DynamicCast_AsFort_Quest_Objective_Info, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
