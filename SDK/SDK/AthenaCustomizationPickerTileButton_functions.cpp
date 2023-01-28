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


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.MarkCosmeticAsSeen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationPickerTileButton_C::MarkCosmeticAsSeen(class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "MarkCosmeticAsSeen");

	Params::UAthenaCustomizationPickerTileButton_C_MarkCosmeticAsSeen_Params Parms;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.UpdateBangState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationPickerTileButton_C::UpdateBangState(class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "UpdateBangState");

	Params::UAthenaCustomizationPickerTileButton_C_UpdateBangState_Params Parms;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InData                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationPickerTileButton_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static auto Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "SetData");

	Params::UAthenaCustomizationPickerTileButton_C_SetData_Params Parms;
	Parms.InData = InData;
	Parms.OwningList = OwningList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaCustomizationPickerTileButton_C::OnSelected()
{
	static auto Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "OnSelected");

	Params::UAthenaCustomizationPickerTileButton_C_OnSelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.ExecuteUbergraph_AthenaCustomizationPickerTileButton
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_InData                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             K2Node_Event_OwningList                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationPickerTileButton_C::ExecuteUbergraph_AthenaCustomizationPickerTileButton(int32 EntryPoint, bool Temp_bool_Variable, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, bool CallFunc_IsValid_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "ExecuteUbergraph_AthenaCustomizationPickerTileButton");

	Params::UAthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_InData = K2Node_Event_InData;
	Parms.K2Node_Event_OwningList = K2Node_Event_OwningList;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
