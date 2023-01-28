#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function Results_CommanderXP.Results_CommanderXP_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_CommanderXP_C::Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "Focus");

	Params::UResults_CommanderXP_C_Focus_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.PlayAnimationCommon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_CommanderXP_C::PlayAnimationCommon(class UWidgetAnimation* Animation)
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "PlayAnimationCommon");

	Params::UResults_CommanderXP_C_PlayAnimationCommon_Params Parms;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.SetSkippingToEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_CommanderXP_C::SetSkippingToEnd(bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue2, bool CallFunc_IsAnimationPlaying_ReturnValue3)
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "SetSkippingToEnd");

	Params::UResults_CommanderXP_C_SetSkippingToEnd_Params Parms;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue2 = CallFunc_IsAnimationPlaying_ReturnValue2;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue3 = CallFunc_IsAnimationPlaying_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.SkipToFinalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_CommanderXP_C::SkipToFinalState(bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "SkipToFinalState");

	Params::UResults_CommanderXP_C_SkipToFinalState_Params Parms;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.UpdatePointsText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UResults_CommanderXP_C::UpdatePointsText(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "UpdatePointsText");

	Params::UResults_CommanderXP_C_UpdatePointsText_Params Parms;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.UpdatePointsForLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RewardedPoints                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemQuantityPair>CallFunc_GetAccountLevelUpRewards_Rewards                        (ZeroConstructor, ReferenceParm)
// struct FFortItemQuantityPair       CallFunc_Array_Get_Item                                          ()

void UResults_CommanderXP_C::UpdatePointsForLevel(int32 Level, int32 RewardedPoints, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, TArray<struct FFortItemQuantityPair>& CallFunc_GetAccountLevelUpRewards_Rewards, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "UpdatePointsForLevel");

	Params::UResults_CommanderXP_C_UpdatePointsForLevel_Params Parms;
	Parms.Level = Level;
	Parms.RewardedPoints = RewardedPoints;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAccountLevelUpRewards_Rewards = CallFunc_GetAccountLevelUpRewards_Rewards;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*          InScoreReport                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_TeamTotalScore_C*   TeamTotalScore                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SkillPoints                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FinalLevel                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InitialLevel                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIScoreReport*          ScoreReport                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortHomeBaseInfo           CallFunc_GetHomeBaseInfo_Result                                  ()
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetSmallPreviewImage_ReturnValue                        (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_AssetToObject_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortHomeBaseInfo           CallFunc_GetHomeBaseInfo_Result2                                 ()
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemQuantityPair>CallFunc_GetAccountLevelUpRewards_Rewards                        (ZeroConstructor, ReferenceParm)
// struct FFortItemQuantityPair       CallFunc_Array_Get_Item                                          ()
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerState*            K2Node_DynamicCast_AsFort_Player_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetUniqueID_ReturnValue                                 (HasGetValueTypeHash)
// int32                              CallFunc_GetScoreReportIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIXpInfo               CallFunc_GetXpInfo_OutXpInfo                                     (NoDestructor)
// bool                               CallFunc_GetXpInfo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_CommanderXP_C::Initialize(class UFortUIScoreReport* InScoreReport, class UResults_TeamTotalScore_C* TeamTotalScore, int32 SkillPoints, int32 FinalLevel, int32 InitialLevel, class UFortUIScoreReport* ScoreReport, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfo_Result, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, class UObject* CallFunc_Conv_AssetToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue3, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfo_Result2, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue2, int32 Temp_int_Variable, TArray<struct FFortItemQuantityPair>& CallFunc_GetAccountLevelUpRewards_Rewards, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess2, const struct FUniqueNetIdRepl& CallFunc_GetUniqueID_ReturnValue, int32 CallFunc_GetScoreReportIndex_ReturnValue, const struct FFortUIXpInfo& CallFunc_GetXpInfo_OutXpInfo, bool CallFunc_GetXpInfo_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "Initialize");

	Params::UResults_CommanderXP_C_Initialize_Params Parms;
	Parms.InScoreReport = InScoreReport;
	Parms.TeamTotalScore = TeamTotalScore;
	Parms.SkillPoints = SkillPoints;
	Parms.FinalLevel = FinalLevel;
	Parms.InitialLevel = InitialLevel;
	Parms.ScoreReport = ScoreReport;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetHomeBaseInfo_Result = CallFunc_GetHomeBaseInfo_Result;
	Parms.CallFunc_GetSmallPreviewImage_ReturnValue = CallFunc_GetSmallPreviewImage_ReturnValue;
	Parms.CallFunc_Conv_AssetToObject_ReturnValue = CallFunc_Conv_AssetToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue2 = CallFunc_GetDynamicMaterial_ReturnValue2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue3 = CallFunc_GetDynamicMaterial_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetHomeBaseInfo_Result2 = CallFunc_GetHomeBaseInfo_Result2;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue2 = CallFunc_Conv_StringToName_ReturnValue2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetAccountLevelUpRewards_Rewards = CallFunc_GetAccountLevelUpRewards_Rewards;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_State = K2Node_DynamicCast_AsFort_Player_State;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetUniqueID_ReturnValue = CallFunc_GetUniqueID_ReturnValue;
	Parms.CallFunc_GetScoreReportIndex_ReturnValue = CallFunc_GetScoreReportIndex_ReturnValue;
	Parms.CallFunc_GetXpInfo_OutXpInfo = CallFunc_GetXpInfo_OutXpInfo;
	Parms.CallFunc_GetXpInfo_ReturnValue = CallFunc_GetXpInfo_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Results_CommanderXPBar_K2Node_ComponentBoundEvent_1_LeveledUp__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewLevel                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_CommanderXP_C::BndEvt__Results_CommanderXPBar_K2Node_ComponentBoundEvent_1_LeveledUp__DelegateSignature(int32 NewLevel)
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "BndEvt__Results_CommanderXPBar_K2Node_ComponentBoundEvent_1_LeveledUp__DelegateSignature");

	Params::UResults_CommanderXP_C_BndEvt__Results_CommanderXPBar_K2Node_ComponentBoundEvent_1_LeveledUp__DelegateSignature_Params Parms;
	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_SkillPointIncrementIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_CommanderXP_C::BndEvt__Anim_SkillPointIncrementIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "BndEvt__Anim_SkillPointIncrementIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_CommanderXP_C_BndEvt__Anim_SkillPointIncrementIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_CommanderXP_C::Intro_Sequence()
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "Intro Sequence");

	Params::UResults_CommanderXP_C_Intro_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_CommanderXP_C::BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature");

	Params::UResults_CommanderXP_C_BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_CommanderXP_C::BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_CommanderXP_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.Count Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_CommanderXP_C::Count_Sequence()
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "Count Sequence");

	Params::UResults_CommanderXP_C_Count_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_3_CountFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_CommanderXP_C::BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_3_CountFinished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_3_CountFinished__DelegateSignature");

	Params::UResults_CommanderXP_C_BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_3_CountFinished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_CommanderXP_C::BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_CommanderXP_C_BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_SkillPointIncrement2_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_CommanderXP_C::BndEvt__Anim_SkillPointIncrement2_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "BndEvt__Anim_SkillPointIncrement2_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_CommanderXP_C_BndEvt__Anim_SkillPointIncrement2_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.GateSkillPointAnimation1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_CommanderXP_C::GateSkillPointAnimation1()
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "GateSkillPointAnimation1");

	Params::UResults_CommanderXP_C_GateSkillPointAnimation1_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.GateSkillPointAnimation2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_CommanderXP_C::GateSkillPointAnimation2()
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "GateSkillPointAnimation2");

	Params::UResults_CommanderXP_C_GateSkillPointAnimation2_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.ResetGateSkillPointAnimation2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_CommanderXP_C::ResetGateSkillPointAnimation2()
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "ResetGateSkillPointAnimation2");

	Params::UResults_CommanderXP_C_ResetGateSkillPointAnimation2_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.ResetGateSkillPointAnimation1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_CommanderXP_C::ResetGateSkillPointAnimation1()
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "ResetGateSkillPointAnimation1");

	Params::UResults_CommanderXP_C_ResetGateSkillPointAnimation1_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.Skip To End Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_CommanderXP_C::Skip_To_End_Sequence()
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "Skip To End Sequence");

	Params::UResults_CommanderXP_C_Skip_To_End_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.Skip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_CommanderXP_C::Skip()
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "Skip");

	Params::UResults_CommanderXP_C_Skip_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_CommanderXP_C::BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UResults_CommanderXP_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_CommanderXP_C::BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_CommanderXP_C_BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.ExecuteUbergraph_Results_CommanderXP
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewLevel                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_B_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_A_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_B_Execution_Happened_Variable2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_A_Execution_Happened_Variable2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_CommanderXP_C::ExecuteUbergraph_Results_CommanderXP(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue4, int32 K2Node_ComponentBoundEvent_NewLevel, bool Temp_bool_B_Execution_Happened_Variable, bool Temp_bool_A_Execution_Happened_Variable, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue2, bool CallFunc_IsAnimationPlaying_ReturnValue3, bool Temp_bool_B_Execution_Happened_Variable2, bool Temp_bool_A_Execution_Happened_Variable2, bool CallFunc_BooleanAND_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "ExecuteUbergraph_Results_CommanderXP");

	Params::UResults_CommanderXP_C_ExecuteUbergraph_Results_CommanderXP_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue4 = CallFunc_BooleanOR_ReturnValue4;
	Parms.K2Node_ComponentBoundEvent_NewLevel = K2Node_ComponentBoundEvent_NewLevel;
	Parms.Temp_bool_B_Execution_Happened_Variable = Temp_bool_B_Execution_Happened_Variable;
	Parms.Temp_bool_A_Execution_Happened_Variable = Temp_bool_A_Execution_Happened_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue2 = CallFunc_IsAnimationPlaying_ReturnValue2;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue3 = CallFunc_IsAnimationPlaying_ReturnValue3;
	Parms.Temp_bool_B_Execution_Happened_Variable2 = Temp_bool_B_Execution_Happened_Variable2;
	Parms.Temp_bool_A_Execution_Happened_Variable2 = Temp_bool_A_Execution_Happened_Variable2;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_CommanderXP.Results_CommanderXP_C.Finished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_CommanderXP_C::Finished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_CommanderXP_C", "Finished__DelegateSignature");

	Params::UResults_CommanderXP_C_Finished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
