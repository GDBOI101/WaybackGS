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
// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnAppearAnimationFinished
struct UScoreBarsScoreMessageItem_C_OnAppearAnimationFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.ClearScoreValueWidget
struct UScoreBarsScoreMessageItem_C_ClearScoreValueWidget_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.GetScoreValueWidget
struct UScoreBarsScoreMessageItem_C_GetScoreValueWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.Setup
struct UScoreBarsScoreMessageItem_C_Setup_Params
{
public:
	int32                                        Base_Delta;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name_Text;                                         // 0x8(0x18)(Parm)
	class UScoreMessageNumber_C*                 In_Score_Widget;                                   // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.UpdateValues
struct UScoreBarsScoreMessageItem_C_UpdateValues_Params
{
public:
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnStackSizeChanged
struct UScoreBarsScoreMessageItem_C_OnStackSizeChanged_Params
{
public:
	int32                                        OldStackSize;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnBeginRemove
struct UScoreBarsScoreMessageItem_C_OnBeginRemove_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.ExecuteUbergraph_ScoreBarsScoreMessageItem
struct UScoreBarsScoreMessageItem_C_ExecuteUbergraph_ScoreBarsScoreMessageItem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_OldStackSize;                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
