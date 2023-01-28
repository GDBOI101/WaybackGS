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
// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ShowText
struct UAthenaLeaderboardTabButton_C_ShowText_Params
{
public:
};

// 0x90 (0x90 - 0x0)
// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Icon
struct UAthenaLeaderboardTabButton_C_Set_Icon_Params
{
public:
	struct FSlateBrush                           IconBrush;                                         // 0x0(0x90)(Parm)
};

// 0x38 (0x38 - 0x0)
// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Text
struct UAthenaLeaderboardTabButton_C_Set_Text_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(Parm)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B74[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B75[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.PreConstruct
struct UAthenaLeaderboardTabButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnCurrentTextStyleChanged
struct UAthenaLeaderboardTabButton_C_OnCurrentTextStyleChanged_Params
{
public:
};

// 0xA8 (0xA8 - 0x0)
// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.SetTabLabelInfo
struct UAthenaLeaderboardTabButton_C_SetTabLabelInfo_Params
{
public:
	struct FFortTabButtonLabelInfo               TabLabelInfo;                                      // 0x0(0xA8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnSelected
struct UAthenaLeaderboardTabButton_C_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnDeselected
struct UAthenaLeaderboardTabButton_C_OnDeselected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Construct
struct UAthenaLeaderboardTabButton_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnHovered
struct UAthenaLeaderboardTabButton_C_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnUnhovered
struct UAthenaLeaderboardTabButton_C_OnUnhovered_Params
{
public:
};

// 0xCA (0xCA - 0x0)
// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ExecuteUbergraph_AthenaLeaderboardTabButton
struct UAthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B76[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetCurrentTextStyleClass_ReturnValue2;    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B77[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTabButtonLabelInfo               K2Node_Event_TabLabelInfo;                         // 0x20(0xA8)(ConstParm)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSelected_ReturnValue2;                 // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
