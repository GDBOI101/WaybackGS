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
// Function LegacyButtonIconText.LegacyButtonIconText_C.Outro
struct ULegacyButtonIconText_C_Outro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LegacyButtonIconText.LegacyButtonIconText_C.Intro
struct ULegacyButtonIconText_C_Intro_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function LegacyButtonIconText.LegacyButtonIconText_C.Toggle
struct ULegacyButtonIconText_C_Toggle_Params
{
public:
	bool                                         Show_Button;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      NextAnimation;                                     // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      PrevAnimation;                                     // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33B0[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      K2Node_Select2_Default;                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function LegacyButtonIconText.LegacyButtonIconText_C.Set Alignment
struct ULegacyButtonIconText_C_Set_Alignment_Params
{
public:
	enum class ETextJustify                      Align;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextJustify                      Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHorizontalAlignment              Temp_byte_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHorizontalAlignment              Temp_byte_Variable3;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHorizontalAlignment              Temp_byte_Variable4;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHorizontalAlignment              K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33B1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UButtonSlot*                           K2Node_DynamicCast_AsButton_Slot;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USizeBoxSlot*                          K2Node_DynamicCast_AsSize_Box_Slot;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function LegacyButtonIconText.LegacyButtonIconText_C.Update Size Box
struct ULegacyButtonIconText_C_Update_Size_Box_Params
{
public:
	class UFortButtonStyle*                      CallFunc_GetStyle_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue; // 0x8(0x90)(ConstParm)
	float                                        CallFunc_BreakVector2D_X;                          // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3D0 (0x3D0 - 0x0)
// Function LegacyButtonIconText.LegacyButtonIconText_C.Get Primary Color
struct ULegacyButtonIconText_C_Get_Primary_Color_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm)
	struct FFortStateStyle                       CallFunc_GetCurrentStateStyle_ReturnValue;         // 0x28(0x380)(ConstParm)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x3A8(0x28)()
};

// 0x390 (0x390 - 0x0)
// Function LegacyButtonIconText.LegacyButtonIconText_C.Get Secondary Color
struct ULegacyButtonIconText_C_Get_Secondary_Color_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortStateStyle                       CallFunc_GetCurrentStateStyle_ReturnValue;         // 0x10(0x380)(ConstParm)
};

// 0xAC (0xAC - 0x0)
// Function LegacyButtonIconText.LegacyButtonIconText_C.Update Padding
struct ULegacyButtonIconText_C_Update_Padding_Params
{
public:
	struct FMargin                               Margin;                                            // 0x0(0x10)(Edit, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    K2Node_DynamicCast_AsHorizontal_Box_Slot;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x24(0x10)(NoDestructor)
	uint8                                        Pad_33B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USizeBoxSlot*                          K2Node_DynamicCast_AsSize_Box_Slot;                // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin2;                         // 0x44(0x10)(NoDestructor)
	uint8                                        Pad_33B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    K2Node_DynamicCast_AsHorizontal_Box_Slot2;         // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess3;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin3;                         // 0x64(0x10)(NoDestructor)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortButtonStyle*                      CallFunc_GetStyle_ReturnValue;                     // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin4;                         // 0x8C(0x10)(NoDestructor)
	struct FMargin                               CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue; // 0x9C(0x10)(ConstParm, NoDestructor)
};

// 0x96 (0x96 - 0x0)
// Function LegacyButtonIconText.LegacyButtonIconText_C.Set Icon
struct ULegacyButtonIconText_C_Set_Icon_Params
{
public:
	struct FSlateBrush                           InBrush;                                           // 0x0(0x90)(Parm)
	bool                                         RefreshPadding;                                    // 0x90(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x89 (0x89 - 0x0)
// Function LegacyButtonIconText.LegacyButtonIconText_C.Set Text
struct ULegacyButtonIconText_C_Set_Text_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(Parm)
	bool                                         RefreshPadding;                                    // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33BA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        CallFunc_GetCurrentFont_ReturnValue;               // 0x20(0x68)(ConstParm, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function LegacyButtonIconText.LegacyButtonIconText_C.PreConstruct
struct ULegacyButtonIconText_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB0 (0xB0 - 0x0)
// Function LegacyButtonIconText.LegacyButtonIconText_C.OnMouseEnter
struct ULegacyButtonIconText_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function LegacyButtonIconText.LegacyButtonIconText_C.OnMouseLeave
struct ULegacyButtonIconText_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x130 (0x130 - 0x0)
// Function LegacyButtonIconText.LegacyButtonIconText_C.ExecuteUbergraph_LegacyButtonIconText
struct ULegacyButtonIconText_C_ExecuteUbergraph_LegacyButtonIconText_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x8(0x34)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_33BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent2;                          // 0x40(0x78)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xB8(0x78)(ConstParm)
};

// 0x1 (0x1 - 0x0)
// Function LegacyButtonIconText.LegacyButtonIconText_C.On Mouse Hovered Changed__DelegateSignature
struct ULegacyButtonIconText_C_On_Mouse_Hovered_Changed__DelegateSignature_Params
{
public:
	bool                                         Is_Hovered;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
