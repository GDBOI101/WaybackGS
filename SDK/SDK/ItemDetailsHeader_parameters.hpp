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
// Function ItemDetailsHeader.ItemDetailsHeader_C.SetStyles
struct UItemDetailsHeader_C_SetStyles_Params
{
public:
};

// 0x110 (0x110 - 0x0)
// Function ItemDetailsHeader.ItemDetailsHeader_C.UpdateItemsForWidgets
struct UItemDetailsHeader_C_UpdateItemsForWidgets_Params
{
public:
	int32                                        CallFunc_GetNumInStack_ReturnValue;                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemType                     CallFunc_GetType_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3114[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   CallFunc_GetSchematicCraftingResultBP_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWeaponItemDefinition*             K2Node_DynamicCast_AsFort_Weapon_Item_Definition;  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3115[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array;                            // 0x20(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array2;                           // 0x30(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	enum class EFortItemType                     CallFunc_GetSchematicResultType_ReturnValue;       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3116[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   CallFunc_GetSchematicCraftingResultBP_ReturnValue2; // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemType                     CallFunc_GetType_ReturnValue2;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3117[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x58(0x80)()
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array3;                           // 0xD8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	enum class EFortItemTier                     CallFunc_GetTier_ReturnValue;                      // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3118[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Convert_Tier_To_Integer_Numeric_Tier;     // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemType                     K2Node_Select_Default;                             // 0xF3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0xF5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xF6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue2;              // 0xF7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select2_Default;                            // 0xFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable4;                               // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable3;                               // 0xFD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable5;                               // 0xFE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select3_Default;                            // 0xFF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable6;                               // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable4;                               // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select4_Default;                            // 0x102(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemType                     CallFunc_GetType_ReturnValue3;                     // 0x103(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue3;              // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue2;                 // 0x105(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemTier                     CallFunc_GetTier_ReturnValue2;                     // 0x106(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x107(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Convert_Tier_To_Integer_Numeric_Tier2;    // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemDetailsHeader.ItemDetailsHeader_C.Construct
struct UItemDetailsHeader_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemDetailsHeader.ItemDetailsHeader_C.HandleDifferentItemToDetailSet
struct UItemDetailsHeader_C_HandleDifferentItemToDetailSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemDetailsHeader.ItemDetailsHeader_C.HandleDifferentItemToCompareSet
struct UItemDetailsHeader_C_HandleDifferentItemToCompareSet_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function ItemDetailsHeader.ItemDetailsHeader_C.ExecuteUbergraph_ItemDetailsHeader
struct UItemDetailsHeader_C_ExecuteUbergraph_ItemDetailsHeader_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3119[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue2;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
