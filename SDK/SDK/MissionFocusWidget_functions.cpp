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


// Function MissionFocusWidget.MissionFocusWidget_C.UpdateVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KillBarVisible                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               TimerVisible                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HeaderVisible                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue2                                    ()
// bool                               CallFunc_TextIsEmpty_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionFocusWidget_C::UpdateVisibility(bool KillBarVisible, bool TimerVisible, bool HeaderVisible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility Temp_byte_Variable5, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, enum class ESlateVisibility Temp_byte_Variable6, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool Temp_bool_Variable3, enum class ESlateVisibility K2Node_Select3_Default, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_GetText_ReturnValue2, bool CallFunc_TextIsEmpty_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionFocusWidget_C", "UpdateVisibility");

	Params::UMissionFocusWidget_C_UpdateVisibility_Params Parms;
	Parms.KillBarVisible = KillBarVisible;
	Parms.TimerVisible = TimerVisible;
	Parms.HeaderVisible = HeaderVisible;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue2 = CallFunc_GetText_ReturnValue2;
	Parms.CallFunc_TextIsEmpty_ReturnValue2 = CallFunc_TextIsEmpty_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionFocusWidget.MissionFocusWidget_C.HandleFocusedMission
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMission*                FocusedMission                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionFocusWidget_C::HandleFocusedMission(class AFortMission* FocusedMission, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3)
{
	static auto Func = Class->GetFunction("MissionFocusWidget_C", "HandleFocusedMission");

	Params::UMissionFocusWidget_C_HandleFocusedMission_Params Parms;
	Parms.FocusedMission = FocusedMission;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionFocusWidget.MissionFocusWidget_C.HandleTimerComponentChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMissionTimerComponent*  TimerComponent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionFocusWidget_C::HandleTimerComponentChanged(class UFortMissionTimerComponent* TimerComponent)
{
	static auto Func = Class->GetFunction("MissionFocusWidget_C", "HandleTimerComponentChanged");

	Params::UMissionFocusWidget_C_HandleTimerComponentChanged_Params Parms;
	Parms.TimerComponent = TimerComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionFocusWidget.MissionFocusWidget_C.UpdateTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KillBarPercentageChanged                                         (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              NewKillBarPercentage                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HeaderTextChanged                                                (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               TimerTextChanged                                                 (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        NewHeaderText                                                    (Edit)
// class FText                        NewTimerText                                                     (Edit)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentFocusPercentage_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCurrentFocusDisplayText_ReturnValue                  ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue2                                    ()
// bool                               CallFunc_NotEqual_TextText_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMissionTimerSet_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTimerVisible_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTimeText_ReturnValue                                 ()

void UMissionFocusWidget_C::UpdateTimer(bool KillBarPercentageChanged, float NewKillBarPercentage, bool HeaderTextChanged, bool TimerTextChanged, class FText NewHeaderText, class FText NewTimerText, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, class FText CallFunc_GetText_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetCurrentFocusPercentage_ReturnValue, class FText CallFunc_GetCurrentFocusDisplayText_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class FText CallFunc_GetText_ReturnValue2, bool CallFunc_NotEqual_TextText_ReturnValue2, bool CallFunc_IsMissionTimerSet_ReturnValue, bool CallFunc_IsTimerVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_GetTimeText_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionFocusWidget_C", "UpdateTimer");

	Params::UMissionFocusWidget_C_UpdateTimer_Params Parms;
	Parms.KillBarPercentageChanged = KillBarPercentageChanged;
	Parms.NewKillBarPercentage = NewKillBarPercentage;
	Parms.HeaderTextChanged = HeaderTextChanged;
	Parms.TimerTextChanged = TimerTextChanged;
	Parms.NewHeaderText = NewHeaderText;
	Parms.NewTimerText = NewTimerText;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentFocusPercentage_ReturnValue = CallFunc_GetCurrentFocusPercentage_ReturnValue;
	Parms.CallFunc_GetCurrentFocusDisplayText_ReturnValue = CallFunc_GetCurrentFocusDisplayText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetText_ReturnValue2 = CallFunc_GetText_ReturnValue2;
	Parms.CallFunc_NotEqual_TextText_ReturnValue2 = CallFunc_NotEqual_TextText_ReturnValue2;
	Parms.CallFunc_IsMissionTimerSet_ReturnValue = CallFunc_IsMissionTimerSet_ReturnValue;
	Parms.CallFunc_IsTimerVisible_ReturnValue = CallFunc_IsTimerVisible_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetTimeText_ReturnValue = CallFunc_GetTimeText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionFocusWidget.MissionFocusWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMissionFocusWidget_C::Construct()
{
	static auto Func = Class->GetFunction("MissionFocusWidget_C", "Construct");

	Params::UMissionFocusWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionFocusWidget.MissionFocusWidget_C.ExecuteUbergraph_MissionFocusWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortMission*                CallFunc_GetFocusedMission_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionFocusWidget_C::ExecuteUbergraph_MissionFocusWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class AFortMission* CallFunc_GetFocusedMission_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionFocusWidget_C", "ExecuteUbergraph_MissionFocusWidget");

	Params::UMissionFocusWidget_C_ExecuteUbergraph_MissionFocusWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFocusedMission_ReturnValue = CallFunc_GetFocusedMission_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
