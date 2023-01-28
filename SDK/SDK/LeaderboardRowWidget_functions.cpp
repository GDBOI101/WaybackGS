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


// Function LeaderboardRowWidget.LeaderboardRowWidget_C.Refresh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortLeaderboardRowProxyInstance*RowObject                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue2                             ()

void ULeaderboardRowWidget_C::Refresh(class UFortLeaderboardRowProxyInstance* RowObject, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2)
{
	static auto Func = Class->GetFunction("LeaderboardRowWidget_C", "Refresh");

	Params::ULeaderboardRowWidget_C_Refresh_Params Parms;
	Parms.RowObject = RowObject;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue2 = CallFunc_Conv_IntToText_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaderboardRowWidget.LeaderboardRowWidget_C.SetDataDirect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortLeaderboardRowProxyInstance*NewData                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaderboardRowWidget_C::SetDataDirect(class UFortLeaderboardRowProxyInstance* NewData)
{
	static auto Func = Class->GetFunction("LeaderboardRowWidget_C", "SetDataDirect");

	Params::ULeaderboardRowWidget_C_SetDataDirect_Params Parms;
	Parms.NewData = NewData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaderboardRowWidget.LeaderboardRowWidget_C.OnLeaderboardEntryDataSet
// (Event, Public, BlueprintEvent)
// Parameters:

void ULeaderboardRowWidget_C::OnLeaderboardEntryDataSet()
{
	static auto Func = Class->GetFunction("LeaderboardRowWidget_C", "OnLeaderboardEntryDataSet");

	Params::ULeaderboardRowWidget_C_OnLeaderboardEntryDataSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaderboardRowWidget.LeaderboardRowWidget_C.ExecuteUbergraph_LeaderboardRowWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortLeaderboardRowProxyInstance*K2Node_DynamicCast_AsFort_Leaderboard_Row_Proxy_Instance         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaderboardRowWidget_C::ExecuteUbergraph_LeaderboardRowWidget(int32 EntryPoint, class UFortLeaderboardRowProxyInstance* K2Node_DynamicCast_AsFort_Leaderboard_Row_Proxy_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("LeaderboardRowWidget_C", "ExecuteUbergraph_LeaderboardRowWidget");

	Params::ULeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsFort_Leaderboard_Row_Proxy_Instance = K2Node_DynamicCast_AsFort_Leaderboard_Row_Proxy_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
