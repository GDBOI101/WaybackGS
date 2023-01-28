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


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.CenterWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOutpostScreenCanEditRow_C*  K2Node_DynamicCast_AsOutpost_Screen_Can_Edit_Row                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenCanEditPanel_C::CenterWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UOutpostScreenCanEditRow_C* K2Node_DynamicCast_AsOutpost_Screen_Can_Edit_Row, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("OutpostScreenCanEditPanel_C", "CenterWidget");

	Params::UOutpostScreenCanEditPanel_C_CenterWidget_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsOutpost_Screen_Can_Edit_Row = K2Node_DynamicCast_AsOutpost_Screen_Can_Edit_Row;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.SetMasterSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCanEdit                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateOutpost*     LocalPlayerState                                                 (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalCanEdit                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerPawn*>     CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns                (ZeroConstructor, ReferenceParm)
// class AFortPlayerPawn*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateOutpost*     K2Node_DynamicCast_AsFort_Player_State_Outpost                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenCanEditPanel_C::SetMasterSwitch(bool bCanEdit, class AFortPlayerStateOutpost* LocalPlayerState, bool LocalCanEdit, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, TArray<class AFortPlayerPawn*>& CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns, class AFortPlayerPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AFortPlayerStateOutpost* K2Node_DynamicCast_AsFort_Player_State_Outpost, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("OutpostScreenCanEditPanel_C", "SetMasterSwitch");

	Params::UOutpostScreenCanEditPanel_C_SetMasterSwitch_Params Parms;
	Parms.bCanEdit = bCanEdit;
	Parms.LocalPlayerState = LocalPlayerState;
	Parms.LocalCanEdit = LocalCanEdit;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns = CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Outpost = K2Node_DynamicCast_AsFort_Player_State_Outpost;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerOutpost*InOutpostOwner                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOutpostOwner_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateOutpost*     K2Node_DynamicCast_AsFort_Player_State_Outpost                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOutpostScreenCanEditRow_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerPawn*>     CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns                (ZeroConstructor, ReferenceParm)
// class AFortPlayerPawn*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateOutpost*     K2Node_DynamicCast_AsFort_Player_State_Outpost2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenCanEditPanel_C::Init(class AFortPlayerControllerOutpost* InOutpostOwner, bool CallFunc_IsOutpostOwner_ReturnValue, class AFortPlayerStateOutpost* K2Node_DynamicCast_AsFort_Player_State_Outpost, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable, class UOutpostScreenCanEditRow_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, TArray<class AFortPlayerPawn*>& CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns, class AFortPlayerPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AFortPlayerStateOutpost* K2Node_DynamicCast_AsFort_Player_State_Outpost2, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_BooleanAND_ReturnValue2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("OutpostScreenCanEditPanel_C", "Init");

	Params::UOutpostScreenCanEditPanel_C_Init_Params Parms;
	Parms.InOutpostOwner = InOutpostOwner;
	Parms.CallFunc_IsOutpostOwner_ReturnValue = CallFunc_IsOutpostOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Outpost = K2Node_DynamicCast_AsFort_Player_State_Outpost;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns = CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Outpost2 = K2Node_DynamicCast_AsFort_Player_State_Outpost2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*             Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenCanEditPanel_C::BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool Selected)
{
	static auto Func = Class->GetFunction("OutpostScreenCanEditPanel_C", "BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature");

	Params::UOutpostScreenCanEditPanel_C_BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature_Params Parms;
	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOutpostScreenCanEditPanel_C::Construct()
{
	static auto Func = Class->GetFunction("OutpostScreenCanEditPanel_C", "Construct");

	Params::UOutpostScreenCanEditPanel_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.HandleJoined
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         NewTeamMemberInfo                                                (Parm)

void UOutpostScreenCanEditPanel_C::HandleJoined(const struct FFortTeamMemberInfo& NewTeamMemberInfo)
{
	static auto Func = Class->GetFunction("OutpostScreenCanEditPanel_C", "HandleJoined");

	Params::UOutpostScreenCanEditPanel_C_HandleJoined_Params Parms;
	Parms.NewTeamMemberInfo = NewTeamMemberInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.HandleRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenCanEditPanel_C::HandleRemoved(int32 PlayerIndex)
{
	static auto Func = Class->GetFunction("OutpostScreenCanEditPanel_C", "HandleRemoved");

	Params::UOutpostScreenCanEditPanel_C_HandleRemoved_Params Parms;
	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenCanEditPanel_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected)
{
	static auto Func = Class->GetFunction("OutpostScreenCanEditPanel_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature");

	Params::UOutpostScreenCanEditPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature_Params Parms;
	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.PartyUpdated
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         PlayerInfo                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void UOutpostScreenCanEditPanel_C::PartyUpdated(struct FFortTeamMemberInfo& PlayerInfo)
{
	static auto Func = Class->GetFunction("OutpostScreenCanEditPanel_C", "PartyUpdated");

	Params::UOutpostScreenCanEditPanel_C_PartyUpdated_Params Parms;
	Parms.PlayerInfo = PlayerInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.ExecuteUbergraph_OutpostScreenCanEditPanel
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTeamMemberInfo         K2Node_CustomEvent_PlayerInfo                                    (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortBaseButton*             K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FFortTeamMemberInfo         K2Node_CustomEvent_NewTeamMemberInfo                             ()
// int32                              K2Node_CustomEvent_PlayerIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenCanEditPanel_C::ExecuteUbergraph_OutpostScreenCanEditPanel(int32 EntryPoint, const struct FFortTeamMemberInfo& K2Node_CustomEvent_PlayerInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortBaseButton* K2Node_ComponentBoundEvent_Button2, bool K2Node_ComponentBoundEvent_Selected2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FFortTeamMemberInfo& K2Node_CustomEvent_NewTeamMemberInfo, int32 K2Node_CustomEvent_PlayerIndex, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_Selected, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue)
{
	static auto Func = Class->GetFunction("OutpostScreenCanEditPanel_C", "ExecuteUbergraph_OutpostScreenCanEditPanel");

	Params::UOutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_PlayerInfo = K2Node_CustomEvent_PlayerInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Selected2 = K2Node_ComponentBoundEvent_Selected2;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_NewTeamMemberInfo = K2Node_CustomEvent_NewTeamMemberInfo;
	Parms.K2Node_CustomEvent_PlayerIndex = K2Node_CustomEvent_PlayerIndex;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_Selected = K2Node_ComponentBoundEvent_Selected;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
