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


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Pre Select for Console
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionPickVehicleWidget_C::Pre_Select_for_Console(class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, bool CallFunc_SetSelectedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionPickVehicleWidget_C", "Pre Select for Console");

	Params::UBP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.CallFunc_SetSelectedItem_ReturnValue = CallFunc_SetSelectedItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Determine Available Expedition Squads
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       RequirementTags                                                  (ConstParm, Parm, OutParm, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVehicleObject_C*            CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetExpeditionSquadsThatMatchRequirements_OutExpeditionSquadIds(ZeroConstructor, ReferenceParm)
// bool                               CallFunc_GetExpeditionSquadsThatMatchRequirements_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSquadOnExpedition_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionPickVehicleWidget_C::Determine_Available_Expedition_Squads(struct FGameplayTagContainer& RequirementTags, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UVehicleObject_C* CallFunc_SpawnObject_ReturnValue, TArray<class FName>& CallFunc_GetExpeditionSquadsThatMatchRequirements_OutExpeditionSquadIds, bool CallFunc_GetExpeditionSquadsThatMatchRequirements_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsSquadOnExpedition_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionPickVehicleWidget_C", "Determine Available Expedition Squads");

	Params::UBP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads_Params Parms;
	Parms.RequirementTags = RequirementTags;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetExpeditionSquadsThatMatchRequirements_OutExpeditionSquadIds = CallFunc_GetExpeditionSquadsThatMatchRequirements_OutExpeditionSquadIds;
	Parms.CallFunc_GetExpeditionSquadsThatMatchRequirements_ReturnValue = CallFunc_GetExpeditionSquadsThatMatchRequirements_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsSquadOnExpedition_ReturnValue = CallFunc_IsSquadOnExpedition_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Get Expedition Item Definition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*                   ItemDef                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItemDefinition*AsFort_Expedition_Item_Definition                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItemDefinition*K2Node_DynamicCast_AsFort_Expedition_Item_Definition             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionPickVehicleWidget_C::Get_Expedition_Item_Definition(class UFortItem* ItemDef, class UFortExpeditionItemDefinition** AsFort_Expedition_Item_Definition, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortExpeditionItemDefinition* K2Node_DynamicCast_AsFort_Expedition_Item_Definition, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionPickVehicleWidget_C", "Get Expedition Item Definition");

	Params::UBP_FortExpeditionPickVehicleWidget_C_Get_Expedition_Item_Definition_Params Parms;
	Parms.ItemDef = ItemDef;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Expedition_Item_Definition = K2Node_DynamicCast_AsFort_Expedition_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsFort_Expedition_Item_Definition != nullptr)
		*AsFort_Expedition_Item_Definition = Parms.AsFort_Expedition_Item_Definition;

}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Setup Input Action Handlers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UBP_FortExpeditionPickVehicleWidget_C::Setup_Input_Action_Handlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionPickVehicleWidget_C", "Setup Input Action Handlers");

	Params::UBP_FortExpeditionPickVehicleWidget_C_Setup_Input_Action_Handlers_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionPickVehicleWidget_C::HandleBack(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionPickVehicleWidget_C", "HandleBack");

	Params::UBP_FortExpeditionPickVehicleWidget_C_HandleBack_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionPickVehicleWidget_C::Construct()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionPickVehicleWidget_C", "Construct");

	Params::UBP_FortExpeditionPickVehicleWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         InItem                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionPickVehicleWidget_C::SetData(class UFortExpeditionItem* InItem)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionPickVehicleWidget_C", "SetData");

	Params::UBP_FortExpeditionPickVehicleWidget_C_SetData_Params Parms;
	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionPickVehicleWidget_C::OnActivated()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionPickVehicleWidget_C", "OnActivated");

	Params::UBP_FortExpeditionPickVehicleWidget_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionPickVehicleWidget_C::BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionPickVehicleWidget_C", "BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature");

	Params::UBP_FortExpeditionPickVehicleWidget_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature_Params Parms;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehicleSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SquadId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionPickVehicleWidget_C::HandleVehicleSelected(class FName SquadId)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionPickVehicleWidget_C", "HandleVehicleSelected");

	Params::UBP_FortExpeditionPickVehicleWidget_C_HandleVehicleSelected_Params Parms;
	Parms.SquadId = SquadId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HACK_GetMeOutOfSelectContext
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionPickVehicleWidget_C::HACK_GetMeOutOfSelectContext()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionPickVehicleWidget_C", "HACK_GetMeOutOfSelectContext");

	Params::UBP_FortExpeditionPickVehicleWidget_C_HACK_GetMeOutOfSelectContext_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehicleButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionPickVehicleWidget_C::HandleVehicleButtonHovered(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionPickVehicleWidget_C", "HandleVehicleButtonHovered");

	Params::UBP_FortExpeditionPickVehicleWidget_C_HandleVehicleButtonHovered_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehcileButtonUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionPickVehicleWidget_C::HandleVehcileButtonUnhovered(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionPickVehicleWidget_C", "HandleVehcileButtonUnhovered");

	Params::UBP_FortExpeditionPickVehicleWidget_C_HandleVehcileButtonUnhovered_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_FortExpeditionVehicleTileItemWidget_C*K2Node_DynamicCast_AsBP_Fort_Expedition_Vehicle_Tile_Item_Widget (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_SquadId                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleBack_PassThrough                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortExpeditionItem*         K2Node_Event_InItem                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItemDefinition*CallFunc_Get_Expedition_Item_Definition_AsFort_Expedition_Item_Definition(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetRequiredTags_ReturnValue                             ()
// class UCommonButton*               K2Node_CustomEvent_Button2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_FortExpeditionVehicleTileItemWidget_C*K2Node_DynamicCast_AsBP_Fort_Expedition_Vehicle_Tile_Item_Widget2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_CustomEvent_Button                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)

void UBP_FortExpeditionPickVehicleWidget_C::ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget(int32 EntryPoint, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UBP_FortExpeditionVehicleTileItemWidget_C* K2Node_DynamicCast_AsBP_Fort_Expedition_Vehicle_Tile_Item_Widget, bool K2Node_DynamicCast_bSuccess, class FName K2Node_CustomEvent_SquadId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HandleBack_PassThrough, bool CallFunc_Greater_IntInt_ReturnValue, class UFortExpeditionItem* K2Node_Event_InItem, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_AsFort_Expedition_Item_Definition, const struct FGameplayTagContainer& CallFunc_GetRequiredTags_ReturnValue, class UCommonButton* K2Node_CustomEvent_Button2, class UBP_FortExpeditionVehicleTileItemWidget_C* K2Node_DynamicCast_AsBP_Fort_Expedition_Vehicle_Tile_Item_Widget2, bool K2Node_DynamicCast_bSuccess2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UCommonButton* K2Node_CustomEvent_Button, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionPickVehicleWidget_C", "ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget");

	Params::UBP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_DynamicCast_AsBP_Fort_Expedition_Vehicle_Tile_Item_Widget = K2Node_DynamicCast_AsBP_Fort_Expedition_Vehicle_Tile_Item_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_SquadId = K2Node_CustomEvent_SquadId;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_HandleBack_PassThrough = CallFunc_HandleBack_PassThrough;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Event_InItem = K2Node_Event_InItem;
	Parms.CallFunc_Get_Expedition_Item_Definition_AsFort_Expedition_Item_Definition = CallFunc_Get_Expedition_Item_Definition_AsFort_Expedition_Item_Definition;
	Parms.CallFunc_GetRequiredTags_ReturnValue = CallFunc_GetRequiredTags_ReturnValue;
	Parms.K2Node_CustomEvent_Button2 = K2Node_CustomEvent_Button2;
	Parms.K2Node_DynamicCast_AsBP_Fort_Expedition_Vehicle_Tile_Item_Widget2 = K2Node_DynamicCast_AsBP_Fort_Expedition_Vehicle_Tile_Item_Widget2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.OnVehicleSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SquadId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionPickVehicleWidget_C::OnVehicleSelected__DelegateSignature(class FName SquadId)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionPickVehicleWidget_C", "OnVehicleSelected__DelegateSignature");

	Params::UBP_FortExpeditionPickVehicleWidget_C_OnVehicleSelected__DelegateSignature_Params Parms;
	Parms.SquadId = SquadId;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
