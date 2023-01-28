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

// 0xF8 (0x330 - 0x238)
// WidgetBlueprintGeneratedClass Results_CommanderXP.Results_CommanderXP_C
class UResults_CommanderXP_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_SkipToFinalState;                             // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_SkillPointIncrement2;                         // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ContinueButtonOutro;                          // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ContinueButtonIntro;                          // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Intro;                                        // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_SkillPointIncrement1;                         // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_SkillPointIncrementBase;                      // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonContinue;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageSkillPointDynamic1;                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageSkillPointDynamic2;                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageSkillPointStatic;                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                       PlayerBanner;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextFortName;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextSkillPointIncrement;                           // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextSkillPoints;                                   // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_CommanderXPBar_C*             XpBar;                                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        PlayRate;                                          // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeBetweenIntroAndCount;                          // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResults_TeamTotalScore_C*             TeamTotalScore;                                    // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  Finished;                                          // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortAccountItemDefinition*            SkillPointsItem;                                   // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentSkillPoints;                                // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSkippedToEnd;                                     // 0x2F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSkippingToEnd;                                    // 0x2F5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2889[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeBetweenSkipAndContinue;                        // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FinalSkillPoints;                                  // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCanSkipToEnd;                                     // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_288A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            XPBarAppear;                                       // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            XPBadge;                                           // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            PlayerSkillPoint;                                  // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            XPBadgeIncrement;                                  // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextSkillPointIncrement_0;                         // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Results_CommanderXP_C");
		return Clss;
	}

	void Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void PlayAnimationCommon(class UWidgetAnimation* Animation);
	void SetSkippingToEnd(bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue2, bool CallFunc_IsAnimationPlaying_ReturnValue3);
	void SkipToFinalState(bool CallFunc_Greater_IntInt_ReturnValue);
	void UpdatePointsText(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdatePointsForLevel(int32 Level, int32 RewardedPoints, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, TArray<struct FFortItemQuantityPair>& CallFunc_GetAccountLevelUpRewards_Rewards, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item);
	void Initialize(class UFortUIScoreReport* InScoreReport, class UResults_TeamTotalScore_C* TeamTotalScore, int32 SkillPoints, int32 FinalLevel, int32 InitialLevel, class UFortUIScoreReport* ScoreReport, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfo_Result, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, class UObject* CallFunc_Conv_AssetToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue3, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfo_Result2, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue2, int32 Temp_int_Variable, TArray<struct FFortItemQuantityPair>& CallFunc_GetAccountLevelUpRewards_Rewards, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess2, const struct FUniqueNetIdRepl& CallFunc_GetUniqueID_ReturnValue, int32 CallFunc_GetScoreReportIndex_ReturnValue, const struct FFortUIXpInfo& CallFunc_GetXpInfo_OutXpInfo, bool CallFunc_GetXpInfo_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void BndEvt__Results_CommanderXPBar_K2Node_ComponentBoundEvent_1_LeveledUp__DelegateSignature(int32 NewLevel);
	void BndEvt__Anim_SkillPointIncrementIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void Intro_Sequence();
	void BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature();
	void BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void Count_Sequence();
	void BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_3_CountFinished__DelegateSignature();
	void BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__Anim_SkillPointIncrement2_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void GateSkillPointAnimation1();
	void GateSkillPointAnimation2();
	void ResetGateSkillPointAnimation2();
	void ResetGateSkillPointAnimation1();
	void Skip_To_End_Sequence();
	void Skip();
	void BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void ExecuteUbergraph_Results_CommanderXP(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue4, int32 K2Node_ComponentBoundEvent_NewLevel, bool Temp_bool_B_Execution_Happened_Variable, bool Temp_bool_A_Execution_Happened_Variable, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue2, bool CallFunc_IsAnimationPlaying_ReturnValue3, bool Temp_bool_B_Execution_Happened_Variable2, bool Temp_bool_A_Execution_Happened_Variable2, bool CallFunc_BooleanAND_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button);
	void Finished__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
