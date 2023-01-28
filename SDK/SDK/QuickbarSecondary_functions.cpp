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


// Function QuickbarSecondary.QuickbarSecondary_C.Show Secondary Quickbar Rail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSecondary_C::Show_Secondary_Quickbar_Rail(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("QuickbarSecondary_C", "Show Secondary Quickbar Rail");

	Params::UQuickbarSecondary_C_Show_Secondary_Quickbar_Rail_Params Parms;
	Parms.Show = Show;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSecondary.QuickbarSecondary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuickbarSecondary_C::Construct()
{
	static auto Func = Class->GetFunction("QuickbarSecondary_C", "Construct");

	Params::UQuickbarSecondary_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSecondary.QuickbarSecondary_C.Maximize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickbarSecondary_C::Maximize()
{
	static auto Func = Class->GetFunction("QuickbarSecondary_C", "Maximize");

	Params::UQuickbarSecondary_C_Maximize_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSecondary.QuickbarSecondary_C.Minimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickbarSecondary_C::Minimize()
{
	static auto Func = Class->GetFunction("QuickbarSecondary_C", "Minimize");

	Params::UQuickbarSecondary_C_Minimize_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSecondary.QuickbarSecondary_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickbarSecondary_C::HandleKeybindsChanged()
{
	static auto Func = Class->GetFunction("QuickbarSecondary_C", "HandleKeybindsChanged");

	Params::UQuickbarSecondary_C_HandleKeybindsChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSecondary.QuickbarSecondary_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSecondary_C::HandleInputMethodChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("QuickbarSecondary_C", "HandleInputMethodChanged");

	Params::UQuickbarSecondary_C_HandleInputMethodChanged_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSecondary.QuickbarSecondary_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuickbarSecondary_C::Destruct()
{
	static auto Func = Class->GetFunction("QuickbarSecondary_C", "Destruct");

	Params::UQuickbarSecondary_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSecondary.QuickbarSecondary_C.ExecuteUbergraph_QuickbarSecondary
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQuickbarSlot_C*>     K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUsingGamepad                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuickbarSlot_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)

void UQuickbarSecondary_C::ExecuteUbergraph_QuickbarSecondary(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, TArray<class UQuickbarSlot_C*>& K2Node_MakeArray_Array, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool K2Node_CustomEvent_bUsingGamepad, class UQuickbarSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2)
{
	static auto Func = Class->GetFunction("QuickbarSecondary_C", "ExecuteUbergraph_QuickbarSecondary");

	Params::UQuickbarSecondary_C_ExecuteUbergraph_QuickbarSecondary_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CustomEvent_bUsingGamepad = K2Node_CustomEvent_bUsingGamepad;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
