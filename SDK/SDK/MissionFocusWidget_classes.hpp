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

// 0x34 (0x26C - 0x238)
// WidgetBlueprintGeneratedClass MissionFocusWidget.MissionFocusWidget_C
class UMissionFocusWidget_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      HeaderText;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          KillPointsBar;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TimerText;                                         // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMissionTimerComponent*            SavedTimerComponent;                               // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortMission*                          CurrentFocusedMission;                             // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KillBarPercentage;                                 // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionFocusWidget_C");
		return Clss;
	}

	void UpdateVisibility(bool KillBarVisible, bool TimerVisible, bool HeaderVisible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility Temp_byte_Variable5, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, enum class ESlateVisibility Temp_byte_Variable6, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool Temp_bool_Variable3, enum class ESlateVisibility K2Node_Select3_Default, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_GetText_ReturnValue2, bool CallFunc_TextIsEmpty_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_IsValid_ReturnValue);
	void HandleFocusedMission(class AFortMission* FocusedMission, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3);
	void HandleTimerComponentChanged(class UFortMissionTimerComponent* TimerComponent);
	void UpdateTimer(bool KillBarPercentageChanged, float NewKillBarPercentage, bool HeaderTextChanged, bool TimerTextChanged, class FText NewHeaderText, class FText NewTimerText, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, class FText CallFunc_GetText_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetCurrentFocusPercentage_ReturnValue, class FText CallFunc_GetCurrentFocusDisplayText_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class FText CallFunc_GetText_ReturnValue2, bool CallFunc_NotEqual_TextText_ReturnValue2, bool CallFunc_IsMissionTimerSet_ReturnValue, bool CallFunc_IsTimerVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_GetTimeText_ReturnValue);
	void Construct();
	void ExecuteUbergraph_MissionFocusWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class AFortMission* CallFunc_GetFocusedMission_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
