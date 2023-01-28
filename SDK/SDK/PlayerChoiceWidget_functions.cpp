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


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.CreateButtonAndSetText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FChoiceDataEntry            ChoiceData                                                       (Parm)
// int32                              ChoiceID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerChoiceButtonWidget_C* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerChoiceButtonWidget_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UPlayerChoiceButtonWidget_C* UPlayerChoiceWidget_C::CreateButtonAndSetText(const struct FChoiceDataEntry& ChoiceData, int32 ChoiceID, class UPlayerChoiceButtonWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerChoiceWidget_C", "CreateButtonAndSetText");

	Params::UPlayerChoiceWidget_C_CreateButtonAndSetText_Params Parms;
	Parms.ChoiceData = ChoiceData;
	Parms.ChoiceID = ChoiceID;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.GetText_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UPlayerChoiceWidget_C::GetText_0()
{
	static auto Func = Class->GetFunction("PlayerChoiceWidget_C", "GetText_0");

	Params::UPlayerChoiceWidget_C_GetText_0_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.Get_TextBlock_Choice3_Text_0
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:

void UPlayerChoiceWidget_C::Get_TextBlock_Choice3_Text_0()
{
	static auto Func = Class->GetFunction("PlayerChoiceWidget_C", "Get_TextBlock_Choice3_Text_0");

	Params::UPlayerChoiceWidget_C_Get_TextBlock_Choice3_Text_0_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.Get_TextBlock_Choice2_Text_0
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:

void UPlayerChoiceWidget_C::Get_TextBlock_Choice2_Text_0()
{
	static auto Func = Class->GetFunction("PlayerChoiceWidget_C", "Get_TextBlock_Choice2_Text_0");

	Params::UPlayerChoiceWidget_C_Get_TextBlock_Choice2_Text_0_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.Get_TextBlock_Choice1_Text_0
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:

void UPlayerChoiceWidget_C::Get_TextBlock_Choice1_Text_0()
{
	static auto Func = Class->GetFunction("PlayerChoiceWidget_C", "Get_TextBlock_Choice1_Text_0");

	Params::UPlayerChoiceWidget_C_Get_TextBlock_Choice1_Text_0_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerChoiceWidget_C::Construct()
{
	static auto Func = Class->GetFunction("PlayerChoiceWidget_C", "Construct");

	Params::UPlayerChoiceWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.ChoiceSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChoiceID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerChoiceWidget_C::ChoiceSelected(int32 ChoiceID)
{
	static auto Func = Class->GetFunction("PlayerChoiceWidget_C", "ChoiceSelected");

	Params::UPlayerChoiceWidget_C_ChoiceSelected_Params Parms;
	Parms.ChoiceID = ChoiceID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.SetChoices
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FChoiceData                 ChoiceItems                                                      (ConstParm, Parm, OutParm, ReferenceParm)

void UPlayerChoiceWidget_C::SetChoices(struct FChoiceData& ChoiceItems)
{
	static auto Func = Class->GetFunction("PlayerChoiceWidget_C", "SetChoices");

	Params::UPlayerChoiceWidget_C_SetChoices_Params Parms;
	Parms.ChoiceItems = ChoiceItems;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerChoiceWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("PlayerChoiceWidget_C", "Destruct");

	Params::UPlayerChoiceWidget_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.ExecuteUbergraph_PlayerChoiceWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ChoiceID                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FChoiceData                 K2Node_Event_ChoiceItems                                         (ConstParm)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FChoiceDataEntry            CallFunc_Array_Get_Item                                          ()
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerChoiceButtonWidget_C* CallFunc_CreateButtonAndSetText_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerChoiceWidget_C::ExecuteUbergraph_PlayerChoiceWidget(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_CustomEvent_ChoiceID, const struct FChoiceData& K2Node_Event_ChoiceItems, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FChoiceDataEntry& CallFunc_Array_Get_Item, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UPlayerChoiceButtonWidget_C* CallFunc_CreateButtonAndSetText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller2, bool K2Node_DynamicCast_bSuccess2)
{
	static auto Func = Class->GetFunction("PlayerChoiceWidget_C", "ExecuteUbergraph_PlayerChoiceWidget");

	Params::UPlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_ChoiceID = K2Node_CustomEvent_ChoiceID;
	Parms.K2Node_Event_ChoiceItems = K2Node_Event_ChoiceItems;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CreateButtonAndSetText_ReturnValue = CallFunc_CreateButtonAndSetText_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller2 = K2Node_DynamicCast_AsFort_Player_Controller2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.SurvivorStoryChoiceSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectedChoice                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerChoiceWidget_C::SurvivorStoryChoiceSelected__DelegateSignature(int32 SelectedChoice)
{
	static auto Func = Class->GetFunction("PlayerChoiceWidget_C", "SurvivorStoryChoiceSelected__DelegateSignature");

	Params::UPlayerChoiceWidget_C_SurvivorStoryChoiceSelected__DelegateSignature_Params Parms;
	Parms.SelectedChoice = SelectedChoice;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
