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


// Function CollectionBookPageDetailsWidget.CollectionBookPageDetailsWidget_C.OnPageProgressionUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              TotalFilledSlots                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalSlots                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCollectionBookStateState                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPageDetailsWidget_C::OnPageProgressionUpdated(int32 TotalFilledSlots, int32 TotalSlots, enum class EFortCollectionBookState State)
{
	static auto Func = Class->GetFunction("CollectionBookPageDetailsWidget_C", "OnPageProgressionUpdated");

	Params::UCollectionBookPageDetailsWidget_C_OnPageProgressionUpdated_Params Parms;
	Parms.TotalFilledSlots = TotalFilledSlots;
	Parms.TotalSlots = TotalSlots;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageDetailsWidget.CollectionBookPageDetailsWidget_C.ExecuteUbergraph_CollectionBookPageDetailsWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_TotalFilledSlots                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TotalSlots                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCollectionBookStateK2Node_Event_State                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPageDetailsWidget_C::ExecuteUbergraph_CollectionBookPageDetailsWidget(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, int32 K2Node_Event_TotalFilledSlots, int32 K2Node_Event_TotalSlots, enum class EFortCollectionBookState K2Node_Event_State, bool Temp_bool_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("CollectionBookPageDetailsWidget_C", "ExecuteUbergraph_CollectionBookPageDetailsWidget");

	Params::UCollectionBookPageDetailsWidget_C_ExecuteUbergraph_CollectionBookPageDetailsWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Event_TotalFilledSlots = K2Node_Event_TotalFilledSlots;
	Parms.K2Node_Event_TotalSlots = K2Node_Event_TotalSlots;
	Parms.K2Node_Event_State = K2Node_Event_State;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
