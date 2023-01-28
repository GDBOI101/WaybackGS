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

// 0x178 (0x178 - 0x0)
// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.InitSmallAlteration
struct ULegacyAlteration_Widget_C_InitSmallAlteration_Params
{
public:
	class UFortAlterationItemDefinition*         CallFunc_GetAlterationDefintion_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue; // 0x8(0x90)()
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x98(0x18)()
	struct FSlateBrush                           CallFunc_ResizeBrush_NewParam;                     // 0xB0(0x90)()
	class FText                                  CallFunc_GetSingleLineDescription_ReturnValue;     // 0x140(0x18)()
	int32                                        CallFunc_GetRequiredLevel_ReturnValue;             // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3039[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x160(0x18)()
};

// 0x198 (0x198 - 0x0)
// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.InitFullAlteration
struct ULegacyAlteration_Widget_C_InitFullAlteration_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_303A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)()
	bool                                         CallFunc_IsAlterationHighlighted_ReturnValue;      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_303B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetHighlightColor_ReturnValue;            // 0x34(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_303C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor2;                     // 0x48(0x28)()
	class UFortAlterationItemDefinition*         CallFunc_GetAlterationDefintion_ReturnValue;       // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_Select_Default;                             // 0x78(0x28)()
	TArray<class FText>                          CallFunc_GetDescription_ReturnValue;               // 0xA0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0xB0(0x18)()
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_Basic_Multi_Line_Tooltip_Output;   // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAlterationItemDefinition*         CallFunc_GetAlterationDefintion_ReturnValue2;      // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_303D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue; // 0xE8(0x90)()
	int32                                        CallFunc_GetRequiredLevel_ReturnValue;             // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_303E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x180(0x18)()
};

// 0x6 (0x6 - 0x0)
// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.ShouldFadeAlteration
struct ULegacyAlteration_Widget_C_ShouldFadeAlteration_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAlterationHighlighted_ReturnValue;      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAlterationUnlocked_ReturnValue;         // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue2;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.GetHighlightColor
struct ULegacyAlteration_Widget_C_GetHighlightColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_303F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x14(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAlterationHighlighted_ReturnValue;      // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3040[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_Get_Buff_Color_Color;                     // 0x28(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x38(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.Construct
struct ULegacyAlteration_Widget_C_Construct_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.ExecuteUbergraph_LegacyAlteration_Widget
struct ULegacyAlteration_Widget_C_ExecuteUbergraph_LegacyAlteration_Widget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldFadeAlteration_ReturnValue;         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3041[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
