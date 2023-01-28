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


// Function QuickbarPrimary.QuickbarPrimary_C.HasOneNonHarvestWeapon
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasNonHarvestWeapon                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarPrimary_C::HasOneNonHarvestWeapon(bool* HasNonHarvestWeapon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2)
{
	static auto Func = Class->GetFunction("QuickbarPrimary_C", "HasOneNonHarvestWeapon");

	Params::UQuickbarPrimary_C_HasOneNonHarvestWeapon_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (HasNonHarvestWeapon != nullptr)
		*HasNonHarvestWeapon = Parms.HasNonHarvestWeapon;

}


// Function QuickbarPrimary.QuickbarPrimary_C.Show Primary Quickbar Rail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarPrimary_C::Show_Primary_Quickbar_Rail(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("QuickbarPrimary_C", "Show Primary Quickbar Rail");

	Params::UQuickbarPrimary_C_Show_Primary_Quickbar_Rail_Params Parms;
	Parms.Show = Show;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarPrimary.QuickbarPrimary_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickbarPrimary_C::HandleKeybindsChanged()
{
	static auto Func = Class->GetFunction("QuickbarPrimary_C", "HandleKeybindsChanged");

	Params::UQuickbarPrimary_C_HandleKeybindsChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarPrimary.QuickbarPrimary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuickbarPrimary_C::Construct()
{
	static auto Func = Class->GetFunction("QuickbarPrimary_C", "Construct");

	Params::UQuickbarPrimary_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarPrimary.QuickbarPrimary_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarPrimary_C::HandleInputMethodChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("QuickbarPrimary_C", "HandleInputMethodChanged");

	Params::UQuickbarPrimary_C_HandleInputMethodChanged_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarPrimary.QuickbarPrimary_C.RefreshQuickbar
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickbarPrimary_C::RefreshQuickbar()
{
	static auto Func = Class->GetFunction("QuickbarPrimary_C", "RefreshQuickbar");

	Params::UQuickbarPrimary_C_RefreshQuickbar_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarPrimary.QuickbarPrimary_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuickbarPrimary_C::Destruct()
{
	static auto Func = Class->GetFunction("QuickbarPrimary_C", "Destruct");

	Params::UQuickbarPrimary_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarPrimary.QuickbarPrimary_C.ExecuteUbergraph_QuickbarPrimary
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class UQuickbarSlot_C*>     K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUsingGamepad                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasOneNonHarvestWeapon_HasNonHarvestWeapon              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          CallFunc_GetQuickbarFocus_OutQuickBar                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetQuickbarFocus_OutSlot                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutSecondarySlot                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarPrimary_C::ExecuteUbergraph_QuickbarPrimary(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UQuickbarSlot_C*>& K2Node_MakeArray_Array, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool K2Node_CustomEvent_bUsingGamepad, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UCommonUIContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_HasOneNonHarvestWeapon_HasNonHarvestWeapon, bool CallFunc_BooleanAND_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue4, enum class EFortQuickBars CallFunc_GetQuickbarFocus_OutQuickBar, int32 CallFunc_GetQuickbarFocus_OutSlot, int32 CallFunc_GetQuickbarFocus_OutSecondarySlot, int32 CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot)
{
	static auto Func = Class->GetFunction("QuickbarPrimary_C", "ExecuteUbergraph_QuickbarPrimary");

	Params::UQuickbarPrimary_C_ExecuteUbergraph_QuickbarPrimary_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CustomEvent_bUsingGamepad = K2Node_CustomEvent_bUsingGamepad;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_HasOneNonHarvestWeapon_HasNonHarvestWeapon = CallFunc_HasOneNonHarvestWeapon_HasNonHarvestWeapon;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetQuickbarFocus_OutQuickBar = CallFunc_GetQuickbarFocus_OutQuickBar;
	Parms.CallFunc_GetQuickbarFocus_OutSlot = CallFunc_GetQuickbarFocus_OutSlot;
	Parms.CallFunc_GetQuickbarFocus_OutSecondarySlot = CallFunc_GetQuickbarFocus_OutSecondarySlot;
	Parms.CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot = CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
