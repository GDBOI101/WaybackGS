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


// Function AccountBonuses.AccountBonuses_C.Update Badges
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_GetAccountItemWithDefinition_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountBuffItem*        K2Node_DynamicCast_AsFort_Account_Buff_Item                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Has_Founder_Badge_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Has_VIP_Badge_Result                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContextWithSource_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Has_VIP_Badge_Result2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetCombinedDescription_OutDescription                   ()
// bool                               CallFunc_GetCombinedDescription_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetCombinedDescription_OutDescription2                  ()
// bool                               CallFunc_GetCombinedDescription_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Has_Founder_Badge_Result2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_UtcNow_ReturnValue                                      (NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimespan                   CallFunc_Subtract_DateTimeDateTime_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDays_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAccountBonuses_C::Update_Badges(class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue3, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, class UFortAccountBuffItem* K2Node_DynamicCast_AsFort_Account_Buff_Item, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Has_Founder_Badge_Result, bool CallFunc_Has_VIP_Badge_Result, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, bool CallFunc_Has_VIP_Badge_Result2, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription2, bool CallFunc_GetCombinedDescription_ReturnValue2, bool CallFunc_Has_Founder_Badge_Result2, enum class ESlateVisibility K2Node_Select_Default, const struct FDateTime& CallFunc_UtcNow_ReturnValue, enum class ESlateVisibility Temp_byte_Variable3, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, int32 CallFunc_GetDays_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class ESlateVisibility Temp_byte_Variable4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("AccountBonuses_C", "Update Badges");

	Params::UAccountBonuses_C_Update_Badges_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetAccountItemWithDefinition_ReturnValue = CallFunc_GetAccountItemWithDefinition_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Buff_Item = K2Node_DynamicCast_AsFort_Account_Buff_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Has_Founder_Badge_Result = CallFunc_Has_Founder_Badge_Result;
	Parms.CallFunc_Has_VIP_Badge_Result = CallFunc_Has_VIP_Badge_Result;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_SpawnTooltipContextWithSource_ReturnValue = CallFunc_SpawnTooltipContextWithSource_ReturnValue;
	Parms.CallFunc_Has_VIP_Badge_Result2 = CallFunc_Has_VIP_Badge_Result2;
	Parms.CallFunc_GetCombinedDescription_OutDescription = CallFunc_GetCombinedDescription_OutDescription;
	Parms.CallFunc_GetCombinedDescription_ReturnValue = CallFunc_GetCombinedDescription_ReturnValue;
	Parms.CallFunc_GetCombinedDescription_OutDescription2 = CallFunc_GetCombinedDescription_OutDescription2;
	Parms.CallFunc_GetCombinedDescription_ReturnValue2 = CallFunc_GetCombinedDescription_ReturnValue2;
	Parms.CallFunc_Has_Founder_Badge_Result2 = CallFunc_Has_Founder_Badge_Result2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_UtcNow_ReturnValue = CallFunc_UtcNow_ReturnValue;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_Subtract_DateTimeDateTime_ReturnValue = CallFunc_Subtract_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_GetDays_ReturnValue = CallFunc_GetDays_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountBonuses.AccountBonuses_C.Has VIP Badge
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_GetAccountItemWithDefinition_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountBuffItem*        K2Node_DynamicCast_AsFort_Account_Buff_Item                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAccountBonuses_C::Has_VIP_Badge(bool* Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAccountBuffItem* K2Node_DynamicCast_AsFort_Account_Buff_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsActive_ReturnValue)
{
	static auto Func = Class->GetFunction("AccountBonuses_C", "Has VIP Badge");

	Params::UAccountBonuses_C_Has_VIP_Badge_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAccountItemWithDefinition_ReturnValue = CallFunc_GetAccountItemWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Buff_Item = K2Node_DynamicCast_AsFort_Account_Buff_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AccountBonuses.AccountBonuses_C.Has Founder Badge
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_GetAccountItemWithDefinition_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountBuffItem*        K2Node_DynamicCast_AsFort_Account_Buff_Item                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAccountBonuses_C::Has_Founder_Badge(bool* Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAccountBuffItem* K2Node_DynamicCast_AsFort_Account_Buff_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsActive_ReturnValue)
{
	static auto Func = Class->GetFunction("AccountBonuses_C", "Has Founder Badge");

	Params::UAccountBonuses_C_Has_Founder_Badge_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAccountItemWithDefinition_ReturnValue = CallFunc_GetAccountItemWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Buff_Item = K2Node_DynamicCast_AsFort_Account_Buff_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AccountBonuses.AccountBonuses_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAccountBonuses_C::Construct()
{
	static auto Func = Class->GetFunction("AccountBonuses_C", "Construct");

	Params::UAccountBonuses_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountBonuses.AccountBonuses_C.Founder Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAccountBonuses_C::Founder_Changed()
{
	static auto Func = Class->GetFunction("AccountBonuses_C", "Founder Changed");

	Params::UAccountBonuses_C_Founder_Changed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountBonuses.AccountBonuses_C.ExecuteUbergraph_AccountBonuses
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAccountBonuses_C::ExecuteUbergraph_AccountBonuses(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("AccountBonuses_C", "ExecuteUbergraph_AccountBonuses");

	Params::UAccountBonuses_C_ExecuteUbergraph_AccountBonuses_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
