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

// 0x15 (0x15 - 0x0)
// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.UpdateOverlays
struct USquadSlotItemPickerTileButton_C_UpdateOverlays_Params
{
public:
	TArray<enum class EFortSquadSlottingRestrictionReason> CallFunc_GetSlottingRestrictionReasons_ReturnValue; // 0x0(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.SetData
struct USquadSlotItemPickerTileButton_C_SetData_Params
{
public:
	class UObject*                               InData;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                       OwningList;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.HandleItemSlottedToDifferentSquad
struct USquadSlotItemPickerTileButton_C_HandleItemSlottedToDifferentSquad_Params
{
public:
	struct FHomebaseSquadSlotId                  SquadSlotId;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.HandleSlottingRestrictionReasonsChanged
struct USquadSlotItemPickerTileButton_C_HandleSlottingRestrictionReasonsChanged_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.ExecuteUbergraph_SquadSlotItemPickerTileButton
struct USquadSlotItemPickerTileButton_C_ExecuteUbergraph_SquadSlotItemPickerTileButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_InData;                               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                       K2Node_Event_OwningList;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHomebaseSquadSlotId                  K2Node_Event_SquadSlotId;                          // 0x20(0x10)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
