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


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team Player Names Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberIndicator_C::On_Team_Player_Names_Changed()
{
	static auto Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "On Team Player Names Changed");

	Params::UAthenaTeamMemberIndicator_C_On_Team_Player_Names_Changed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team Talking Changed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       Team_Talking                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberIndicator_C::On_Team_Talking_Changed(TArray<bool>& Team_Talking, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, bool CallFunc_Array_Get_Item, float CallFunc_SelectFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "On Team Talking Changed");

	Params::UAthenaTeamMemberIndicator_C_On_Team_Talking_Changed_Params Parms;
	Parms.Team_Talking = Team_Talking;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team Reviving Changed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       Team_Reviving                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberIndicator_C::On_Team_Reviving_Changed(TArray<bool>& Team_Reviving, bool CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "On Team Reviving Changed");

	Params::UAthenaTeamMemberIndicator_C_On_Team_Reviving_Changed_Params Parms;
	Parms.Team_Reviving = Team_Reviving;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team DBNO Changed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       DBNOStates                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberIndicator_C::On_Team_DBNO_Changed(TArray<bool>& DBNOStates, bool CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "On Team DBNO Changed");

	Params::UAthenaTeamMemberIndicator_C_On_Team_DBNO_Changed_Params Parms;
	Parms.DBNOStates = DBNOStates;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberIndicator_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "Construct");

	Params::UAthenaTeamMemberIndicator_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberIndicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "Tick");

	Params::UAthenaTeamMemberIndicator_C_Tick_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberIndicator_C::Destruct()
{
	static auto Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "Destruct");

	Params::UAthenaTeamMemberIndicator_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Update Pawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberIndicator_C::Update_Pawn()
{
	static auto Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "Update Pawn");

	Params::UAthenaTeamMemberIndicator_C_Update_Pawn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.CapturePlayerName
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberIndicator_C::CapturePlayerName()
{
	static auto Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "CapturePlayerName");

	Params::UAthenaTeamMemberIndicator_C_CapturePlayerName_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.ExecuteUbergraph_AthenaTeamMemberIndicator
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetCurrentPawn_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDBNO_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)

void UAthenaTeamMemberIndicator_C::ExecuteUbergraph_AthenaTeamMemberIndicator(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AFortPlayerPawn* CallFunc_GetCurrentPawn_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsDBNO_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "ExecuteUbergraph_AthenaTeamMemberIndicator");

	Params::UAthenaTeamMemberIndicator_C_ExecuteUbergraph_AthenaTeamMemberIndicator_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetCurrentPawn_ReturnValue = CallFunc_GetCurrentPawn_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsDBNO_ReturnValue = CallFunc_IsDBNO_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
