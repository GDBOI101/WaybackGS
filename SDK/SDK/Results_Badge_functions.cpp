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


// Function Results_Badge.Results_Badge_C.DoDesignTimeRandomization
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// class FText                        K2Node_Select_Default                                            ()

void UResults_Badge_C::DoDesignTimeRandomization(int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, int32 CallFunc_RandomInteger_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("Results_Badge_C", "DoDesignTimeRandomization");

	Params::UResults_Badge_C_DoDesignTimeRandomization_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Badge.Results_Badge_C.SkipToFinalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Badge_C::SkipToFinalState()
{
	static auto Func = Class->GetFunction("Results_Badge_C", "SkipToFinalState");

	Params::UResults_Badge_C_SkipToFinalState_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Badge.Results_Badge_C.SetSkippingToEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidgetAnimation*>    K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UWidgetAnimation*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_Badge_C::SetSkippingToEnd(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidgetAnimation*>& K2Node_MakeArray_Array, class UWidgetAnimation* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_Badge_C", "SetSkippingToEnd");

	Params::UResults_Badge_C_SetSkippingToEnd_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Badge.Results_Badge_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PlayRate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_Badge_C::Initialize(float PlayRate)
{
	static auto Func = Class->GetFunction("Results_Badge_C", "Initialize");

	Params::UResults_Badge_C_Initialize_Params Parms;
	Parms.PlayRate = PlayRate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Badge.Results_Badge_C.HasValidItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasValidItem                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_Badge_C::HasValidItem(bool* HasValidItem, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_Badge_C", "HasValidItem");

	Params::UResults_Badge_C_HasValidItem_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasValidItem != nullptr)
		*HasValidItem = Parms.HasValidItem;

}


// Function Results_Badge.Results_Badge_C.SetItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_Badge_C::SetItem(class UFortItem* Item, class FText CallFunc_GetDisplayName_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_Badge_C", "SetItem");

	Params::UResults_Badge_C_SetItem_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Badge.Results_Badge_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Badge_C::Intro_Sequence()
{
	static auto Func = Class->GetFunction("Results_Badge_C", "Intro Sequence");

	Params::UResults_Badge_C_Intro_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Badge.Results_Badge_C.Convert Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Badge_C::Convert_Sequence()
{
	static auto Func = Class->GetFunction("Results_Badge_C", "Convert Sequence");

	Params::UResults_Badge_C_Convert_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Badge.Results_Badge_C.BndEvt__Anim_Convert_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Badge_C::BndEvt__Anim_Convert_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Badge_C", "BndEvt__Anim_Convert_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_Badge_C_BndEvt__Anim_Convert_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Badge.Results_Badge_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_Badge_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("Results_Badge_C", "PreConstruct");

	Params::UResults_Badge_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Badge.Results_Badge_C.Reset Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Badge_C::Reset_Sequence()
{
	static auto Func = Class->GetFunction("Results_Badge_C", "Reset Sequence");

	Params::UResults_Badge_C_Reset_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Badge.Results_Badge_C.ExecuteUbergraph_Results_Badge
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_Badge_C::ExecuteUbergraph_Results_Badge(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool K2Node_Event_IsDesignTime, bool CallFunc_BooleanOR_ReturnValue3)
{
	static auto Func = Class->GetFunction("Results_Badge_C", "ExecuteUbergraph_Results_Badge");

	Params::UResults_Badge_C_ExecuteUbergraph_Results_Badge_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_Badge.Results_Badge_C.ConvertFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Badge_C::ConvertFinished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Badge_C", "ConvertFinished__DelegateSignature");

	Params::UResults_Badge_C_ConvertFinished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
