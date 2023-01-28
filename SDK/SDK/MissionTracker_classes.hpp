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

// 0x10 (0x2A0 - 0x290)
// WidgetBlueprintGeneratedClass MissionTracker.MissionTracker_C
class UMissionTracker_C : public UFortMissionTracker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(Transient, DuplicateTransient)
	class USizeBox*                              AdditionalEntriesSizeBox;                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionTracker_C");
		return Clss;
	}

	void HandlePinnedQuestsChanged();
	bool HasVisibleMission(bool bHasVisibleMission, bool CallFunc_IsVisible_ReturnValue);
	void UpdateVisibility(bool bHasTrackedQuests, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_HasVisibleMission_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<class UFortQuestItem*>& CallFunc_GetPinnedQuests_OutPinnedQuestItems, int32 CallFunc_Array_Length_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HandleQuestsUpdated();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_MissionTracker(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, bool CallFunc_IsValid_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
