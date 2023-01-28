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


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnAppearAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UScoreBarsScoreMessageItem_C::OnAppearAnimationFinished()
{
	static auto Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "OnAppearAnimationFinished");

	Params::UScoreBarsScoreMessageItem_C_OnAppearAnimationFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.ClearScoreValueWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UScoreBarsScoreMessageItem_C::ClearScoreValueWidget()
{
	static auto Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "ClearScoreValueWidget");

	Params::UScoreBarsScoreMessageItem_C_ClearScoreValueWidget_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.GetScoreValueWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreBarsScoreMessageItem_C::GetScoreValueWidget(class UWidget** Widget)
{
	static auto Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "GetScoreValueWidget");

	Params::UScoreBarsScoreMessageItem_C_GetScoreValueWidget_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Base_Delta                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Name_Text                                                        (Parm)
// class UScoreMessageNumber_C*       In_Score_Widget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UScoreBarsScoreMessageItem_C::Setup(int32 Base_Delta, class FText Name_Text, class UScoreMessageNumber_C* In_Score_Widget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "Setup");

	Params::UScoreBarsScoreMessageItem_C_Setup_Params Parms;
	Parms.Base_Delta = Base_Delta;
	Parms.Name_Text = Name_Text;
	Parms.In_Score_Widget = In_Score_Widget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.UpdateValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreBarsScoreMessageItem_C::UpdateValues(int32 CallFunc_Multiply_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "UpdateValues");

	Params::UScoreBarsScoreMessageItem_C_UpdateValues_Params Parms;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnStackSizeChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldStackSize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreBarsScoreMessageItem_C::OnStackSizeChanged(int32 OldStackSize)
{
	static auto Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "OnStackSizeChanged");

	Params::UScoreBarsScoreMessageItem_C_OnStackSizeChanged_Params Parms;
	Parms.OldStackSize = OldStackSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnBeginRemove
// (Event, Protected, BlueprintEvent)
// Parameters:

void UScoreBarsScoreMessageItem_C::OnBeginRemove()
{
	static auto Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "OnBeginRemove");

	Params::UScoreBarsScoreMessageItem_C_OnBeginRemove_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.ExecuteUbergraph_ScoreBarsScoreMessageItem
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_OldStackSize                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreBarsScoreMessageItem_C::ExecuteUbergraph_ScoreBarsScoreMessageItem(int32 EntryPoint, int32 K2Node_Event_OldStackSize)
{
	static auto Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "ExecuteUbergraph_ScoreBarsScoreMessageItem");

	Params::UScoreBarsScoreMessageItem_C_ExecuteUbergraph_ScoreBarsScoreMessageItem_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OldStackSize = K2Node_Event_OldStackSize;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
