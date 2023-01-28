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


// Function TabInputOptions.TabInputOptions_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabInputOptions_C::NewFunction_0()
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "NewFunction_0");

	Params::UTabInputOptions_C_NewFunction_0_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.Set Input Enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetListWidget_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsMenuInput_C*         K2Node_DynamicCast_AsOptions_Menu_Input                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabInputOptions_C::Set_Input_Enabled(int32 Temp_int_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue, class UWidget* CallFunc_GetListWidget_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UOptionsMenuInput_C* K2Node_DynamicCast_AsOptions_Menu_Input, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "Set Input Enabled");

	Params::UTabInputOptions_C_Set_Input_Enabled_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_GetListWidget_ReturnValue = CallFunc_GetListWidget_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsOptions_Menu_Input = K2Node_DynamicCast_AsOptions_Menu_Input;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.Overlay Key Pressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        NewKey                                                           (Parm, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabInputOptions_C::Overlay_Key_Pressed(const struct FKey& NewKey, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "Overlay Key Pressed");

	Params::UTabInputOptions_C_Overlay_Key_Pressed_Params Parms;
	Parms.NewKey = NewKey;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTabInputOptions_C::Construct()
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "Construct");

	Params::UTabInputOptions_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.Input Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number_in_List                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Primary_Button                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabInputOptions_C::Input_Clicked(int32 Number_in_List, bool Is_Primary_Button)
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "Input Clicked");

	Params::UTabInputOptions_C_Input_Clicked_Params Parms;
	Parms.Number_in_List = Number_in_List;
	Parms.Is_Primary_Button = Is_Primary_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabInputOptions_C::CenterOnTab()
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "CenterOnTab");

	Params::UTabInputOptions_C_CenterOnTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabInputOptions_C::UpdateOptionsTab()
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "UpdateOptionsTab");

	Params::UTabInputOptions_C_UpdateOptionsTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabInputOptions_C::BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature");

	Params::UTabInputOptions_C_BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature_Params Parms;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.HandleUsingGamepadChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabInputOptions_C::HandleUsingGamepadChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "HandleUsingGamepadChanged");

	Params::UTabInputOptions_C_HandleUsingGamepadChanged_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.UnbindClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number_in_List                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabInputOptions_C::UnbindClicked(int32 Number_in_List)
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "UnbindClicked");

	Params::UTabInputOptions_C_UnbindClicked_Params Parms;
	Parms.Number_in_List = Number_in_List;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.ExecuteUbergraph_TabInputOptions
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_Number_In_List2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Is_Primary_Button                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetListWidget_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenuInput_C*         K2Node_DynamicCast_AsOptions_Menu_Input                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsMenuInput_C*         K2Node_DynamicCast_AsOptions_Menu_Input2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_in_List                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_MakeStruct_Key                                            (HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)

void UTabInputOptions_C::ExecuteUbergraph_TabInputOptions(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_Number_In_List2, bool K2Node_CustomEvent_Is_Primary_Button, enum class ESlateVisibility Temp_byte_Variable2, class UObject* CallFunc_GetItemAt_ReturnValue, class UWidget* CallFunc_GetListWidget_ReturnValue, class UOptionsMenuInput_C* K2Node_DynamicCast_AsOptions_Menu_Input, bool K2Node_DynamicCast_bSuccess, class UUserWidget* K2Node_ComponentBoundEvent_Widget, bool K2Node_Event_bUsingGamepad, class UOptionsMenuInput_C* K2Node_DynamicCast_AsOptions_Menu_Input2, bool K2Node_DynamicCast_bSuccess2, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool CallFunc_Not_PreBool_ReturnValue2, bool Temp_bool_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 K2Node_CustomEvent_Number_in_List, enum class ESlateVisibility K2Node_Select2_Default, const struct FKey& K2Node_MakeStruct_Key, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2)
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "ExecuteUbergraph_TabInputOptions");

	Params::UTabInputOptions_C_ExecuteUbergraph_TabInputOptions_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Number_In_List2 = K2Node_CustomEvent_Number_In_List2;
	Parms.K2Node_CustomEvent_Is_Primary_Button = K2Node_CustomEvent_Is_Primary_Button;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.CallFunc_GetListWidget_ReturnValue = CallFunc_GetListWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsOptions_Menu_Input = K2Node_DynamicCast_AsOptions_Menu_Input;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.K2Node_DynamicCast_AsOptions_Menu_Input2 = K2Node_DynamicCast_AsOptions_Menu_Input2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_CustomEvent_Number_in_List = K2Node_CustomEvent_Number_in_List;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_MakeStruct_Key = K2Node_MakeStruct_Key;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.Gamepad Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Gamepad_Enabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabInputOptions_C::Gamepad_Changed__DelegateSignature(bool Gamepad_Enabled)
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "Gamepad Changed__DelegateSignature");

	Params::UTabInputOptions_C_Gamepad_Changed__DelegateSignature_Params Parms;
	Parms.Gamepad_Enabled = Gamepad_Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.Disable Overlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabInputOptions_C::Disable_Overlay__DelegateSignature()
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "Disable Overlay__DelegateSignature");

	Params::UTabInputOptions_C_Disable_Overlay__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabInputOptions.TabInputOptions_C.Enable Overlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Accept_Input                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Overlay_Text                                                     (Parm)

void UTabInputOptions_C::Enable_Overlay__DelegateSignature(bool Accept_Input, class FText Overlay_Text)
{
	static auto Func = Class->GetFunction("TabInputOptions_C", "Enable Overlay__DelegateSignature");

	Params::UTabInputOptions_C_Enable_Overlay__DelegateSignature_Params Parms;
	Parms.Accept_Input = Accept_Input;
	Parms.Overlay_Text = Overlay_Text;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
