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

// 0x1 (0x1 - 0x0)
// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.HandleBack
struct UItemManagementCompareModeBox_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.UpdateFocusedItems
struct UItemManagementCompareModeBox_C_UpdateFocusedItems_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B8D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.HandleDifferentItemToDetailSetBP
struct UItemManagementCompareModeBox_C_HandleDifferentItemToDetailSetBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.HandleDifferentItemToCompareSetBP
struct UItemManagementCompareModeBox_C_HandleDifferentItemToCompareSetBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.Construct
struct UItemManagementCompareModeBox_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.OnActivated
struct UItemManagementCompareModeBox_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.OnDeactivated
struct UItemManagementCompareModeBox_C_OnDeactivated_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.ExecuteUbergraph_ItemManagementCompareModeBox
struct UItemManagementCompareModeBox_C_ExecuteUbergraph_ItemManagementCompareModeBox_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B8E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x8(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue2;      // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
