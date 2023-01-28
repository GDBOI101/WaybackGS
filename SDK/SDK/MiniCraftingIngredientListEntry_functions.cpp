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


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.Get_ItemCountWidget_ToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinition_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetShortDescription_ReturnValue                         ()
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UMiniCraftingIngredientListEntry_C::Get_ItemCountWidget_ToolTipWidget(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static auto Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "Get_ItemCountWidget_ToolTipWidget");

	Params::UMiniCraftingIngredientListEntry_C_Get_ItemCountWidget_ToolTipWidget_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetItemDefinition_ReturnValue = CallFunc_GetItemDefinition_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetShortDescription_ReturnValue = CallFunc_GetShortDescription_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.RefreshBeingPreviewed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortItemEntryPreviewData   CallFunc_GetPreviewData_OutPreviewData                           (NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBeingPreviewed_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniCraftingIngredientListEntry_C::RefreshBeingPreviewed(const struct FFortItemEntryPreviewData& CallFunc_GetPreviewData_OutPreviewData, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_IsBeingPreviewed_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2)
{
	static auto Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "RefreshBeingPreviewed");

	Params::UMiniCraftingIngredientListEntry_C_RefreshBeingPreviewed_Params Parms;
	Parms.CallFunc_GetPreviewData_OutPreviewData = CallFunc_GetPreviewData_OutPreviewData;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_IsBeingPreviewed_ReturnValue = CallFunc_IsBeingPreviewed_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*         CallFunc_GetItemDefinition_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniCraftingIngredientListEntry_C::Refresh(class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue)
{
	static auto Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "Refresh");

	Params::UMiniCraftingIngredientListEntry_C_Refresh_Params Parms;
	Parms.CallFunc_GetItemDefinition_ReturnValue = CallFunc_GetItemDefinition_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsBeingReset                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniCraftingIngredientListEntry_C::HandleDifferentItemOrQuantitySetBP(bool IsBeingReset)
{
	static auto Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "HandleDifferentItemOrQuantitySetBP");

	Params::UMiniCraftingIngredientListEntry_C_HandleDifferentItemOrQuantitySetBP_Params Parms;
	Parms.IsBeingReset = IsBeingReset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.PreviewStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMiniCraftingIngredientListEntry_C::PreviewStarted()
{
	static auto Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "PreviewStarted");

	Params::UMiniCraftingIngredientListEntry_C_PreviewStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.PreviewEnded
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMiniCraftingIngredientListEntry_C::PreviewEnded()
{
	static auto Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "PreviewEnded");

	Params::UMiniCraftingIngredientListEntry_C_PreviewEnded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.ExecuteUbergraph_MiniCraftingIngredientListEntry
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsBeingReset                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniCraftingIngredientListEntry_C::ExecuteUbergraph_MiniCraftingIngredientListEntry(int32 EntryPoint, bool K2Node_Event_IsBeingReset)
{
	static auto Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "ExecuteUbergraph_MiniCraftingIngredientListEntry");

	Params::UMiniCraftingIngredientListEntry_C_ExecuteUbergraph_MiniCraftingIngredientListEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsBeingReset = K2Node_Event_IsBeingReset;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
