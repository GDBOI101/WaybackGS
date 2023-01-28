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


// Function MiniPartyMember.MiniPartyMember_C.HandleMouseHoverVisualState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hover                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()

void UMiniPartyMember_C::HandleMouseHoverVisualState(bool Hover, bool Temp_bool_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable2, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static auto Func = Class->GetFunction("MiniPartyMember_C", "HandleMouseHoverVisualState");

	Params::UMiniPartyMember_C_HandleMouseHoverVisualState_Params Parms;
	Parms.Hover = Hover;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MiniPartyMember.MiniPartyMember_C.OpenPartyFinder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPartyFinder_C*              K2Node_DynamicCast_AsParty_Finder                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniPartyMember_C::OpenPartyFinder(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UPartyFinder_C* K2Node_DynamicCast_AsParty_Finder, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MiniPartyMember_C", "OpenPartyFinder");

	Params::UMiniPartyMember_C_OpenPartyFinder_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsParty_Finder = K2Node_DynamicCast_AsParty_Finder;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MiniPartyMember.MiniPartyMember_C.GetLeaderVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UMiniPartyMember_C::GetLeaderVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MiniPartyMember_C", "GetLeaderVisibility");

	Params::UMiniPartyMember_C_GetLeaderVisibility_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MiniPartyMember.MiniPartyMember_C.UpdateMemberInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         NewMemberInfo                                                    (Parm, OutParm, ReferenceParm)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPartyMemberDisplayStateCallFunc_GetPartyMemberDisplayState_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniPartyMember_C::UpdateMemberInfo(struct FFortTeamMemberInfo& NewMemberInfo, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyMemberDisplayState CallFunc_GetPartyMemberDisplayState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("MiniPartyMember_C", "UpdateMemberInfo");

	Params::UMiniPartyMember_C_UpdateMemberInfo_Params Parms;
	Parms.NewMemberInfo = NewMemberInfo;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetPartyMemberDisplayState_ReturnValue = CallFunc_GetPartyMemberDisplayState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MiniPartyMember.MiniPartyMember_C.ShowOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMiniPartyMember_C::ShowOpen()
{
	static auto Func = Class->GetFunction("MiniPartyMember_C", "ShowOpen");

	Params::UMiniPartyMember_C_ShowOpen_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MiniPartyMember.MiniPartyMember_C.ShowConnected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        CallFunc_GetLeaderVisibility_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniPartyMember_C::ShowConnected(enum class ESlateVisibility CallFunc_GetLeaderVisibility_ReturnValue)
{
	static auto Func = Class->GetFunction("MiniPartyMember_C", "ShowConnected");

	Params::UMiniPartyMember_C_ShowConnected_Params Parms;
	Parms.CallFunc_GetLeaderVisibility_ReturnValue = CallFunc_GetLeaderVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MiniPartyMember.MiniPartyMember_C.ShowConnecting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMiniPartyMember_C::ShowConnecting()
{
	static auto Func = Class->GetFunction("MiniPartyMember_C", "ShowConnecting");

	Params::UMiniPartyMember_C_ShowConnecting_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MiniPartyMember.MiniPartyMember_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMiniPartyMember_C::Destruct()
{
	static auto Func = Class->GetFunction("MiniPartyMember_C", "Destruct");

	Params::UMiniPartyMember_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MiniPartyMember.MiniPartyMember_C.OnPlayerInfoChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         NewInfo                                                          (Parm)

void UMiniPartyMember_C::OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo)
{
	static auto Func = Class->GetFunction("MiniPartyMember_C", "OnPlayerInfoChanged");

	Params::UMiniPartyMember_C_OnPlayerInfoChanged_Params Parms;
	Parms.NewInfo = NewInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniPartyMember_C::BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MiniPartyMember_C", "BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature");

	Params::UMiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniPartyMember_C::BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MiniPartyMember_C", "BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature");

	Params::UMiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniPartyMember_C::BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MiniPartyMember_C", "BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature");

	Params::UMiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MiniPartyMember.MiniPartyMember_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniPartyMember_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("MiniPartyMember_C", "PreConstruct");

	Params::UMiniPartyMember_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MiniPartyMember.MiniPartyMember_C.ExecuteUbergraph_MiniPartyMember
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTeamMemberInfo         K2Node_Event_NewInfo                                             ()
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniPartyMember_C::ExecuteUbergraph_MiniPartyMember(int32 EntryPoint, const struct FFortTeamMemberInfo& K2Node_Event_NewInfo, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("MiniPartyMember_C", "ExecuteUbergraph_MiniPartyMember");

	Params::UMiniPartyMember_C_ExecuteUbergraph_MiniPartyMember_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewInfo = K2Node_Event_NewInfo;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
