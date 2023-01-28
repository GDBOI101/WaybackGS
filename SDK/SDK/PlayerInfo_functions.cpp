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


// Function PlayerInfo.PlayerInfo_C.UpdateLocalPlayerInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         Player_Info                                                      (Parm, OutParm, ReferenceParm)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumPlayersInLocalParty_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerPartyLeader_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerInfo_C::UpdateLocalPlayerInfo(struct FFortTeamMemberInfo& Player_Info, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortPartyContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, bool CallFunc_IsLocalPlayerPartyLeader_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("PlayerInfo_C", "UpdateLocalPlayerInfo");

	Params::UPlayerInfo_C_UpdateLocalPlayerInfo_Params Parms;
	Parms.Player_Info = Player_Info;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetNumPlayersInLocalParty_ReturnValue = CallFunc_GetNumPlayersInLocalParty_ReturnValue;
	Parms.CallFunc_IsLocalPlayerPartyLeader_ReturnValue = CallFunc_IsLocalPlayerPartyLeader_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerInfo.PlayerInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerInfo_C::Construct()
{
	static auto Func = Class->GetFunction("PlayerInfo_C", "Construct");

	Params::UPlayerInfo_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerInfo.PlayerInfo_C.HandlePlayerStateChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         PlayerInfo                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void UPlayerInfo_C::HandlePlayerStateChanged(struct FFortTeamMemberInfo& PlayerInfo)
{
	static auto Func = Class->GetFunction("PlayerInfo_C", "HandlePlayerStateChanged");

	Params::UPlayerInfo_C_HandlePlayerStateChanged_Params Parms;
	Parms.PlayerInfo = PlayerInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerInfo.PlayerInfo_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerInfo_C::Destruct()
{
	static auto Func = Class->GetFunction("PlayerInfo_C", "Destruct");

	Params::UPlayerInfo_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerInfo.PlayerInfo_C.ExecuteUbergraph_PlayerInfo
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTeamMemberInfo         CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo            ()
// struct FFortTeamMemberInfo         K2Node_CustomEvent_PlayerInfo                                    (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UPlayerInfo_C::ExecuteUbergraph_PlayerInfo(int32 EntryPoint, class UFortPartyContext* CallFunc_GetContext_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo, const struct FFortTeamMemberInfo& K2Node_CustomEvent_PlayerInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("PlayerInfo_C", "ExecuteUbergraph_PlayerInfo");

	Params::UPlayerInfo_C_ExecuteUbergraph_PlayerInfo_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo = CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo;
	Parms.K2Node_CustomEvent_PlayerInfo = K2Node_CustomEvent_PlayerInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
