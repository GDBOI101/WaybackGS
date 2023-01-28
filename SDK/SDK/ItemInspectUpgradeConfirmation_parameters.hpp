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

// 0x108 (0x108 - 0x0)
// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.RefreshLevelInfo
struct UItemInspectUpgradeConfirmation_C_RefreshLevelInfo_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BAD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x8(0x18)()
	enum class EFortItemType                     CallFunc_GetType_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BAE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue2;             // 0x28(0x18)()
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BAF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x48(0x18)()
	int32                                        CallFunc_GetLevel_ReturnValue;                     // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BB0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x68(0x40)(HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BB1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0xC0(0x18)()
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xD8(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue2;              // 0xF0(0x18)()
};

// 0x3A (0x3A - 0x0)
// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.RefreshEnabledState
struct UItemInspectUpgradeConfirmation_C_RefreshEnabledState_Params
{
public:
	bool                                         CallFunc_IsUpgradeAvailable_UpgradeAvailable;      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanAffordUpgrade_CanAfford;               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BB2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemUpgradeRestrictionReason> CallFunc_CanBeUpgraded_OutRestrictionReasons;      // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_CanBeUpgraded_ReturnValue;                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemUpgradeRestrictionReason     CallFunc_Array_Get_Item;                           // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BB3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetUpgradeRestrictionReasonText_ReturnValue; // 0x20(0x18)()
	bool                                         CallFunc_IsUpgradeAvailable_UpgradeAvailable2;     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D (0x1D - 0x0)
// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.CanAffordUpgrade
struct UItemInspectUpgradeConfirmation_C_CanAffordUpgrade_Params
{
public:
	bool                                         CanAfford;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPersistentResourceItemDefinition* CallFunc_GetUpgradeResourceItemDefinition_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumInInventory_ReturnValue;            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.IsUpgradeAvailable
struct UItemInspectUpgradeConfirmation_C_IsUpgradeAvailable_Params
{
public:
	bool                                         UpgradeAvailable;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BB5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemUpgradeRestrictionReason> CallFunc_CanBeUpgraded_OutRestrictionReasons;      // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_CanBeUpgraded_ReturnValue;                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.RefreshOnUpgrade
struct UItemInspectUpgradeConfirmation_C_RefreshOnUpgrade_Params
{
public:
	int32                                        CallFunc_GetMaxLevel_ReturnValue;                  // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetLevel_ReturnValue;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BB6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetUpgradeCost_ReturnValue;               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.OnShow
struct UItemInspectUpgradeConfirmation_C_OnShow_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.SetItemToRepresent
struct UItemInspectUpgradeConfirmation_C_SetItemToRepresent_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.Refresh
struct UItemInspectUpgradeConfirmation_C_Refresh_Params
{
public:
	class UFortPersistentResourceItemDefinition* CallFunc_GetUpgradeResourceItemDefinition_ReturnValue; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetUpgradeCost_ReturnValue;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UItemInspectUpgradeConfirmation_C_BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.BndEvt__UpgradeCancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UItemInspectUpgradeConfirmation_C_BndEvt__UpgradeCancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.ExecuteUbergraph_ItemInspectUpgradeConfirmation
struct UItemInspectUpgradeConfirmation_C_ExecuteUbergraph_ItemInspectUpgradeConfirmation_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BB7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button2;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.OnUpgradeCancel__DelegateSignature
struct UItemInspectUpgradeConfirmation_C_OnUpgradeCancel__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.OnUpgradeConfirm__DelegateSignature
struct UItemInspectUpgradeConfirmation_C_OnUpgradeConfirm__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
