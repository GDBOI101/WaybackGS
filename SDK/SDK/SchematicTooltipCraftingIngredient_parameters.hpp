#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.Get Tooltip
struct USchematicTooltipCraftingIngredient_C_Get_Tooltip_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x10(0x18)()
	class FText                                  CallFunc_GetSingleLineDescription_ReturnValue;     // 0x28(0x18)()
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.Refresh
struct USchematicTooltipCraftingIngredient_C_Refresh_Params
{
public:
	int32                                        TotalCount;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBrushSize                    Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBrushSize                    Temp_byte_Variable2;                               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable2;                               // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)()
	enum class EFortBrushSize                    K2Node_Select_Default;                             // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B83[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select2_Default;                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue; // 0x30(0x90)()
};

// 0x0 (0x0 - 0x0)
// Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.Construct
struct USchematicTooltipCraftingIngredient_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.ExecuteUbergraph_SchematicTooltipCraftingIngredient
struct USchematicTooltipCraftingIngredient_C_ExecuteUbergraph_SchematicTooltipCraftingIngredient_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
