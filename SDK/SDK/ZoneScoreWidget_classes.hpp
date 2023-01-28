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

// 0xB0 (0x310 - 0x260)
// WidgetBlueprintGeneratedClass ZoneScoreWidget.ZoneScoreWidget_C
class UZoneScoreWidget_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro_EndOfDayRecapAnim;                           // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      XPIntroAnim;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTeamScoreToPlayerXPRewardWidget_C*    TeamScoreToPlayerXPRewardWidget;                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextEndOfDayHeader;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxPlayerScoreContributions;               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          XP_Vbox;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UZoneDayCompletion_ScoreBlock_C*       ZoneDayCompletion_ScoreBlock;                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UPlayerZoneTeamScoreContributionWidget_C*> PlayerScoreContributionWidgets;                    // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         ShouldBeTweeningScores;                            // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldBeTweeningXP;                                // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_330D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TweenTimeRemaining;                                // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TweenDuration;                                     // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Pre_And_Post_Tween_Delay;                          // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       XPTweenLoopSound;                                  // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       TeamScoreTweenLoopSound;                           // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEndOfDayRecap                        End_of_Day_Recap;                                  // 0x2D0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAudioComponent*                       ZoneScoreMusic_Sound;                              // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnEndOfDayRecapEnded;                              // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USoundBase*                            EndOfDay_Recap_Appear_Sound;                       // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ZoneScoreWidget_C");
		return Clss;
	}

	void BindEndOfDayHeaderText(int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void ShowTeamScoreContributions(int32 Temp_int_Array_Index_Variable, const struct FFortPlayerScoreReport& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPlayerZoneTeamScoreContributionWidget_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void ShowXPReward(class UFortUIScoreReport* ScoreReport, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortUIScoreReport* CallFunc_GetScoreReport_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetUniqueID_ReturnValue, int32 CallFunc_GetScoreReportIndex_ReturnValue, const struct FFortUIXpInfo& CallFunc_GetXpInfo_OutXpInfo, bool CallFunc_GetXpInfo_ReturnValue);
	void UpdateXPLERP(float LERP_Factor);
	void BeginTweeningXP(class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue);
	void UpdateScoresLERP(float LERP_Factor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPlayerZoneTeamScoreContributionWidget_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void BeginTweeningScores(class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue);
	void StartEndOfDayRecapAfterAnimation();
	void OnXPTweenEndEvent();
	void OnScoreTweenEndEvent();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void OnEndOfDayRecap(struct FEndOfDayRecap& EndOfDayRecap);
	void ExecuteUbergraph_ZoneScoreWidget(int32 EntryPoint, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_FMax_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FEndOfDayRecap& K2Node_CustomEvent_EndOfDayRecap);
	void OnEndOfDayRecapEnded__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
