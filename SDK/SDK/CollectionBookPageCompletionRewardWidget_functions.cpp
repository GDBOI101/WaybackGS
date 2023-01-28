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


// Function CollectionBookPageCompletionRewardWidget.CollectionBookPageCompletionRewardWidget_C.OnRewardStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECollectionBookRewardStatusNewStatus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPageCompletionRewardWidget_C::OnRewardStatusChanged(enum class ECollectionBookRewardStatus NewStatus)
{
	static auto Func = Class->GetFunction("CollectionBookPageCompletionRewardWidget_C", "OnRewardStatusChanged");

	Params::UCollectionBookPageCompletionRewardWidget_C_OnRewardStatusChanged_Params Parms;
	Parms.NewStatus = NewStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageCompletionRewardWidget.CollectionBookPageCompletionRewardWidget_C.ExecuteUbergraph_CollectionBookPageCompletionRewardWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollectionBookRewardStatusTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECollectionBookRewardStatusK2Node_Event_NewStatus                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageCompletionRewardWidget_C::ExecuteUbergraph_CollectionBookPageCompletionRewardWidget(int32 EntryPoint, enum class ECollectionBookRewardStatus Temp_byte_Variable, enum class ECollectionBookRewardStatus K2Node_Event_NewStatus, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("CollectionBookPageCompletionRewardWidget_C", "ExecuteUbergraph_CollectionBookPageCompletionRewardWidget");

	Params::UCollectionBookPageCompletionRewardWidget_C_ExecuteUbergraph_CollectionBookPageCompletionRewardWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_NewStatus = K2Node_Event_NewStatus;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
