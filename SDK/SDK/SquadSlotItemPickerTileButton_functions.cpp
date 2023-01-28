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


// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.UpdateOverlays
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EFortSquadSlottingRestrictionReason>CallFunc_GetSlottingRestrictionReasons_ReturnValue               (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void USquadSlotItemPickerTileButton_C::UpdateOverlays(TArray<enum class EFortSquadSlottingRestrictionReason>& CallFunc_GetSlottingRestrictionReasons_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("SquadSlotItemPickerTileButton_C", "UpdateOverlays");

	Params::USquadSlotItemPickerTileButton_C_UpdateOverlays_Params Parms;
	Parms.CallFunc_GetSlottingRestrictionReasons_ReturnValue = CallFunc_GetSlottingRestrictionReasons_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InData                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadSlotItemPickerTileButton_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static auto Func = Class->GetFunction("SquadSlotItemPickerTileButton_C", "SetData");

	Params::USquadSlotItemPickerTileButton_C_SetData_Params Parms;
	Parms.InData = InData;
	Parms.OwningList = OwningList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.HandleItemSlottedToDifferentSquad
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHomebaseSquadSlotId        SquadSlotId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void USquadSlotItemPickerTileButton_C::HandleItemSlottedToDifferentSquad(struct FHomebaseSquadSlotId& SquadSlotId)
{
	static auto Func = Class->GetFunction("SquadSlotItemPickerTileButton_C", "HandleItemSlottedToDifferentSquad");

	Params::USquadSlotItemPickerTileButton_C_HandleItemSlottedToDifferentSquad_Params Parms;
	Parms.SquadSlotId = SquadSlotId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.HandleSlottingRestrictionReasonsChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void USquadSlotItemPickerTileButton_C::HandleSlottingRestrictionReasonsChanged()
{
	static auto Func = Class->GetFunction("SquadSlotItemPickerTileButton_C", "HandleSlottingRestrictionReasonsChanged");

	Params::USquadSlotItemPickerTileButton_C_HandleSlottingRestrictionReasonsChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.ExecuteUbergraph_SquadSlotItemPickerTileButton
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_InData                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             K2Node_Event_OwningList                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHomebaseSquadSlotId        K2Node_Event_SquadSlotId                                         (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadSlotItemPickerTileButton_C::ExecuteUbergraph_SquadSlotItemPickerTileButton(int32 EntryPoint, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, bool CallFunc_IsValid_ReturnValue, const struct FHomebaseSquadSlotId& K2Node_Event_SquadSlotId, bool Temp_bool_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("SquadSlotItemPickerTileButton_C", "ExecuteUbergraph_SquadSlotItemPickerTileButton");

	Params::USquadSlotItemPickerTileButton_C_ExecuteUbergraph_SquadSlotItemPickerTileButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InData = K2Node_Event_InData;
	Parms.K2Node_Event_OwningList = K2Node_Event_OwningList;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_SquadSlotId = K2Node_Event_SquadSlotId;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
