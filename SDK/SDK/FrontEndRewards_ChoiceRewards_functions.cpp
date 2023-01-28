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


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleResizeFinished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*         Card                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ChoiceRewards_C::HandleResizeFinished(class URewards_ItemCard_C* Card, class URewards_ItemCard_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "HandleResizeFinished");

	Params::UFrontEndRewards_ChoiceRewards_C_HandleResizeFinished_Params Parms;
	Parms.Card = Card;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.AddInputActions
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UFrontEndRewards_ChoiceRewards_C::AddInputActions(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "AddInputActions");

	Params::UFrontEndRewards_ChoiceRewards_C_AddInputActions_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleInspectAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Committed                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemToRepresent_ItemToRepresent                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ChoiceRewards_C::HandleInspectAction(bool* Committed, class URewards_ItemCard_C* CallFunc_Array_Get_Item, class UFortItem* CallFunc_GetItemToRepresent_ItemToRepresent)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "HandleInspectAction");

	Params::UFrontEndRewards_ChoiceRewards_C_HandleInspectAction_Params Parms;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemToRepresent_ItemToRepresent = CallFunc_GetItemToRepresent_ItemToRepresent;

	UObject::ProcessEvent(Func, &Parms);

	if (Committed != nullptr)
		*Committed = Parms.Committed;

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleTransitionInComplete
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ChoiceRewards_C::HandleTransitionInComplete()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "HandleTransitionInComplete");

	Params::UFrontEndRewards_ChoiceRewards_C_HandleTransitionInComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ChoiceRewards_C::Reset(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "Reset");

	Params::UFrontEndRewards_ChoiceRewards_C_Reset_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.PopulateFromCardList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URewards_ItemCard_C*> Cards                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              CurrentIndex                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewards_ItemCard_C*         CurrentCard                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue2                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ChoiceRewards_C::PopulateFromCardList(TArray<class URewards_ItemCard_C*>& Cards, int32 CurrentIndex, class URewards_ItemCard_C* CurrentCard, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URewards_ItemCard_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue2, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "PopulateFromCardList");

	Params::UFrontEndRewards_ChoiceRewards_C_PopulateFromCardList_Params Parms;
	Parms.Cards = Cards;
	Parms.CurrentIndex = CurrentIndex;
	Parms.CurrentCard = CurrentCard;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue2 = CallFunc_MakeVector2D_ReturnValue2;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HideConfirmation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ChoiceRewards_C::HideConfirmation()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "HideConfirmation");

	Params::UFrontEndRewards_ChoiceRewards_C_HideConfirmation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.ShowConfirmation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ChoiceRewards_C::ShowConfirmation(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "ShowConfirmation");

	Params::UFrontEndRewards_ChoiceRewards_C_ShowConfirmation_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.ConfirmChoice
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemToRepresent_ItemToRepresent                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ChoiceRewards_C::ConfirmChoice(class URewards_ItemCard_C* CallFunc_Array_Get_Item, class UFortItem* CallFunc_GetItemToRepresent_ItemToRepresent)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "ConfirmChoice");

	Params::UFrontEndRewards_ChoiceRewards_C_ConfirmChoice_Params Parms;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemToRepresent_ItemToRepresent = CallFunc_GetItemToRepresent_ItemToRepresent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SetCanvasSize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TotalCardSize                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TotalCardPadding                                                 (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldUseNewItemCards_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetCardDimensions_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ChoiceRewards_C::SetCanvasSize(float TotalCardSize, float TotalCardPadding, bool CallFunc_ShouldUseNewItemCards_ReturnValue, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2, int32 CallFunc_GetChildrenCount_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "SetCanvasSize");

	Params::UFrontEndRewards_ChoiceRewards_C_SetCanvasSize_Params Parms;
	Parms.TotalCardSize = TotalCardSize;
	Parms.TotalCardPadding = TotalCardPadding;
	Parms.CallFunc_ShouldUseNewItemCards_ReturnValue = CallFunc_ShouldUseNewItemCards_ReturnValue;
	Parms.CallFunc_GetCardDimensions_ReturnValue = CallFunc_GetCardDimensions_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_GetChildrenCount_ReturnValue2 = CallFunc_GetChildrenCount_ReturnValue2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SetSelectedItemDescription
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   CurrentItem                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContext_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCombinedDescription_OutDescription                   ()
// bool                               CallFunc_GetCombinedDescription_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemToRepresent_ItemToRepresent                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ChoiceRewards_C::SetSelectedItemDescription(class UFortItem* CurrentItem, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item, class UFortItem* CallFunc_GetItemToRepresent_ItemToRepresent)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "SetSelectedItemDescription");

	Params::UFrontEndRewards_ChoiceRewards_C_SetSelectedItemDescription_Params Parms;
	Parms.CurrentItem = CurrentItem;
	Parms.CallFunc_SpawnTooltipContext_ReturnValue = CallFunc_SpawnTooltipContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCombinedDescription_OutDescription = CallFunc_GetCombinedDescription_OutDescription;
	Parms.CallFunc_GetCombinedDescription_ReturnValue = CallFunc_GetCombinedDescription_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemToRepresent_ItemToRepresent = CallFunc_GetItemToRepresent_ItemToRepresent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleCardClicked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*         ItemCard                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ChoiceRewards_C::HandleCardClicked(class URewards_ItemCard_C* ItemCard, int32 Index, class URewards_ItemCard_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue2)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "HandleCardClicked");

	Params::UFrontEndRewards_ChoiceRewards_C_HandleCardClicked_Params Parms;
	Parms.ItemCard = ItemCard;
	Parms.Index = Index;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue2 = CallFunc_Array_Find_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SelectPreviousCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ChoiceRewards_C::SelectPreviousCard(bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "SelectPreviousCard");

	Params::UFrontEndRewards_ChoiceRewards_C_SelectPreviousCard_Params Parms;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SelectNextCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ChoiceRewards_C::SelectNextCard(bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "SelectNextCard");

	Params::UFrontEndRewards_ChoiceRewards_C_SelectNextCard_Params Parms;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SelectCard
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewSelection                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ChoiceRewards_C::SelectCard(int32 NewSelection, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue2, class URewards_ItemCard_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item2)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "SelectCard");

	Params::UFrontEndRewards_ChoiceRewards_C_SelectCard_Params Parms;
	Parms.NewSelection = NewSelection;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue2 = CallFunc_NotEqual_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SetCardSelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*         Card                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ChoiceRewards_C::SetCardSelected(class URewards_ItemCard_C* Card)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "SetCardSelected");

	Params::UFrontEndRewards_ChoiceRewards_C_SetCardSelected_Params Parms;
	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.InitDesignView
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*         TempItemDefinition                                               (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           ItemList                                                         (Edit, ZeroConstructor)
// class URewards_ItemCard_C*         CurrentCard                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewards_ItemCard_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue2                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ChoiceRewards_C::InitDesignView(class UFortItemDefinition* TempItemDefinition, const TArray<class UFortItem*>& ItemList, class URewards_ItemCard_C* CurrentCard, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class URewards_ItemCard_C* CallFunc_Create_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue2, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "InitDesignView");

	Params::UFrontEndRewards_ChoiceRewards_C_InitDesignView_Params Parms;
	Parms.TempItemDefinition = TempItemDefinition;
	Parms.ItemList = ItemList;
	Parms.CurrentCard = CurrentCard;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue2 = CallFunc_MakeVector2D_ReturnValue2;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.AdjustCardPositions
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentIndex                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CurrentSlot                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldUseNewItemCards_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetCardDimensions_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ChoiceRewards_C::AdjustCardPositions(int32 CurrentIndex, class UCanvasPanelSlot* CurrentSlot, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_ShouldUseNewItemCards_ReturnValue, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, const struct FMargin& K2Node_MakeStruct_Margin, const struct FAnchors& K2Node_MakeStruct_Anchors, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "AdjustCardPositions");

	Params::UFrontEndRewards_ChoiceRewards_C_AdjustCardPositions_Params Parms;
	Parms.CurrentIndex = CurrentIndex;
	Parms.CurrentSlot = CurrentSlot;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_ShouldUseNewItemCards_ReturnValue = CallFunc_ShouldUseNewItemCards_ReturnValue;
	Parms.CallFunc_GetCardDimensions_ReturnValue = CallFunc_GetCardDimensions_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ChoiceRewards_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "PreConstruct");

	Params::UFrontEndRewards_ChoiceRewards_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.BndEvt__ButtonSure_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ChoiceRewards_C::BndEvt__ButtonSure_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "BndEvt__ButtonSure_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature");

	Params::UFrontEndRewards_ChoiceRewards_C_BndEvt__ButtonSure_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.BndEvt__ButtonNope_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ChoiceRewards_C::BndEvt__ButtonNope_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "BndEvt__ButtonNope_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature");

	Params::UFrontEndRewards_ChoiceRewards_C_BndEvt__ButtonNope_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.TransitionInBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ChoiceRewards_C::TransitionInBegin()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "TransitionInBegin");

	Params::UFrontEndRewards_ChoiceRewards_C_TransitionInBegin_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.TransitionOutBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ChoiceRewards_C::TransitionOutBegin()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "TransitionOutBegin");

	Params::UFrontEndRewards_ChoiceRewards_C_TransitionOutBegin_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ChoiceRewards_C::Construct()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "Construct");

	Params::UFrontEndRewards_ChoiceRewards_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnNavigationLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ChoiceRewards_C::OnNavigationLeft()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "OnNavigationLeft");

	Params::UFrontEndRewards_ChoiceRewards_C_OnNavigationLeft_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnNavigationRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ChoiceRewards_C::OnNavigationRight()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "OnNavigationRight");

	Params::UFrontEndRewards_ChoiceRewards_C_OnNavigationRight_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ChoiceRewards_C::OnActivated()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "OnActivated");

	Params::UFrontEndRewards_ChoiceRewards_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ChoiceRewards_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "OnDeactivated");

	Params::UFrontEndRewards_ChoiceRewards_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ChoiceRewards_C::CustomEvent_0()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "CustomEvent_0");

	Params::UFrontEndRewards_ChoiceRewards_C_CustomEvent_0_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ChoiceRewards_C::CustomEvent_1()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "CustomEvent_1");

	Params::UFrontEndRewards_ChoiceRewards_C_CustomEvent_1_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnPrimaryAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_ChoiceRewards_C::OnPrimaryAction()
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "OnPrimaryAction");

	Params::UFrontEndRewards_ChoiceRewards_C_OnPrimaryAction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.ExecuteUbergraph_FrontEndRewards_ChoiceRewards
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class URewards_ItemCard_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)

void UFrontEndRewards_ChoiceRewards_C::ExecuteUbergraph_FrontEndRewards_ChoiceRewards(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URewards_ItemCard_C* CallFunc_Array_Get_Item, bool K2Node_Event_IsDesignTime, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "ExecuteUbergraph_FrontEndRewards_ChoiceRewards");

	Params::UFrontEndRewards_ChoiceRewards_C_ExecuteUbergraph_FrontEndRewards_ChoiceRewards_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnRewardSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ChoiceRewards_C::OnRewardSelected__DelegateSignature(int32 Index, class UFortItem* Item)
{
	static auto Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "OnRewardSelected__DelegateSignature");

	Params::UFrontEndRewards_ChoiceRewards_C_OnRewardSelected__DelegateSignature_Params Parms;
	Parms.Index = Index;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
