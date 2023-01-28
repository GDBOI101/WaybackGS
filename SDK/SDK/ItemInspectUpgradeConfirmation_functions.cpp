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


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.RefreshLevelInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue2                             ()

void UItemInspectUpgradeConfirmation_C::RefreshLevelInfo(bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText K2Node_Select_Default, int32 CallFunc_GetLevel_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeConfirmation_C", "RefreshLevelInfo");

	Params::UItemInspectUpgradeConfirmation_C_RefreshLevelInfo_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue2 = CallFunc_Conv_IntToText_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.RefreshEnabledState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsUpgradeAvailable_UpgradeAvailable                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanAffordUpgrade_CanAfford                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EItemUpgradeRestrictionReason>CallFunc_CanBeUpgraded_OutRestrictionReasons                     (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CanBeUpgraded_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemUpgradeRestrictionReasonCallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetUpgradeRestrictionReasonText_ReturnValue             ()
// bool                               CallFunc_IsUpgradeAvailable_UpgradeAvailable2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectUpgradeConfirmation_C::RefreshEnabledState(bool CallFunc_IsUpgradeAvailable_UpgradeAvailable, bool CallFunc_CanAffordUpgrade_CanAfford, TArray<enum class EItemUpgradeRestrictionReason>& CallFunc_CanBeUpgraded_OutRestrictionReasons, bool CallFunc_CanBeUpgraded_ReturnValue, enum class EItemUpgradeRestrictionReason CallFunc_Array_Get_Item, class FText CallFunc_GetUpgradeRestrictionReasonText_ReturnValue, bool CallFunc_IsUpgradeAvailable_UpgradeAvailable2, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeConfirmation_C", "RefreshEnabledState");

	Params::UItemInspectUpgradeConfirmation_C_RefreshEnabledState_Params Parms;
	Parms.CallFunc_IsUpgradeAvailable_UpgradeAvailable = CallFunc_IsUpgradeAvailable_UpgradeAvailable;
	Parms.CallFunc_CanAffordUpgrade_CanAfford = CallFunc_CanAffordUpgrade_CanAfford;
	Parms.CallFunc_CanBeUpgraded_OutRestrictionReasons = CallFunc_CanBeUpgraded_OutRestrictionReasons;
	Parms.CallFunc_CanBeUpgraded_ReturnValue = CallFunc_CanBeUpgraded_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetUpgradeRestrictionReasonText_ReturnValue = CallFunc_GetUpgradeRestrictionReasonText_ReturnValue;
	Parms.CallFunc_IsUpgradeAvailable_UpgradeAvailable2 = CallFunc_IsUpgradeAvailable_UpgradeAvailable2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.CanAffordUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanAfford                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPersistentResourceItemDefinition*CallFunc_GetUpgradeResourceItemDefinition_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumInInventory_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectUpgradeConfirmation_C::CanAffordUpgrade(bool* CanAfford, class UFortPersistentResourceItemDefinition* CallFunc_GetUpgradeResourceItemDefinition_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumInInventory_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeConfirmation_C", "CanAffordUpgrade");

	Params::UItemInspectUpgradeConfirmation_C_CanAffordUpgrade_Params Parms;
	Parms.CallFunc_GetUpgradeResourceItemDefinition_ReturnValue = CallFunc_GetUpgradeResourceItemDefinition_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetNumInInventory_ReturnValue = CallFunc_GetNumInInventory_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanAfford != nullptr)
		*CanAfford = Parms.CanAfford;

}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.IsUpgradeAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               UpgradeAvailable                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EItemUpgradeRestrictionReason>CallFunc_CanBeUpgraded_OutRestrictionReasons                     (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CanBeUpgraded_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectUpgradeConfirmation_C::IsUpgradeAvailable(bool* UpgradeAvailable, TArray<enum class EItemUpgradeRestrictionReason>& CallFunc_CanBeUpgraded_OutRestrictionReasons, bool CallFunc_CanBeUpgraded_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeConfirmation_C", "IsUpgradeAvailable");

	Params::UItemInspectUpgradeConfirmation_C_IsUpgradeAvailable_Params Parms;
	Parms.CallFunc_CanBeUpgraded_OutRestrictionReasons = CallFunc_CanBeUpgraded_OutRestrictionReasons;
	Parms.CallFunc_CanBeUpgraded_ReturnValue = CallFunc_CanBeUpgraded_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UpgradeAvailable != nullptr)
		*UpgradeAvailable = Parms.UpgradeAvailable;

}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.RefreshOnUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetMaxLevel_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetUpgradeCost_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectUpgradeConfirmation_C::RefreshOnUpgrade(int32 CallFunc_GetMaxLevel_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_GetUpgradeCost_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeConfirmation_C", "RefreshOnUpgrade");

	Params::UItemInspectUpgradeConfirmation_C_RefreshOnUpgrade_Params Parms;
	Parms.CallFunc_GetMaxLevel_ReturnValue = CallFunc_GetMaxLevel_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetUpgradeCost_ReturnValue = CallFunc_GetUpgradeCost_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.OnShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectUpgradeConfirmation_C::OnShow(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeConfirmation_C", "OnShow");

	Params::UItemInspectUpgradeConfirmation_C_OnShow_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.SetItemToRepresent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectUpgradeConfirmation_C::SetItemToRepresent(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeConfirmation_C", "SetItemToRepresent");

	Params::UItemInspectUpgradeConfirmation_C_SetItemToRepresent_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPersistentResourceItemDefinition*CallFunc_GetUpgradeResourceItemDefinition_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUpgradeCost_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectUpgradeConfirmation_C::Refresh(class UFortPersistentResourceItemDefinition* CallFunc_GetUpgradeResourceItemDefinition_ReturnValue, int32 CallFunc_GetUpgradeCost_ReturnValue, bool CallFunc_IsVisible_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeConfirmation_C", "Refresh");

	Params::UItemInspectUpgradeConfirmation_C_Refresh_Params Parms;
	Parms.CallFunc_GetUpgradeResourceItemDefinition_ReturnValue = CallFunc_GetUpgradeResourceItemDefinition_ReturnValue;
	Parms.CallFunc_GetUpgradeCost_ReturnValue = CallFunc_GetUpgradeCost_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectUpgradeConfirmation_C::BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeConfirmation_C", "BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UItemInspectUpgradeConfirmation_C_BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.BndEvt__UpgradeCancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectUpgradeConfirmation_C::BndEvt__UpgradeCancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeConfirmation_C", "BndEvt__UpgradeCancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UItemInspectUpgradeConfirmation_C_BndEvt__UpgradeCancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.ExecuteUbergraph_ItemInspectUpgradeConfirmation
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectUpgradeConfirmation_C::ExecuteUbergraph_ItemInspectUpgradeConfirmation(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeConfirmation_C", "ExecuteUbergraph_ItemInspectUpgradeConfirmation");

	Params::UItemInspectUpgradeConfirmation_C_ExecuteUbergraph_ItemInspectUpgradeConfirmation_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.OnUpgradeCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectUpgradeConfirmation_C::OnUpgradeCancel__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeConfirmation_C", "OnUpgradeCancel__DelegateSignature");

	Params::UItemInspectUpgradeConfirmation_C_OnUpgradeCancel__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.OnUpgradeConfirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectUpgradeConfirmation_C::OnUpgradeConfirm__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeConfirmation_C", "OnUpgradeConfirm__DelegateSignature");

	Params::UItemInspectUpgradeConfirmation_C_OnUpgradeConfirm__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
