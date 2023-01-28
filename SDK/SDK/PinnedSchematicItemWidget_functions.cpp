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


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleCursorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CursorModeEnabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CursorModeContentWidget                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPinnedSchematicItemWidget_C::HandleCursorModeChanged(bool CursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget)
{
	static auto Func = Class->GetFunction("PinnedSchematicItemWidget_C", "HandleCursorModeChanged");

	Params::UPinnedSchematicItemWidget_C_HandleCursorModeChanged_Params Parms;
	Parms.CursorModeEnabled = CursorModeEnabled;
	Parms.ActionName = ActionName;
	Parms.CursorModeContentWidget = CursorModeContentWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.UnbindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPinnedSchematicItemWidget_C::UnbindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2)
{
	static auto Func = Class->GetFunction("PinnedSchematicItemWidget_C", "UnbindDelegates");

	Params::UPinnedSchematicItemWidget_C_UnbindDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.ClearPinnedSchematic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPinnedSchematicItemWidget_C::ClearPinnedSchematic()
{
	static auto Func = Class->GetFunction("PinnedSchematicItemWidget_C", "ClearPinnedSchematic");

	Params::UPinnedSchematicItemWidget_C_ClearPinnedSchematic_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleItemChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ItemChanged                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AmmoChanged                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IngredientsChanged                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPinnedSchematicItemWidget_C::HandleItemChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged)
{
	static auto Func = Class->GetFunction("PinnedSchematicItemWidget_C", "HandleItemChanged");

	Params::UPinnedSchematicItemWidget_C_HandleItemChanged_Params Parms;
	Parms.ItemChanged = ItemChanged;
	Parms.AmmoChanged = AmmoChanged;
	Parms.IngredientsChanged = IngredientsChanged;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.SetupIngredients
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCraftingIngredient_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSchematicRequirement>CallFunc_GetSchematicRequirements_Requirements                   (ZeroConstructor, ReferenceParm)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSchematicRequirement       CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPinnedSchematicItemWidget_C::SetupIngredients(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCraftingIngredient_C* CallFunc_Create_ReturnValue, TArray<struct FSchematicRequirement>& CallFunc_GetSchematicRequirements_Requirements, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FSchematicRequirement& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("PinnedSchematicItemWidget_C", "SetupIngredients");

	Params::UPinnedSchematicItemWidget_C_SetupIngredients_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetSchematicRequirements_Requirements = CallFunc_GetSchematicRequirements_Requirements;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleWorldItemListChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>      ItemsAdded                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>      ItemsRemoved                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPinnedSchematicItemWidget_C::HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved)
{
	static auto Func = Class->GetFunction("PinnedSchematicItemWidget_C", "HandleWorldItemListChanged");

	Params::UPinnedSchematicItemWidget_C_HandleWorldItemListChanged_Params Parms;
	Parms.ItemsAdded = ItemsAdded;
	Parms.ItemsRemoved = ItemsRemoved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleOnSchematicUnlocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSchematicItem*          Schematic                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPinnedSchematicItemWidget_C::HandleOnSchematicUnlocked(class UFortSchematicItem* Schematic, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("PinnedSchematicItemWidget_C", "HandleOnSchematicUnlocked");

	Params::UPinnedSchematicItemWidget_C_HandleOnSchematicUnlocked_Params Parms;
	Parms.Schematic = Schematic;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPinnedSchematicItemWidget_C::BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortHUDContext* CallFunc_GetContext_ReturnValue2)
{
	static auto Func = Class->GetFunction("PinnedSchematicItemWidget_C", "BindDelegates");

	Params::UPinnedSchematicItemWidget_C_BindDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.SetPinnedSchematic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSchematicItem*          NewPinnedSchematic                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetRarityColor_ReturnValue                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()

void UPinnedSchematicItemWidget_C::SetPinnedSchematic(class UFortSchematicItem* NewPinnedSchematic, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_GetRarityColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_GetDisplayName_ReturnValue)
{
	static auto Func = Class->GetFunction("PinnedSchematicItemWidget_C", "SetPinnedSchematic");

	Params::UPinnedSchematicItemWidget_C_SetPinnedSchematic_Params Parms;
	Parms.NewPinnedSchematic = NewPinnedSchematic;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRarityColor_ReturnValue = CallFunc_GetRarityColor_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCraftingIngredient_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPinnedSchematicItemWidget_C::Refresh(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCraftingIngredient_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PinnedSchematicItemWidget_C", "Refresh");

	Params::UPinnedSchematicItemWidget_C_Refresh_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.PinButton_Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortBaseButton*             NewParam                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPinnedSchematicItemWidget_C::PinButton_Clicked(class UFortBaseButton* NewParam)
{
	static auto Func = Class->GetFunction("PinnedSchematicItemWidget_C", "PinButton_Clicked");

	Params::UPinnedSchematicItemWidget_C_PinButton_Clicked_Params Parms;
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.ExecuteUbergraph_PinnedSchematicItemWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortBaseButton*             K2Node_CustomEvent_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSchematicPinned_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPinnedSchematicItemWidget_C::ExecuteUbergraph_PinnedSchematicItemWidget(int32 EntryPoint, class UFortBaseButton* K2Node_CustomEvent_NewParam, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_SetSchematicPinned_ReturnValue)
{
	static auto Func = Class->GetFunction("PinnedSchematicItemWidget_C", "ExecuteUbergraph_PinnedSchematicItemWidget");

	Params::UPinnedSchematicItemWidget_C_ExecuteUbergraph_PinnedSchematicItemWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_SetSchematicPinned_ReturnValue = CallFunc_SetSchematicPinned_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
