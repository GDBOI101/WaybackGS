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


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleShowHideWeaponRail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasOneNonHarvestWeapon_HasNonHarvestWeapon              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickbarPrimary_C::HandleShowHideWeaponRail(bool CallFunc_HasOneNonHarvestWeapon_HasNonHarvestWeapon, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaQuickbarPrimary_C", "HandleShowHideWeaponRail");

	Params::UAthenaQuickbarPrimary_C_HandleShowHideWeaponRail_Params Parms;
	Parms.CallFunc_HasOneNonHarvestWeapon_HasNonHarvestWeapon = CallFunc_HasOneNonHarvestWeapon_HasNonHarvestWeapon;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HasOneNonHarvestWeapon
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasNonHarvestWeapon                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuickbarSlot_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickbarPrimary_C::HasOneNonHarvestWeapon(bool* HasNonHarvestWeapon, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UQuickbarSlot_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaQuickbarPrimary_C", "HasOneNonHarvestWeapon");

	Params::UAthenaQuickbarPrimary_C_HasOneNonHarvestWeapon_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasNonHarvestWeapon != nullptr)
		*HasNonHarvestWeapon = Parms.HasNonHarvestWeapon;

}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Show Primary Quickbar Rail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickbarPrimary_C::Show_Primary_Quickbar_Rail(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaQuickbarPrimary_C", "Show Primary Quickbar Rail");

	Params::UAthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail_Params Parms;
	Parms.Show = Show;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaQuickbarPrimary_C::HandleKeybindsChanged()
{
	static auto Func = Class->GetFunction("AthenaQuickbarPrimary_C", "HandleKeybindsChanged");

	Params::UAthenaQuickbarPrimary_C_HandleKeybindsChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleInputMethodChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickbarPrimary_C::HandleInputMethodChanged_Bind(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("AthenaQuickbarPrimary_C", "HandleInputMethodChanged_Bind");

	Params::UAthenaQuickbarPrimary_C_HandleInputMethodChanged_Bind_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaQuickbarPrimary_C::Destruct()
{
	static auto Func = Class->GetFunction("AthenaQuickbarPrimary_C", "Destruct");

	Params::UAthenaQuickbarPrimary_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.OnQuickBarSlotFocusChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          QuickbarIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Slot                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaQuickbarPrimary_C::OnQuickBarSlotFocusChanged_Bind(enum class EFortQuickBars QuickbarIndex, int32 Slot)
{
	static auto Func = Class->GetFunction("AthenaQuickbarPrimary_C", "OnQuickBarSlotFocusChanged_Bind");

	Params::UAthenaQuickbarPrimary_C_OnQuickBarSlotFocusChanged_Bind_Params Parms;
	Parms.QuickbarIndex = QuickbarIndex;
	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Maximize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaQuickbarPrimary_C::Maximize()
{
	static auto Func = Class->GetFunction("AthenaQuickbarPrimary_C", "Maximize");

	Params::UAthenaQuickbarPrimary_C_Maximize_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Minimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaQuickbarPrimary_C::Minimize()
{
	static auto Func = Class->GetFunction("AthenaQuickbarPrimary_C", "Minimize");

	Params::UAthenaQuickbarPrimary_C_Minimize_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaQuickbarPrimary_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaQuickbarPrimary_C", "Construct");

	Params::UAthenaQuickbarPrimary_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.OnQuickbarContentsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          QuickbarIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickbarPrimary_C::OnQuickbarContentsChanged(enum class EFortQuickBars QuickbarIndex)
{
	static auto Func = Class->GetFunction("AthenaQuickbarPrimary_C", "OnQuickbarContentsChanged");

	Params::UAthenaQuickbarPrimary_C_OnQuickbarContentsChanged_Params Parms;
	Parms.QuickbarIndex = QuickbarIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.ExecuteUbergraph_AthenaQuickbarPrimary
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUsingGamepad                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          K2Node_CustomEvent_QuickbarIndex                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Slot                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          CallFunc_GetQuickbarFocus_OutQuickBar                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetQuickbarFocus_OutSlot                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutSecondarySlot                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// TArray<class UQuickbarSlot_C*>     K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// enum class EFortQuickBars          K2Node_Event_QuickbarIndex                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickbarPrimary_C::ExecuteUbergraph_AthenaQuickbarPrimary(int32 EntryPoint, bool K2Node_CustomEvent_bUsingGamepad, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex, int32 K2Node_CustomEvent_Slot, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue4, enum class EFortQuickBars CallFunc_GetQuickbarFocus_OutQuickBar, int32 CallFunc_GetQuickbarFocus_OutSlot, int32 CallFunc_GetQuickbarFocus_OutSecondarySlot, int32 CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, TArray<class UQuickbarSlot_C*>& K2Node_MakeArray_Array, enum class EFortQuickBars K2Node_Event_QuickbarIndex)
{
	static auto Func = Class->GetFunction("AthenaQuickbarPrimary_C", "ExecuteUbergraph_AthenaQuickbarPrimary");

	Params::UAthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_bUsingGamepad = K2Node_CustomEvent_bUsingGamepad;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CustomEvent_QuickbarIndex = K2Node_CustomEvent_QuickbarIndex;
	Parms.K2Node_CustomEvent_Slot = K2Node_CustomEvent_Slot;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetQuickbarFocus_OutQuickBar = CallFunc_GetQuickbarFocus_OutQuickBar;
	Parms.CallFunc_GetQuickbarFocus_OutSlot = CallFunc_GetQuickbarFocus_OutSlot;
	Parms.CallFunc_GetQuickbarFocus_OutSecondarySlot = CallFunc_GetQuickbarFocus_OutSecondarySlot;
	Parms.CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot = CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Event_QuickbarIndex = K2Node_Event_QuickbarIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
