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


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Get Item Description
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        OutDescription                                                   (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortTooltipContext*         TooltipContext                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Description                                                      (Edit)
// class FText                        CallFunc_GetDescription_ReturnValue                              ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCombinedDescription_OutDescription                   ()
// bool                               CallFunc_GetCombinedDescription_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContextWithSource_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UFrontEndRewards_ListRewards_C::Get_Item_Description(class UFortItem* Object, class FText* OutDescription, class UFortTooltipContext* TooltipContext, class FText Description, class FText CallFunc_GetDescription_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "Get Item Description");

	Params::UFrontEndRewards_ListRewards_C_Get_Item_Description_Params Parms;
	Parms.Object = Object;
	Parms.TooltipContext = TooltipContext;
	Parms.Description = Description;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCombinedDescription_OutDescription = CallFunc_GetCombinedDescription_OutDescription;
	Parms.CallFunc_GetCombinedDescription_ReturnValue = CallFunc_GetCombinedDescription_ReturnValue;
	Parms.CallFunc_SpawnTooltipContextWithSource_ReturnValue = CallFunc_SpawnTooltipContextWithSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDescription != nullptr)
		*OutDescription = Parms.OutDescription;

	return Parms.ReturnValue;

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Set DisplayName and Description Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Description                                                      (Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// bool                               CallFunc_IsSchematic_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        K2Node_Select_Default                                            ()

void UFrontEndRewards_ListRewards_C::Set_DisplayName_and_Description_Widget(class UFortItem* Item, class FText Description, bool Temp_bool_Variable, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsSchematic_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "Set DisplayName and Description Widget");

	Params::UFrontEndRewards_ListRewards_C_Set_DisplayName_and_Description_Widget_Params Parms;
	Parms.Item = Item;
	Parms.Description = Description;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_IsSchematic_ReturnValue = CallFunc_IsSchematic_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Clear DisplayName and Description Widgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ListRewards_C::Clear_DisplayName_and_Description_Widgets()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "Clear DisplayName and Description Widgets");

	Params::UFrontEndRewards_ListRewards_C_Clear_DisplayName_and_Description_Widgets_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SkipTransitionIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ListRewards_C::SkipTransitionIn(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item, class URewards_ItemCard_C* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "SkipTransitionIn");

	Params::UFrontEndRewards_ListRewards_C_SkipTransitionIn_Params Parms;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.TickTransitionIn
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ListRewards_C::TickTransitionIn(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "TickTransitionIn");

	Params::UFrontEndRewards_ListRewards_C_TickTransitionIn_Params Parms;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.BindEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)

void UFrontEndRewards_ListRewards_C::BindEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "BindEvents");

	Params::UFrontEndRewards_ListRewards_C_BindEvents_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleTransitionInComplete
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ListRewards_C::HandleTransitionInComplete()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "HandleTransitionInComplete");

	Params::UFrontEndRewards_ListRewards_C_HandleTransitionInComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ListRewards_C::Reset()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "Reset");

	Params::UFrontEndRewards_ListRewards_C_Reset_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.AddInputActions
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)

void UFrontEndRewards_ListRewards_C::AddInputActions(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "AddInputActions");

	Params::UFrontEndRewards_ListRewards_C_AddInputActions_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.DisableInputActions
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ListRewards_C::DisableInputActions()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "DisableInputActions");

	Params::UFrontEndRewards_ListRewards_C_DisableInputActions_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.EnableInputActions
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ListRewards_C::EnableInputActions(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "EnableInputActions");

	Params::UFrontEndRewards_ListRewards_C_EnableInputActions_Params Parms;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.PopulateFromCardsList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URewards_ItemCard_C*> Cards                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ListRewards_C::PopulateFromCardsList(TArray<class URewards_ItemCard_C*>& Cards, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class URewards_ItemCard_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "PopulateFromCardsList");

	Params::UFrontEndRewards_ListRewards_C_PopulateFromCardsList_Params Parms;
	Parms.Cards = Cards;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleInspectAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Committed                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemToRepresent_ItemToRepresent                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ListRewards_C::HandleInspectAction(bool* Committed, class URewards_ItemCard_C* CallFunc_Array_Get_Item, class UFortItem* CallFunc_GetItemToRepresent_ItemToRepresent)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "HandleInspectAction");

	Params::UFrontEndRewards_ListRewards_C_HandleInspectAction_Params Parms;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemToRepresent_ItemToRepresent = CallFunc_GetItemToRepresent_ItemToRepresent;

	UObject::ProcessEvent(Func, &Parms);

	if (Committed != nullptr)
		*Committed = Parms.Committed;

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleScrollAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Committed                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ListRewards_C::HandleScrollAction(bool* Committed)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "HandleScrollAction");

	Params::UFrontEndRewards_ListRewards_C_HandleScrollAction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Committed != nullptr)
		*Committed = Parms.Committed;

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleCollectAllAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Committed                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ListRewards_C::HandleCollectAllAction(bool* Committed)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "HandleCollectAllAction");

	Params::UFrontEndRewards_ListRewards_C_HandleCollectAllAction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Committed != nullptr)
		*Committed = Parms.Committed;

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetArrowVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ListRewards_C::SetArrowVisibility(int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue2)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "SetArrowVisibility");

	Params::UFrontEndRewards_ListRewards_C_SetArrowVisibility_Params Parms;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue2 = CallFunc_EqualEqual_IntInt_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleLastPopInFinished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ListRewards_C::HandleLastPopInFinished(int32 CallFunc_Array_LastIndex_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "HandleLastPopInFinished");

	Params::UFrontEndRewards_ListRewards_C_HandleLastPopInFinished_Params Parms;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleOutroAnimFinished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ListRewards_C::HandleOutroAnimFinished()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "HandleOutroAnimFinished");

	Params::UFrontEndRewards_ListRewards_C_HandleOutroAnimFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SelectCard
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InNewIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OldIndex                                                         (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewIndex                                                         (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue2                        (NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item6                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ListRewards_C::SelectCard(int32 InNewIndex, int32 OldIndex, int32 NewIndex, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class URewards_ItemCard_C* CallFunc_Array_Get_Item2, class URewards_ItemCard_C* CallFunc_Array_Get_Item3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class URewards_ItemCard_C* CallFunc_Array_Get_Item4, class URewards_ItemCard_C* CallFunc_Array_Get_Item5, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item6, int32 CallFunc_Array_LastIndex_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "SelectCard");

	Params::UFrontEndRewards_ListRewards_C_SelectCard_Params Parms;
	Parms.InNewIndex = InNewIndex;
	Parms.OldIndex = OldIndex;
	Parms.NewIndex = NewIndex;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue2 = CallFunc_K2_SetTimerDelegate_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.CallFunc_Array_Get_Item5 = CallFunc_Array_Get_Item5;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item6 = CallFunc_Array_Get_Item6;
	Parms.CallFunc_Array_LastIndex_ReturnValue2 = CallFunc_Array_LastIndex_ReturnValue2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue3 = CallFunc_LessEqual_IntInt_ReturnValue3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetCardSelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*         Card                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ListRewards_C::SetCardSelected(class URewards_ItemCard_C* Card)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "SetCardSelected");

	Params::UFrontEndRewards_ListRewards_C_SetCardSelected_Params Parms;
	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleCardClicked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*         Card                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ListRewards_C::HandleCardClicked(class URewards_ItemCard_C* Card, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "HandleCardClicked");

	Params::UFrontEndRewards_ListRewards_C_HandleCardClicked_Params Parms;
	Parms.Card = Card;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.ClearCards
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ListRewards_C::ClearCards(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "ClearCards");

	Params::UFrontEndRewards_ListRewards_C_ClearCards_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.PlayCardSlide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*         RewardsItemCard                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StaggerDelay                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetCardAlignment_Alignment                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    CallFunc_GetCardAlignment_Anchors                                (NoDestructor)
// float                              CallFunc_GetCardAlignment_Scale                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCardAlignment_Offset                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCardAlignment_Angle                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetCardAlignment_Translation                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCardAlignment_DropShadowDepth                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ListRewards_C::PlayCardSlide(class URewards_ItemCard_C* RewardsItemCard, float StaggerDelay, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector2D& CallFunc_GetCardAlignment_Alignment, const struct FAnchors& CallFunc_GetCardAlignment_Anchors, float CallFunc_GetCardAlignment_Scale, float CallFunc_GetCardAlignment_Offset, float CallFunc_GetCardAlignment_Angle, const struct FVector2D& CallFunc_GetCardAlignment_Translation, float CallFunc_GetCardAlignment_DropShadowDepth, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "PlayCardSlide");

	Params::UFrontEndRewards_ListRewards_C_PlayCardSlide_Params Parms;
	Parms.RewardsItemCard = RewardsItemCard;
	Parms.StaggerDelay = StaggerDelay;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue2 = CallFunc_Array_Find_ReturnValue2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetCardAlignment_Alignment = CallFunc_GetCardAlignment_Alignment;
	Parms.CallFunc_GetCardAlignment_Anchors = CallFunc_GetCardAlignment_Anchors;
	Parms.CallFunc_GetCardAlignment_Scale = CallFunc_GetCardAlignment_Scale;
	Parms.CallFunc_GetCardAlignment_Offset = CallFunc_GetCardAlignment_Offset;
	Parms.CallFunc_GetCardAlignment_Angle = CallFunc_GetCardAlignment_Angle;
	Parms.CallFunc_GetCardAlignment_Translation = CallFunc_GetCardAlignment_Translation;
	Parms.CallFunc_GetCardAlignment_DropShadowDepth = CallFunc_GetCardAlignment_DropShadowDepth;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetItemDescription
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Get_Item_Description_OutDescription                     ()
// bool                               CallFunc_Get_Item_Description_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemToRepresent_ItemToRepresent                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ListRewards_C::SetItemDescription(class UFortItem* Item, class FText CallFunc_Get_Item_Description_OutDescription, bool CallFunc_Get_Item_Description_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item, class UFortItem* CallFunc_GetItemToRepresent_ItemToRepresent, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "SetItemDescription");

	Params::UFrontEndRewards_ListRewards_C_SetItemDescription_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_Get_Item_Description_OutDescription = CallFunc_Get_Item_Description_OutDescription;
	Parms.CallFunc_Get_Item_Description_ReturnValue = CallFunc_Get_Item_Description_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemToRepresent_ItemToRepresent = CallFunc_GetItemToRepresent_ItemToRepresent;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetCardAlignment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CardWidget                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SelectionIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CanvasPanelSlot                                                  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URewards_ItemCard_C*         K2Node_DynamicCast_AsRewards_Item_Card                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     CallFunc_GetOffsets_ReturnValue                                  (NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetCardAlignment_Alignment                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    CallFunc_GetCardAlignment_Anchors                                (NoDestructor)
// float                              CallFunc_GetCardAlignment_Scale                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCardAlignment_Offset                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCardAlignment_Angle                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetCardAlignment_Translation                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCardAlignment_DropShadowDepth                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWidgetTransform            K2Node_MakeStruct_WidgetTransform                                (NoDestructor)

void UFrontEndRewards_ListRewards_C::SetCardAlignment(class UWidget* CardWidget, int32 SelectionIndex, class UCanvasPanelSlot* CanvasPanelSlot, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class URewards_ItemCard_C* K2Node_DynamicCast_AsRewards_Item_Card, bool K2Node_DynamicCast_bSuccess, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess2, const struct FMargin& CallFunc_GetOffsets_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, const struct FVector2D& CallFunc_GetCardAlignment_Alignment, const struct FAnchors& CallFunc_GetCardAlignment_Anchors, float CallFunc_GetCardAlignment_Scale, float CallFunc_GetCardAlignment_Offset, float CallFunc_GetCardAlignment_Angle, const struct FVector2D& CallFunc_GetCardAlignment_Translation, float CallFunc_GetCardAlignment_DropShadowDepth, const struct FMargin& K2Node_MakeStruct_Margin, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "SetCardAlignment");

	Params::UFrontEndRewards_ListRewards_C_SetCardAlignment_Params Parms;
	Parms.CardWidget = CardWidget;
	Parms.SelectionIndex = SelectionIndex;
	Parms.CanvasPanelSlot = CanvasPanelSlot;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_DynamicCast_AsRewards_Item_Card = K2Node_DynamicCast_AsRewards_Item_Card;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetOffsets_ReturnValue = CallFunc_GetOffsets_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GetCardAlignment_Alignment = CallFunc_GetCardAlignment_Alignment;
	Parms.CallFunc_GetCardAlignment_Anchors = CallFunc_GetCardAlignment_Anchors;
	Parms.CallFunc_GetCardAlignment_Scale = CallFunc_GetCardAlignment_Scale;
	Parms.CallFunc_GetCardAlignment_Offset = CallFunc_GetCardAlignment_Offset;
	Parms.CallFunc_GetCardAlignment_Angle = CallFunc_GetCardAlignment_Angle;
	Parms.CallFunc_GetCardAlignment_Translation = CallFunc_GetCardAlignment_Translation;
	Parms.CallFunc_GetCardAlignment_DropShadowDepth = CallFunc_GetCardAlignment_DropShadowDepth;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_WidgetTransform = K2Node_MakeStruct_WidgetTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SelectPreviousCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ListRewards_C::SelectPreviousCard(int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "SelectPreviousCard");

	Params::UFrontEndRewards_ListRewards_C_SelectPreviousCard_Params Parms;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleLastSlideAnimFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*         RewardsItemCard                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ListRewards_C::HandleLastSlideAnimFinished(class URewards_ItemCard_C* RewardsItemCard, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "HandleLastSlideAnimFinished");

	Params::UFrontEndRewards_ListRewards_C_HandleLastSlideAnimFinished_Params Parms;
	Parms.RewardsItemCard = RewardsItemCard;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.GetCardAlignment
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CardQueueIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CardListIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Alignment                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    Anchors                                                          (Parm, OutParm, NoDestructor)
// float                              Scale                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Offset                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Angle                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Translation                                                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DropShadowDepth                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CardQueueOffset                                                  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CardWidth                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue2                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors2                                       (NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue3                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors3                                       (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue4                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue5                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ListRewards_C::GetCardAlignment(int32 CardQueueIndex, int32 CardListIndex, struct FVector2D* Alignment, struct FAnchors* Anchors, float* Scale, float* Offset, float* Angle, struct FVector2D* Translation, float* DropShadowDepth, float CardQueueOffset, float CardWidth, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue2, const struct FAnchors& K2Node_MakeStruct_Anchors2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue3, const struct FAnchors& K2Node_MakeStruct_Anchors3, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue5)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "GetCardAlignment");

	Params::UFrontEndRewards_ListRewards_C_GetCardAlignment_Params Parms;
	Parms.CardQueueIndex = CardQueueIndex;
	Parms.CardListIndex = CardListIndex;
	Parms.CardQueueOffset = CardQueueOffset;
	Parms.CardWidth = CardWidth;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_MakeVector2D_ReturnValue2 = CallFunc_MakeVector2D_ReturnValue2;
	Parms.K2Node_MakeStruct_Anchors2 = K2Node_MakeStruct_Anchors2;
	Parms.CallFunc_MakeVector2D_ReturnValue3 = CallFunc_MakeVector2D_ReturnValue3;
	Parms.K2Node_MakeStruct_Anchors3 = K2Node_MakeStruct_Anchors3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue2 = CallFunc_Multiply_IntFloat_ReturnValue2;
	Parms.CallFunc_MakeVector2D_ReturnValue4 = CallFunc_MakeVector2D_ReturnValue4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue5 = CallFunc_MakeVector2D_ReturnValue5;

	UObject::ProcessEvent(Func, &Parms);

	if (Alignment != nullptr)
		*Alignment = Parms.Alignment;

	if (Anchors != nullptr)
		*Anchors = Parms.Anchors;

	if (Scale != nullptr)
		*Scale = Parms.Scale;

	if (Offset != nullptr)
		*Offset = Parms.Offset;

	if (Angle != nullptr)
		*Angle = Parms.Angle;

	if (Translation != nullptr)
		*Translation = Parms.Translation;

	if (DropShadowDepth != nullptr)
		*DropShadowDepth = Parms.DropShadowDepth;

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SelectNextCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ListRewards_C::SelectNextCard(int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "SelectNextCard");

	Params::UFrontEndRewards_ListRewards_C_SelectNextCard_Params Parms;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.AddCard
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*         Card                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ListRewards_C::AddCard(class URewards_ItemCard_C* Card, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "AddCard");

	Params::UFrontEndRewards_ListRewards_C_AddCard_Params Parms;
	Parms.Card = Card;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.InitDesignView
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URewards_ItemCard_C*> TempCardList                                                     (Edit, ZeroConstructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewards_ItemCard_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ListRewards_C::InitDesignView(const TArray<class URewards_ItemCard_C*>& TempCardList, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class URewards_ItemCard_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, class URewards_ItemCard_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "InitDesignView");

	Params::UFrontEndRewards_ListRewards_C_InitDesignView_Params Parms;
	Parms.TempCardList = TempCardList;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ListRewards_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "PreConstruct");

	Params::UFrontEndRewards_ListRewards_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.DelayedCheckScroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ListRewards_C::DelayedCheckScroll()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "DelayedCheckScroll");

	Params::UFrontEndRewards_ListRewards_C_DelayedCheckScroll_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ListRewards_C::Construct()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "Construct");

	Params::UFrontEndRewards_ListRewards_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.TransitionInBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ListRewards_C::TransitionInBegin()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "TransitionInBegin");

	Params::UFrontEndRewards_ListRewards_C_TransitionInBegin_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.TransitionOutBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ListRewards_C::TransitionOutBegin()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "TransitionOutBegin");

	Params::UFrontEndRewards_ListRewards_C_TransitionOutBegin_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnNavigationLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ListRewards_C::OnNavigationLeft()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "OnNavigationLeft");

	Params::UFrontEndRewards_ListRewards_C_OnNavigationLeft_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnNavigationRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ListRewards_C::OnNavigationRight()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "OnNavigationRight");

	Params::UFrontEndRewards_ListRewards_C_OnNavigationRight_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ListRewards_C::OnActivated()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "OnActivated");

	Params::UFrontEndRewards_ListRewards_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ListRewards_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "OnDeactivated");

	Params::UFrontEndRewards_ListRewards_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnPrimaryAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ListRewards_C::OnPrimaryAction()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "OnPrimaryAction");

	Params::UFrontEndRewards_ListRewards_C_OnPrimaryAction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.ExecuteUbergraph_FrontEndRewards_ListRewards
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleCollectAllAction_Committed                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ListRewards_C::ExecuteUbergraph_FrontEndRewards_ListRewards(int32 EntryPoint, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item, bool K2Node_Event_IsDesignTime, bool CallFunc_HandleCollectAllAction_Committed, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URewards_ItemCard_C* CallFunc_Array_Get_Item2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue3)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ListRewards_C", "ExecuteUbergraph_FrontEndRewards_ListRewards");

	Params::UFrontEndRewards_ListRewards_C_ExecuteUbergraph_FrontEndRewards_ListRewards_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_HandleCollectAllAction_Committed = CallFunc_HandleCollectAllAction_Committed;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue2 = CallFunc_Array_LastIndex_ReturnValue2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_Greater_IntInt_ReturnValue3 = CallFunc_Greater_IntInt_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
