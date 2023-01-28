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


// Function AthenaLobby.AthenaLobby_C.OnInput_ShowCustomMatchmakingKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomMatchmakingKeyModal_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::OnInput_ShowCustomMatchmakingKey(bool* bPassThrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCustomMatchmakingKeyModal_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnInput_ShowCustomMatchmakingKey");

	Params::UAthenaLobby_C_OnInput_ShowCustomMatchmakingKey_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function AthenaLobby.AthenaLobby_C.HighlightsCountChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewParam                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::HighlightsCountChanged(int32 NewParam, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "HighlightsCountChanged");

	Params::UAthenaLobby_C_HighlightsCountChanged_Params Parms;
	Parms.NewParam = NewParam;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.ShowModalNews
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaNewsModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::ShowModalNews(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UAthenaNewsModal_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "ShowModalNews");

	Params::UAthenaLobby_C_ShowModalNews_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnInputNews
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::OnInputNews(bool* bPassThrough)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnInputNews");

	Params::UAthenaLobby_C_OnInputNews_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function AthenaLobby.AthenaLobby_C.OnInputFillChangeGamepad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCommited                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::OnInputFillChangeGamepad(bool* bCommited, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnInputFillChangeGamepad");

	Params::UAthenaLobby_C_OnInputFillChangeGamepad_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCommited != nullptr)
		*bCommited = Parms.bCommited;

}


// Function AthenaLobby.AthenaLobby_C.OnInputPlaylistChangeGamepad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCommited                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::OnInputPlaylistChangeGamepad(bool* bCommited, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnInputPlaylistChangeGamepad");

	Params::UAthenaLobby_C_OnInputPlaylistChangeGamepad_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCommited != nullptr)
		*bCommited = Parms.bCommited;

}


// Function AthenaLobby.AthenaLobby_C.IsLocalPlayer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTeamMemberInfo         CallFunc_Array_Get_Item                                          ()
// struct FFortTeamMemberInfo         CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo            ()
// bool                               CallFunc_AreUniqueIDsIdentical_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::IsLocalPlayer(int32 PlayerIndex, bool* IsLocalPlayer, class UFortPartyContext* CallFunc_GetContext_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, const struct FFortTeamMemberInfo& CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo, bool CallFunc_AreUniqueIDsIdentical_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "IsLocalPlayer");

	Params::UAthenaLobby_C_IsLocalPlayer_Params Parms;
	Parms.PlayerIndex = PlayerIndex;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo = CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo;
	Parms.CallFunc_AreUniqueIDsIdentical_ReturnValue = CallFunc_AreUniqueIDsIdentical_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsLocalPlayer != nullptr)
		*IsLocalPlayer = Parms.IsLocalPlayer;

}


// Function AthenaLobby.AthenaLobby_C.OnSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPartyFinder_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTeamMemberInfo         CallFunc_Array_Get_Item                                          ()
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUIManager_C*                K2Node_DynamicCast_AsUIManager                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::OnSelect(int32 PlayerIndex, class UPartyFinder_C* CallFunc_Create_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnSelect");

	Params::UAthenaLobby_C_OnSelect_Params Parms;
	Parms.PlayerIndex = PlayerIndex;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIManager = K2Node_DynamicCast_AsUIManager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.CanNavigatePlayers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bCanNavigatePlayers                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::CanNavigatePlayers(bool* bCanNavigatePlayers, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "CanNavigatePlayers");

	Params::UAthenaLobby_C_CanNavigatePlayers_Params Parms;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCanNavigatePlayers != nullptr)
		*bCanNavigatePlayers = Parms.bCanNavigatePlayers;

}


// Function AthenaLobby.AthenaLobby_C.SetHoveredPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxTeamSizeForSelectedTheater_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanNavigatePlayers_bCanNavigatePlayers                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::SetHoveredPlayer(int32 PlayerIndex, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_GetMaxTeamSizeForSelectedTheater_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanNavigatePlayers_bCanNavigatePlayers)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "SetHoveredPlayer");

	Params::UAthenaLobby_C_SetHoveredPlayer_Params Parms;
	Parms.PlayerIndex = PlayerIndex;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetMaxTeamSizeForSelectedTheater_ReturnValue = CallFunc_GetMaxTeamSizeForSelectedTheater_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_CanNavigatePlayers_bCanNavigatePlayers = CallFunc_CanNavigatePlayers_bCanNavigatePlayers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.HoverNextPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::HoverNextPlayer(int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "HoverNextPlayer");

	Params::UAthenaLobby_C_HoverNextPlayer_Params Parms;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.HoverPreviousPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::HoverPreviousPlayer(int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "HoverPreviousPlayer");

	Params::UAthenaLobby_C_HoverPreviousPlayer_Params Parms;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.StartMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AFort_Entry_Music_Controller_BP_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class AFort_Entry_Music_Controller_BP_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::StartMusic(TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "StartMusic");

	Params::UAthenaLobby_C_StartMusic_Params Parms;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.ShouldAddPlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bShouldAdd                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldAddCancel_bShouldAdd                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::ShouldAddPlay(bool* bShouldAdd, bool CallFunc_ShouldAddCancel_bShouldAdd, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "ShouldAddPlay");

	Params::UAthenaLobby_C_ShouldAddPlay_Params Parms;
	Parms.CallFunc_ShouldAddCancel_bShouldAdd = CallFunc_ShouldAddCancel_bShouldAdd;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bShouldAdd != nullptr)
		*bShouldAdd = Parms.bShouldAdd;

}


// Function AthenaLobby.AthenaLobby_C.InitializeInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCustomMatchmakingKeyEnabled_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)

void UAthenaLobby_C::InitializeInput(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsCustomMatchmakingKeyEnabled_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "InitializeInput");

	Params::UAthenaLobby_C_InitializeInput_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsCustomMatchmakingKeyEnabled_ReturnValue = CallFunc_IsCustomMatchmakingKeyEnabled_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerPadUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::OnLobbyPlayerPadUnhovered(int32 PlayerIndex, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnLobbyPlayerPadUnhovered");

	Params::UAthenaLobby_C_OnLobbyPlayerPadUnhovered_Params Parms;
	Parms.PlayerIndex = PlayerIndex;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerPadHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::OnLobbyPlayerPadHovered(int32 PlayerIndex, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnLobbyPlayerPadHovered");

	Params::UAthenaLobby_C_OnLobbyPlayerPadHovered_Params Parms;
	Parms.PlayerIndex = PlayerIndex;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerGadgetsClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::OnLobbyPlayerGadgetsClicked(int32 PlayerIndex)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnLobbyPlayerGadgetsClicked");

	Params::UAthenaLobby_C_OnLobbyPlayerGadgetsClicked_Params Parms;
	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnLobbyEmptyPlayerClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::OnLobbyEmptyPlayerClicked(int32 PlayerIndex)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnLobbyEmptyPlayerClicked");

	Params::UAthenaLobby_C_OnLobbyEmptyPlayerClicked_Params Parms;
	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnLobbyDisconnected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::OnLobbyDisconnected(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsVisible_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnLobbyDisconnected");

	Params::UAthenaLobby_C_OnLobbyDisconnected_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.RefreshLaunch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobby_C::RefreshLaunch()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "RefreshLaunch");

	Params::UAthenaLobby_C_RefreshLaunch_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_ShouldAddCancel_bShouldAdd                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnInputCancel_bCommited                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()

struct FEventReply UAthenaLobby_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_ShouldAddCancel_bShouldAdd, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_OnInputCancel_bCommited, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnMouseButtonDown");

	Params::UAthenaLobby_C_OnMouseButtonDown_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_ShouldAddCancel_bShouldAdd = CallFunc_ShouldAddCancel_bShouldAdd;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_OnInputCancel_bCommited = CallFunc_OnInputCancel_bCommited;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaLobby.AthenaLobby_C.ShouldAddScroll
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bShouldAdd                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::ShouldAddScroll(bool* bShouldAdd)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "ShouldAddScroll");

	Params::UAthenaLobby_C_ShouldAddScroll_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (bShouldAdd != nullptr)
		*bShouldAdd = Parms.bShouldAdd;

}


// Function AthenaLobby.AthenaLobby_C.ShouldAddCancel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bShouldAdd                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::ShouldAddCancel(bool* bShouldAdd, bool CallFunc_IsVisible_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "ShouldAddCancel");

	Params::UAthenaLobby_C_ShouldAddCancel_Params Parms;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bShouldAdd != nullptr)
		*bShouldAdd = Parms.bShouldAdd;

}


// Function AthenaLobby.AthenaLobby_C.RefreshInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCustomMatchmakingKeyEnabled_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldAddCancel_bShouldAdd                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldAddScroll_bShouldAdd                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldAddCancel_bShouldAdd2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::RefreshInput(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, bool Temp_bool_Variable2, enum class EInputActionState Temp_byte_Variable3, enum class EInputActionState Temp_byte_Variable4, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable3, bool CallFunc_IsCustomMatchmakingKeyEnabled_ReturnValue, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, bool Temp_bool_Variable4, enum class EInputActionState Temp_byte_Variable7, enum class EInputActionState Temp_byte_Variable8, enum class EInputActionState K2Node_Select_Default, bool CallFunc_ShouldAddCancel_bShouldAdd, bool CallFunc_ShouldAddScroll_bShouldAdd, enum class ESlateVisibility K2Node_Select2_Default, enum class EInputActionState K2Node_Select3_Default, bool CallFunc_ShouldAddCancel_bShouldAdd2, enum class EInputActionState K2Node_Select4_Default)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "RefreshInput");

	Params::UAthenaLobby_C_RefreshInput_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_IsCustomMatchmakingKeyEnabled_ReturnValue = CallFunc_IsCustomMatchmakingKeyEnabled_ReturnValue;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_ShouldAddCancel_bShouldAdd = CallFunc_ShouldAddCancel_bShouldAdd;
	Parms.CallFunc_ShouldAddScroll_bShouldAdd = CallFunc_ShouldAddScroll_bShouldAdd;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_ShouldAddCancel_bShouldAdd2 = CallFunc_ShouldAddCancel_bShouldAdd2;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnInputAbandon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCommited                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::OnInputAbandon(bool* bCommited)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnInputAbandon");

	Params::UAthenaLobby_C_OnInputAbandon_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (bCommited != nullptr)
		*bCommited = Parms.bCommited;

}


// Function AthenaLobby.AthenaLobby_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortPartyContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue5, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue6)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "InitializeContextEvents");

	Params::UAthenaLobby_C_InitializeContextEvents_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsVisible_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "Focus");

	Params::UAthenaLobby_C_Focus_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnInputCancel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCommited                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::OnInputCancel(bool* bCommited, bool CallFunc_IsVisible_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnInputCancel");

	Params::UAthenaLobby_C_OnInputCancel_Params Parms;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCommited != nullptr)
		*bCommited = Parms.bCommited;

}


// Function AthenaLobby.AthenaLobby_C.RefreshPlayerHeroes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTeamMemberInfo         CallFunc_Array_Get_Item                                          ()
// class UFortHero*                   K2Node_DynamicCast_AsFort_Hero                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFortTeamMemberInfo> CallFunc_GetTeamMembers_TeamMembers                              (ZeroConstructor, ReferenceParm)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::RefreshPlayerHeroes(int32 Index, int32 Temp_int_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<struct FFortTeamMemberInfo>& CallFunc_GetTeamMembers_TeamMembers, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "RefreshPlayerHeroes");

	Params::UAthenaLobby_C_RefreshPlayerHeroes_Params Parms;
	Parms.Index = Index;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsFort_Hero = K2Node_DynamicCast_AsFort_Hero;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetTeamMembers_TeamMembers = CallFunc_GetTeamMembers_TeamMembers;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnTeamMemberStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         TeamMemberInfo                                                   (Parm)

void UAthenaLobby_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnTeamMemberStateChanged");

	Params::UAthenaLobby_C_OnTeamMemberStateChanged_Params Parms;
	Parms.TeamMemberInfo = TeamMemberInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnTeamMemberRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EmptySlot                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::OnTeamMemberRemoved(int32 EmptySlot, bool CallFunc_IsActivated_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnTeamMemberRemoved");

	Params::UAthenaLobby_C_OnTeamMemberRemoved_Params Parms;
	Parms.EmptySlot = EmptySlot;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnTeamMemberAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         TeamMemberInfo                                                   (Parm)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_IsActivated_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnTeamMemberAdded");

	Params::UAthenaLobby_C_OnTeamMemberAdded_Params Parms;
	Parms.TeamMemberInfo = TeamMemberInfo;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobby_C::Refresh()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "Refresh");

	Params::UAthenaLobby_C_Refresh_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobby_C::Initialize()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "Initialize");

	Params::UAthenaLobby_C_Initialize_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.DialogResult_156754AE468EF93DCA2009A412591BA7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::DialogResult_156754AE468EF93DCA2009A412591BA7(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "DialogResult_156754AE468EF93DCA2009A412591BA7");

	Params::UAthenaLobby_C_DialogResult_156754AE468EF93DCA2009A412591BA7_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnFailure_DA5E62624D068772EA890193344BA4AE
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobby_C::OnFailure_DA5E62624D068772EA890193344BA4AE()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnFailure_DA5E62624D068772EA890193344BA4AE");

	Params::UAthenaLobby_C_OnFailure_DA5E62624D068772EA890193344BA4AE_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnSuccess_DA5E62624D068772EA890193344BA4AE
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobby_C::OnSuccess_DA5E62624D068772EA890193344BA4AE()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnSuccess_DA5E62624D068772EA890193344BA4AE");

	Params::UAthenaLobby_C_OnSuccess_DA5E62624D068772EA890193344BA4AE_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     ActiveWidget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ActiveWidgetIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature");

	Params::UAthenaLobby_C_BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature_Params Parms;
	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnEndCursorOverPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::OnEndCursorOverPlayer(int32 PlayerIndex)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnEndCursorOverPlayer");

	Params::UAthenaLobby_C_OnEndCursorOverPlayer_Params Parms;
	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.Event Abandon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobby_C::Event_Abandon()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "Event Abandon");

	Params::UAthenaLobby_C_Event_Abandon_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnNavigationLeft
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaLobby_C::OnNavigationLeft()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnNavigationLeft");

	Params::UAthenaLobby_C_OnNavigationLeft_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnNavigationRight
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaLobby_C::OnNavigationRight()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnNavigationRight");

	Params::UAthenaLobby_C_OnNavigationRight_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature");

	Params::UAthenaLobby_C_BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaLobby_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "Construct");

	Params::UAthenaLobby_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnPlayerClicked
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::OnPlayerClicked(int32 PlayerIndex)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnPlayerClicked");

	Params::UAthenaLobby_C_OnPlayerClicked_Params Parms;
	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnBeginCursorOverPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::OnBeginCursorOverPlayer(int32 PlayerIndex)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnBeginCursorOverPlayer");

	Params::UAthenaLobby_C_OnBeginCursorOverPlayer_Params Parms;
	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaLobby_C::BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature");

	Params::UAthenaLobby_C_BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLobby_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnActivated");

	Params::UAthenaLobby_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature");

	Params::UAthenaLobby_C_BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.ExecuteUbergraph_AthenaLobby
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UCMSContext*                 CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNewNewsAvailable_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_ComponentBoundEvent_ActiveWidget                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_ActiveWidgetIndex                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PlayerIndex3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_EnsureClientQuestLogin*CallFunc_SendEnsureClientQuestLogin_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMCPRegion_ReturnValue                                ()
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PlayerIndex2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PlayerIndex                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::ExecuteUbergraph_AthenaLobby(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UCMSContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsNewNewsAvailable_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, int32 K2Node_Event_PlayerIndex3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortAsyncAction_EnsureClientQuestLogin* CallFunc_SendEnsureClientQuestLogin_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, class FText CallFunc_GetMCPRegion_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue5, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue6, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue7, bool CallFunc_IsUsingGamepad_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue8, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue2, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class FName Temp_name_Variable, int32 K2Node_Event_PlayerIndex2, int32 K2Node_Event_PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UFortPartyContext* CallFunc_GetContext_ReturnValue9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "ExecuteUbergraph_AthenaLobby");

	Params::UAthenaLobby_C_ExecuteUbergraph_AthenaLobby_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsNewNewsAvailable_ReturnValue = CallFunc_IsNewNewsAvailable_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ActiveWidget = K2Node_ComponentBoundEvent_ActiveWidget;
	Parms.K2Node_ComponentBoundEvent_ActiveWidgetIndex = K2Node_ComponentBoundEvent_ActiveWidgetIndex;
	Parms.K2Node_Event_PlayerIndex3 = K2Node_Event_PlayerIndex3;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_SendEnsureClientQuestLogin_ReturnValue = CallFunc_SendEnsureClientQuestLogin_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetMCPRegion_ReturnValue = CallFunc_GetMCPRegion_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue8 = CallFunc_GetContext_ReturnValue8;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_Event_PlayerIndex2 = K2Node_Event_PlayerIndex2;
	Parms.K2Node_Event_PlayerIndex = K2Node_Event_PlayerIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.CallFunc_GetContext_ReturnValue9 = CallFunc_GetContext_ReturnValue9;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
