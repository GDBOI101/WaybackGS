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
// Function ScrollingTextButton.ScrollingTextButton_C.SetInitialMouseKeyboardStyle
struct UScrollingTextButton_C_SetInitialMouseKeyboardStyle_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ScrollingTextButton.ScrollingTextButton_C.UpdateTextStyle
struct UScrollingTextButton_C_UpdateTextStyle_Params
{
public:
	class UClass*                                CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ScrollingTextButton.ScrollingTextButton_C.SetContentAlignment
struct UScrollingTextButton_C_SetContentAlignment_Params
{
public:
	enum class EHorizontalAlignment              ContentAlignment;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function ScrollingTextButton.ScrollingTextButton_C.UpdateContentAlignment
struct UScrollingTextButton_C_UpdateContentAlignment_Params
{
public:
	class UPanelSlot*                            CallFunc_GetContentSlot_ReturnValue;               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBorderSlot*                           K2Node_DynamicCast_AsBorder_Slot;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function ScrollingTextButton.ScrollingTextButton_C.SetMouseKeyboardStyle
struct UScrollingTextButton_C_SetMouseKeyboardStyle_Params
{
public:
	class UClass*                                ControllerInputStyle;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ScrollingTextButton.ScrollingTextButton_C.UpdateStyle
struct UScrollingTextButton_C_UpdateStyle_Params
{
public:
	bool                                         UsingGamepad;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function ScrollingTextButton.ScrollingTextButton_C.UpdateText
struct UScrollingTextButton_C_UpdateText_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetDisplayText_ReturnValue;               // 0x8(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32C4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x28(0x18)()
};

// 0x11 (0x11 - 0x0)
// Function ScrollingTextButton.ScrollingTextButton_C.SetControllerStyle
struct UScrollingTextButton_C_SetControllerStyle_Params
{
public:
	class UClass*                                ControllerInputStyle;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ScrollingTextButton.ScrollingTextButton_C.UpdateTextAndStyle
struct UScrollingTextButton_C_UpdateTextAndStyle_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function ScrollingTextButton.ScrollingTextButton_C.InitializeButton
struct UScrollingTextButton_C_InitializeButton_Params
{
public:
	class UObject*                               CallFunc_GetBrushResource_ReturnValue;             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function ScrollingTextButton.ScrollingTextButton_C.Set Icon
struct UScrollingTextButton_C_Set_Icon_Params
{
public:
	struct FSlateBrush                           IconBrush;                                         // 0x0(0x90)(Parm)
};

// 0x1D (0x1D - 0x0)
// Function ScrollingTextButton.ScrollingTextButton_C.Set Text
struct UScrollingTextButton_C_Set_Text_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(Parm)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ScrollingTextButton.ScrollingTextButton_C.OnCurrentTextStyleChanged
struct UScrollingTextButton_C_OnCurrentTextStyleChanged_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ScrollingTextButton.ScrollingTextButton_C.PreConstruct
struct UScrollingTextButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function ScrollingTextButton.ScrollingTextButton_C.SetTabLabelInfo
struct UScrollingTextButton_C_SetTabLabelInfo_Params
{
public:
	struct FFortTabButtonLabelInfo               TabLabelInfo;                                      // 0x0(0xA8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function ScrollingTextButton.ScrollingTextButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
struct UScrollingTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ScrollingTextButton.ScrollingTextButton_C.OnTriggeredInputActionChanged
struct UScrollingTextButton_C_OnTriggeredInputActionChanged_Params
{
public:
	struct FDataTableRowHandle                   NewTriggeredAction;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ScrollingTextButton.ScrollingTextButton_C.OnActionProgress
struct UScrollingTextButton_C_OnActionProgress_Params
{
public:
	float                                        HeldPercent;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ScrollingTextButton.ScrollingTextButton_C.OnActionComplete
struct UScrollingTextButton_C_OnActionComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScrollingTextButton.ScrollingTextButton_C.Construct
struct UScrollingTextButton_C_Construct_Params
{
public:
};

// 0xF1 (0xF1 - 0x0)
// Function ScrollingTextButton.ScrollingTextButton_C.ExecuteUbergraph_ScrollingTextButton
struct UScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue2;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue2;              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTabButtonLabelInfo               K2Node_Event_TabLabelInfo;                         // 0x28(0xA8)(ConstParm)
	bool                                         K2Node_ComponentBoundEvent_bUsingGamepad;          // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_Event_NewTriggeredAction;                   // 0xD8(0x10)(ConstParm, NoDestructor)
	float                                        K2Node_Event_HeldPercent;                          // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_SlateBrush_ReturnValue;        // 0xED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0xEE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xEF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
