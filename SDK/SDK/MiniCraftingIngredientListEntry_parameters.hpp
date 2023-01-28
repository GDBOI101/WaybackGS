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

// 0x68 (0x68 - 0x0)
// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.Get_ItemCountWidget_ToolTipWidget
struct UMiniCraftingIngredientListEntry_C_Get_ItemCountWidget_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinition_ReturnValue;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_357F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetShortDescription_ReturnValue;          // 0x20(0x18)()
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x38(0x18)()
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3580[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF (0xF - 0x0)
// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.RefreshBeingPreviewed
struct UMiniCraftingIngredientListEntry_C_RefreshBeingPreviewed_Params
{
public:
	struct FFortItemEntryPreviewData             CallFunc_GetPreviewData_OutPreviewData;            // 0x0(0x8)(NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsBeingPreviewed_ReturnValue;             // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.Refresh
struct UMiniCraftingIngredientListEntry_C_Refresh_Params
{
public:
	class UFortItemDefinition*                   CallFunc_GetItemDefinition_ReturnValue;            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.HandleDifferentItemOrQuantitySetBP
struct UMiniCraftingIngredientListEntry_C_HandleDifferentItemOrQuantitySetBP_Params
{
public:
	bool                                         IsBeingReset;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.PreviewStarted
struct UMiniCraftingIngredientListEntry_C_PreviewStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.PreviewEnded
struct UMiniCraftingIngredientListEntry_C_PreviewEnded_Params
{
public:
};

// 0x5 (0x5 - 0x0)
// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.ExecuteUbergraph_MiniCraftingIngredientListEntry
struct UMiniCraftingIngredientListEntry_C_ExecuteUbergraph_MiniCraftingIngredientListEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsBeingReset;                         // 0x4(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
