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


// Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.IsItemSimple
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemDescriptionDetailWidget_C::IsItemSimple(bool* Result, TArray<enum class EFortItemType>& K2Node_MakeArray_Array, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemDescriptionDetailWidget_C", "IsItemSimple");

	Params::UItemDescriptionDetailWidget_C_IsItemSimple_Params Parms;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemDescriptionDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto Func = Class->GetFunction("ItemDescriptionDetailWidget_C", "HandlePostDifferentItemToDetailSet");

	Params::UItemDescriptionDetailWidget_C_HandlePostDifferentItemToDetailSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.ExecuteUbergraph_ItemDescriptionDetailWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsItemSimple_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContextWithSource_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetCombinedDescription_OutDescription                   ()
// bool                               CallFunc_GetCombinedDescription_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDescription_ReturnValue                              ()
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemDescriptionDetailWidget_C::ExecuteUbergraph_ItemDescriptionDetailWidget(int32 EntryPoint, bool CallFunc_IsItemSimple_Result, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("ItemDescriptionDetailWidget_C", "ExecuteUbergraph_ItemDescriptionDetailWidget");

	Params::UItemDescriptionDetailWidget_C_ExecuteUbergraph_ItemDescriptionDetailWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsItemSimple_Result = CallFunc_IsItemSimple_Result;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_SpawnTooltipContextWithSource_ReturnValue = CallFunc_SpawnTooltipContextWithSource_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCombinedDescription_OutDescription = CallFunc_GetCombinedDescription_OutDescription;
	Parms.CallFunc_GetCombinedDescription_ReturnValue = CallFunc_GetCombinedDescription_ReturnValue;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
