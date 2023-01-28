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


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMutedChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       TeamMuted                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaTeamMemberInfo_C*     CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamInfo_C::HandleTeamMutedChanged(TArray<bool>& TeamMuted, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Get_Item, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item2, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamInfo_C", "HandleTeamMutedChanged");

	Params::UAthenaTeamInfo_C_HandleTeamMutedChanged_Params Parms;
	Parms.TeamMuted = TeamMuted;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamTalkingChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       TeamTalking                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaTeamMemberInfo_C*     CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamInfo_C::HandleTeamTalkingChanged(TArray<bool>& TeamTalking, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Get_Item, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item2, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamInfo_C", "HandleTeamTalkingChanged");

	Params::UAthenaTeamInfo_C_HandleTeamTalkingChanged_Params Parms;
	Parms.TeamTalking = TeamTalking;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      CallFunc_GetTeamHitPointFractions_HealthFractions                (ZeroConstructor, ReferenceParm)
// TArray<float>                      CallFunc_GetTeamHitPointFractions_ShieldFractions                (ZeroConstructor, ReferenceParm)
// class AFortPlayerStateAthena*      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamInfo_C::HandleTeamMemberRemoved(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, TArray<float>& CallFunc_GetTeamHitPointFractions_HealthFractions, TArray<float>& CallFunc_GetTeamHitPointFractions_ShieldFractions, class AFortPlayerStateAthena* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamInfo_C", "HandleTeamMemberRemoved");

	Params::UAthenaTeamInfo_C_HandleTeamMemberRemoved_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTeamHitPointFractions_HealthFractions = CallFunc_GetTeamHitPointFractions_HealthFractions;
	Parms.CallFunc_GetTeamHitPointFractions_ShieldFractions = CallFunc_GetTeamHitPointFractions_ShieldFractions;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamRevivingChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       TeamReviving                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaTeamMemberInfo_C*     CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamInfo_C::HandleTeamRevivingChanged(TArray<bool>& TeamReviving, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamInfo_C", "HandleTeamRevivingChanged");

	Params::UAthenaTeamInfo_C_HandleTeamRevivingChanged_Params Parms;
	Parms.TeamReviving = TeamReviving;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberPlayerNamesChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaTeamMemberInfo_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamInfo_C::HandleTeamMemberPlayerNamesChanged(int32 Temp_int_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamInfo_C", "HandleTeamMemberPlayerNamesChanged");

	Params::UAthenaTeamInfo_C_HandleTeamMemberPlayerNamesChanged_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamDeadChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       TeamDead                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaTeamMemberInfo_C*     CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamInfo_C::HandleTeamDeadChanged(TArray<bool>& TeamDead, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Get_Item, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item2, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamInfo_C", "HandleTeamDeadChanged");

	Params::UAthenaTeamInfo_C_HandleTeamDeadChanged_Params Parms;
	Parms.TeamDead = TeamDead;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamDBNOChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       TeamDBNO                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaTeamMemberInfo_C*     CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamInfo_C::HandleTeamDBNOChanged(TArray<bool>& TeamDBNO, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Get_Item, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item2, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamInfo_C", "HandleTeamDBNOChanged");

	Params::UAthenaTeamInfo_C_HandleTeamDBNOChanged_Params Parms;
	Parms.TeamDBNO = TeamDBNO;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      CallFunc_GetTeamHitPointFractions_HealthFractions                (ZeroConstructor, ReferenceParm)
// TArray<float>                      CallFunc_GetTeamHitPointFractions_ShieldFractions                (ZeroConstructor, ReferenceParm)
// class AFortPlayerStateAthena*      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamInfo_C::HandleTeamMemberAdded(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, TArray<float>& CallFunc_GetTeamHitPointFractions_HealthFractions, TArray<float>& CallFunc_GetTeamHitPointFractions_ShieldFractions, class AFortPlayerStateAthena* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamInfo_C", "HandleTeamMemberAdded");

	Params::UAthenaTeamInfo_C_HandleTeamMemberAdded_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTeamHitPointFractions_HealthFractions = CallFunc_GetTeamHitPointFractions_HealthFractions;
	Parms.CallFunc_GetTeamHitPointFractions_ShieldFractions = CallFunc_GetTeamHitPointFractions_ShieldFractions;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamHitInfoChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                      HealthFractions                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                      ShieldFractions                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaTeamMemberInfo_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamInfo_C::HandleTeamHitInfoChanged(TArray<float>& HealthFractions, TArray<float>& ShieldFractions, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item2, float CallFunc_Array_Get_Item3, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamInfo_C", "HandleTeamHitInfoChanged");

	Params::UAthenaTeamInfo_C_HandleTeamHitInfoChanged_Params Parms;
	Parms.HealthFractions = HealthFractions;
	Parms.ShieldFractions = ShieldFractions;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamInfo.AthenaTeamInfo_C.ClearContents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaTeamInfo_C::ClearContents()
{
	static auto Func = Class->GetFunction("AthenaTeamInfo_C", "ClearContents");

	Params::UAthenaTeamInfo_C_ClearContents_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamInfo.AthenaTeamInfo_C.AppendTeamMember
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PlayerState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaTeamMemberInfo_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// class FString                      CallFunc_BuildString_Int_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamInfo_C::AppendTeamMember(class AFortPlayerStateAthena* PlayerState, int32 PlayerIndex, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaTeamMemberInfo_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const class FString& CallFunc_BuildString_Int_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamInfo_C", "AppendTeamMember");

	Params::UAthenaTeamInfo_C_AppendTeamMember_Params Parms;
	Parms.PlayerState = PlayerState;
	Parms.PlayerIndex = PlayerIndex;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_BuildString_Int_ReturnValue = CallFunc_BuildString_Int_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamInfo.AthenaTeamInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaTeamInfo_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaTeamInfo_C", "Construct");

	Params::UAthenaTeamInfo_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandlePartyLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaTeamInfo_C::HandlePartyLeft()
{
	static auto Func = Class->GetFunction("AthenaTeamInfo_C", "HandlePartyLeft");

	Params::UAthenaTeamInfo_C_HandlePartyLeft_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamInfo.AthenaTeamInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamInfo_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaTeamInfo_C", "PreConstruct");

	Params::UAthenaTeamInfo_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamInfo.AthenaTeamInfo_C.ExecuteUbergraph_AthenaTeamInfo
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<bool>                       CallFunc_GetTeamMuted_MutedStates                                (ZeroConstructor, ReferenceParm)
// TArray<bool>                       CallFunc_GetTeamTalking_TalkingStates                            (ZeroConstructor, ReferenceParm)
// TArray<bool>                       CallFunc_GetTeamReviving_RevivingStates                          (ZeroConstructor, ReferenceParm)
// TArray<bool>                       CallFunc_GetTeamDBNO_DBNOStates                                  (ZeroConstructor, ReferenceParm)
// TArray<bool>                       CallFunc_GetTeamDead_DeadStates                                  (ZeroConstructor, ReferenceParm)
// TArray<float>                      CallFunc_GetTeamHitPointFractions_HealthFractions                (ZeroConstructor, ReferenceParm)
// TArray<float>                      CallFunc_GetTeamHitPointFractions_ShieldFractions                (ZeroConstructor, ReferenceParm)
// class AFortPlayerStateAthena*      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaTeamMemberInfo_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)

void UAthenaTeamInfo_C::ExecuteUbergraph_AthenaTeamInfo(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<bool>& CallFunc_GetTeamMuted_MutedStates, TArray<bool>& CallFunc_GetTeamTalking_TalkingStates, TArray<bool>& CallFunc_GetTeamReviving_RevivingStates, TArray<bool>& CallFunc_GetTeamDBNO_DBNOStates, TArray<bool>& CallFunc_GetTeamDead_DeadStates, TArray<float>& CallFunc_GetTeamHitPointFractions_HealthFractions, TArray<float>& CallFunc_GetTeamHitPointFractions_ShieldFractions, class AFortPlayerStateAthena* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UAthenaTeamMemberInfo_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9)
{
	static auto Func = Class->GetFunction("AthenaTeamInfo_C", "ExecuteUbergraph_AthenaTeamInfo");

	Params::UAthenaTeamInfo_C_ExecuteUbergraph_AthenaTeamInfo_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetTeamMuted_MutedStates = CallFunc_GetTeamMuted_MutedStates;
	Parms.CallFunc_GetTeamTalking_TalkingStates = CallFunc_GetTeamTalking_TalkingStates;
	Parms.CallFunc_GetTeamReviving_RevivingStates = CallFunc_GetTeamReviving_RevivingStates;
	Parms.CallFunc_GetTeamDBNO_DBNOStates = CallFunc_GetTeamDBNO_DBNOStates;
	Parms.CallFunc_GetTeamDead_DeadStates = CallFunc_GetTeamDead_DeadStates;
	Parms.CallFunc_GetTeamHitPointFractions_HealthFractions = CallFunc_GetTeamHitPointFractions_HealthFractions;
	Parms.CallFunc_GetTeamHitPointFractions_ShieldFractions = CallFunc_GetTeamHitPointFractions_ShieldFractions;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
