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


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementCompareModeBox_C::HandleBack(bool* PassThrough)
{
	static auto Func = Class->GetFunction("ItemManagementCompareModeBox_C", "HandleBack");

	Params::UItemManagementCompareModeBox_C_HandleBack_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.UpdateFocusedItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementCompareModeBox_C::UpdateFocusedItems(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemManagementCompareModeBox_C", "UpdateFocusedItems");

	Params::UItemManagementCompareModeBox_C_UpdateFocusedItems_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.HandleDifferentItemToDetailSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementCompareModeBox_C::HandleDifferentItemToDetailSetBP()
{
	static auto Func = Class->GetFunction("ItemManagementCompareModeBox_C", "HandleDifferentItemToDetailSetBP");

	Params::UItemManagementCompareModeBox_C_HandleDifferentItemToDetailSetBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.HandleDifferentItemToCompareSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementCompareModeBox_C::HandleDifferentItemToCompareSetBP()
{
	static auto Func = Class->GetFunction("ItemManagementCompareModeBox_C", "HandleDifferentItemToCompareSetBP");

	Params::UItemManagementCompareModeBox_C_HandleDifferentItemToCompareSetBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemManagementCompareModeBox_C::Construct()
{
	static auto Func = Class->GetFunction("ItemManagementCompareModeBox_C", "Construct");

	Params::UItemManagementCompareModeBox_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementCompareModeBox_C::OnActivated()
{
	static auto Func = Class->GetFunction("ItemManagementCompareModeBox_C", "OnActivated");

	Params::UItemManagementCompareModeBox_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementCompareModeBox_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("ItemManagementCompareModeBox_C", "OnDeactivated");

	Params::UItemManagementCompareModeBox_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.ExecuteUbergraph_ItemManagementCompareModeBox
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementCompareModeBox_C::ExecuteUbergraph_ItemManagementCompareModeBox(int32 EntryPoint, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2)
{
	static auto Func = Class->GetFunction("ItemManagementCompareModeBox_C", "ExecuteUbergraph_ItemManagementCompareModeBox");

	Params::UItemManagementCompareModeBox_C_ExecuteUbergraph_ItemManagementCompareModeBox_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue2 = CallFunc_GetUINavigationManager_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
