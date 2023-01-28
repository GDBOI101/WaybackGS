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


// Function PowerToastWidget.PowerToastWidget_C.UpdatePowerRating
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetHomebaseRating_Rating                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHomebaseRating_ProgressFraction                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHomebaseRating_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// int32                              CallFunc_GetLocalPlayerHomebaseRating_Rating                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLocalPlayerHomebaseRating_ProgressFraction           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerHomebaseRating_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTeamMemberInfo         CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo            ()
// int32                              CallFunc_GetTeamHomebaseRating_Rating                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTeamHomebaseRating_ProgressFraction                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTeamHomebaseRating_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UPowerToastWidget_C::UpdatePowerRating(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, int32 CallFunc_GetHomebaseRating_Rating, float CallFunc_GetHomebaseRating_ProgressFraction, bool CallFunc_GetHomebaseRating_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetLocalPlayerHomebaseRating_Rating, float CallFunc_GetLocalPlayerHomebaseRating_ProgressFraction, bool CallFunc_GetLocalPlayerHomebaseRating_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, const struct FFortTeamMemberInfo& CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo, int32 CallFunc_GetTeamHomebaseRating_Rating, float CallFunc_GetTeamHomebaseRating_ProgressFraction, bool CallFunc_GetTeamHomebaseRating_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "UpdatePowerRating");

	Params::UPowerToastWidget_C_UpdatePowerRating_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetHomebaseRating_Rating = CallFunc_GetHomebaseRating_Rating;
	Parms.CallFunc_GetHomebaseRating_ProgressFraction = CallFunc_GetHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetHomebaseRating_ReturnValue = CallFunc_GetHomebaseRating_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetLocalPlayerHomebaseRating_Rating = CallFunc_GetLocalPlayerHomebaseRating_Rating;
	Parms.CallFunc_GetLocalPlayerHomebaseRating_ProgressFraction = CallFunc_GetLocalPlayerHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetLocalPlayerHomebaseRating_ReturnValue = CallFunc_GetLocalPlayerHomebaseRating_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo = CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo;
	Parms.CallFunc_GetTeamHomebaseRating_Rating = CallFunc_GetTeamHomebaseRating_Rating;
	Parms.CallFunc_GetTeamHomebaseRating_ProgressFraction = CallFunc_GetTeamHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetTeamHomebaseRating_ReturnValue = CallFunc_GetTeamHomebaseRating_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.StartIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerToastWidget_C::StartIntro(bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "StartIntro");

	Params::UPowerToastWidget_C_StartIntro_Params Parms;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.ShowText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Parm)
// class UCommonTextBlock*            TextBlock                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            LocalTextBlock                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        LocalText                                                        (Edit)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerToastWidget_C::ShowText(class FText Text, class UCommonTextBlock* TextBlock, class UCommonTextBlock* LocalTextBlock, class FText LocalText, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "ShowText");

	Params::UPowerToastWidget_C_ShowText_Params Parms;
	Parms.Text = Text;
	Parms.TextBlock = TextBlock;
	Parms.LocalTextBlock = LocalTextBlock;
	Parms.LocalText = LocalText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.SetToast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINotification*         Toast                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRegisteredPlayerInfo*   CallFunc_GetPlayerInfoFromUniqueID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTeamMemberSynchronizing_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()

void UPowerToastWidget_C::SetToast(class UFortUINotification* Toast, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortRegisteredPlayerInfo* CallFunc_GetPlayerInfoFromUniqueID_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTeamMemberSynchronizing_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue)
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "SetToast");

	Params::UPowerToastWidget_C_SetToast_Params Parms;
	Parms.Toast = Toast;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetPlayerInfoFromUniqueID_ReturnValue = CallFunc_GetPlayerInfoFromUniqueID_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsTeamMemberSynchronizing_ReturnValue = CallFunc_IsTeamMemberSynchronizing_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPowerToastWidget_C::Construct()
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "Construct");

	Params::UPowerToastWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.HandleIntroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPowerToastWidget_C::HandleIntroFinished()
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "HandleIntroFinished");

	Params::UPowerToastWidget_C_HandleIntroFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.HandleOutroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPowerToastWidget_C::HandleOutroFinished()
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "HandleOutroFinished");

	Params::UPowerToastWidget_C_HandleOutroFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.HandleAnimationDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPowerToastWidget_C::HandleAnimationDelay()
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "HandleAnimationDelay");

	Params::UPowerToastWidget_C_HandleAnimationDelay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void UPowerToastWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "OnMouseEnter");

	Params::UPowerToastWidget_C_OnMouseEnter_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void UPowerToastWidget_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "OnMouseLeave");

	Params::UPowerToastWidget_C_OnMouseLeave_Params Parms;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerToastWidget_C::BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::UPowerToastWidget_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.OnPlayerInfoChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         NewInfo                                                          (Parm)

void UPowerToastWidget_C::OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo)
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "OnPlayerInfoChanged");

	Params::UPowerToastWidget_C_OnPlayerInfoChanged_Params Parms;
	Parms.NewInfo = NewInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPowerToastWidget_C::BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UPowerToastWidget_C_BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPowerToastWidget_C::BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UPowerToastWidget_C_BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.OnTeamMemberFinishedSynchronizing_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            NewTeamMemberId                                                  (Parm, HasGetValueTypeHash)

void UPowerToastWidget_C::OnTeamMemberFinishedSynchronizing_Event_0(const struct FUniqueNetIdRepl& NewTeamMemberId)
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "OnTeamMemberFinishedSynchronizing_Event_0");

	Params::UPowerToastWidget_C_OnTeamMemberFinishedSynchronizing_Event_0_Params Parms;
	Parms.NewTeamMemberId = NewTeamMemberId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.HandleSynchronizeTimeout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPowerToastWidget_C::HandleSynchronizeTimeout()
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "HandleSynchronizeTimeout");

	Params::UPowerToastWidget_C_HandleSynchronizeTimeout_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.ExecuteUbergraph_PowerToastWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent2                                         (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTeamMemberInfo         K2Node_Event_NewInfo                                             ()
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_NewTeamMemberId                               (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerToastWidget_C::ExecuteUbergraph_PowerToastWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent2, const struct FPointerEvent& K2Node_Event_MouseEvent, class UCommonButton* K2Node_ComponentBoundEvent_Button, const struct FFortTeamMemberInfo& K2Node_Event_NewInfo, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_NewTeamMemberId, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue)
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "ExecuteUbergraph_PowerToastWidget");

	Params::UPowerToastWidget_C_ExecuteUbergraph_PowerToastWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent2 = K2Node_Event_MouseEvent2;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_NewInfo = K2Node_Event_NewInfo;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_CustomEvent_NewTeamMemberId = K2Node_CustomEvent_NewTeamMemberId;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.OnFinishedToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPowerToastWidget_C::OnFinishedToast__DelegateSignature()
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "OnFinishedToast__DelegateSignature");

	Params::UPowerToastWidget_C_OnFinishedToast__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
