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


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberKillsChanged
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      Kills                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue2                             ()

void UFullPartyMemberAthena_C::HandleAthenaTeamMemberKillsChanged(TArray<int32>& Kills, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Get_Item, class FText CallFunc_Conv_IntToText_ReturnValue2)
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "HandleAthenaTeamMemberKillsChanged");

	Params::UFullPartyMemberAthena_C_HandleAthenaTeamMemberKillsChanged_Params Parms;
	Parms.Kills = Kills;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_IntToText_ReturnValue2 = CallFunc_Conv_IntToText_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateMicIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFullPartyMemberAthena_C::UpdateMicIndicator()
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "UpdateMicIndicator");

	Params::UFullPartyMemberAthena_C_UpdateMicIndicator_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HighlightEmptyBanner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               BannerIsHighlighted                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMemberAthena_C::HighlightEmptyBanner(bool BannerIsHighlighted, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable2, class UTexture2D* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "HighlightEmptyBanner");

	Params::UFullPartyMemberAthena_C_HighlightEmptyBanner_Params Parms;
	Parms.BannerIsHighlighted = BannerIsHighlighted;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.SetTeamMemberIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMemberAthena_C::SetTeamMemberIndex(int32 Index)
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "SetTeamMemberIndex");

	Params::UFullPartyMemberAthena_C_SetTeamMemberIndex_Params Parms;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberTalkingChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       Talking                                                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFullPartyMemberAthena_C::HandleAthenaTeamMemberTalkingChanged(TArray<bool>& Talking, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "HandleAthenaTeamMemberTalkingChanged");

	Params::UFullPartyMemberAthena_C_HandleAthenaTeamMemberTalkingChanged_Params Parms;
	Parms.Talking = Talking;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberMuteChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       Mutes                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFullPartyMemberAthena_C::HandleAthenaTeamMemberMuteChanged(TArray<bool>& Mutes, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "HandleAthenaTeamMemberMuteChanged");

	Params::UFullPartyMemberAthena_C_HandleAthenaTeamMemberMuteChanged_Params Parms;
	Parms.Mutes = Mutes;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateAthena*      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFullPartyMemberAthena_C::HandleAthenaTeamMemberChanged(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, class AFortPlayerStateAthena* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "HandleAthenaTeamMemberChanged");

	Params::UFullPartyMemberAthena_C_HandleAthenaTeamMemberChanged_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.InitializeConnectedWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFullPartyMemberConnected_C* ConnectedWidget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMemberAthena_C::InitializeConnectedWidget(class UFullPartyMemberConnected_C* ConnectedWidget)
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "InitializeConnectedWidget");

	Params::UFullPartyMemberAthena_C_InitializeConnectedWidget_Params Parms;
	Parms.ConnectedWidget = ConnectedWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.MakeLocalPlayerConfirmActions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               LocalPlayerAlone                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FConfirmationDialogAction>OutConfirmActions                                                (Parm, OutParm, ZeroConstructor)
// TArray<struct FConfirmationDialogAction>ConfirmActions                                                   (Edit, ZeroConstructor)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConfirmationDialogAction   K2Node_MakeStruct_ConfirmationDialogAction                       ()
// struct FConfirmationDialogAction   K2Node_MakeStruct_ConfirmationDialogAction2                      ()
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMemberAthena_C::MakeLocalPlayerConfirmActions(bool LocalPlayerAlone, TArray<struct FConfirmationDialogAction>* OutConfirmActions, const TArray<struct FConfirmationDialogAction>& ConfirmActions, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2)
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "MakeLocalPlayerConfirmActions");

	Params::UFullPartyMemberAthena_C_MakeLocalPlayerConfirmActions_Params Parms;
	Parms.LocalPlayerAlone = LocalPlayerAlone;
	Parms.ConfirmActions = ConfirmActions;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue2 = CallFunc_EqualEqual_StrStr_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_MakeStruct_ConfirmationDialogAction = K2Node_MakeStruct_ConfirmationDialogAction;
	Parms.K2Node_MakeStruct_ConfirmationDialogAction2 = K2Node_MakeStruct_ConfirmationDialogAction2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (OutConfirmActions != nullptr)
		*OutConfirmActions = Parms.OutConfirmActions;

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleLocalPlayerActionsResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMemberAthena_C::HandleLocalPlayerActionsResult(enum class EFortDialogResult Result, class FName ResultName, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue2, class UFortPartyContext* CallFunc_GetContext_ReturnValue2)
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "HandleLocalPlayerActionsResult");

	Params::UFullPartyMemberAthena_C_HandleLocalPlayerActionsResult_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue2 = CallFunc_EqualEqual_NameName_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateLocalPlayerAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FUniqueNetIdRepl>    CallFunc_GetTeamMemberIDs_TeamMemberIDs                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFullPartyMemberAthena_C::UpdateLocalPlayerAction(class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, TArray<struct FUniqueNetIdRepl>& CallFunc_GetTeamMemberIDs_TeamMemberIDs, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "UpdateLocalPlayerAction");

	Params::UFullPartyMemberAthena_C_UpdateLocalPlayerAction_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.CallFunc_GetTeamMemberIDs_TeamMemberIDs = CallFunc_GetTeamMemberIDs_TeamMemberIDs;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.DuplicateConnectedWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFullPartyMemberConnected_C* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFullPartyMemberConnected_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UFullPartyMemberConnected_C* UFullPartyMemberAthena_C::DuplicateConnectedWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFullPartyMemberConnected_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "DuplicateConnectedWidget");

	Params::UFullPartyMemberAthena_C_DuplicateConnectedWidget_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateDimensions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   NewDimensions                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMemberAthena_C::UpdateDimensions(const struct FVector2D& NewDimensions)
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "UpdateDimensions");

	Params::UFullPartyMemberAthena_C_UpdateDimensions_Params Parms;
	Parms.NewDimensions = NewDimensions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ShowConnected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateAthena*      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void UFullPartyMemberAthena_C::ShowConnected(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerStateAthena* CallFunc_Array_Get_Item, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "ShowConnected");

	Params::UFullPartyMemberAthena_C_ShowConnected_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ShowConnecting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFullPartyMemberAthena_C::ShowConnecting()
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "ShowConnecting");

	Params::UFullPartyMemberAthena_C_ShowConnecting_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ShowOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFullPartyMemberAthena_C::ShowOpen()
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "ShowOpen");

	Params::UFullPartyMemberAthena_C_ShowOpen_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateMemberInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         NewMemberInfo                                                    (Parm)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPartyMemberDisplayStateCallFunc_GetPartyMemberDisplayState_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFullPartyMemberAthena_C::UpdateMemberInfo(const struct FFortTeamMemberInfo& NewMemberInfo, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyMemberDisplayState CallFunc_GetPartyMemberDisplayState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "UpdateMemberInfo");

	Params::UFullPartyMemberAthena_C_UpdateMemberInfo_Params Parms;
	Parms.NewMemberInfo = NewMemberInfo;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetPartyMemberDisplayState_ReturnValue = CallFunc_GetPartyMemberDisplayState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFullPartyMemberAthena_C::Construct()
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "Construct");

	Params::UFullPartyMemberAthena_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFullPartyMemberAthena_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "PreConstruct");

	Params::UFullPartyMemberAthena_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFullPartyMemberAthena_C::OnClicked()
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "OnClicked");

	Params::UFullPartyMemberAthena_C_OnClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFullPartyMemberAthena_C::Destruct()
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "Destruct");

	Params::UFullPartyMemberAthena_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.OnPlayerInfoChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         NewInfo                                                          (Parm)

void UFullPartyMemberAthena_C::OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo)
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "OnPlayerInfoChanged");

	Params::UFullPartyMemberAthena_C_OnPlayerInfoChanged_Params Parms;
	Parms.NewInfo = NewInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ExecuteUbergraph_FullPartyMemberAthena
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_PlayerController_C*  K2Node_DynamicCast_AsAthena_Player_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<bool>                       CallFunc_GetTeamMuted_MutedStates                                (ZeroConstructor, ReferenceParm)
// TArray<int32>                      CallFunc_GetTeamKills_Kills                                      (ZeroConstructor, ReferenceParm)
// TArray<bool>                       CallFunc_GetTeamTalking_TalkingStates                            (ZeroConstructor, ReferenceParm)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetPlatformUniqueNetId_ReturnValue                      (HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTeamMemberInfo         K2Node_CustomEvent_NewInfo                                       ()
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_StartsWith_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFullPartyMemberAthena_C::ExecuteUbergraph_FullPartyMemberAthena(int32 EntryPoint, class UFortPartyContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool K2Node_Event_IsDesignTime, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess, TArray<bool>& CallFunc_GetTeamMuted_MutedStates, TArray<int32>& CallFunc_GetTeamKills_Kills, TArray<bool>& CallFunc_GetTeamTalking_TalkingStates, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess2, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue2, class AFortPlayerStateAthena* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetPlatformUniqueNetId_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FFortTeamMemberInfo& K2Node_CustomEvent_NewInfo, const class FString& CallFunc_GetPlatformName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool CallFunc_StartsWith_ReturnValue)
{
	static auto Func = Class->GetFunction("FullPartyMemberAthena_C", "ExecuteUbergraph_FullPartyMemberAthena");

	Params::UFullPartyMemberAthena_C_ExecuteUbergraph_FullPartyMemberAthena_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Player_Controller = K2Node_DynamicCast_AsAthena_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTeamMuted_MutedStates = CallFunc_GetTeamMuted_MutedStates;
	Parms.CallFunc_GetTeamKills_Kills = CallFunc_GetTeamKills_Kills;
	Parms.CallFunc_GetTeamTalking_TalkingStates = CallFunc_GetTeamTalking_TalkingStates;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlatformUniqueNetId_ReturnValue = CallFunc_GetPlatformUniqueNetId_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_CustomEvent_NewInfo = K2Node_CustomEvent_NewInfo;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_StartsWith_ReturnValue = CallFunc_StartsWith_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
