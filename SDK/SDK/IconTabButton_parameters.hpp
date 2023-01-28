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

// 0x4 (0x4 - 0x0)
// Function IconTabButton.IconTabButton_C.Update Bang State
struct UIconTabButton_C_Update_Bang_State_Params
{
public:
	bool                                         bBangEnabled;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function IconTabButton.IconTabButton_C.SetTutorialBorderStyle
struct UIconTabButton_C_SetTutorialBorderStyle_Params
{
public:
	class UClass*                                BorderStyle;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton.IconTabButton_C.ShowText
struct UIconTabButton_C_ShowText_Params
{
public:
};

// 0x90 (0x90 - 0x0)
// Function IconTabButton.IconTabButton_C.Set Icon
struct UIconTabButton_C_Set_Icon_Params
{
public:
	struct FSlateBrush                           IconBrush;                                         // 0x0(0x90)(Parm)
};

// 0x38 (0x38 - 0x0)
// Function IconTabButton.IconTabButton_C.Set Text
struct UIconTabButton_C_Set_Text_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(Parm)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24BE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function IconTabButton.IconTabButton_C.PreConstruct
struct UIconTabButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton.IconTabButton_C.OnCurrentTextStyleChanged
struct UIconTabButton_C_OnCurrentTextStyleChanged_Params
{
public:
};

// 0xA8 (0xA8 - 0x0)
// Function IconTabButton.IconTabButton_C.SetTabLabelInfo
struct UIconTabButton_C_SetTabLabelInfo_Params
{
public:
	struct FFortTabButtonLabelInfo               TabLabelInfo;                                      // 0x0(0xA8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton.IconTabButton_C.OnSelected
struct UIconTabButton_C_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton.IconTabButton_C.OnDeselected
struct UIconTabButton_C_OnDeselected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton.IconTabButton_C.Construct
struct UIconTabButton_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton.IconTabButton_C.OnHovered
struct UIconTabButton_C_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton.IconTabButton_C.OnUnhovered
struct UIconTabButton_C_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton.IconTabButton_C.OnEnabled
struct UIconTabButton_C_OnEnabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton.IconTabButton_C.OnDisabled
struct UIconTabButton_C_OnDisabled_Params
{
public:
};

// 0xCA (0xCA - 0x0)
// Function IconTabButton.IconTabButton_C.ExecuteUbergraph_IconTabButton
struct UIconTabButton_C_ExecuteUbergraph_IconTabButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetCurrentTextStyleClass_ReturnValue2;    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24C1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTabButtonLabelInfo               K2Node_Event_TabLabelInfo;                         // 0x20(0xA8)(ConstParm)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSelected_ReturnValue2;                 // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
