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


// Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.SetSlotCompletionRatio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumSlotted                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumSlots                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionTileRewardWidget_C::SetSlotCompletionRatio(int32 NumSlotted, int32 NumSlots, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2)
{
	static auto Func = Class->GetFunction("CollectionBookSectionTileRewardWidget_C", "SetSlotCompletionRatio");

	Params::UCollectionBookSectionTileRewardWidget_C_SetSlotCompletionRatio_Params Parms;
	Parms.NumSlotted = NumSlotted;
	Parms.NumSlots = NumSlots;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.OnRewardStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECollectionBookRewardStatusNewStatus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookSectionTileRewardWidget_C::OnRewardStatusChanged(enum class ECollectionBookRewardStatus NewStatus)
{
	static auto Func = Class->GetFunction("CollectionBookSectionTileRewardWidget_C", "OnRewardStatusChanged");

	Params::UCollectionBookSectionTileRewardWidget_C_OnRewardStatusChanged_Params Parms;
	Parms.NewStatus = NewStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.ExecuteUbergraph_CollectionBookSectionTileRewardWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollectionBookRewardStatusTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECollectionBookRewardStatusK2Node_Event_NewStatus                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollectionBookRewardStatusTemp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionTileRewardWidget_C::ExecuteUbergraph_CollectionBookSectionTileRewardWidget(int32 EntryPoint, enum class ECollectionBookRewardStatus Temp_byte_Variable, enum class ECollectionBookRewardStatus K2Node_Event_NewStatus, class UClass* Temp_class_Variable, enum class ECollectionBookRewardStatus Temp_byte_Variable2, class UWidget* K2Node_Select_Default, class UClass* K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("CollectionBookSectionTileRewardWidget_C", "ExecuteUbergraph_CollectionBookSectionTileRewardWidget");

	Params::UCollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_NewStatus = K2Node_Event_NewStatus;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
