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


// Function PartyFinderListItem.PartyFinderListItem_C.UnbindSocialItemDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinderListItem_C::UnbindSocialItemDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyFinderListItem_C", "UnbindSocialItemDelegates");

	Params::UPartyFinderListItem_C_UnbindSocialItemDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinderListItem.PartyFinderListItem_C.UpdateStateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// class FText                        Temp_text_Variable5                                              ()
// class FText                        Temp_text_Variable6                                              ()
// class FText                        Temp_text_Variable7                                              ()
// class FText                        Temp_text_Variable8                                              ()
// class FText                        Temp_text_Variable9                                              ()
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPartyRestriction   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortPartyRestriction   CallFunc_CanBeJoined_FailReason                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBeJoined_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()

void UPartyFinderListItem_C::UpdateStateText(class FText Temp_text_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyRestriction Temp_byte_Variable, enum class EFortPartyRestriction CallFunc_CanBeJoined_FailReason, bool CallFunc_CanBeJoined_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("PartyFinderListItem_C", "UpdateStateText");

	Params::UPartyFinderListItem_C_UpdateStateText_Params Parms;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_CanBeJoined_FailReason = CallFunc_CanBeJoined_FailReason;
	Parms.CallFunc_CanBeJoined_ReturnValue = CallFunc_CanBeJoined_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinderListItem.PartyFinderListItem_C.SetupExpansion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Expanded                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinderListItem_C::SetupExpansion(bool Expanded, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable2, float K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("PartyFinderListItem_C", "SetupExpansion");

	Params::UPartyFinderListItem_C_SetupExpansion_Params Parms;
	Parms.Expanded = Expanded;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinderListItem.PartyFinderListItem_C.HandlePresenceUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyFinderListItem_C::HandlePresenceUpdated()
{
	static auto Func = Class->GetFunction("PartyFinderListItem_C", "HandlePresenceUpdated");

	Params::UPartyFinderListItem_C_HandlePresenceUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinderListItem.PartyFinderListItem_C.BindSocialItemDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UPartyFinderListItem_C::BindSocialItemDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("PartyFinderListItem_C", "BindSocialItemDelegates");

	Params::UPartyFinderListItem_C_BindSocialItemDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinderListItem.PartyFinderListItem_C.InitializeItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetLocation_ReturnValue                                 ()
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// struct FUniqueNetIdRepl            CallFunc_GetUniquePlayerId_ReturnValue                           (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinderListItem_C::InitializeItem(class FText CallFunc_GetLocation_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("PartyFinderListItem_C", "InitializeItem");

	Params::UPartyFinderListItem_C_InitializeItem_Params Parms;
	Parms.CallFunc_GetLocation_ReturnValue = CallFunc_GetLocation_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetUniquePlayerId_ReturnValue = CallFunc_GetUniquePlayerId_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinderListItem.PartyFinderListItem_C.OnSocialItemSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPartyFinderListItem_C::OnSocialItemSet()
{
	static auto Func = Class->GetFunction("PartyFinderListItem_C", "OnSocialItemSet");

	Params::UPartyFinderListItem_C_OnSocialItemSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinderListItem.PartyFinderListItem_C.ExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bExpanded                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinderListItem_C::ExpansionChanged(bool bExpanded)
{
	static auto Func = Class->GetFunction("PartyFinderListItem_C", "ExpansionChanged");

	Params::UPartyFinderListItem_C_ExpansionChanged_Params Parms;
	Parms.bExpanded = bExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinderListItem.PartyFinderListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPartyFinderListItem_C::Construct()
{
	static auto Func = Class->GetFunction("PartyFinderListItem_C", "Construct");

	Params::UPartyFinderListItem_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinderListItem.PartyFinderListItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPartyFinderListItem_C::Destruct()
{
	static auto Func = Class->GetFunction("PartyFinderListItem_C", "Destruct");

	Params::UPartyFinderListItem_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinderListItem.PartyFinderListItem_C.ExecuteUbergraph_PartyFinderListItem
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bExpanded                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsItemExpanded_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinderListItem_C::ExecuteUbergraph_PartyFinderListItem(int32 EntryPoint, bool K2Node_Event_bExpanded, bool CallFunc_IsItemExpanded_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyFinderListItem_C", "ExecuteUbergraph_PartyFinderListItem");

	Params::UPartyFinderListItem_C_ExecuteUbergraph_PartyFinderListItem_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bExpanded = K2Node_Event_bExpanded;
	Parms.CallFunc_IsItemExpanded_ReturnValue = CallFunc_IsItemExpanded_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinderListItem.PartyFinderListItem_C.InviteJoinChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyFinderListItem_C::InviteJoinChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("PartyFinderListItem_C", "InviteJoinChanged__DelegateSignature");

	Params::UPartyFinderListItem_C_InviteJoinChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
