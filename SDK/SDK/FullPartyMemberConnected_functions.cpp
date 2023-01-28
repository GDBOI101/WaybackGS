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


// Function FullPartyMemberConnected.FullPartyMemberConnected_C.UpdateDimensions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   NewDimensions                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMemberConnected_C::UpdateDimensions(const struct FVector2D& NewDimensions)
{
	static auto Func = Class->GetFunction("FullPartyMemberConnected_C", "UpdateDimensions");

	Params::UFullPartyMemberConnected_C_UpdateDimensions_Params Parms;
	Parms.NewDimensions = NewDimensions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberConnected.FullPartyMemberConnected_C.UpdateMemberInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         NewMemberInfo                                                    (Parm)
// struct FUniqueNetIdRepl            PlayerNetId                                                      (Edit, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLocalPlayersParty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidNetID_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_Select3_Default                                           (HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTotalHomebaseRating_Rating                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalHomebaseRating_ProgressFraction                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTotalHomebaseRating_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMemberConnected_C::UpdateMemberInfo(const struct FFortTeamMemberInfo& NewMemberInfo, const struct FUniqueNetIdRepl& PlayerNetId, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UHomeBaseContext* CallFunc_GetContext_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable3, bool CallFunc_IsInLocalPlayersParty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable6, bool Temp_bool_Variable4, enum class ESlateVisibility K2Node_Select2_Default, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, const struct FUniqueNetIdRepl& K2Node_Select3_Default, enum class ESlateVisibility K2Node_Select4_Default, int32 CallFunc_GetTotalHomebaseRating_Rating, float CallFunc_GetTotalHomebaseRating_ProgressFraction, bool CallFunc_GetTotalHomebaseRating_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("FullPartyMemberConnected_C", "UpdateMemberInfo");

	Params::UFullPartyMemberConnected_C_UpdateMemberInfo_Params Parms;
	Parms.NewMemberInfo = NewMemberInfo;
	Parms.PlayerNetId = PlayerNetId;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_IsInLocalPlayersParty_ReturnValue = CallFunc_IsInLocalPlayersParty_ReturnValue;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValidNetID_ReturnValue = CallFunc_IsValidNetID_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_GetTotalHomebaseRating_Rating = CallFunc_GetTotalHomebaseRating_Rating;
	Parms.CallFunc_GetTotalHomebaseRating_ProgressFraction = CallFunc_GetTotalHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetTotalHomebaseRating_ReturnValue = CallFunc_GetTotalHomebaseRating_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberConnected.FullPartyMemberConnected_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFullPartyMemberConnected_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("FullPartyMemberConnected_C", "PreConstruct");

	Params::UFullPartyMemberConnected_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberConnected.FullPartyMemberConnected_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFullPartyMemberConnected_C::Construct()
{
	static auto Func = Class->GetFunction("FullPartyMemberConnected_C", "Construct");

	Params::UFullPartyMemberConnected_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberConnected.FullPartyMemberConnected_C.ExecuteUbergraph_FullPartyMemberConnected
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFullPartyMemberConnected_C::ExecuteUbergraph_FullPartyMemberConnected(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("FullPartyMemberConnected_C", "ExecuteUbergraph_FullPartyMemberConnected");

	Params::UFullPartyMemberConnected_C_ExecuteUbergraph_FullPartyMemberConnected_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
