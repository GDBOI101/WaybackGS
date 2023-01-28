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

// 0xA4 (0xA4 - 0x0)
// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.GetRecipeItemQuantityPairs
struct UMiniItemCraftingIngredientsDetailWidget_C_GetRecipeItemQuantityPairs_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortItemQuantityPair>         Pairs;                                             // 0x8(0x10)(Parm, OutParm, ZeroConstructor)
	TArray<struct FFortItemQuantityPair>         Results;                                           // 0x18(0x10)(Edit, ZeroConstructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BA7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSchematicItem*                    K2Node_DynamicCast_AsFort_Schematic_Item;          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BA8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSchematicRequirement>         CallFunc_GetSchematicRequirements_Requirements;    // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BA9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSchematicRequirement                 CallFunc_Array_Get_Item;                           // 0x58(0x10)(NoDestructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BAA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortItemQuantityPair                 CallFunc_MakeItemQuantityPair_ReturnValue;         // 0x70(0x28)()
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BAB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToDetailSet
struct UMiniItemCraftingIngredientsDetailWidget_C_HandlePostDifferentItemToDetailSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToCompareWithSet
struct UMiniItemCraftingIngredientsDetailWidget_C_HandlePostDifferentItemToCompareWithSet_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget
struct UMiniItemCraftingIngredientsDetailWidget_C_ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BAC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortItemQuantityPair>         CallFunc_GetRecipeItemQuantityPairs_Pairs;         // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFortItemQuantityPair>         CallFunc_GetRecipeItemQuantityPairs_Pairs2;        // 0x18(0x10)(ZeroConstructor, ReferenceParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
