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


// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.TrimUnusedRows
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetPlayerCount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChildAt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeamScoreDetailsContent_C::TrimUnusedRows(int32 CallFunc_GetPlayerCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_RemoveChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("TeamScoreDetailsContent_C", "TrimUnusedRows");

	Params::UTeamScoreDetailsContent_C_TrimUnusedRows_Params Parms;
	Parms.CallFunc_GetPlayerCount_ReturnValue = CallFunc_GetPlayerCount_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RemoveChildAt_ReturnValue = CallFunc_RemoveChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue2 = CallFunc_GetChildrenCount_ReturnValue2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.SetRowData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RowIdx                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScoreDetailsRow_C*          K2Node_DynamicCast_AsScore_Details_Row                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPlayerScore_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerScore_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerScore_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerScore_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPlayerName_ReturnValue                               ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScoreDetailsRow_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamScoreDetailsContent_C::SetRowData(int32 RowIdx, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UScoreDetailsRow_C* K2Node_DynamicCast_AsScore_Details_Row, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_GetPlayerScore_ReturnValue, int32 CallFunc_GetPlayerScore_ReturnValue2, int32 CallFunc_GetPlayerScore_ReturnValue3, int32 CallFunc_GetPlayerScore_ReturnValue4, class FText CallFunc_GetPlayerName_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UScoreDetailsRow_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("TeamScoreDetailsContent_C", "SetRowData");

	Params::UTeamScoreDetailsContent_C_SetRowData_Params Parms;
	Parms.RowIdx = RowIdx;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsScore_Details_Row = K2Node_DynamicCast_AsScore_Details_Row;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerScore_ReturnValue = CallFunc_GetPlayerScore_ReturnValue;
	Parms.CallFunc_GetPlayerScore_ReturnValue2 = CallFunc_GetPlayerScore_ReturnValue2;
	Parms.CallFunc_GetPlayerScore_ReturnValue3 = CallFunc_GetPlayerScore_ReturnValue3;
	Parms.CallFunc_GetPlayerScore_ReturnValue4 = CallFunc_GetPlayerScore_ReturnValue4;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTeamScoreDetailsContent_C::Construct()
{
	static auto Func = Class->GetFunction("TeamScoreDetailsContent_C", "Construct");

	Params::UTeamScoreDetailsContent_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.OnScoreReportChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTeamScoreDetailsContent_C::OnScoreReportChanged()
{
	static auto Func = Class->GetFunction("TeamScoreDetailsContent_C", "OnScoreReportChanged");

	Params::UTeamScoreDetailsContent_C_OnScoreReportChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.ExecuteUbergraph_TeamScoreDetailsContent
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIScoreReport*          CallFunc_GetScoreReport_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerCount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeamScoreDetailsContent_C::ExecuteUbergraph_TeamScoreDetailsContent(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Variable, class UFortUIScoreReport* CallFunc_GetScoreReport_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetPlayerCount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("TeamScoreDetailsContent_C", "ExecuteUbergraph_TeamScoreDetailsContent");

	Params::UTeamScoreDetailsContent_C_ExecuteUbergraph_TeamScoreDetailsContent_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetScoreReport_ReturnValue = CallFunc_GetScoreReport_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerCount_ReturnValue = CallFunc_GetPlayerCount_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
