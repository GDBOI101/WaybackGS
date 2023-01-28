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

// 0x40 (0x278 - 0x238)
// WidgetBlueprintGeneratedClass QuestObjectiveEntry.QuestObjectiveEntry_C
class UQuestObjectiveEntry_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Appear;                                            // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              BulletOverlay;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Checkmark;                                         // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                QuestHudIcon;                                      // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestProgressWidget_C*                QuestProgressWidget;                               // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TaskName;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestObjectiveInfo*               TrackedObjective;                                  // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuestObjectiveEntry_C");
		return Clss;
	}

	void PlayAppearAnimation();
	void Update(class UFortQuestObjectiveInfo* Objective, int32 AchievedCount, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue, enum class ESlateVisibility Temp_byte_Variable3, class FText CallFunc_GetText_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue2, bool CallFunc_TextIsEmpty_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable2, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue2, class FText CallFunc_GetCombinedDescription_OutDescription2, bool CallFunc_GetCombinedDescription_ReturnValue2);
	void UpdateProgress(class UFortQuestObjectiveInfo* Objective, int32 AchievedCount, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_HasCompleted_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void SetData(class UObject* InData);
	void ExecuteUbergraph_QuestObjectiveEntry(int32 EntryPoint, class UObject* K2Node_CustomEvent_InData, class UFortQuestObjectiveInfo* K2Node_DynamicCast_AsFort_Quest_Objective_Info, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
