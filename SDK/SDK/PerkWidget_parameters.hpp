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

// 0x40 (0x40 - 0x0)
// Function PerkWidget.PerkWidget_C.CreateToolTipWidget
struct UPerkWidget_C_CreateToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          CallFunc_GetTooltipDescription_ReturnValue;        // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_GetTooltipTitle_ReturnValue;              // 0x18(0x18)()
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_Basic_Multi_Line_Tooltip_Output;   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function PerkWidget.PerkWidget_C.InitializeTextInfo
struct UPerkWidget_C_InitializeTextInfo_Params
{
public:
	enum class EFortSupportBonusType             Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2799[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x20(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x38(0x18)()
	bool                                         Temp_bool_Variable;                                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortSupportBonusType             CallFunc_GetSupportBonusType_ReturnValue;          // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_279A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x58(0x18)()
	enum class ESlateVisibility                  K2Node_Select2_Default;                            // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_279B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetTooltipTitle_ReturnValue;              // 0x78(0x18)()
};

// 0x48 (0x48 - 0x0)
// Function PerkWidget.PerkWidget_C.HighlightBadge
struct UPerkWidget_C_HighlightBadge_Params
{
public:
	struct FLinearColor                          CallFunc_GetHighlightColor_Color;                  // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetHighlightColor_Color2;                 // 0x10(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x20(0x28)()
};

// 0x258 (0x258 - 0x0)
// Function PerkWidget.PerkWidget_C.GetPerkStat
struct UPerkWidget_C_GetPerkStat_Params
{
public:
	struct FTooltipStat                          TooltipStat;                                       // 0x0(0x31)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_279C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemTier                     CallFunc_GetPerkTier_ReturnValue;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_279D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetTooltipTitle_ReturnValue;              // 0x40(0x18)()
	bool                                         CallFunc_IsTierPerk_ReturnValue;                   // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_279E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x60(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetTooltipTitle_ReturnValue2;             // 0xA0(0x18)()
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0xC0(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetTierText_ReturnValue;                  // 0x100(0x18)()
	int32                                        CallFunc_GetRequiredLevel_ReturnValue;             // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_279F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData3;             // 0x120(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x160(0x18)()
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x178(0x10)(ZeroConstructor, ReferenceParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData4;             // 0x188(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1C8(0x18)()
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array2;                           // 0x1E0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue2;                      // 0x1F0(0x18)()
	class FText                                  K2Node_Select_Default;                             // 0x208(0x18)()
	struct FTooltipStat                          K2Node_MakeStruct_TooltipStat;                     // 0x220(0x31)(HasGetValueTypeHash)
	uint8                                        Pad_27A0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function PerkWidget.PerkWidget_C.ShowTierImage
struct UPerkWidget_C_ShowTierImage_Params
{
public:
};

// 0xB8 (0xB8 - 0x0)
// Function PerkWidget.PerkWidget_C.SetupBadge
struct UPerkWidget_C_SetupBadge_Params
{
public:
	enum class EFortSupportBonusType             SupportPerkType;                                   // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetTierAbilityBrush_SlateBrush;           // 0x8(0x90)()
	bool                                         CallFunc_IsTierPerk_ReturnValue;                   // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetRequiredLevel_ReturnValue;             // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0xA0(0x18)()
};

// 0xC1 (0xC1 - 0x0)
// Function PerkWidget.PerkWidget_C.InitializeHeroBonusIcon
struct UPerkWidget_C_InitializeHeroBonusIcon_Params
{
public:
	enum class EFortSupportBonusType             SupportPerkType;                                   // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortSupportBonusType             Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27A3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable2;                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable3;                             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortSupportBonusType             CallFunc_GetSupportBonusType_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Select_Default;                             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x30(0x90)()
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function PerkWidget.PerkWidget_C.InitializeTextOnlyPerk
struct UPerkWidget_C_InitializeTextOnlyPerk_Params
{
public:
	struct FTooltipStat                          CallFunc_GetPerkStat_TooltipStat;                  // 0x0(0x31)(HasGetValueTypeHash)
	uint8                                        Pad_27A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTooltipStatWidget_C*                  CallFunc_Create_ReturnValue;                       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function PerkWidget.PerkWidget_C.ShouldFadePerk
struct UPerkWidget_C_ShouldFadePerk_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPerkHighlighted_ReturnValue;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPerkUnlocked_ReturnValue;               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue2;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function PerkWidget.PerkWidget_C.GetHighlightColor
struct UPerkWidget_C_GetHighlightColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x14(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Buff_Color_Color;                     // 0x24(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPerkHighlighted_ReturnValue;            // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select_Default;                             // 0x38(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x190 (0x190 - 0x0)
// Function PerkWidget.PerkWidget_C.GetTierAbilityBrush
struct UPerkWidget_C_GetTierAbilityBrush_Params
{
public:
	struct FSlateBrush                           SlateBrush;                                        // 0x0(0x90)(Parm, OutParm)
	enum class EFortItemTier                     Temp_byte_Variable;                                // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable2;                             // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable3;                             // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable4;                             // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable5;                             // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable6;                             // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable7;                             // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable8;                             // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable9;                             // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable10;                            // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable11;                            // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemTier                     CallFunc_GetPerkTier_ReturnValue;                  // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Select_Default;                             // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x100(0x90)()
};

// 0x268 (0x268 - 0x0)
// Function PerkWidget.PerkWidget_C.InitializeAbilityPerk
struct UPerkWidget_C_InitializeAbilityPerk_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27AA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetHighlightColor_Color;                  // 0x4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27AB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x18(0x90)()
	bool                                         CallFunc_IsPerkHighlighted_ReturnValue;            // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27AC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetIcon_Brush;                            // 0xB0(0x90)()
	bool                                         CallFunc_GetIcon_ReturnValue;                      // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_Select2_Default;                            // 0x148(0x90)()
	struct FSlateBrush                           CallFunc_ResizeBrush_NewParam;                     // 0x1D8(0x90)()
};

// 0x260 (0x260 - 0x0)
// Function PerkWidget.PerkWidget_C.InitializeBasicPerk
struct UPerkWidget_C_InitializeBasicPerk_Params
{
public:
	struct FLinearColor                          CallFunc_GetHighlightColor_Color;                  // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           CallFunc_NoResourceBrush_ReturnValue;              // 0x10(0x90)()
	bool                                         Temp_bool_Variable;                                // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetIcon_Brush;                            // 0xA8(0x90)()
	bool                                         CallFunc_GetIcon_ReturnValue;                      // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_Select_Default;                             // 0x140(0x90)()
	struct FSlateBrush                           CallFunc_ResizeBrush_NewParam;                     // 0x1D0(0x90)()
};

// 0x1 (0x1 - 0x0)
// Function PerkWidget.PerkWidget_C.PreConstruct
struct UPerkWidget_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PerkWidget.PerkWidget_C.Construct
struct UPerkWidget_C_Construct_Params
{
public:
};

// 0xAD (0xAD - 0x0)
// Function PerkWidget.PerkWidget_C.ExecuteUbergraph_PerkWidget
struct UPerkWidget_C_ExecuteUbergraph_PerkWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAbility_ReturnValue;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x8(0x90)()
	bool                                         CallFunc_ShouldFadePerk_Result;                    // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x9C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
