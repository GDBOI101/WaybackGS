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


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.EnablePowerBarChunk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      InImage                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()

void UOutpostScreenStormShieldContent_C::EnablePowerBarChunk(class UImage* InImage, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "EnablePowerBarChunk");

	Params::UOutpostScreenStormShieldContent_C_EnablePowerBarChunk_Params Parms;
	Parms.InImage = InImage;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.CenterActiveButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsEnabled_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenStormShieldContent_C::CenterActiveButton(bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue3, bool CallFunc_GetIsEnabled_ReturnValue3)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "CenterActiveButton");

	Params::UOutpostScreenStormShieldContent_C_CenterActiveButton_Params Parms;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue2 = CallFunc_GetIsEnabled_ReturnValue2;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue2 = CallFunc_GetUINavigationManager_ReturnValue2;
	Parms.CallFunc_GetUINavigationManager_ReturnValue3 = CallFunc_GetUINavigationManager_ReturnValue3;
	Parms.CallFunc_GetIsEnabled_ReturnValue3 = CallFunc_GetIsEnabled_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenStormShieldContent_C::HandleBack(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "HandleBack");

	Params::UOutpostScreenStormShieldContent_C_HandleBack_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.AddInputHandlers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UOutpostScreenStormShieldContent_C::AddInputHandlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "AddInputHandlers");

	Params::UOutpostScreenStormShieldContent_C_AddInputHandlers_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.SetButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled_                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenStormShieldContent_C::SetButtonState(bool Enabled_)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "SetButtonState");

	Params::UOutpostScreenStormShieldContent_C_SetButtonState_Params Parms;
	Parms.Enabled_ = Enabled_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Get_GetHelpButton_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UOutpostScreenStormShieldContent_C::Get_GetHelpButton_ToolTipWidget_0(class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "Get_GetHelpButton_ToolTipWidget_0");

	Params::UOutpostScreenStormShieldContent_C_Get_GetHelpButton_ToolTipWidget_0_Params Parms;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.UpdateGetHelpButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerOutpost*OutpostControllerReference                                       (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOutpostOwner_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPartyType              CallFunc_GetPartyPrivacySetting_OutPartyType                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetPartyPrivacySetting_OutLeaderFriendsOnly             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetPartyPrivacySetting_OutLeaderInvitesOnly             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetPartyPrivacySetting_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumPlayersInLocalParty_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerOutpost*K2Node_DynamicCast_AsFort_Player_Controller_Outpost              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerControllerOutpost_C*K2Node_DynamicCast_AsBP_Player_Controller_Outpost                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenStormShieldContent_C::UpdateGetHelpButton(class AFortPlayerControllerOutpost* OutpostControllerReference, bool CallFunc_IsOutpostOwner_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EPartyType CallFunc_GetPartyPrivacySetting_OutPartyType, bool CallFunc_GetPartyPrivacySetting_OutLeaderFriendsOnly, bool CallFunc_GetPartyPrivacySetting_OutLeaderInvitesOnly, bool CallFunc_GetPartyPrivacySetting_ReturnValue, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class ABP_PlayerControllerOutpost_C* K2Node_DynamicCast_AsBP_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess2)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "UpdateGetHelpButton");

	Params::UOutpostScreenStormShieldContent_C_UpdateGetHelpButton_Params Parms;
	Parms.OutpostControllerReference = OutpostControllerReference;
	Parms.CallFunc_IsOutpostOwner_ReturnValue = CallFunc_IsOutpostOwner_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetPartyPrivacySetting_OutPartyType = CallFunc_GetPartyPrivacySetting_OutPartyType;
	Parms.CallFunc_GetPartyPrivacySetting_OutLeaderFriendsOnly = CallFunc_GetPartyPrivacySetting_OutLeaderFriendsOnly;
	Parms.CallFunc_GetPartyPrivacySetting_OutLeaderInvitesOnly = CallFunc_GetPartyPrivacySetting_OutLeaderInvitesOnly;
	Parms.CallFunc_GetPartyPrivacySetting_ReturnValue = CallFunc_GetPartyPrivacySetting_ReturnValue;
	Parms.CallFunc_GetNumPlayersInLocalParty_ReturnValue = CallFunc_GetNumPlayersInLocalParty_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Outpost = K2Node_DynamicCast_AsFort_Player_Controller_Outpost;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_Outpost = K2Node_DynamicCast_AsBP_Player_Controller_Outpost;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.SetExpandShieldText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewExpandText                                                    (Parm)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenStormShieldContent_C::SetExpandShieldText(class FText NewExpandText, class FText CallFunc_GetText_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "SetExpandShieldText");

	Params::UOutpostScreenStormShieldContent_C_SetExpandShieldText_Params Parms;
	Parms.NewExpandText = NewExpandText;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Update_ExpandShieldText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortOutpostContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOutpostCoreLevel_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenStormShieldContent_C::Update_ExpandShieldText(class UFortOutpostContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetOutpostCoreLevel_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "Update_ExpandShieldText");

	Params::UOutpostScreenStormShieldContent_C_Update_ExpandShieldText_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetOutpostCoreLevel_ReturnValue = CallFunc_GetOutpostCoreLevel_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.SetCoreBuilding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortOutpostBuilding*        NewCoreBuilding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOutpostScreenStormShield_C* Parent_Widget                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenStormShieldContent_C::SetCoreBuilding(class AFortOutpostBuilding* NewCoreBuilding, class UOutpostScreenStormShield_C* Parent_Widget)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "SetCoreBuilding");

	Params::UOutpostScreenStormShieldContent_C_SetCoreBuilding_Params Parms;
	Parms.NewCoreBuilding = NewCoreBuilding;
	Parms.Parent_Widget = Parent_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Update_LeaveOutpost_ButtonEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerOutpost*K2Node_DynamicCast_AsFort_Player_Controller_Outpost              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                K2Node_DynamicCast_AsBPI_Storm_Shield_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOutpostOwner_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanLeaveOutpost_AllowedToLeave                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenStormShieldContent_C::Update_LeaveOutpost_ButtonEnabled(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, UInterfaceProperty_ K2Node_DynamicCast_AsBPI_Storm_Shield_Interface, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsOutpostOwner_ReturnValue, bool CallFunc_CanLeaveOutpost_AllowedToLeave, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "Update_LeaveOutpost_ButtonEnabled");

	Params::UOutpostScreenStormShieldContent_C_Update_LeaveOutpost_ButtonEnabled_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Outpost = K2Node_DynamicCast_AsFort_Player_Controller_Outpost;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Shield_Interface = K2Node_DynamicCast_AsBPI_Storm_Shield_Interface;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_IsOutpostOwner_ReturnValue = CallFunc_IsOutpostOwner_ReturnValue;
	Parms.CallFunc_CanLeaveOutpost_AllowedToLeave = CallFunc_CanLeaveOutpost_AllowedToLeave;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Get_LeaveOutpost_Button_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UOutpostScreenStormShieldContent_C::Get_LeaveOutpost_Button_ToolTipWidget(class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "Get_LeaveOutpost_Button_ToolTipWidget");

	Params::UOutpostScreenStormShieldContent_C_Get_LeaveOutpost_Button_ToolTipWidget_Params Parms;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.IsOwningPlayerOutpostOwner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerOutpost*K2Node_DynamicCast_AsFort_Player_Controller_Outpost              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOutpostOwner_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UOutpostScreenStormShieldContent_C::IsOwningPlayerOutpostOwner(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOutpostOwner_ReturnValue)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "IsOwningPlayerOutpostOwner");

	Params::UOutpostScreenStormShieldContent_C_IsOwningPlayerOutpostOwner_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Outpost = K2Node_DynamicCast_AsFort_Player_Controller_Outpost;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsOutpostOwner_ReturnValue = CallFunc_IsOutpostOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Update_Upgrade_ButtonEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsOwningPlayerOutpostOwner_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                K2Node_DynamicCast_AsBPI_Storm_Shield_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetOutpostReadyState_ReadyToExpand                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetOutpostReadyState_ReadyToInstallAmplifier            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenStormShieldContent_C::Update_Upgrade_ButtonEnabled(bool CallFunc_IsOwningPlayerOutpostOwner_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsBPI_Storm_Shield_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetOutpostReadyState_ReadyToExpand, bool CallFunc_GetOutpostReadyState_ReadyToInstallAmplifier)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "Update_Upgrade_ButtonEnabled");

	Params::UOutpostScreenStormShieldContent_C_Update_Upgrade_ButtonEnabled_Params Parms;
	Parms.CallFunc_IsOwningPlayerOutpostOwner_ReturnValue = CallFunc_IsOwningPlayerOutpostOwner_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Shield_Interface = K2Node_DynamicCast_AsBPI_Storm_Shield_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOutpostReadyState_ReadyToExpand = CallFunc_GetOutpostReadyState_ReadyToExpand;
	Parms.CallFunc_GetOutpostReadyState_ReadyToInstallAmplifier = CallFunc_GetOutpostReadyState_ReadyToInstallAmplifier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.isPlayerAlone
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsAlone                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortTeamMemberInfo> CallFunc_GetTeamMembers_TeamMembers                              (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenStormShieldContent_C::IsPlayerAlone(bool* IsAlone, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, TArray<struct FFortTeamMemberInfo>& CallFunc_GetTeamMembers_TeamMembers, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "isPlayerAlone");

	Params::UOutpostScreenStormShieldContent_C_IsPlayerAlone_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.CallFunc_GetTeamMembers_TeamMembers = CallFunc_GetTeamMembers_TeamMembers;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsAlone != nullptr)
		*IsAlone = Parms.IsAlone;

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.ResrouceProgress_Wood
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewParam                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewParam1                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenStormShieldContent_C::ResrouceProgress_Wood(int32 NewParam, int32 NewParam1)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "ResrouceProgress_Wood");

	Params::UOutpostScreenStormShieldContent_C_ResrouceProgress_Wood_Params Parms;
	Parms.NewParam = NewParam;
	Parms.NewParam1 = NewParam1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.GetPercent_2
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetResourceCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UOutpostScreenStormShieldContent_C::GetPercent_2(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetResourceCount_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "GetPercent_2");

	Params::UOutpostScreenStormShieldContent_C_GetPercent_2_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetResourceCount_ReturnValue = CallFunc_GetResourceCount_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.GetPercent_1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetResourceCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UOutpostScreenStormShieldContent_C::GetPercent_1(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetResourceCount_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "GetPercent_1");

	Params::UOutpostScreenStormShieldContent_C_GetPercent_1_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetResourceCount_ReturnValue = CallFunc_GetResourceCount_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.GetPercent_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetResourceCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UOutpostScreenStormShieldContent_C::GetPercent_0(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetResourceCount_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "GetPercent_0");

	Params::UOutpostScreenStormShieldContent_C_GetPercent_0_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetResourceCount_ReturnValue = CallFunc_GetResourceCount_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOutpostScreenStormShieldContent_C::Construct()
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "Construct");

	Params::UOutpostScreenStormShieldContent_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.UpdateEnabledStates
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOutpostScreenStormShieldContent_C::UpdateEnabledStates()
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "UpdateEnabledStates");

	Params::UOutpostScreenStormShieldContent_C_UpdateEnabledStates_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.BndEvt__Upgrade_Button_K2Node_ComponentBoundEvent_158_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenStormShieldContent_C::BndEvt__Upgrade_Button_K2Node_ComponentBoundEvent_158_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "BndEvt__Upgrade_Button_K2Node_ComponentBoundEvent_158_CommonButtonClicked__DelegateSignature");

	Params::UOutpostScreenStormShieldContent_C_BndEvt__Upgrade_Button_K2Node_ComponentBoundEvent_158_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.OutpostIsDefined_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOutpostScreenStormShieldContent_C::OutpostIsDefined_Event()
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "OutpostIsDefined_Event");

	Params::UOutpostScreenStormShieldContent_C_OutpostIsDefined_Event_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.BndEvt__AllowFriendsOfFriendsButton_K2Node_ComponentBoundEvent_243_CommonSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenStormShieldContent_C::BndEvt__AllowFriendsOfFriendsButton_K2Node_ComponentBoundEvent_243_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "BndEvt__AllowFriendsOfFriendsButton_K2Node_ComponentBoundEvent_243_CommonSelectedStateChanged__DelegateSignature");

	Params::UOutpostScreenStormShieldContent_C_BndEvt__AllowFriendsOfFriendsButton_K2Node_ComponentBoundEvent_243_CommonSelectedStateChanged__DelegateSignature_Params Parms;
	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.ExecuteUbergraph_OutpostScreenStormShieldContent
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortOutpostContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOutpostCoreLevel_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerControllerOutpost_C*K2Node_DynamicCast_AsBP_Player_Controller_Outpost                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerControllerOutpost_C*K2Node_DynamicCast_AsBP_Player_Controller_Outpost2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOwningPlayerOutpostOwner_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                K2Node_DynamicCast_AsBPI_Storm_Shield_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetOutpostReadyState_ReadyToExpand                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetOutpostReadyState_ReadyToInstallAmplifier            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                ()
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerControllerOutpost_C*K2Node_DynamicCast_AsBP_Player_Controller_Outpost3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenStormShieldContent_C::ExecuteUbergraph_OutpostScreenStormShieldContent(int32 EntryPoint, class UFortOutpostContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_GetOutpostCoreLevel_ReturnValue, class ABP_PlayerControllerOutpost_C* K2Node_DynamicCast_AsBP_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class ABP_PlayerControllerOutpost_C* K2Node_DynamicCast_AsBP_Player_Controller_Outpost2, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsOwningPlayerOutpostOwner_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsBPI_Storm_Shield_Interface, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_GetOutpostReadyState_ReadyToExpand, bool CallFunc_GetOutpostReadyState_ReadyToInstallAmplifier, bool CallFunc_BooleanAND_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class FText CallFunc_GetEmptyText_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_Selected, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, class ABP_PlayerControllerOutpost_C* K2Node_DynamicCast_AsBP_Player_Controller_Outpost3, bool K2Node_DynamicCast_bSuccess4)
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "ExecuteUbergraph_OutpostScreenStormShieldContent");

	Params::UOutpostScreenStormShieldContent_C_ExecuteUbergraph_OutpostScreenStormShieldContent_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOutpostCoreLevel_ReturnValue = CallFunc_GetOutpostCoreLevel_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_Outpost = K2Node_DynamicCast_AsBP_Player_Controller_Outpost;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_Outpost2 = K2Node_DynamicCast_AsBP_Player_Controller_Outpost2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_IsOwningPlayerOutpostOwner_ReturnValue = CallFunc_IsOwningPlayerOutpostOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Shield_Interface = K2Node_DynamicCast_AsBPI_Storm_Shield_Interface;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetOutpostReadyState_ReadyToExpand = CallFunc_GetOutpostReadyState_ReadyToExpand;
	Parms.CallFunc_GetOutpostReadyState_ReadyToInstallAmplifier = CallFunc_GetOutpostReadyState_ReadyToInstallAmplifier;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_Selected = K2Node_ComponentBoundEvent_Selected;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue3 = CallFunc_GetOwningPlayer_ReturnValue3;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_Outpost3 = K2Node_DynamicCast_AsBP_Player_Controller_Outpost3;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.OutpostIsDefined__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOutpostScreenStormShieldContent_C::OutpostIsDefined__DelegateSignature()
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "OutpostIsDefined__DelegateSignature");

	Params::UOutpostScreenStormShieldContent_C_OutpostIsDefined__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.CloseOutpostScreen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOutpostScreenStormShieldContent_C::CloseOutpostScreen__DelegateSignature()
{
	static auto Func = Class->GetFunction("OutpostScreenStormShieldContent_C", "CloseOutpostScreen__DelegateSignature");

	Params::UOutpostScreenStormShieldContent_C_CloseOutpostScreen__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
