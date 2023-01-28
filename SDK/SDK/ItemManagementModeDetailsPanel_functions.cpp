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


// Function ItemManagementModeDetailsPanel.ItemManagementModeDetailsPanel_C.HandleDifferentItemManagementModeSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementModeDetailsPanel_C::HandleDifferentItemManagementModeSetBP()
{
	static auto Func = Class->GetFunction("ItemManagementModeDetailsPanel_C", "HandleDifferentItemManagementModeSetBP");

	Params::UItemManagementModeDetailsPanel_C_HandleDifferentItemManagementModeSetBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementModeDetailsPanel.ItemManagementModeDetailsPanel_C.ExecuteUbergraph_ItemManagementModeDetailsPanel
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemManagementMode Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemManagementMode CallFunc_GetItemManagementMode_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementModeDetailsPanel_C::ExecuteUbergraph_ItemManagementModeDetailsPanel(int32 EntryPoint, enum class EFortItemManagementMode Temp_byte_Variable, enum class EFortItemManagementMode CallFunc_GetItemManagementMode_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemManagementModeDetailsPanel_C", "ExecuteUbergraph_ItemManagementModeDetailsPanel");

	Params::UItemManagementModeDetailsPanel_C_ExecuteUbergraph_ItemManagementModeDetailsPanel_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetItemManagementMode_ReturnValue = CallFunc_GetItemManagementMode_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
