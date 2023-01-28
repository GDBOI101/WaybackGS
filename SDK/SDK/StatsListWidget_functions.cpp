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


// Function StatsListWidget.StatsListWidget_C.AdjustClampCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAttributeListItem_NUI*  Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Add                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortDisplayAttribute       CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute             ()
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatsListWidget_C::AdjustClampCount(class UFortAttributeListItem_NUI* Widget, bool Add, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFortDisplayAttribute& CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("StatsListWidget_C", "AdjustClampCount");

	Params::UStatsListWidget_C_AdjustClampCount_Params Parms;
	Parms.Widget = Widget;
	Parms.Add = Add;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue2 = CallFunc_EqualEqual_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute = CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatsListWidget.StatsListWidget_C.ToggleClampedValueMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InShow                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatsListWidget_C::ToggleClampedValueMessage(bool InShow, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("StatsListWidget_C", "ToggleClampedValueMessage");

	Params::UStatsListWidget_C_ToggleClampedValueMessage_Params Parms;
	Parms.InShow = InShow;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatsListWidget.StatsListWidget_C.OnClearShownAttributes
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStatsListWidget_C::OnClearShownAttributes()
{
	static auto Func = Class->GetFunction("StatsListWidget_C", "OnClearShownAttributes");

	Params::UStatsListWidget_C_OnClearShownAttributes_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatsListWidget.StatsListWidget_C.OnAddShownAttributeListItem
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortAttributeListItem_NUI*  AttributeListItemWidget                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatsListWidget_C::OnAddShownAttributeListItem(class UFortAttributeListItem_NUI* AttributeListItemWidget)
{
	static auto Func = Class->GetFunction("StatsListWidget_C", "OnAddShownAttributeListItem");

	Params::UStatsListWidget_C_OnAddShownAttributeListItem_Params Parms;
	Parms.AttributeListItemWidget = AttributeListItemWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatsListWidget.StatsListWidget_C.OnRemoveShownAttributeListItem
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortAttributeListItem_NUI*  AttributeListItemWidget                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AtIndex                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatsListWidget_C::OnRemoveShownAttributeListItem(class UFortAttributeListItem_NUI* AttributeListItemWidget, int32 AtIndex)
{
	static auto Func = Class->GetFunction("StatsListWidget_C", "OnRemoveShownAttributeListItem");

	Params::UStatsListWidget_C_OnRemoveShownAttributeListItem_Params Parms;
	Parms.AttributeListItemWidget = AttributeListItemWidget;
	Parms.AtIndex = AtIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatsListWidget.StatsListWidget_C.ExecuteUbergraph_StatsListWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAttributeListItem_NUI*  K2Node_Event_AttributeListItemWidget2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAttributeListItem_NUI*  K2Node_Event_AttributeListItemWidget                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_AtIndex                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChildAt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatsListWidget_C::ExecuteUbergraph_StatsListWidget(int32 EntryPoint, class UFortAttributeListItem_NUI* K2Node_Event_AttributeListItemWidget2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UFortAttributeListItem_NUI* K2Node_Event_AttributeListItemWidget, int32 K2Node_Event_AtIndex, bool CallFunc_RemoveChildAt_ReturnValue)
{
	static auto Func = Class->GetFunction("StatsListWidget_C", "ExecuteUbergraph_StatsListWidget");

	Params::UStatsListWidget_C_ExecuteUbergraph_StatsListWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_AttributeListItemWidget2 = K2Node_Event_AttributeListItemWidget2;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_Event_AttributeListItemWidget = K2Node_Event_AttributeListItemWidget;
	Parms.K2Node_Event_AtIndex = K2Node_Event_AtIndex;
	Parms.CallFunc_RemoveChildAt_ReturnValue = CallFunc_RemoveChildAt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
