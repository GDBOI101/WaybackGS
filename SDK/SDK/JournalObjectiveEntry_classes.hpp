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

// 0x20 (0x260 - 0x240)
// WidgetBlueprintGeneratedClass JournalObjectiveEntry.JournalObjectiveEntry_C
class UJournalObjectiveEntry_C : public UFortListItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      CommonText_TaskName;                               // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJournalObjectiveProgressWidget_C*     ProgressWidget;                                    // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestObjectiveInfo*               Objective;                                         // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("JournalObjectiveEntry_C");
		return Clss;
	}

	void Update(class UFortQuestObjectiveInfo* Objective, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue);
	void UpdateProgress(class UFortQuestObjectiveInfo* Objective);
	void SetData(class UObject* InData);
	void Construct();
	void Handle_Quests_Updated();
	void ExecuteUbergraph_JournalObjectiveEntry(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_Event_InData, class UFortQuestObjectiveInfo* K2Node_DynamicCast_AsFort_Quest_Objective_Info, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
