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


// Function InputReflector.InputReflector_C.OnButtonAdded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UCommonButton*               AddedButton                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCommonInputActionHandlerDataData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void UInputReflector_C::OnButtonAdded(class UCommonButton* AddedButton, struct FCommonInputActionHandlerData& Data)
{
	static auto Func = Class->GetFunction("InputReflector_C", "OnButtonAdded");

	Params::UInputReflector_C_OnButtonAdded_Params Parms;
	Parms.AddedButton = AddedButton;
	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputReflector.InputReflector_C.ClearButtons
// (Event, Public, BlueprintEvent)
// Parameters:

void UInputReflector_C::ClearButtons()
{
	static auto Func = Class->GetFunction("InputReflector_C", "ClearButtons");

	Params::UInputReflector_C_ClearButtons_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputReflector.InputReflector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInputReflector_C::Construct()
{
	static auto Func = Class->GetFunction("InputReflector_C", "Construct");

	Params::UInputReflector_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputReflector.InputReflector_C.ExecuteUbergraph_InputReflector
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_Event_AddedButton                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCommonInputActionHandlerDataK2Node_Event_Data                                                (ConstParm, NoDestructor)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputReflector_C::ExecuteUbergraph_InputReflector(int32 EntryPoint, class UCommonButton* K2Node_Event_AddedButton, const struct FCommonInputActionHandlerData& K2Node_Event_Data, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static auto Func = Class->GetFunction("InputReflector_C", "ExecuteUbergraph_InputReflector");

	Params::UInputReflector_C_ExecuteUbergraph_InputReflector_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_AddedButton = K2Node_Event_AddedButton;
	Parms.K2Node_Event_Data = K2Node_Event_Data;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
