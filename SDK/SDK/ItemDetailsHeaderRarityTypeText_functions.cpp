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


// Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemDetailsHeaderRarityTypeText_C::HandlePostDifferentItemToDetailSet()
{
	static auto Func = Class->GetFunction("ItemDetailsHeaderRarityTypeText_C", "HandlePostDifferentItemToDetailSet");

	Params::UItemDetailsHeaderRarityTypeText_C_HandlePostDifferentItemToDetailSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.HandlePostDifferentItemToCompareWithSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemDetailsHeaderRarityTypeText_C::HandlePostDifferentItemToCompareWithSet()
{
	static auto Func = Class->GetFunction("ItemDetailsHeaderRarityTypeText_C", "HandlePostDifferentItemToCompareWithSet");

	Params::UItemDetailsHeaderRarityTypeText_C_HandlePostDifferentItemToCompareWithSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.ExecuteUbergraph_ItemDetailsHeaderRarityTypeText
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_ToText_ReturnValue                                      ()
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// class FText                        CallFunc_Format_ReturnValue                                      ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor2                                    ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor3                                    ()
// class UFortItemDefinition*         CallFunc_GetSchematicCraftingResultBP_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   K2Node_DynamicCast_AsFort_Weapon_Item_Definition                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemDetailsHeaderRarityTypeText_C::ExecuteUbergraph_ItemDetailsHeaderRarityTypeText(int32 EntryPoint, enum class EFortItemType CallFunc_GetType_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class FText CallFunc_ToText_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_Format_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, const struct FSlateColor& K2Node_MakeStruct_SlateColor3, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue, class UFortWeaponItemDefinition* K2Node_DynamicCast_AsFort_Weapon_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemDetailsHeaderRarityTypeText_C", "ExecuteUbergraph_ItemDetailsHeaderRarityTypeText");

	Params::UItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_ToText_ReturnValue = CallFunc_ToText_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor2 = K2Node_MakeStruct_SlateColor2;
	Parms.K2Node_MakeStruct_SlateColor3 = K2Node_MakeStruct_SlateColor3;
	Parms.CallFunc_GetSchematicCraftingResultBP_ReturnValue = CallFunc_GetSchematicCraftingResultBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Weapon_Item_Definition = K2Node_DynamicCast_AsFort_Weapon_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
