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

// 0x20 (0x20 - 0x0)
// Function InputReflector.InputReflector_C.OnButtonAdded
struct UInputReflector_C_OnButtonAdded_Params
{
public:
	class UCommonButton*                         AddedButton;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCommonInputActionHandlerData         Data;                                              // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function InputReflector.InputReflector_C.ClearButtons
struct UInputReflector_C_ClearButtons_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function InputReflector.InputReflector_C.Construct
struct UInputReflector_C_Construct_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function InputReflector.InputReflector_C.ExecuteUbergraph_InputReflector
struct UInputReflector_C_ExecuteUbergraph_InputReflector_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3884[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_Event_AddedButton;                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCommonInputActionHandlerData         K2Node_Event_Data;                                 // 0x10(0x18)(ConstParm, NoDestructor)
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3885[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
