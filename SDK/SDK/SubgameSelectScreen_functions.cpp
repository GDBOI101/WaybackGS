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


// Function SubgameSelectScreen.SubgameSelectScreen_C.ShowUpsell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::ShowUpsell(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "ShowUpsell");

	Params::USubgameSelectScreen_C_ShowUpsell_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeRedeemButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void USubgameSelectScreen_C::InitializeRedeemButton(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "InitializeRedeemButton");

	Params::USubgameSelectScreen_C_InitializeRedeemButton_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue2 = CallFunc_EqualEqual_StrStr_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeShortDescriptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ShortDescription                                                 (Edit)
// class FText                        CallFunc_GetShortDescription_ShortDescription                    ()
// bool                               CallFunc_GetShortDescription_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                ()
// class FText                        CallFunc_GetEmptyText_ReturnValue2                               ()
// class FText                        CallFunc_GetShortDescription_ShortDescription2                   ()
// bool                               CallFunc_GetShortDescription_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void USubgameSelectScreen_C::InitializeShortDescriptions(class FText ShortDescription, class FText CallFunc_GetShortDescription_ShortDescription, bool CallFunc_GetShortDescription_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue2, class FText CallFunc_GetShortDescription_ShortDescription2, bool CallFunc_GetShortDescription_ReturnValue2)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "InitializeShortDescriptions");

	Params::USubgameSelectScreen_C_InitializeShortDescriptions_Params Parms;
	Parms.ShortDescription = ShortDescription;
	Parms.CallFunc_GetShortDescription_ShortDescription = CallFunc_GetShortDescription_ShortDescription;
	Parms.CallFunc_GetShortDescription_ReturnValue = CallFunc_GetShortDescription_ReturnValue;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.CallFunc_GetEmptyText_ReturnValue2 = CallFunc_GetEmptyText_ReturnValue2;
	Parms.CallFunc_GetShortDescription_ShortDescription2 = CallFunc_GetShortDescription_ShortDescription2;
	Parms.CallFunc_GetShortDescription_ReturnValue2 = CallFunc_GetShortDescription_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.IsBusyMatchmakingOrPartyTransitioning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMatchmakingLocal_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerInParty_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool USubgameSelectScreen_C::IsBusyMatchmakingOrPartyTransitioning(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsMatchmakingLocal_ReturnValue, bool CallFunc_IsLocalPlayerInParty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "IsBusyMatchmakingOrPartyTransitioning");

	Params::USubgameSelectScreen_C_IsBusyMatchmakingOrPartyTransitioning_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsMatchmakingLocal_ReturnValue = CallFunc_IsMatchmakingLocal_ReturnValue;
	Parms.CallFunc_IsLocalPlayerInParty_ReturnValue = CallFunc_IsLocalPlayerInParty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::Update()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "Update");

	Params::USubgameSelectScreen_C_Update_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.AdvanceRotator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSubGameSelectRotatorItems  CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::AdvanceRotator(int32 CallFunc_Array_Length_ReturnValue, const struct FSubGameSelectRotatorItems& CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "AdvanceRotator");

	Params::USubgameSelectScreen_C_AdvanceRotator_Params Parms;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.ResetKeyArtForMainMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSubGameSelectRotatorItems  CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)

void USubgameSelectScreen_C::ResetKeyArtForMainMenu(const struct FSubGameSelectRotatorItems& CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "ResetKeyArtForMainMenu");

	Params::USubgameSelectScreen_C_ResetKeyArtForMainMenu_Params Parms;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.ToggleTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void USubgameSelectScreen_C::ToggleTimer(bool Enabled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "ToggleTimer");

	Params::USubgameSelectScreen_C_ToggleTimer_Params Parms;
	Parms.Enabled = Enabled;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.SafeSetSubGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESubGame                SubGame                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CanPlay_DenialReason                                    ()
// bool                               CallFunc_CanPlay_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void USubgameSelectScreen_C::SafeSetSubGame(enum class ESubGame SubGame, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "SafeSetSubGame");

	Params::USubgameSelectScreen_C_SafeSetSubGame_Params Parms;
	Parms.SubGame = SubGame;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_CanPlay_DenialReason = CallFunc_CanPlay_DenialReason;
	Parms.CallFunc_CanPlay_ReturnValue = CallFunc_CanPlay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.SetDescriptionForSubGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESubGame                SubGame                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetFullDescription_FullDescription                      ()
// bool                               CallFunc_GetFullDescription_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetFullDescription_FullDescription2                     ()
// bool                               CallFunc_GetFullDescription_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        CallFunc_CanPlay_DenialReason                                    ()
// bool                               CallFunc_CanPlay_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESubGame                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()

void USubgameSelectScreen_C::SetDescriptionForSubGame(enum class ESubGame SubGame, class FText CallFunc_GetFullDescription_FullDescription, bool CallFunc_GetFullDescription_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetFullDescription_FullDescription2, bool CallFunc_GetFullDescription_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText Temp_text_Variable, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESubGame Temp_byte_Variable, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "SetDescriptionForSubGame");

	Params::USubgameSelectScreen_C_SetDescriptionForSubGame_Params Parms;
	Parms.SubGame = SubGame;
	Parms.CallFunc_GetFullDescription_FullDescription = CallFunc_GetFullDescription_FullDescription;
	Parms.CallFunc_GetFullDescription_ReturnValue = CallFunc_GetFullDescription_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetFullDescription_FullDescription2 = CallFunc_GetFullDescription_FullDescription2;
	Parms.CallFunc_GetFullDescription_ReturnValue2 = CallFunc_GetFullDescription_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_CanPlay_DenialReason = CallFunc_CanPlay_DenialReason;
	Parms.CallFunc_CanPlay_ReturnValue = CallFunc_CanPlay_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.OnCodeRedeemCanceled_4BE2E0B94F226EFF37B0C4B3DCA8A2CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::OnCodeRedeemCanceled_4BE2E0B94F226EFF37B0C4B3DCA8A2CF()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "OnCodeRedeemCanceled_4BE2E0B94F226EFF37B0C4B3DCA8A2CF");

	Params::USubgameSelectScreen_C_OnCodeRedeemCanceled_4BE2E0B94F226EFF37B0C4B3DCA8A2CF_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.OnCodeRedeemComplete_4BE2E0B94F226EFF37B0C4B3DCA8A2CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::OnCodeRedeemComplete_4BE2E0B94F226EFF37B0C4B3DCA8A2CF()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "OnCodeRedeemComplete_4BE2E0B94F226EFF37B0C4B3DCA8A2CF");

	Params::USubgameSelectScreen_C_OnCodeRedeemComplete_4BE2E0B94F226EFF37B0C4B3DCA8A2CF_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.DialogResult_FA087F7E461591BDBC2AECAB522E633C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::DialogResult_FA087F7E461591BDBC2AECAB522E633C(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "DialogResult_FA087F7E461591BDBC2AECAB522E633C");

	Params::USubgameSelectScreen_C_DialogResult_FA087F7E461591BDBC2AECAB522E633C_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Try And Remove The Dialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::Try_And_Remove_The_Dialog()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "Try And Remove The Dialog");

	Params::USubgameSelectScreen_C_Try_And_Remove_The_Dialog_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Clear Party and Matchmaking Delegates
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::Clear_Party_and_Matchmaking_Delegates()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "Clear Party and Matchmaking Delegates");

	Params::USubgameSelectScreen_C_Clear_Party_and_Matchmaking_Delegates_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMatchmakingState       OldState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMatchmakingState       NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::CustomEvent_0(enum class EMatchmakingState OldState, enum class EMatchmakingState NewState)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "CustomEvent_0");

	Params::USubgameSelectScreen_C_CustomEvent_0_Params Parms;
	Parms.OldState = OldState;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::CustomEvent_1()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "CustomEvent_1");

	Params::USubgameSelectScreen_C_CustomEvent_1_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Show Busy If Async Tasks Still Pending
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::Show_Busy_If_Async_Tasks_Still_Pending()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "Show Busy If Async Tasks Still Pending");

	Params::USubgameSelectScreen_C_Show_Busy_If_Async_Tasks_Still_Pending_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::Construct()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "Construct");

	Params::USubgameSelectScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "OnActivated");

	Params::USubgameSelectScreen_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::CustomEvent_2()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "CustomEvent_2");

	Params::USubgameSelectScreen_C_CustomEvent_2_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_67_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_67_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_67_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_67_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.OnRealMoneyPurchaseComleteHandler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubgameSelectScreen_C::OnRealMoneyPurchaseComleteHandler(bool bSuccess)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "OnRealMoneyPurchaseComleteHandler");

	Params::USubgameSelectScreen_C_OnRealMoneyPurchaseComleteHandler_Params Parms;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::Destruct()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "Destruct");

	Params::USubgameSelectScreen_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_114_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__ButtonExit_K2Node_ComponentBoundEvent_114_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__ButtonExit_K2Node_ComponentBoundEvent_114_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_114_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortAsyncAction_ShowPlatformRedeemCode*CallFunc_ShowPlatformRedeemCode_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CanPlay_DenialReason                                    ()
// bool                               CallFunc_CanPlay_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CanPlay_DenialReason2                                   ()
// bool                               CallFunc_CanPlay_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// class UProgressModalWidget_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// enum class EMatchmakingState       K2Node_CustomEvent_OldState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMatchmakingState       K2Node_CustomEvent_NewState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStoreMain_Root_C*           CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable2                                              (ConstParm)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue2      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPlatformDisplayName_ReturnValue                      ()

void USubgameSelectScreen_C::ExecuteUbergraph_SubgameSelectScreen(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortAsyncAction_ShowPlatformRedeemCode* CallFunc_ShowPlatformRedeemCode_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, class UFortMcpContext* CallFunc_GetContext_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue5, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue6, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum2_CmpSuccess, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button9, class UCommonButton* K2Node_ComponentBoundEvent_Button8, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_PauseAnimation_ReturnValue2, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue7, float CallFunc_Subtract_FloatFloat_ReturnValue, class FText CallFunc_CanPlay_DenialReason2, bool CallFunc_CanPlay_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, class FText Temp_text_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, enum class EMatchmakingState K2Node_CustomEvent_OldState, enum class EMatchmakingState K2Node_CustomEvent_NewState, class UCommonButton* K2Node_ComponentBoundEvent_Button7, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class UFortPartyContext* CallFunc_GetContext_ReturnValue8, class UCommonButton* K2Node_ComponentBoundEvent_Button5, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UStoreMain_Root_C* CallFunc_Create_ReturnValue2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue9, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class FText Temp_text_Variable2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue3, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_bSuccess, bool CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, TArray<class FString>& K2Node_MakeArray_Array, class UCommonUIContext* CallFunc_GetContext_ReturnValue10, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, float Temp_float_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button2, bool Temp_bool_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button, float K2Node_Select_Default, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue11, class FText CallFunc_GetPlatformDisplayName_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "ExecuteUbergraph_SubgameSelectScreen");

	Params::USubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_ShowPlatformRedeemCode_ReturnValue = CallFunc_ShowPlatformRedeemCode_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_CanPlay_DenialReason = CallFunc_CanPlay_DenialReason;
	Parms.CallFunc_CanPlay_ReturnValue = CallFunc_CanPlay_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_Button9 = K2Node_ComponentBoundEvent_Button9;
	Parms.K2Node_ComponentBoundEvent_Button8 = K2Node_ComponentBoundEvent_Button8;
	Parms.CallFunc_PauseAnimation_ReturnValue = CallFunc_PauseAnimation_ReturnValue;
	Parms.CallFunc_PauseAnimation_ReturnValue2 = CallFunc_PauseAnimation_ReturnValue2;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_CanPlay_DenialReason2 = CallFunc_CanPlay_DenialReason2;
	Parms.CallFunc_CanPlay_ReturnValue2 = CallFunc_CanPlay_ReturnValue2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CustomEvent_OldState = K2Node_CustomEvent_OldState;
	Parms.K2Node_CustomEvent_NewState = K2Node_CustomEvent_NewState;
	Parms.K2Node_ComponentBoundEvent_Button7 = K2Node_ComponentBoundEvent_Button7;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button6 = K2Node_ComponentBoundEvent_Button6;
	Parms.CallFunc_GetContext_ReturnValue8 = CallFunc_GetContext_ReturnValue8;
	Parms.K2Node_ComponentBoundEvent_Button5 = K2Node_ComponentBoundEvent_Button5;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetUINavigationManager_ReturnValue2 = CallFunc_GetUINavigationManager_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue9 = CallFunc_GetContext_ReturnValue9;
	Parms.K2Node_ComponentBoundEvent_Button4 = K2Node_ComponentBoundEvent_Button4;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.CallFunc_GetUINavigationManager_ReturnValue3 = CallFunc_GetUINavigationManager_ReturnValue3;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue = CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue2 = CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetContext_ReturnValue10 = CallFunc_GetContext_ReturnValue10;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetContext_ReturnValue11 = CallFunc_GetContext_ReturnValue11;
	Parms.CallFunc_GetPlatformDisplayName_ReturnValue = CallFunc_GetPlatformDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
