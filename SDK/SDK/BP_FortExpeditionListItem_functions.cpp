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


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Update Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*            Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionListItem_C::Update_Bang_State(class UFortAccountItem* Item, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Update Bang State");

	Params::UBP_FortExpeditionListItem_C_Update_Bang_State_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Success Chance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SquadId                                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetExpeditionSquadId_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExpeditionInProgress_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           CallFunc_GetItemsInSquad_ReturnValue                             (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_CalculateTotalPower_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::Set_Success_Chance(class UFortExpeditionItem* Item, class FName SquadId, class FName CallFunc_GetExpeditionSquadId_ReturnValue, bool CallFunc_IsExpeditionInProgress_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsInSquad_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_CalculateTotalPower_ReturnValue, float CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Set Success Chance");

	Params::UBP_FortExpeditionListItem_C_Set_Success_Chance_Params Parms;
	Parms.Item = Item;
	Parms.SquadId = SquadId;
	Parms.CallFunc_GetExpeditionSquadId_ReturnValue = CallFunc_GetExpeditionSquadId_ReturnValue;
	Parms.CallFunc_IsExpeditionInProgress_ReturnValue = CallFunc_IsExpeditionInProgress_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetItemsInSquad_ReturnValue = CallFunc_GetItemsInSquad_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CalculateTotalPower_ReturnValue = CallFunc_CalculateTotalPower_ReturnValue;
	Parms.CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue = CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Vehicle Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Expedition                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetVehicleTagRequiredForExpedition_ReturnValue          (NoDestructor, HasGetValueTypeHash)
// struct FFortTagUIData              CallFunc_GetUIDataForTag_OutData                                 ()
// bool                               CallFunc_GetUIDataForTag_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionListItem_C::Set_Vehicle_Icon(class UFortExpeditionItem* Expedition, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, const struct FGameplayTag& CallFunc_GetVehicleTagRequiredForExpedition_ReturnValue, const struct FFortTagUIData& CallFunc_GetUIDataForTag_OutData, bool CallFunc_GetUIDataForTag_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Set Vehicle Icon");

	Params::UBP_FortExpeditionListItem_C_Set_Vehicle_Icon_Params Parms;
	Parms.Expedition = Expedition;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetVehicleTagRequiredForExpedition_ReturnValue = CallFunc_GetVehicleTagRequiredForExpedition_ReturnValue;
	Parms.CallFunc_GetUIDataForTag_OutData = CallFunc_GetUIDataForTag_OutData;
	Parms.CallFunc_GetUIDataForTag_ReturnValue = CallFunc_GetUIDataForTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Expedition Returns Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         InputPin                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::Set_Expedition_Returns_Data(class UFortExpeditionItem* InputPin)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Set Expedition Returns Data");

	Params::UBP_FortExpeditionListItem_C_Set_Expedition_Returns_Data_Params Parms;
	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set In Progress State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsExpeditionInProgress_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::Set_In_Progress_State(class UFortExpeditionItem* Item, bool Temp_bool_Variable, bool CallFunc_IsExpeditionInProgress_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable2, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Set In Progress State");

	Params::UBP_FortExpeditionListItem_C_Set_In_Progress_State_Params Parms;
	Parms.Item = Item;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsExpeditionInProgress_ReturnValue = CallFunc_IsExpeditionInProgress_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Remaining Expiration Time
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::Set_Remaining_Expiration_Time(class UFortExpeditionItem* Item)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Set Remaining Expiration Time");

	Params::UBP_FortExpeditionListItem_C_Set_Remaining_Expiration_Time_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()

void UBP_FortExpeditionListItem_C::Set_Rarity(class UFortItem* Item, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Set Rarity");

	Params::UBP_FortExpeditionListItem_C_Set_Rarity_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTargetPowerLevel_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::Set_Rating(class UFortExpeditionItem* Item, float CallFunc_GetTargetPowerLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Set Rating");

	Params::UBP_FortExpeditionListItem_C_Set_Rating_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetTargetPowerLevel_ReturnValue = CallFunc_GetTargetPowerLevel_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItemDefinition*CallFunc_Get_Expedition_Item_Definition_Item_Def                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortCardPackItemDefinition*>CallFunc_GetAllRewards_OutRewards                                (ZeroConstructor, ReferenceParm)
// class UFortCardPackItemDefinition* CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue     ()
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SimpleItemWidget_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::Set_Rewards(class UFortItem* Item, int32 Temp_int_Array_Index_Variable, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_Item_Def, TArray<class UFortCardPackItemDefinition*>& CallFunc_GetAllRewards_OutRewards, class UFortCardPackItemDefinition* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_SimpleItemWidget_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Set Rewards");

	Params::UBP_FortExpeditionListItem_C_Set_Rewards_Params Parms;
	Parms.Item = Item;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Get_Expedition_Item_Definition_Item_Def = CallFunc_Get_Expedition_Item_Definition_Item_Def;
	Parms.CallFunc_GetAllRewards_OutRewards = CallFunc_GetAllRewards_OutRewards;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Get Expedition Item Definition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItemDefinition*Item_Def                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItemDefinition*K2Node_DynamicCast_AsFort_Expedition_Item_Definition             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionListItem_C::Get_Expedition_Item_Definition(class UFortItem* Item, class UFortExpeditionItemDefinition** Item_Def, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortExpeditionItemDefinition* K2Node_DynamicCast_AsFort_Expedition_Item_Definition, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Get Expedition Item Definition");

	Params::UBP_FortExpeditionListItem_C_Get_Expedition_Item_Definition_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Expedition_Item_Definition = K2Node_DynamicCast_AsFort_Expedition_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Item_Def != nullptr)
		*Item_Def = Parms.Item_Def;

}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()

void UBP_FortExpeditionListItem_C::Set_Name(class UFortItem* Item, class FText CallFunc_GetDisplayName_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Set Name");

	Params::UBP_FortExpeditionListItem_C_Set_Name_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Setup Base Item Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Expedition                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItemDefinition*CallFunc_Get_Expedition_Item_Definition_Item_Def                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimespan                   CallFunc_FromMinutes_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTimespanAsText_ReturnValue                           ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UBP_FortExpeditionListItem_C::Setup_Base_Item_Data(class UFortExpeditionItem* Expedition, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_Item_Def, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FTimespan& CallFunc_FromMinutes_ReturnValue, class FText CallFunc_GetTimespanAsText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Setup Base Item Data");

	Params::UBP_FortExpeditionListItem_C_Setup_Base_Item_Data_Params Parms;
	Parms.Expedition = Expedition;
	Parms.CallFunc_Get_Expedition_Item_Definition_Item_Def = CallFunc_Get_Expedition_Item_Definition_Item_Def;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_FromMinutes_ReturnValue = CallFunc_FromMinutes_ReturnValue;
	Parms.CallFunc_GetTimespanAsText_ReturnValue = CallFunc_GetTimespanAsText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InData                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionListItem_C", "SetData");

	Params::UBP_FortExpeditionListItem_C_SetData_Params Parms;
	Parms.InData = InData;
	Parms.OwningList = OwningList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionListItem_C::OnSelected()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionListItem_C", "OnSelected");

	Params::UBP_FortExpeditionListItem_C_OnSelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionListItem_C::OnItemChanged()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionListItem_C", "OnItemChanged");

	Params::UBP_FortExpeditionListItem_C_OnItemChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionListItem_C::OnDeselected()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionListItem_C", "OnDeselected");

	Params::UBP_FortExpeditionListItem_C_OnDeselected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     ActiveWidget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ActiveWidgetIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionListItem_C", "BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature");

	Params::UBP_FortExpeditionListItem_C_BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature_Params Parms;
	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionListItem_C::OnHovered()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionListItem_C", "OnHovered");

	Params::UBP_FortExpeditionListItem_C_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.ExecuteUbergraph_BP_FortExpeditionListItem
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_InData                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             K2Node_Event_OwningList                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItem*         K2Node_DynamicCast_AsFort_Expedition_Item                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_ComponentBoundEvent_ActiveWidget                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_ActiveWidgetIndex                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionListItem_C::ExecuteUbergraph_BP_FortExpeditionListItem(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, class UFortExpeditionItem* K2Node_DynamicCast_AsFort_Expedition_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue2, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue3)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionListItem_C", "ExecuteUbergraph_BP_FortExpeditionListItem");

	Params::UBP_FortExpeditionListItem_C_ExecuteUbergraph_BP_FortExpeditionListItem_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_InData = K2Node_Event_InData;
	Parms.K2Node_Event_OwningList = K2Node_Event_OwningList;
	Parms.K2Node_DynamicCast_AsFort_Expedition_Item = K2Node_DynamicCast_AsFort_Expedition_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_ActiveWidget = K2Node_ComponentBoundEvent_ActiveWidget;
	Parms.K2Node_ComponentBoundEvent_ActiveWidgetIndex = K2Node_ComponentBoundEvent_ActiveWidgetIndex;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
