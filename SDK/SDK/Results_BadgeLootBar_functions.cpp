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


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.GetNextLootLevelPoints
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              LootPoints                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextLootLevelPoints                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_BadgeLootBar_C::GetNextLootLevelPoints(int32 LootPoints, int32* NextLootLevelPoints, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_BadgeLootBar_C", "GetNextLootLevelPoints");

	Params::UResults_BadgeLootBar_C_GetNextLootLevelPoints_Params Parms;
	Parms.LootPoints = LootPoints;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NextLootLevelPoints != nullptr)
		*NextLootLevelPoints = Parms.NextLootLevelPoints;

}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.SkipToFinalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_BadgeLootBar_C::SkipToFinalState()
{
	static auto Func = Class->GetFunction("Results_BadgeLootBar_C", "SkipToFinalState");

	Params::UResults_BadgeLootBar_C_SkipToFinalState_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.SetSkippingToEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerPausedHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidgetAnimation*>    K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_BadgeLootBar_C::SetSkippingToEnd(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_K2_IsTimerPausedHandle_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<class UWidgetAnimation*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UWidgetAnimation* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_BadgeLootBar_C", "SetSkippingToEnd");

	Params::UResults_BadgeLootBar_C_SetSkippingToEnd_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_IsTimerPausedHandle_ReturnValue = CallFunc_K2_IsTimerPausedHandle_ReturnValue;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.PlayAnimationCommon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_BadgeLootBar_C::PlayAnimationCommon(class UWidgetAnimation* Animation)
{
	static auto Func = Class->GetFunction("Results_BadgeLootBar_C", "PlayAnimationCommon");

	Params::UResults_BadgeLootBar_C_PlayAnimationCommon_Params Parms;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.GetBadgePoints
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UResults_Badge_C*            Badge                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Points                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortBadgeItemDefinition*    K2Node_DynamicCast_AsFort_Badge_Item_Definition                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMissionPoints_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_BadgeLootBar_C::GetBadgePoints(class UResults_Badge_C* Badge, int32* Points, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortBadgeItemDefinition* K2Node_DynamicCast_AsFort_Badge_Item_Definition, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetMissionPoints_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_BadgeLootBar_C", "GetBadgePoints");

	Params::UResults_BadgeLootBar_C_GetBadgePoints_Params Parms;
	Parms.Badge = Badge;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Badge_Item_Definition = K2Node_DynamicCast_AsFort_Badge_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMissionPoints_ReturnValue = CallFunc_GetMissionPoints_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Points != nullptr)
		*Points = Parms.Points;

}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.SetLootLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  PackageImage                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UResults_BadgeLootBar_C::SetLootLevel(int32 Level, class UTexture2D* PackageImage, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_BadgeLootBar_C", "SetLootLevel");

	Params::UResults_BadgeLootBar_C_SetLootLevel_Params Parms;
	Parms.Level = Level;
	Parms.PackageImage = PackageImage;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PlayRate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_BadgeLootBar_C::Initialize(float PlayRate, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2)
{
	static auto Func = Class->GetFunction("Results_BadgeLootBar_C", "Initialize");

	Params::UResults_BadgeLootBar_C_Initialize_Params Parms;
	Parms.PlayRate = PlayRate;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.UpdateAddBadgePoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentPointsFloat                                               (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TimePassed                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TargetFillPercentage                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNextLootLevelPoints_NextLootLevelPoints              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpEaseInOut_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Percent_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_BadgeLootBar_C::UpdateAddBadgePoints(float CurrentPointsFloat, float TimePassed, float TargetFillPercentage, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetNextLootLevelPoints_NextLootLevelPoints, int32 CallFunc_Min_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_FInterpEaseInOut_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, int32 CallFunc_FTrunc_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_BadgeLootBar_C", "UpdateAddBadgePoints");

	Params::UResults_BadgeLootBar_C_UpdateAddBadgePoints_Params Parms;
	Parms.CurrentPointsFloat = CurrentPointsFloat;
	Parms.TimePassed = TimePassed;
	Parms.TargetFillPercentage = TargetFillPercentage;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetNextLootLevelPoints_NextLootLevelPoints = CallFunc_GetNextLootLevelPoints_NextLootLevelPoints;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue3 = CallFunc_Conv_IntToFloat_ReturnValue3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_FInterpEaseInOut_ReturnValue = CallFunc_FInterpEaseInOut_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.BndEvt__IntroAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_BadgeLootBar_C::BndEvt__IntroAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_BadgeLootBar_C", "BndEvt__IntroAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_BadgeLootBar_C_BndEvt__IntroAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_BadgeLootBar_C::Intro_Sequence()
{
	static auto Func = Class->GetFunction("Results_BadgeLootBar_C", "Intro Sequence");

	Params::UResults_BadgeLootBar_C_Intro_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.BndEvt__Anim_LevelUp_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_BadgeLootBar_C::BndEvt__Anim_LevelUp_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_BadgeLootBar_C", "BndEvt__Anim_LevelUp_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_BadgeLootBar_C_BndEvt__Anim_LevelUp_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.Add Badge Points Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResults_Badge_C*            Badge                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_BadgeLootBar_C::Add_Badge_Points_Sequence(class UResults_Badge_C* Badge)
{
	static auto Func = Class->GetFunction("Results_BadgeLootBar_C", "Add Badge Points Sequence");

	Params::UResults_BadgeLootBar_C_Add_Badge_Points_Sequence_Params Parms;
	Parms.Badge = Badge;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.BndEvt__Anim_PostLevelUpIntro_K2Node_ComponentBoundEvent_6_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_BadgeLootBar_C::BndEvt__Anim_PostLevelUpIntro_K2Node_ComponentBoundEvent_6_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_BadgeLootBar_C", "BndEvt__Anim_PostLevelUpIntro_K2Node_ComponentBoundEvent_6_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_BadgeLootBar_C_BndEvt__Anim_PostLevelUpIntro_K2Node_ComponentBoundEvent_6_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.On Leveled Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_BadgeLootBar_C::On_Leveled_Up()
{
	static auto Func = Class->GetFunction("Results_BadgeLootBar_C", "On Leveled Up");

	Params::UResults_BadgeLootBar_C_On_Leveled_Up_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UResults_BadgeLootBar_C::Construct()
{
	static auto Func = Class->GetFunction("Results_BadgeLootBar_C", "Construct");

	Params::UResults_BadgeLootBar_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.ExecuteUbergraph_Results_BadgeLootBar
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UResults_Badge_C*            K2Node_CustomEvent_Badge                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetBadgePoints_Points                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_BadgeLootBar_C::ExecuteUbergraph_Results_BadgeLootBar(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue4, class UResults_Badge_C* K2Node_CustomEvent_Badge, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetBadgePoints_Points, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue5, bool CallFunc_BooleanOR_ReturnValue6, float CallFunc_GetGameTimeInSeconds_ReturnValue2, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_BadgeLootBar_C", "ExecuteUbergraph_Results_BadgeLootBar");

	Params::UResults_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue4 = CallFunc_BooleanOR_ReturnValue4;
	Parms.K2Node_CustomEvent_Badge = K2Node_CustomEvent_Badge;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetBadgePoints_Points = CallFunc_GetBadgePoints_Points;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue5 = CallFunc_BooleanOR_ReturnValue5;
	Parms.CallFunc_BooleanOR_ReturnValue6 = CallFunc_BooleanOR_ReturnValue6;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue2 = CallFunc_GetGameTimeInSeconds_ReturnValue2;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.LeveledUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_BadgeLootBar_C::LeveledUp__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_BadgeLootBar_C", "LeveledUp__DelegateSignature");

	Params::UResults_BadgeLootBar_C_LeveledUp__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.FinishedAddingBadgePoints__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_BadgeLootBar_C::FinishedAddingBadgePoints__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_BadgeLootBar_C", "FinishedAddingBadgePoints__DelegateSignature");

	Params::UResults_BadgeLootBar_C_FinishedAddingBadgePoints__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.IntroComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_BadgeLootBar_C::IntroComplete__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_BadgeLootBar_C", "IntroComplete__DelegateSignature");

	Params::UResults_BadgeLootBar_C_IntroComplete__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
