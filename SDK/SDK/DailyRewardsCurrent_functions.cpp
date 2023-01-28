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


// Function DailyRewardsCurrent.DailyRewardsCurrent_C.Set Item Flare
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable2                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select4_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()

void UDailyRewardsCurrent_C::Set_Item_Flare(float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable2, float Temp_float_Variable3, bool Temp_bool_Variable2, float Temp_float_Variable4, float Temp_float_Variable5, float Temp_float_Variable6, bool Temp_bool_Variable3, const struct FVector2D& Temp_struct_Variable, float K2Node_Select_Default, float K2Node_Select2_Default, float CallFunc_RandomFloatInRange_ReturnValue, float K2Node_Select3_Default, const struct FVector2D& Temp_struct_Variable2, bool Temp_bool_Variable4, const struct FVector2D& K2Node_Select4_Default, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue)
{
	static auto Func = Class->GetFunction("DailyRewardsCurrent_C", "Set Item Flare");

	Params::UDailyRewardsCurrent_C_Set_Item_Flare_Params Parms;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_float_Variable4 = Temp_float_Variable4;
	Parms.Temp_float_Variable5 = Temp_float_Variable5;
	Parms.Temp_float_Variable6 = Temp_float_Variable6;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyRewardsCurrent.DailyRewardsCurrent_C.Set Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item_To_Represent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Quantity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyRewardsCurrent_C::Set_Item(class UFortItem* Item_To_Represent, int32 Quantity, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortItem* CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue)
{
	static auto Func = Class->GetFunction("DailyRewardsCurrent_C", "Set Item");

	Params::UDailyRewardsCurrent_C_Set_Item_Params Parms;
	Parms.Item_To_Represent = Item_To_Represent;
	Parms.Quantity = Quantity;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue = CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyRewardsCurrent.DailyRewardsCurrent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDailyRewardsCurrent_C::Construct()
{
	static auto Func = Class->GetFunction("DailyRewardsCurrent_C", "Construct");

	Params::UDailyRewardsCurrent_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyRewardsCurrent.DailyRewardsCurrent_C.ExecuteUbergraph_DailyRewardsCurrent
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable2                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select2_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyRewardsCurrent_C::ExecuteUbergraph_DailyRewardsCurrent(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable2, enum class ESlateVisibility K2Node_Select_Default, const struct FVector2D& K2Node_Select2_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("DailyRewardsCurrent_C", "ExecuteUbergraph_DailyRewardsCurrent");

	Params::UDailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
