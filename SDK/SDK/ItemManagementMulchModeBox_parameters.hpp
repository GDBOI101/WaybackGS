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

// 0x10 (0x10 - 0x0)
// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleLeaveInventory
struct UItemManagementMulchModeBox_C_HandleLeaveInventory_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3620[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleCursorModeChanging
struct UItemManagementMulchModeBox_C_HandleCursorModeChanging_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleBack_PassThrough;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1E (0x1E - 0x0)
// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleMulchListChanged
struct UItemManagementMulchModeBox_C_HandleMulchListChanged_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3621[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortItem*>                     CallFunc_GetItemsToMulch_ReturnValue;              // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleInfo
struct UItemManagementMulchModeBox_C_HandleInfo_Params
{
public:
	bool                                         Pass_Through;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3622[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x8(0x18)()
	TArray<class UFortItemDefinition*>           CallFunc_GetItemDefinitions_ReturnValue;           // 0x20(0x10)(ZeroConstructor, ReferenceParm)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleBack
struct UItemManagementMulchModeBox_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleDifferentItemToDetailSetBP
struct UItemManagementMulchModeBox_C_HandleDifferentItemToDetailSetBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.Construct
struct UItemManagementMulchModeBox_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.OnActivated
struct UItemManagementMulchModeBox_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.Destruct
struct UItemManagementMulchModeBox_C_Destruct_Params
{
public:
};

// 0xB9 (0xB9 - 0x0)
// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.ExecuteUbergraph_ItemManagementMulchModeBox
struct UItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3623[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x8(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UItemWindow_C*                         CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemManagementMulchDetailsPanel_C*    K2Node_DynamicCast_AsItem_Management_Mulch_Details_Panel; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3624[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x40(0x10)(ZeroConstructor, NoDestructor)
	class UItemManagementMulchDetailsPanel_C*    K2Node_DynamicCast_AsItem_Management_Mulch_Details_Panel2; // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3625[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x60(0x10)(ZeroConstructor, NoDestructor)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle2;             // 0x78(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x88(0x10)(ZeroConstructor, NoDestructor)
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue2;                  // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0xA8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
