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

// 0xC8 (0x300 - 0x238)
// WidgetBlueprintGeneratedClass Results_TeamTotalScore.Results_TeamTotalScore_C
class UResults_TeamTotalScore_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_SkipToConvertScoreFinalState;                 // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_TeleportPadIntro;                             // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_CommanderXPOutro;                             // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ConvertScore;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_CommanderXPIntro;                             // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_SkipToScoreFinalState;                        // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_CountScore;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_SubtotalsIntro;                               // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_CountScoreIntro;                              // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageTotalScoreOverlay;                            // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeamSubtotalScore_C*          SubtotalBuilding;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeamSubtotalScore_C*          SubtotalCombat;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeamSubtotalScore_C*          SubtotalMission;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeamSubtotalScore_C*          SubtotalUtility;                                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextTotalScore;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        TotalScore;                                        // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CountScoreInterpolationTime;                       // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConvertScoreInterpolationTime;                     // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConvertScoreInterpolationEndEarlyTime;             // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CountScorePlayRate;                                // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSkippedToCountScoreEnd;                           // 0x2CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSkippingToCountScoreEnd;                          // 0x2CD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D60[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  Count_Score_Finished;                              // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bCountingScore;                                    // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSkippedToConvertScoreEnd;                         // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSkippingToConvertScoreEnd;                        // 0x2E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D61[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ConvertScorePlayRate;                              // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CountUpLoop;                                       // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CountUpEnd;                                        // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       LoopedCountUpSound;                                // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Results_TeamTotalScore_C");
		return Clss;
	}

	void InitializeConvertScorePlayRate(float PlayRate, float CallFunc_Divide_FloatFloat_ReturnValue);
	void InitializeCountScorePlayRate(float PlayRate, float CallFunc_Divide_FloatFloat_ReturnValue);
	void SetSkippingToConvertScoreEnd(bool CallFunc_IsInterpolatingNumericValue_ReturnValue);
	void SkipToConvertScoreFinalState();
	void SetSkippingToCountScoreEnd(bool CallFunc_IsInterpolatingNumericValue_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
	void SkipToCountScoreFinalState(float CallFunc_Conv_IntToFloat_ReturnValue);
	void Initialize(class UFortUIScoreReport* Score_Report, int32 CallFunc_GetTeamScore_ReturnValue, int32 CallFunc_GetTeamScore_ReturnValue2, int32 CallFunc_GetTeamScore_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetTeamScore_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3);
	void Count_Score_Sequence();
	void Count_Score_Intro_Sequence();
	void PreConstruct(bool IsDesignTime);
	void Convert_Score_Intro_Sequence();
	void Convert_Score_Sequence();
	void Count_Score_Interpolation_Finished();
	void Convert_Score_Interpolation_Finished();
	void Teleport_Pad_Intro_Sequence();
	void BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);
	void ExecuteUbergraph_Results_TeamTotalScore(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, float CallFunc_Conv_IntToFloat_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue4, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, class UCommonNumericTextBlock* K2Node_ComponentBoundEvent_NumericTextBlock, bool K2Node_ComponentBoundEvent_HadCompleted, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue5, bool CallFunc_NotEqual_FloatFloat_ReturnValue2);
	void Count_Score_Finished__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
