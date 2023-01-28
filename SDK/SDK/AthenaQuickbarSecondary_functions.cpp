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


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleMaximizeShowing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ConfigF                                                          (Edit, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ConfigE                                                          (Edit, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsConfigE                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsConfigF                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentInputPresetName_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentInputPresetName_ReturnValue2                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuickbarSlot_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickbarSecondary_C::HandleMaximizeShowing(const class FString& ConfigF, const class FString& ConfigE, bool IsConfigE, bool IsConfigF, int32 Temp_int_Array_Index_Variable, bool CallFunc_BooleanOR_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsUsingGamepad_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue2, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaQuickbarSecondary_C", "HandleMaximizeShowing");

	Params::UAthenaQuickbarSecondary_C_HandleMaximizeShowing_Params Parms;
	Parms.ConfigF = ConfigF;
	Parms.ConfigE = ConfigE;
	Parms.IsConfigE = IsConfigE;
	Parms.IsConfigF = IsConfigF;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetCurrentInputPresetName_ReturnValue = CallFunc_GetCurrentInputPresetName_ReturnValue;
	Parms.CallFunc_GetCurrentInputPresetName_ReturnValue2 = CallFunc_GetCurrentInputPresetName_ReturnValue2;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue2 = CallFunc_EqualEqual_StrStr_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleShowHideRail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickbarSecondary_C::HandleShowHideRail(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaQuickbarSecondary_C", "HandleShowHideRail");

	Params::UAthenaQuickbarSecondary_C_HandleShowHideRail_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleMinimizeHiding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ConfigE                                                          (Edit, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ConfigF                                                          (Edit, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsConfigE                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsConfigF                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentInputPresetName_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentInputPresetName_ReturnValue2                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuickbarSlot_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickbarSecondary_C::HandleMinimizeHiding(const class FString& ConfigE, const class FString& ConfigF, bool IsConfigE, bool IsConfigF, int32 Temp_int_Array_Index_Variable, bool CallFunc_BooleanOR_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsUsingGamepad_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue2, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaQuickbarSecondary_C", "HandleMinimizeHiding");

	Params::UAthenaQuickbarSecondary_C_HandleMinimizeHiding_Params Parms;
	Parms.ConfigE = ConfigE;
	Parms.ConfigF = ConfigF;
	Parms.IsConfigE = IsConfigE;
	Parms.IsConfigF = IsConfigF;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetCurrentInputPresetName_ReturnValue = CallFunc_GetCurrentInputPresetName_ReturnValue;
	Parms.CallFunc_GetCurrentInputPresetName_ReturnValue2 = CallFunc_GetCurrentInputPresetName_ReturnValue2;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue2 = CallFunc_EqualEqual_StrStr_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleKeyBindsChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuickbarSlot_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaQuickbarSecondary_C::HandleKeyBindsChange(int32 Temp_int_Array_Index_Variable, class UQuickbarSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaQuickbarSecondary_C", "HandleKeyBindsChange");

	Params::UAthenaQuickbarSecondary_C_HandleKeyBindsChange_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Show Secondary Quickbar Rail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickbarSecondary_C::Show_Secondary_Quickbar_Rail(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaQuickbarSecondary_C", "Show Secondary Quickbar Rail");

	Params::UAthenaQuickbarSecondary_C_Show_Secondary_Quickbar_Rail_Params Parms;
	Parms.Show = Show;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Maximize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaQuickbarSecondary_C::Maximize()
{
	static auto Func = Class->GetFunction("AthenaQuickbarSecondary_C", "Maximize");

	Params::UAthenaQuickbarSecondary_C_Maximize_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Minimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaQuickbarSecondary_C::Minimize()
{
	static auto Func = Class->GetFunction("AthenaQuickbarSecondary_C", "Minimize");

	Params::UAthenaQuickbarSecondary_C_Minimize_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaQuickbarSecondary_C::HandleKeybindsChanged()
{
	static auto Func = Class->GetFunction("AthenaQuickbarSecondary_C", "HandleKeybindsChanged");

	Params::UAthenaQuickbarSecondary_C_HandleKeybindsChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleInputMethodChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickbarSecondary_C::HandleInputMethodChanged_Bind(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("AthenaQuickbarSecondary_C", "HandleInputMethodChanged_Bind");

	Params::UAthenaQuickbarSecondary_C_HandleInputMethodChanged_Bind_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaQuickbarSecondary_C::Destruct()
{
	static auto Func = Class->GetFunction("AthenaQuickbarSecondary_C", "Destruct");

	Params::UAthenaQuickbarSecondary_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.OnQuickBarSlotFocusChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          QuickbarIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Slot                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaQuickbarSecondary_C::OnQuickBarSlotFocusChanged_Bind(enum class EFortQuickBars QuickbarIndex, int32 Slot)
{
	static auto Func = Class->GetFunction("AthenaQuickbarSecondary_C", "OnQuickBarSlotFocusChanged_Bind");

	Params::UAthenaQuickbarSecondary_C_OnQuickBarSlotFocusChanged_Bind_Params Parms;
	Parms.QuickbarIndex = QuickbarIndex;
	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaQuickbarSecondary_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaQuickbarSecondary_C", "Construct");

	Params::UAthenaQuickbarSecondary_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.OnQuickbarContentsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          QuickbarIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickbarSecondary_C::OnQuickbarContentsChanged(enum class EFortQuickBars QuickbarIndex)
{
	static auto Func = Class->GetFunction("AthenaQuickbarSecondary_C", "OnQuickbarContentsChanged");

	Params::UAthenaQuickbarSecondary_C_OnQuickbarContentsChanged_Params Parms;
	Parms.QuickbarIndex = QuickbarIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.ExecuteUbergraph_AthenaQuickbarSecondary
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUsingGamepad                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// enum class EFortQuickBars          K2Node_CustomEvent_QuickbarIndex                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Slot                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UQuickbarSlot_C*>     K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          K2Node_Event_QuickbarIndex                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickbarSecondary_C::ExecuteUbergraph_AthenaQuickbarSecondary(int32 EntryPoint, bool K2Node_CustomEvent_bUsingGamepad, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex, int32 K2Node_CustomEvent_Slot, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class UQuickbarSlot_C*>& K2Node_MakeArray_Array, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, class UCommonUIContext* CallFunc_GetContext_ReturnValue3, enum class EFortQuickBars K2Node_Event_QuickbarIndex)
{
	static auto Func = Class->GetFunction("AthenaQuickbarSecondary_C", "ExecuteUbergraph_AthenaQuickbarSecondary");

	Params::UAthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_bUsingGamepad = K2Node_CustomEvent_bUsingGamepad;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_QuickbarIndex = K2Node_CustomEvent_QuickbarIndex;
	Parms.K2Node_CustomEvent_Slot = K2Node_CustomEvent_Slot;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.K2Node_Event_QuickbarIndex = K2Node_Event_QuickbarIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
