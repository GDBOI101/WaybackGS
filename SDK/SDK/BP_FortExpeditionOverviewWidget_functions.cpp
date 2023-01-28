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


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Get Mcp Relative Utc Now
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime                   UtcNow                                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_GetMcpRelativeUtcNow_ReturnValue                        (NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionOverviewWidget_C::Get_Mcp_Relative_Utc_Now(struct FDateTime* UtcNow, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FDateTime& CallFunc_GetMcpRelativeUtcNow_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "Get Mcp Relative Utc Now");

	Params::UBP_FortExpeditionOverviewWidget_C_Get_Mcp_Relative_Utc_Now_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMcpRelativeUtcNow_ReturnValue = CallFunc_GetMcpRelativeUtcNow_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UtcNow != nullptr)
		*UtcNow = Parms.UtcNow;

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Set List Sort Type
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortExpeditionListSort InSortType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionOverviewWidget_C::Set_List_Sort_Type(enum class EFortExpeditionListSort InSortType)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "Set List Sort Type");

	Params::UBP_FortExpeditionOverviewWidget_C_Set_List_Sort_Type_Params Parms;
	Parms.InSortType = InSortType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Should Disable Build Expedition Action
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortExpeditionItem*         Expedition                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Disable                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                VehicleTag                                                       (Edit, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItem*         LocalExpedition                                                  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalAvailable                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AvailableAir                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AvailableSea                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AvailableLand                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_GetVehicleTagRequiredForExpedition_ReturnValue          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTotalExpeditionVehiclesAvailable_OutLandVehicles     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalExpeditionVehiclesAvailable_OutLandVehiclesAvailable(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalExpeditionVehiclesAvailable_OutSeaVehicles      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalExpeditionVehiclesAvailable_OutSeaVehiclesAvailable(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalExpeditionVehiclesAvailable_OutAirVehicles      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalExpeditionVehiclesAvailable_OutAirVehiclesAvailable(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionOverviewWidget_C::Should_Disable_Build_Expedition_Action(class UFortExpeditionItem* Expedition, bool* Disable, const struct FGameplayTag& VehicleTag, class UFortExpeditionItem* LocalExpedition, int32 TotalAvailable, int32 AvailableAir, int32 AvailableSea, int32 AvailableLand, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue2, bool CallFunc_EqualEqual_GameplayTag_ReturnValue3, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& CallFunc_GetVehicleTagRequiredForExpedition_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetTotalExpeditionVehiclesAvailable_OutLandVehicles, int32 CallFunc_GetTotalExpeditionVehiclesAvailable_OutLandVehiclesAvailable, int32 CallFunc_GetTotalExpeditionVehiclesAvailable_OutSeaVehicles, int32 CallFunc_GetTotalExpeditionVehiclesAvailable_OutSeaVehiclesAvailable, int32 CallFunc_GetTotalExpeditionVehiclesAvailable_OutAirVehicles, int32 CallFunc_GetTotalExpeditionVehiclesAvailable_OutAirVehiclesAvailable)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "Should Disable Build Expedition Action");

	Params::UBP_FortExpeditionOverviewWidget_C_Should_Disable_Build_Expedition_Action_Params Parms;
	Parms.Expedition = Expedition;
	Parms.VehicleTag = VehicleTag;
	Parms.LocalExpedition = LocalExpedition;
	Parms.TotalAvailable = TotalAvailable;
	Parms.AvailableAir = AvailableAir;
	Parms.AvailableSea = AvailableSea;
	Parms.AvailableLand = AvailableLand;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue2 = CallFunc_EqualEqual_GameplayTag_ReturnValue2;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue3 = CallFunc_EqualEqual_GameplayTag_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVehicleTagRequiredForExpedition_ReturnValue = CallFunc_GetVehicleTagRequiredForExpedition_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue2 = CallFunc_EqualEqual_IntInt_ReturnValue2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue3 = CallFunc_EqualEqual_IntInt_ReturnValue3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTotalExpeditionVehiclesAvailable_OutLandVehicles = CallFunc_GetTotalExpeditionVehiclesAvailable_OutLandVehicles;
	Parms.CallFunc_GetTotalExpeditionVehiclesAvailable_OutLandVehiclesAvailable = CallFunc_GetTotalExpeditionVehiclesAvailable_OutLandVehiclesAvailable;
	Parms.CallFunc_GetTotalExpeditionVehiclesAvailable_OutSeaVehicles = CallFunc_GetTotalExpeditionVehiclesAvailable_OutSeaVehicles;
	Parms.CallFunc_GetTotalExpeditionVehiclesAvailable_OutSeaVehiclesAvailable = CallFunc_GetTotalExpeditionVehiclesAvailable_OutSeaVehiclesAvailable;
	Parms.CallFunc_GetTotalExpeditionVehiclesAvailable_OutAirVehicles = CallFunc_GetTotalExpeditionVehiclesAvailable_OutAirVehicles;
	Parms.CallFunc_GetTotalExpeditionVehiclesAvailable_OutAirVehiclesAvailable = CallFunc_GetTotalExpeditionVehiclesAvailable_OutAirVehiclesAvailable;

	UObject::ProcessEvent(Func, &Parms);

	if (Disable != nullptr)
		*Disable = Parms.Disable;

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Try to Build Expedition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Expedition                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleBuildExpeditionAction_PassThrough                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsExpeditionInProgress_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionOverviewWidget_C::Try_to_Build_Expedition(class UFortExpeditionItem* Expedition, bool CallFunc_HandleBuildExpeditionAction_PassThrough, bool CallFunc_IsExpeditionInProgress_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "Try to Build Expedition");

	Params::UBP_FortExpeditionOverviewWidget_C_Try_to_Build_Expedition_Params Parms;
	Parms.Expedition = Expedition;
	Parms.CallFunc_HandleBuildExpeditionAction_PassThrough = CallFunc_HandleBuildExpeditionAction_PassThrough;
	Parms.CallFunc_IsExpeditionInProgress_ReturnValue = CallFunc_IsExpeditionInProgress_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Try to Abandon Expedition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Expedition                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExpeditionInProgress_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsExpeditionCompleted_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleAbandonExpeditionAction_PassThrough               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionOverviewWidget_C::Try_to_Abandon_Expedition(class UFortExpeditionItem* Expedition, const struct FDateTime& CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow, bool CallFunc_IsExpeditionInProgress_ReturnValue, bool CallFunc_IsExpeditionCompleted_ReturnValue, bool CallFunc_HandleAbandonExpeditionAction_PassThrough, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "Try to Abandon Expedition");

	Params::UBP_FortExpeditionOverviewWidget_C_Try_to_Abandon_Expedition_Params Parms;
	Parms.Expedition = Expedition;
	Parms.CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow = CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow;
	Parms.CallFunc_IsExpeditionInProgress_ReturnValue = CallFunc_IsExpeditionInProgress_ReturnValue;
	Parms.CallFunc_IsExpeditionCompleted_ReturnValue = CallFunc_IsExpeditionCompleted_ReturnValue;
	Parms.CallFunc_HandleAbandonExpeditionAction_PassThrough = CallFunc_HandleAbandonExpeditionAction_PassThrough;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Update Active Input For Selected Item
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         InputObject                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Should_Disable_Build_Expedition_Action_Disable          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExpeditionCompleted_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionOverviewWidget_C::Update_Active_Input_For_Selected_Item(class UFortExpeditionItem* InputObject, bool CallFunc_Should_Disable_Build_Expedition_Action_Disable, bool CallFunc_IsValid_ReturnValue, const struct FDateTime& CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow, bool CallFunc_IsExpeditionCompleted_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "Update Active Input For Selected Item");

	Params::UBP_FortExpeditionOverviewWidget_C_Update_Active_Input_For_Selected_Item_Params Parms;
	Parms.InputObject = InputObject;
	Parms.CallFunc_Should_Disable_Build_Expedition_Action_Disable = CallFunc_Should_Disable_Build_Expedition_Action_Disable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow = CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow;
	Parms.CallFunc_IsExpeditionCompleted_ReturnValue = CallFunc_IsExpeditionCompleted_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Update Details Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_GetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionOverviewWidget_C::Update_Details_Visibility(class UObject* CallFunc_GetSelectedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "Update Details Visibility");

	Params::UBP_FortExpeditionOverviewWidget_C_Update_Details_Visibility_Params Parms;
	Parms.CallFunc_GetSelectedItem_ReturnValue = CallFunc_GetSelectedItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Update List View Area
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InTabId                                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// class FText                        Temp_text_Variable3                                              ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable4                                              ()
// class FText                        Temp_text_Variable5                                              ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FExpeditionTabInfo          CallFunc_Array_Get_Item                                          ()
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// int32                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionOverviewWidget_C::Update_List_View_Area(class FName InTabId, class FText Temp_text_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable2, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText Temp_text_Variable4, class FText Temp_text_Variable5, int32 CallFunc_Array_Length_ReturnValue, const struct FExpeditionTabInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 Temp_int_Variable3, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_GetNumItems_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, int32 K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "Update List View Area");

	Params::UBP_FortExpeditionOverviewWidget_C_Update_List_View_Area_Params Parms;
	Parms.InTabId = InTabId;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.HandleCollectExpeditionAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionOverviewWidget_C::HandleCollectExpeditionAction(bool* PassThrough)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "HandleCollectExpeditionAction");

	Params::UBP_FortExpeditionOverviewWidget_C_HandleCollectExpeditionAction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.HandleAbandonExpeditionAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionOverviewWidget_C::HandleAbandonExpeditionAction(bool* PassThrough)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "HandleAbandonExpeditionAction");

	Params::UBP_FortExpeditionOverviewWidget_C_HandleAbandonExpeditionAction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.HandleBuildExpeditionAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionOverviewWidget_C::HandleBuildExpeditionAction(bool* PassThrough, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "HandleBuildExpeditionAction");

	Params::UBP_FortExpeditionOverviewWidget_C_HandleBuildExpeditionAction_Params Parms;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Determine Active Input Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         InItem                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AreAnyExpeditionsComplete_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionOverviewWidget_C::Determine_Active_Input_Action(class UFortExpeditionItem* InItem, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_AreAnyExpeditionsComplete_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "Determine Active Input Action");

	Params::UBP_FortExpeditionOverviewWidget_C_Determine_Active_Input_Action_Params Parms;
	Parms.InItem = InItem;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_AreAnyExpeditionsComplete_ReturnValue = CallFunc_AreAnyExpeditionsComplete_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Hide All Input Actions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionOverviewWidget_C::Hide_All_Input_Actions()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "Hide All Input Actions");

	Params::UBP_FortExpeditionOverviewWidget_C_Hide_All_Input_Actions_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Set Current Tab Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetExpeditionListSortName_ReturnValue                   ()
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FExpeditionTabInfo          CallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void UBP_FortExpeditionOverviewWidget_C::Set_Current_Tab_Name(class FName TabId, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_GetExpeditionListSortName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FExpeditionTabInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_NameName_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "Set Current Tab Name");

	Params::UBP_FortExpeditionOverviewWidget_C_Set_Current_Tab_Name_Params Parms;
	Parms.TabId = TabId;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetExpeditionListSortName_ReturnValue = CallFunc_GetExpeditionListSortName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.On Widget Activated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetSelectedItem_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionOverviewWidget_C::On_Widget_Activated(class UObject* CallFunc_GetItemAt_ReturnValue, bool CallFunc_SetSelectedItem_ReturnValue, class UObject* CallFunc_GetSelectedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetSelectedItem_ReturnValue2)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "On Widget Activated");

	Params::UBP_FortExpeditionOverviewWidget_C_On_Widget_Activated_Params Parms;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.CallFunc_SetSelectedItem_ReturnValue = CallFunc_SetSelectedItem_ReturnValue;
	Parms.CallFunc_GetSelectedItem_ReturnValue = CallFunc_GetSelectedItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetSelectedItem_ReturnValue2 = CallFunc_SetSelectedItem_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.FireCollectCompletedExpedition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionOverviewWidget_C::FireCollectCompletedExpedition()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "FireCollectCompletedExpedition");

	Params::UBP_FortExpeditionOverviewWidget_C_FireCollectCompletedExpedition_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Setup Expedition Details Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionOverviewWidget_C::Setup_Expedition_Details_Widget(class UFortExpeditionItem* Item, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "Setup Expedition Details Widget");

	Params::UBP_FortExpeditionOverviewWidget_C_Setup_Expedition_Details_Widget_Params Parms;
	Parms.Item = Item;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionOverviewWidget_C::Construct()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "Construct");

	Params::UBP_FortExpeditionOverviewWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.OnExpeditionTabSelected
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionOverviewWidget_C::OnExpeditionTabSelected(class FName& TabNameID)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "OnExpeditionTabSelected");

	Params::UBP_FortExpeditionOverviewWidget_C_OnExpeditionTabSelected_Params Parms;
	Parms.TabNameID = TabNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.HandleAbandonExpedition
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionOverviewWidget_C::HandleAbandonExpedition()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "HandleAbandonExpedition");

	Params::UBP_FortExpeditionOverviewWidget_C_HandleAbandonExpedition_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.BndEvt__ExpeditionTabList_K2Node_ComponentBoundEvent_10_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionOverviewWidget_C::BndEvt__ExpeditionTabList_K2Node_ComponentBoundEvent_10_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "BndEvt__ExpeditionTabList_K2Node_ComponentBoundEvent_10_OnTabButtonCreated__DelegateSignature");

	Params::UBP_FortExpeditionOverviewWidget_C_BndEvt__ExpeditionTabList_K2Node_ComponentBoundEvent_10_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionOverviewWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "Destruct");

	Params::UBP_FortExpeditionOverviewWidget_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.OnExpeditionOverviewRefresh
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionOverviewWidget_C::OnExpeditionOverviewRefresh()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "OnExpeditionOverviewRefresh");

	Params::UBP_FortExpeditionOverviewWidget_C_OnExpeditionOverviewRefresh_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_3_OnExpeditionListItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionOverviewWidget_C::BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_3_OnExpeditionListItemSelected__DelegateSignature(class UFortExpeditionItem* Item)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_3_OnExpeditionListItemSelected__DelegateSignature");

	Params::UBP_FortExpeditionOverviewWidget_C_BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_3_OnExpeditionListItemSelected__DelegateSignature_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.HandleOnListViewRefreshed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionOverviewWidget_C::HandleOnListViewRefreshed()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "HandleOnListViewRefreshed");

	Params::UBP_FortExpeditionOverviewWidget_C_HandleOnListViewRefreshed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_12_OnItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionOverviewWidget_C::BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_12_OnItemClicked__DelegateSignature(class UObject* Item)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_12_OnItemClicked__DelegateSignature");

	Params::UBP_FortExpeditionOverviewWidget_C_BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_12_OnItemClicked__DelegateSignature_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_38_OnItemHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionOverviewWidget_C::BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_38_OnItemHovered__DelegateSignature(class UObject* Item)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_38_OnItemHovered__DelegateSignature");

	Params::UBP_FortExpeditionOverviewWidget_C_BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_38_OnItemHovered__DelegateSignature_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.ExecuteUbergraph_BP_FortExpeditionOverviewWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_FortExpeditionIconTabButton_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_TabNameID                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_FortExpeditionIconTabButton_C*K2Node_DynamicCast_AsBP_Fort_Expedition_Icon_Tab_Button          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItem*         K2Node_ComponentBoundEvent_Item3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_FortExpeditionIconTabButton_C*CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_FortExpeditionIconTabButton_C*CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_ComponentBoundEvent_Item2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItem*         K2Node_DynamicCast_AsFort_Expedition_Item                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItem*         K2Node_DynamicCast_AsFort_Expedition_Item2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionOverviewWidget_C::ExecuteUbergraph_BP_FortExpeditionOverviewWidget(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UBP_FortExpeditionIconTabButton_C* CallFunc_Array_Get_Item, class FName K2Node_Event_TabNameID, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, int32 Temp_int_Array_Index_Variable2, class UBP_FortExpeditionIconTabButton_C* K2Node_DynamicCast_AsBP_Fort_Expedition_Icon_Tab_Button, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable3, int32 CallFunc_Array_Add_ReturnValue, class UFortExpeditionItem* K2Node_ComponentBoundEvent_Item3, class UBP_FortExpeditionIconTabButton_C* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, int32 Temp_int_Loop_Counter_Variable2, class UBP_FortExpeditionIconTabButton_C* CallFunc_Array_Get_Item3, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item2, class UFortExpeditionItem* K2Node_DynamicCast_AsFort_Expedition_Item, bool K2Node_DynamicCast_bSuccess2, class UObject* CallFunc_GetSelectedItem_ReturnValue, class UFortExpeditionItem* K2Node_DynamicCast_AsFort_Expedition_Item2, bool K2Node_DynamicCast_bSuccess3, int32 Temp_int_Loop_Counter_Variable3, bool CallFunc_Less_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue3, class UObject* K2Node_ComponentBoundEvent_Item)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "ExecuteUbergraph_BP_FortExpeditionOverviewWidget");

	Params::UBP_FortExpeditionOverviewWidget_C_ExecuteUbergraph_BP_FortExpeditionOverviewWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Event_TabNameID = K2Node_Event_TabNameID;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.K2Node_DynamicCast_AsBP_Fort_Expedition_Icon_Tab_Button = K2Node_DynamicCast_AsBP_Fort_Expedition_Icon_Tab_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable3 = Temp_int_Array_Index_Variable3;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Item3 = K2Node_ComponentBoundEvent_Item3;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Item2 = K2Node_ComponentBoundEvent_Item2;
	Parms.K2Node_DynamicCast_AsFort_Expedition_Item = K2Node_DynamicCast_AsFort_Expedition_Item;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetSelectedItem_ReturnValue = CallFunc_GetSelectedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Expedition_Item2 = K2Node_DynamicCast_AsFort_Expedition_Item2;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.Temp_int_Loop_Counter_Variable3 = Temp_int_Loop_Counter_Variable3;
	Parms.CallFunc_Less_IntInt_ReturnValue3 = CallFunc_Less_IntInt_ReturnValue3;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.OnCollectCompletedExpedition__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionOverviewWidget_C::OnCollectCompletedExpedition__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionOverviewWidget_C", "OnCollectCompletedExpedition__DelegateSignature");

	Params::UBP_FortExpeditionOverviewWidget_C_OnCollectCompletedExpedition__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
