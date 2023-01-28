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


// Function ItemTransformResultItems.ItemTransformResultItems_C.UpdateMainReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentTier                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// class UFortConversionControlItemDefinition*K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetRewardName_ReturnValue                               ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue2                                     ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

void UItemTransformResultItems_C::UpdateMainReward(class UFortItem* Item, int32 CurrentTier, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, class UFortConversionControlItemDefinition* K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetRewardName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("ItemTransformResultItems_C", "UpdateMainReward");

	Params::UItemTransformResultItems_C_UpdateMainReward_Params Parms;
	Parms.Item = Item;
	Parms.CurrentTier = CurrentTier;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition = K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRewardName_ReturnValue = CallFunc_GetRewardName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformResultItems.ItemTransformResultItems_C.CalculateRecycleXP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>           SacrificeItems                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              TotalHeroXP                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalSchematicXP                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalWorkerXP                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TempXP                                                           (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalTotalWorkerXP                                               (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalTotalSchematicXP                                            (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalTotalHeroXP                                                 (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRecycleValue_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformResultItems_C::CalculateRecycleXP(TArray<class UFortItem*>& SacrificeItems, int32* TotalHeroXP, int32* TotalSchematicXP, int32* TotalWorkerXP, int32 TempXP, int32 LocalTotalWorkerXP, int32 LocalTotalSchematicXP, int32 LocalTotalHeroXP, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UFortItem* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetRecycleValue_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue4)
{
	static auto Func = Class->GetFunction("ItemTransformResultItems_C", "CalculateRecycleXP");

	Params::UItemTransformResultItems_C_CalculateRecycleXP_Params Parms;
	Parms.SacrificeItems = SacrificeItems;
	Parms.TempXP = TempXP;
	Parms.LocalTotalWorkerXP = LocalTotalWorkerXP;
	Parms.LocalTotalSchematicXP = LocalTotalSchematicXP;
	Parms.LocalTotalHeroXP = LocalTotalHeroXP;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetRecycleValue_ReturnValue = CallFunc_GetRecycleValue_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

	if (TotalHeroXP != nullptr)
		*TotalHeroXP = Parms.TotalHeroXP;

	if (TotalSchematicXP != nullptr)
		*TotalSchematicXP = Parms.TotalSchematicXP;

	if (TotalWorkerXP != nullptr)
		*TotalWorkerXP = Parms.TotalWorkerXP;

}


// Function ItemTransformResultItems.ItemTransformResultItems_C.UpdateItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Transform_Key                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           SacrificeItems                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              CurrentTier                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalculateRecycleXP_TotalHeroXP                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalculateRecycleXP_TotalSchematicXP                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalculateRecycleXP_TotalWorkerXP                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPersistentResourceItemDefinition*CallFunc_GetHeroResourceItemDefinition_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPersistentResourceItemDefinition*CallFunc_GetSchematicResourceItemDefinition_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class FText                        CallFunc_GetDisplayName_ReturnValue2                             ()
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPersistentResourceItemDefinition*CallFunc_GetPersonnelResourceItemDefinition_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue3                             ()

void UItemTransformResultItems_C::UpdateItems(class UFortItem* Transform_Key, TArray<class UFortItem*>& SacrificeItems, int32 CurrentTier, int32 CallFunc_CalculateRecycleXP_TotalHeroXP, int32 CallFunc_CalculateRecycleXP_TotalSchematicXP, int32 CallFunc_CalculateRecycleXP_TotalWorkerXP, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, class UFortPersistentResourceItemDefinition* CallFunc_GetHeroResourceItemDefinition_ReturnValue, class UFortPersistentResourceItemDefinition* CallFunc_GetSchematicResourceItemDefinition_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue2, class FText CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue3, class UFortPersistentResourceItemDefinition* CallFunc_GetPersonnelResourceItemDefinition_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue3, class FText CallFunc_GetDisplayName_ReturnValue3)
{
	static auto Func = Class->GetFunction("ItemTransformResultItems_C", "UpdateItems");

	Params::UItemTransformResultItems_C_UpdateItems_Params Parms;
	Parms.Transform_Key = Transform_Key;
	Parms.SacrificeItems = SacrificeItems;
	Parms.CurrentTier = CurrentTier;
	Parms.CallFunc_CalculateRecycleXP_TotalHeroXP = CallFunc_CalculateRecycleXP_TotalHeroXP;
	Parms.CallFunc_CalculateRecycleXP_TotalSchematicXP = CallFunc_CalculateRecycleXP_TotalSchematicXP;
	Parms.CallFunc_CalculateRecycleXP_TotalWorkerXP = CallFunc_CalculateRecycleXP_TotalWorkerXP;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue3 = CallFunc_Conv_IntToFloat_ReturnValue3;
	Parms.CallFunc_Greater_IntInt_ReturnValue3 = CallFunc_Greater_IntInt_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetHeroResourceItemDefinition_ReturnValue = CallFunc_GetHeroResourceItemDefinition_ReturnValue;
	Parms.CallFunc_GetSchematicResourceItemDefinition_ReturnValue = CallFunc_GetSchematicResourceItemDefinition_ReturnValue;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue2 = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue2;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue2 = CallFunc_GetDisplayName_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetPersonnelResourceItemDefinition_ReturnValue = CallFunc_GetPersonnelResourceItemDefinition_ReturnValue;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue3 = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue3;
	Parms.CallFunc_GetDisplayName_ReturnValue3 = CallFunc_GetDisplayName_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformResultItems.ItemTransformResultItems_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformResultItems_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ItemTransformResultItems_C", "PreConstruct");

	Params::UItemTransformResultItems_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformResultItems.ItemTransformResultItems_C.ExecuteUbergraph_ItemTransformResultItems
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformResultItems_C::ExecuteUbergraph_ItemTransformResultItems(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("ItemTransformResultItems_C", "ExecuteUbergraph_ItemTransformResultItems");

	Params::UItemTransformResultItems_C_ExecuteUbergraph_ItemTransformResultItems_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
