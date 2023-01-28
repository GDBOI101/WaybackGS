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

// 0x0 (0x0 - 0x0)
// Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.HandlePostDifferentItemToDetailSet
struct UItemDetailsHeaderRarityTypeText_C_HandlePostDifferentItemToDetailSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.HandlePostDifferentItemToCompareWithSet
struct UItemDetailsHeaderRarityTypeText_C_HandlePostDifferentItemToCompareWithSet_Params
{
public:
};

// 0x192 (0x192 - 0x0)
// Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.ExecuteUbergraph_ItemDetailsHeaderRarityTypeText
struct UItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemType                     CallFunc_GetType_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3310[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_ToText_ReturnValue;                       // 0x8(0x18)()
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x20(0x80)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xA0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xE0(0x10)(ZeroConstructor, ReferenceParm)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0xF0(0x28)()
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x118(0x18)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor2;                     // 0x130(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor3;                     // 0x158(0x28)()
	class UFortItemDefinition*                   CallFunc_GetSchematicCraftingResultBP_ReturnValue; // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWeaponItemDefinition*             K2Node_DynamicCast_AsFort_Weapon_Item_Definition;  // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
