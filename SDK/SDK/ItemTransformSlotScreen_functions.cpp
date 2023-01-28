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


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.GetSlotFromIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItemTransformSlotEntry_C*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemTransformSlotEntry_C*   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UItemTransformSlotEntry_C* UItemTransformSlotScreen_C::GetSlotFromIndex(int32 Temp_int_Variable, class UItemTransformSlotEntry_C* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "GetSlotFromIndex");

	Params::UItemTransformSlotScreen_C_GetSlotFromIndex_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.NavigateToFirstItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemTransformSlotEntry_C*   CallFunc_GetSlotFromIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::NavigateToFirstItem(class UItemTransformSlotEntry_C* CallFunc_GetSlotFromIndex_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "NavigateToFirstItem");

	Params::UItemTransformSlotScreen_C_NavigateToFirstItem_Params Parms;
	Parms.CallFunc_GetSlotFromIndex_ReturnValue = CallFunc_GetSlotFromIndex_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Get Transform Data
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>           SacrificeItems                                                   (Parm, OutParm, ZeroConstructor)
// int32                              CurrentSacrificePoints                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentTier                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Transform_Data_CurrentSacrificePoints               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Transform_Data_CurrentTier                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::Get_Transform_Data(TArray<class UFortItem*>* SacrificeItems, int32* CurrentSacrificePoints, int32* CurrentTier, int32 CallFunc_Get_Transform_Data_CurrentSacrificePoints, int32 CallFunc_Get_Transform_Data_CurrentTier)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "Get Transform Data");

	Params::UItemTransformSlotScreen_C_Get_Transform_Data_Params Parms;
	Parms.CallFunc_Get_Transform_Data_CurrentSacrificePoints = CallFunc_Get_Transform_Data_CurrentSacrificePoints;
	Parms.CallFunc_Get_Transform_Data_CurrentTier = CallFunc_Get_Transform_Data_CurrentTier;

	UObject::ProcessEvent(Func, &Parms);

	if (SacrificeItems != nullptr)
		*SacrificeItems = Parms.SacrificeItems;

	if (CurrentSacrificePoints != nullptr)
		*CurrentSacrificePoints = Parms.CurrentSacrificePoints;

	if (CurrentTier != nullptr)
		*CurrentTier = Parms.CurrentTier;

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.ResetScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::ResetScreen(int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortItem* Temp_object_Variable)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "ResetScreen");

	Params::UItemTransformSlotScreen_C_ResetScreen_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.CloseItemPicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemTransformSlotEntry_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::CloseItemPicker(int32 CallFunc_Array_Length_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UItemTransformSlotEntry_C* CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "CloseItemPicker");

	Params::UItemTransformSlotScreen_C_CloseItemPicker_Params Parms;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.SetupSlotScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemTransformSlotEntry_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::SetupSlotScreen(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UItemTransformSlotEntry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue4, int32 CallFunc_Array_Add_ReturnValue5)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "SetupSlotScreen");

	Params::UItemTransformSlotScreen_C_SetupSlotScreen_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue3 = CallFunc_Array_Add_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue4 = CallFunc_Array_Add_ReturnValue4;
	Parms.CallFunc_Array_Add_ReturnValue5 = CallFunc_Array_Add_ReturnValue5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OpenItemPicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemTransformSlotEntry_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::OpenItemPicker(class UItemTransformSlotEntry_C* CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "OpenItemPicker");

	Params::UItemTransformSlotScreen_C_OpenItemPicker_Params Parms;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OpenSlotScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::OpenSlotScreen(class UFortItem* Key, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "OpenSlotScreen");

	Params::UItemTransformSlotScreen_C_OpenSlotScreen_Params Parms;
	Parms.Key = Key;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot1_K2Node_ComponentBoundEvent_1_OnSlotChosen__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemTransformSlotScreen_C::BndEvt__Slot1_K2Node_ComponentBoundEvent_1_OnSlotChosen__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "BndEvt__Slot1_K2Node_ComponentBoundEvent_1_OnSlotChosen__DelegateSignature");

	Params::UItemTransformSlotScreen_C_BndEvt__Slot1_K2Node_ComponentBoundEvent_1_OnSlotChosen__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_2_OnSlotChosen__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemTransformSlotScreen_C::BndEvt__Slot2_K2Node_ComponentBoundEvent_2_OnSlotChosen__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "BndEvt__Slot2_K2Node_ComponentBoundEvent_2_OnSlotChosen__DelegateSignature");

	Params::UItemTransformSlotScreen_C_BndEvt__Slot2_K2Node_ComponentBoundEvent_2_OnSlotChosen__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot3_K2Node_ComponentBoundEvent_3_OnSlotChosen__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemTransformSlotScreen_C::BndEvt__Slot3_K2Node_ComponentBoundEvent_3_OnSlotChosen__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "BndEvt__Slot3_K2Node_ComponentBoundEvent_3_OnSlotChosen__DelegateSignature");

	Params::UItemTransformSlotScreen_C_BndEvt__Slot3_K2Node_ComponentBoundEvent_3_OnSlotChosen__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot4_K2Node_ComponentBoundEvent_4_OnSlotChosen__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemTransformSlotScreen_C::BndEvt__Slot4_K2Node_ComponentBoundEvent_4_OnSlotChosen__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "BndEvt__Slot4_K2Node_ComponentBoundEvent_4_OnSlotChosen__DelegateSignature");

	Params::UItemTransformSlotScreen_C_BndEvt__Slot4_K2Node_ComponentBoundEvent_4_OnSlotChosen__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot5_K2Node_ComponentBoundEvent_5_OnSlotChosen__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemTransformSlotScreen_C::BndEvt__Slot5_K2Node_ComponentBoundEvent_5_OnSlotChosen__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "BndEvt__Slot5_K2Node_ComponentBoundEvent_5_OnSlotChosen__DelegateSignature");

	Params::UItemTransformSlotScreen_C_BndEvt__Slot5_K2Node_ComponentBoundEvent_5_OnSlotChosen__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*                   SelectedItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature(class UFortItem* SelectedItem)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature");

	Params::UItemTransformSlotScreen_C_BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature_Params Parms;
	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemTransformSlotScreen_C::Construct()
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "Construct");

	Params::UItemTransformSlotScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              SacrificePoints                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentTier                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature(int32 SacrificePoints, int32 CurrentTier)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature");

	Params::UItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature_Params Parms;
	Parms.SacrificePoints = SacrificePoints;
	Parms.CurrentTier = CurrentTier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               TransformActive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformSlotScreen_C::BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature(bool TransformActive)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature");

	Params::UItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature_Params Parms;
	Parms.TransformActive = TransformActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot1_K2Node_ComponentBoundEvent_774_OnSlotSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemTransformSlotScreen_C::BndEvt__Slot1_K2Node_ComponentBoundEvent_774_OnSlotSelected__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "BndEvt__Slot1_K2Node_ComponentBoundEvent_774_OnSlotSelected__DelegateSignature");

	Params::UItemTransformSlotScreen_C_BndEvt__Slot1_K2Node_ComponentBoundEvent_774_OnSlotSelected__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_784_OnSlotSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemTransformSlotScreen_C::BndEvt__Slot2_K2Node_ComponentBoundEvent_784_OnSlotSelected__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "BndEvt__Slot2_K2Node_ComponentBoundEvent_784_OnSlotSelected__DelegateSignature");

	Params::UItemTransformSlotScreen_C_BndEvt__Slot2_K2Node_ComponentBoundEvent_784_OnSlotSelected__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot3_K2Node_ComponentBoundEvent_795_OnSlotSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemTransformSlotScreen_C::BndEvt__Slot3_K2Node_ComponentBoundEvent_795_OnSlotSelected__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "BndEvt__Slot3_K2Node_ComponentBoundEvent_795_OnSlotSelected__DelegateSignature");

	Params::UItemTransformSlotScreen_C_BndEvt__Slot3_K2Node_ComponentBoundEvent_795_OnSlotSelected__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot4_K2Node_ComponentBoundEvent_807_OnSlotSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemTransformSlotScreen_C::BndEvt__Slot4_K2Node_ComponentBoundEvent_807_OnSlotSelected__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "BndEvt__Slot4_K2Node_ComponentBoundEvent_807_OnSlotSelected__DelegateSignature");

	Params::UItemTransformSlotScreen_C_BndEvt__Slot4_K2Node_ComponentBoundEvent_807_OnSlotSelected__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot5_K2Node_ComponentBoundEvent_820_OnSlotSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemTransformSlotScreen_C::BndEvt__Slot5_K2Node_ComponentBoundEvent_820_OnSlotSelected__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "BndEvt__Slot5_K2Node_ComponentBoundEvent_820_OnSlotSelected__DelegateSignature");

	Params::UItemTransformSlotScreen_C_BndEvt__Slot5_K2Node_ComponentBoundEvent_820_OnSlotSelected__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.ExecuteUbergraph_ItemTransformSlotScreen
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_ComponentBoundEvent_SelectedItem                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemTransformSlotEntry_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_SacrificePoints                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_CurrentTier                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_TransformActive                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformSlotScreen_C::ExecuteUbergraph_ItemTransformSlotScreen(int32 EntryPoint, class UFortItem* K2Node_ComponentBoundEvent_SelectedItem, class UItemTransformSlotEntry_C* CallFunc_Array_Get_Item, int32 K2Node_ComponentBoundEvent_SacrificePoints, int32 K2Node_ComponentBoundEvent_CurrentTier, bool K2Node_ComponentBoundEvent_TransformActive)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "ExecuteUbergraph_ItemTransformSlotScreen");

	Params::UItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_ComponentBoundEvent_SacrificePoints = K2Node_ComponentBoundEvent_SacrificePoints;
	Parms.K2Node_ComponentBoundEvent_CurrentTier = K2Node_ComponentBoundEvent_CurrentTier;
	Parms.K2Node_ComponentBoundEvent_TransformActive = K2Node_ComponentBoundEvent_TransformActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnItemPickerOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransformSlotScreen_C::OnItemPickerOpened__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "OnItemPickerOpened__DelegateSignature");

	Params::UItemTransformSlotScreen_C_OnItemPickerOpened__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnItemPickerClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransformSlotScreen_C::OnItemPickerClosed__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "OnItemPickerClosed__DelegateSignature");

	Params::UItemTransformSlotScreen_C_OnItemPickerClosed__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnTransformButtonUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TransformActive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformSlotScreen_C::OnTransformButtonUpdated__DelegateSignature(bool TransformActive)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "OnTransformButtonUpdated__DelegateSignature");

	Params::UItemTransformSlotScreen_C_OnTransformButtonUpdated__DelegateSignature_Params Parms;
	Parms.TransformActive = TransformActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnTransformConfirmed__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>           ItemsToSacrifice                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              SacrificePoints                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentTier                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotScreen_C::OnTransformConfirmed__DelegateSignature(TArray<class UFortItem*>& ItemsToSacrifice, int32 SacrificePoints, int32 CurrentTier)
{
	static auto Func = Class->GetFunction("ItemTransformSlotScreen_C", "OnTransformConfirmed__DelegateSignature");

	Params::UItemTransformSlotScreen_C_OnTransformConfirmed__DelegateSignature_Params Parms;
	Parms.ItemsToSacrifice = ItemsToSacrifice;
	Parms.SacrificePoints = SacrificePoints;
	Parms.CurrentTier = CurrentTier;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
