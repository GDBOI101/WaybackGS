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


// Function ChatWidget.ChatWidget_C.InitializeChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInCursorMode_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatWidget_C::InitializeChat(class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInCursorMode_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select_Default, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWidget* K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("ChatWidget_C", "InitializeChat");

	Params::UChatWidget_C_InitializeChat_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsInCursorMode_ReturnValue = CallFunc_IsInCursorMode_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatWidget.ChatWidget_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatWidget_C::BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortHUDContext* CallFunc_GetContext_ReturnValue3)
{
	static auto Func = Class->GetFunction("ChatWidget_C", "BindDelegates");

	Params::UChatWidget_C_BindDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatWidget.ChatWidget_C.HandleCursorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatWidget_C::HandleCursorModeChanged(bool bEnabled, class FName ActionName, class UUserWidget* Widget, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ChatWidget_C", "HandleCursorModeChanged");

	Params::UChatWidget_C_HandleCursorModeChanged_Params Parms;
	Parms.bEnabled = bEnabled;
	Parms.ActionName = ActionName;
	Parms.Widget = Widget;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatWidget.ChatWidget_C.HandleShowChatWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortUIFeature          Feature                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIFeatureState     FeatureState                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIFeatureState     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatWidget_C::HandleShowChatWindow(enum class EFortUIFeature Feature, enum class EFortUIFeatureState FeatureState, enum class EFortUIFeatureState Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ChatWidget_C", "HandleShowChatWindow");

	Params::UChatWidget_C_HandleShowChatWindow_Params Parms;
	Parms.Feature = Feature;
	Parms.FeatureState = FeatureState;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatWidget.ChatWidget_C.HandeChatEnteredEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnteringChat                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NewLocalVar_0                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatWidget_C::HandeChatEnteredEvent(bool bEnteringChat, bool NewLocalVar_0, enum class ESlateVisibility Temp_byte_Variable, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, class UCommonUIContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsUsingGamepad_ReturnValue2, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue4, enum class ESlateVisibility K2Node_Select_Default, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("ChatWidget_C", "HandeChatEnteredEvent");

	Params::UChatWidget_C_HandeChatEnteredEvent_Params Parms;
	Parms.bEnteringChat = bEnteringChat;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_IsUsingGamepad_ReturnValue2 = CallFunc_IsUsingGamepad_ReturnValue2;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetInputManager_ReturnValue2 = CallFunc_GetInputManager_ReturnValue2;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatWidget.ChatWidget_C.UpdateChatUserListIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Open                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Select_Default                                            (NoDestructor)
// struct FSlateBrush                 CallFunc_GetInputActionButtonIcon_ReturnValue                    ()

void UChatWidget_C::UpdateChatUserListIcon(bool Open, bool Temp_bool_Variable, class UCommonUIContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, const struct FDataTableRowHandle& K2Node_Select_Default, const struct FSlateBrush& CallFunc_GetInputActionButtonIcon_ReturnValue)
{
	static auto Func = Class->GetFunction("ChatWidget_C", "UpdateChatUserListIcon");

	Params::UChatWidget_C_UpdateChatUserListIcon_Params Parms;
	Parms.Open = Open;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetInputActionButtonIcon_ReturnValue = CallFunc_GetInputActionButtonIcon_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatWidget.ChatWidget_C.Set Chat Shortcut Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        New_Visibility                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatWidget_C::Set_Chat_Shortcut_Visibility(enum class ESlateVisibility New_Visibility, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ChatWidget_C", "Set Chat Shortcut Visibility");

	Params::UChatWidget_C_Set_Chat_Shortcut_Visibility_Params Parms;
	Parms.New_Visibility = New_Visibility;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatWidget.ChatWidget_C.Set Chat Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        New_Visibility                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatWidget_C::Set_Chat_Visibility(enum class ESlateVisibility New_Visibility)
{
	static auto Func = Class->GetFunction("ChatWidget_C", "Set Chat Visibility");

	Params::UChatWidget_C_Set_Chat_Visibility_Params Parms;
	Parms.New_Visibility = New_Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatWidget.ChatWidget_C.BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatWidget_C::BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ChatWidget_C", "BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature");

	Params::UChatWidget_C_BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatWidget.ChatWidget_C.BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bEnteringChat                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatWidget_C::BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature(bool bEnteringChat)
{
	static auto Func = Class->GetFunction("ChatWidget_C", "BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature");

	Params::UChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature_Params Parms;
	Parms.bEnteringChat = bEnteringChat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatWidget.ChatWidget_C.BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bOpen                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatWidget_C::BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature(bool bOpen)
{
	static auto Func = Class->GetFunction("ChatWidget_C", "BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature");

	Params::UChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature_Params Parms;
	Parms.bOpen = bOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatWidget.ChatWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UChatWidget_C::Construct()
{
	static auto Func = Class->GetFunction("ChatWidget_C", "Construct");

	Params::UChatWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatWidget.ChatWidget_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatWidget_C::HandleInputMethodChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("ChatWidget_C", "HandleInputMethodChanged");

	Params::UChatWidget_C_HandleInputMethodChanged_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatWidget.ChatWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UChatWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("ChatWidget_C", "Destruct");

	Params::UChatWidget_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatWidget.ChatWidget_C.ExecuteUbergraph_ChatWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bEnteringChat                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bOpen                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bUsingGamepad                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatWidget_C::ExecuteUbergraph_ChatWidget(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_bEnteringChat, bool K2Node_ComponentBoundEvent_bOpen, bool K2Node_CustomEvent_bUsingGamepad, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ChatWidget_C", "ExecuteUbergraph_ChatWidget");

	Params::UChatWidget_C_ExecuteUbergraph_ChatWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_bEnteringChat = K2Node_ComponentBoundEvent_bEnteringChat;
	Parms.K2Node_ComponentBoundEvent_bOpen = K2Node_ComponentBoundEvent_bOpen;
	Parms.K2Node_CustomEvent_bUsingGamepad = K2Node_CustomEvent_bUsingGamepad;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatWidget.ChatWidget_C.AboutToEnterChat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChatWidget_C::AboutToEnterChat__DelegateSignature()
{
	static auto Func = Class->GetFunction("ChatWidget_C", "AboutToEnterChat__DelegateSignature");

	Params::UChatWidget_C_AboutToEnterChat__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
