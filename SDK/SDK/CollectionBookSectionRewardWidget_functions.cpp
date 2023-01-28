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


// Function CollectionBookSectionRewardWidget.CollectionBookSectionRewardWidget_C.OnRewardStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECollectionBookRewardStatusNewStatus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookSectionRewardWidget_C::OnRewardStatusChanged(enum class ECollectionBookRewardStatus NewStatus)
{
	static auto Func = Class->GetFunction("CollectionBookSectionRewardWidget_C", "OnRewardStatusChanged");

	Params::UCollectionBookSectionRewardWidget_C_OnRewardStatusChanged_Params Parms;
	Parms.NewStatus = NewStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookSectionRewardWidget.CollectionBookSectionRewardWidget_C.ExecuteUbergraph_CollectionBookSectionRewardWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollectionBookRewardStatusK2Node_Event_NewStatus                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECollectionBookRewardStatusTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionRewardWidget_C::ExecuteUbergraph_CollectionBookSectionRewardWidget(int32 EntryPoint, enum class ECollectionBookRewardStatus K2Node_Event_NewStatus, enum class ECollectionBookRewardStatus Temp_byte_Variable, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("CollectionBookSectionRewardWidget_C", "ExecuteUbergraph_CollectionBookSectionRewardWidget");

	Params::UCollectionBookSectionRewardWidget_C_ExecuteUbergraph_CollectionBookSectionRewardWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewStatus = K2Node_Event_NewStatus;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
