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


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Refresh Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemDetailsStackCounter_C::Refresh_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemDetailsStackCounter_C", "Refresh Visibility");

	Params::UItemDetailsStackCounter_C_Refresh_Visibility_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Set Stack Count
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class FText                        CallFunc_Truncate_Integer_Value_Formatted_Value                  ()
// class FText                        K2Node_Select_Default                                            ()

void UItemDetailsStackCounter_C::Set_Stack_Count(int32 Count, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Truncate_Integer_Value_Formatted_Value, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemDetailsStackCounter_C", "Set Stack Count");

	Params::UItemDetailsStackCounter_C_Set_Stack_Count_Params Parms;
	Parms.Count = Count;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Truncate_Integer_Value_Formatted_Value = CallFunc_Truncate_Integer_Value_Formatted_Value;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortBrushSize          Brush_Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemDetailsStackCounter_C::Update(enum class EFortBrushSize Brush_Size, int32 Count)
{
	static auto Func = Class->GetFunction("ItemDetailsStackCounter_C", "Update");

	Params::UItemDetailsStackCounter_C_Update_Params Parms;
	Parms.Brush_Size = Brush_Size;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemDetailsStackCounter_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ItemDetailsStackCounter_C", "PreConstruct");

	Params::UItemDetailsStackCounter_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemDetailsStackCounter_C::Construct()
{
	static auto Func = Class->GetFunction("ItemDetailsStackCounter_C", "Construct");

	Params::UItemDetailsStackCounter_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.ExecuteUbergraph_ItemDetailsStackCounter
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemDetailsStackCounter_C::ExecuteUbergraph_ItemDetailsStackCounter(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("ItemDetailsStackCounter_C", "ExecuteUbergraph_ItemDetailsStackCounter");

	Params::UItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
