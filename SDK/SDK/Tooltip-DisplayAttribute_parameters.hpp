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

// 0x88 (0x88 - 0x0)
// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.GetToolTipWidget
struct UTooltip_DisplayAttribute_C_GetToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDisplayAttribute                 CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute; // 0x8(0x70)()
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.UpdateValueText
struct UTooltip_DisplayAttribute_C_UpdateValueText_Params
{
public:
	struct FFortDisplayAttribute                 CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute; // 0x0(0x70)()
};

// 0x20 (0x20 - 0x0)
// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.Update Base & Buff Colors
struct UTooltip_DisplayAttribute_C_Update_Base___Buff_Colors_Params
{
public:
	struct FLinearColor                          CallFunc_Get_Base___Buff_Colors_Base;              // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Base___Buff_Colors_Buff;              // 0x10(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x138 (0x138 - 0x0)
// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.Update
struct UTooltip_DisplayAttribute_C_Update_Params
{
public:
	enum class EFortComparisonType               Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable4;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable5;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    Temp_byte_Variable6;                               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortComparisonType               Temp_byte_Variable7;                               // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        Temp_float_Variable;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable2;                              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable3;                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable4;                              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBuffState                    Temp_byte_Variable8;                               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortStatValueDisplayType         Temp_byte_Variable9;                               // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1862[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDisplayAttribute                 CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute; // 0x20(0x70)()
	float                                        Temp_float_Variable5;                              // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable6;                              // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1863[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select2_Default;                            // 0x9C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable7;                              // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable8;                              // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortComparisonType               Temp_byte_Variable10;                              // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1864[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select3_Default;                            // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0xBC(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select4_Default;                            // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor2;                    // 0xD0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select5_Default;                            // 0xE0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0xF0(0x28)()
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1865[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select6_Default;                            // 0x11C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1866[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select7_Default;                            // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.Construct
struct UTooltip_DisplayAttribute_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1026_OnButtonHoverEvent__DelegateSignature
struct UTooltip_DisplayAttribute_C_BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1026_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1037_OnButtonHoverEvent__DelegateSignature
struct UTooltip_DisplayAttribute_C_BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1037_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.DisplayAttributeChanged
struct UTooltip_DisplayAttribute_C_DisplayAttributeChanged_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.ValueChanged
struct UTooltip_DisplayAttribute_C_ValueChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.PreviewStarted
struct UTooltip_DisplayAttribute_C_PreviewStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.PreviewEnded
struct UTooltip_DisplayAttribute_C_PreviewEnded_Params
{
public:
};

// 0x88 (0x88 - 0x0)
// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.ExecuteUbergraph_Tooltip-DisplayAttribute
struct UTooltip_DisplayAttribute_C_ExecuteUbergraph_Tooltip_DisplayAttribute_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1867[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDisplayAttribute                 CallFunc_SetDisplayAttribute_DeltaAttribute;       // 0x8(0x70)()
	bool                                         CallFunc_SetDisplayAttribute_ReturnValue;          // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1868[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Delta;                                // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetToolTipWidget_ReturnValue;             // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
