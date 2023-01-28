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


// Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.Get Tooltip
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class FText                        CallFunc_GetSingleLineDescription_ReturnValue                    ()
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* USchematicTooltipCraftingIngredient_C::Get_Tooltip(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_GetSingleLineDescription_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static auto Func = Class->GetFunction("SchematicTooltipCraftingIngredient_C", "Get Tooltip");

	Params::USchematicTooltipCraftingIngredient_C_Get_Tooltip_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetSingleLineDescription_ReturnValue = CallFunc_GetSingleLineDescription_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TotalCount                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBrushSize          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// enum class EFortBrushSize          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue     ()

void USchematicTooltipCraftingIngredient_C::Refresh(int32 TotalCount, bool Temp_bool_Variable, enum class EFortBrushSize Temp_byte_Variable, enum class EFortBrushSize Temp_byte_Variable2, bool Temp_bool_Variable2, class FText CallFunc_Conv_IntToText_ReturnValue, enum class EFortBrushSize K2Node_Select_Default, class UWidget* K2Node_Select2_Default, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue)
{
	static auto Func = Class->GetFunction("SchematicTooltipCraftingIngredient_C", "Refresh");

	Params::USchematicTooltipCraftingIngredient_C_Refresh_Params Parms;
	Parms.TotalCount = TotalCount;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USchematicTooltipCraftingIngredient_C::Construct()
{
	static auto Func = Class->GetFunction("SchematicTooltipCraftingIngredient_C", "Construct");

	Params::USchematicTooltipCraftingIngredient_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.ExecuteUbergraph_SchematicTooltipCraftingIngredient
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USchematicTooltipCraftingIngredient_C::ExecuteUbergraph_SchematicTooltipCraftingIngredient(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("SchematicTooltipCraftingIngredient_C", "ExecuteUbergraph_SchematicTooltipCraftingIngredient");

	Params::USchematicTooltipCraftingIngredient_C_ExecuteUbergraph_SchematicTooltipCraftingIngredient_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
