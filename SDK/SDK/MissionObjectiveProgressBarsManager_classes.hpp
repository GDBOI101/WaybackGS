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

// 0x11 (0x249 - 0x238)
// WidgetBlueprintGeneratedClass MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C
class UMissionObjectiveProgressBarsManager_C : public UCommonUserWidget
{
public:
	class UVerticalBox*                          ProgressBarBox;                                    // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortObjectiveBase*                    TrackedObjective;                                  // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bConfigureAsHUD;                                   // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionObjectiveProgressBarsManager_C");
		return Clss;
	}

	void GetHeightEstimate(float* Height, float HeightEstimate, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UMissionObjectiveProgress_C* K2Node_DynamicCast_AsMission_Objective_Progress, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_GetHeightEstimate_Height, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandleUpdate(class AFortMissionState* Objective);
	void HandleObjectiveVisibilityChanged(class AFortObjectiveBase* Objective, bool New_Visibility);
	void HandleObjectiveStatusChanged(class AFortObjectiveBase* Objective, enum class EFortObjectiveStatus New_Status);
	void CreateProgressBarWidget(int32 Index, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UMissionObjectiveProgress_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void Setup(class AFortObjectiveBase* TrackedObjective, bool bInConfigureAsHUD, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3);
	void UpdateObjectiveProgressBars(int32 RemoveWidgetIndex, int32 NumDesiredProgressBars, int32 ProgressBarBoxChildrenCount, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, bool CallFunc_RemoveChildAt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue4, int32 Temp_int_Variable2, bool CallFunc_Greater_IntInt_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UMissionObjectiveProgress_C* K2Node_DynamicCast_AsMission_Objective_Progress, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyChildren_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_BlueprintGetNumProgressBars_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue5, bool CallFunc_LessEqual_IntInt_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue3, int32 CallFunc_GetChildrenCount_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
