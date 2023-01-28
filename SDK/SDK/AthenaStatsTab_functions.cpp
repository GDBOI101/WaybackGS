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


// Function AthenaStatsTab.AthenaStatsTab_C.UpdateLastUpdatedTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetLastUpdateTime_ReturnValue                           ()

void UAthenaStatsTab_C::UpdateLastUpdatedTime(bool CallFunc_IsActivated_ReturnValue, class FText CallFunc_GetLastUpdateTime_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "UpdateLastUpdatedTime");

	Params::UAthenaStatsTab_C_UpdateLastUpdatedTime_Params Parms;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_GetLastUpdateTime_ReturnValue = CallFunc_GetLastUpdateTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsTab.AthenaStatsTab_C.UpdateStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetStatValue_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_MakeTimespan_ReturnValue                                (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStatValue_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_FormatStatValueAsElapsedTime_ReturnValue                ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// int32                              CallFunc_GetStatValue_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue2                             ()
// class FString                      CallFunc_GetThirdTierPlaceTag_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStatValue_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSecondTierPlaceTag_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue3                             ()
// int32                              CallFunc_GetStatValue_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue4                             ()
// class FString                      CallFunc_GetWinsTag_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStatValue_ReturnValue6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue5                             ()

void UAthenaStatsTab_C::UpdateStats(int32 CallFunc_GetStatValue_ReturnValue, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, int32 CallFunc_GetStatValue_ReturnValue2, class FText CallFunc_FormatStatValueAsElapsedTime_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetStatValue_ReturnValue3, class FText CallFunc_Conv_IntToText_ReturnValue2, const class FString& CallFunc_GetThirdTierPlaceTag_ReturnValue, int32 CallFunc_GetStatValue_ReturnValue4, const class FString& CallFunc_GetSecondTierPlaceTag_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue3, int32 CallFunc_GetStatValue_ReturnValue5, class FText CallFunc_Conv_IntToText_ReturnValue4, const class FString& CallFunc_GetWinsTag_ReturnValue, int32 CallFunc_GetStatValue_ReturnValue6, class FText CallFunc_Conv_IntToText_ReturnValue5)
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "UpdateStats");

	Params::UAthenaStatsTab_C_UpdateStats_Params Parms;
	Parms.CallFunc_GetStatValue_ReturnValue = CallFunc_GetStatValue_ReturnValue;
	Parms.CallFunc_MakeTimespan_ReturnValue = CallFunc_MakeTimespan_ReturnValue;
	Parms.CallFunc_GetStatValue_ReturnValue2 = CallFunc_GetStatValue_ReturnValue2;
	Parms.CallFunc_FormatStatValueAsElapsedTime_ReturnValue = CallFunc_FormatStatValueAsElapsedTime_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetStatValue_ReturnValue3 = CallFunc_GetStatValue_ReturnValue3;
	Parms.CallFunc_Conv_IntToText_ReturnValue2 = CallFunc_Conv_IntToText_ReturnValue2;
	Parms.CallFunc_GetThirdTierPlaceTag_ReturnValue = CallFunc_GetThirdTierPlaceTag_ReturnValue;
	Parms.CallFunc_GetStatValue_ReturnValue4 = CallFunc_GetStatValue_ReturnValue4;
	Parms.CallFunc_GetSecondTierPlaceTag_ReturnValue = CallFunc_GetSecondTierPlaceTag_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue3 = CallFunc_Conv_IntToText_ReturnValue3;
	Parms.CallFunc_GetStatValue_ReturnValue5 = CallFunc_GetStatValue_ReturnValue5;
	Parms.CallFunc_Conv_IntToText_ReturnValue4 = CallFunc_Conv_IntToText_ReturnValue4;
	Parms.CallFunc_GetWinsTag_ReturnValue = CallFunc_GetWinsTag_ReturnValue;
	Parms.CallFunc_GetStatValue_ReturnValue6 = CallFunc_GetStatValue_ReturnValue6;
	Parms.CallFunc_Conv_IntToText_ReturnValue5 = CallFunc_Conv_IntToText_ReturnValue5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsTab.AthenaStatsTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaStatsTab_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "Construct");

	Params::UAthenaStatsTab_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsTab.AthenaStatsTab_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaStatsTab_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "OnActivated");

	Params::UAthenaStatsTab_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsTab.AthenaStatsTab_C.OnQueryFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaStatsTab_C::OnQueryFinished(bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "OnQueryFinished");

	Params::UAthenaStatsTab_C_OnQueryFinished_Params Parms;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaStatsTab_C::BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId)
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature");

	Params::UAthenaStatsTab_C_BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params Parms;
	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsTab.AthenaStatsTab_C.OnQueryStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaStatsTab_C::OnQueryStarted()
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "OnQueryStarted");

	Params::UAthenaStatsTab_C_OnQueryStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsTab.AthenaStatsTab_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaStatsTab_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "OnDeactivated");

	Params::UAthenaStatsTab_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsTab.AthenaStatsTab_C.ExecuteUbergraph_AthenaStatsTab
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortLeaderboardContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanShowStats_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasSuccessful                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetWinsTag_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSecondTierPlaceTag_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetThirdTierPlaceTag_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          ()
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Map_Find_Value2                                         ()
// bool                               CallFunc_Map_Find_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Map_Find_Value3                                         ()
// bool                               CallFunc_Map_Find_ReturnValue3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaStatsTab_C::ExecuteUbergraph_AthenaStatsTab(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable2, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue, bool CallFunc_CanShowStats_ReturnValue, int32 K2Node_Select_Default, bool K2Node_Event_bWasSuccessful, class FName K2Node_ComponentBoundEvent_TabId, const class FString& CallFunc_GetWinsTag_ReturnValue, const class FString& CallFunc_GetSecondTierPlaceTag_ReturnValue, const class FString& CallFunc_GetThirdTierPlaceTag_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Map_Find_Value2, bool CallFunc_Map_Find_ReturnValue2, class FText CallFunc_Map_Find_Value3, bool CallFunc_Map_Find_ReturnValue3, bool CallFunc_IsActivated_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaStatsTab_C", "ExecuteUbergraph_AthenaStatsTab");

	Params::UAthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_CanShowStats_ReturnValue = CallFunc_CanShowStats_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_bWasSuccessful = K2Node_Event_bWasSuccessful;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.CallFunc_GetWinsTag_ReturnValue = CallFunc_GetWinsTag_ReturnValue;
	Parms.CallFunc_GetSecondTierPlaceTag_ReturnValue = CallFunc_GetSecondTierPlaceTag_ReturnValue;
	Parms.CallFunc_GetThirdTierPlaceTag_ReturnValue = CallFunc_GetThirdTierPlaceTag_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value2 = CallFunc_Map_Find_Value2;
	Parms.CallFunc_Map_Find_ReturnValue2 = CallFunc_Map_Find_ReturnValue2;
	Parms.CallFunc_Map_Find_Value3 = CallFunc_Map_Find_Value3;
	Parms.CallFunc_Map_Find_ReturnValue3 = CallFunc_Map_Find_ReturnValue3;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
