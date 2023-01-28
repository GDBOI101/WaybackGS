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

// 0x18 (0x18 - 0x0)
// Function StatsListItemWIdget.StatsListItemWIdget_C.SetTextAndBorderHighlight
struct UStatsListItemWIdget_C_SetTextAndBorderHighlight_Params
{
public:
	bool                                         bHightlight;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_332E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_Select2_Default;                            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function StatsListItemWIdget.StatsListItemWIdget_C.GetListItemTooltipWidget
struct UStatsListItemWIdget_C_GetListItemTooltipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDisplayAttribute                 CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute; // 0x10(0x70)()
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_332F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function StatsListItemWIdget.StatsListItemWIdget_C.SetStatIcon
struct UStatsListItemWIdget_C_SetStatIcon_Params
{
public:
	struct FSlateBrush                           NewParam;                                          // 0x0(0x90)(Parm)
};

// 0x118 (0x118 - 0x0)
// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBuffArrows
struct UStatsListItemWIdget_C_UpdateBuffArrows_Params
{
public:
	struct FFortDisplayAttribute                 CurrentAttribute;                                  // 0x0(0x70)(Parm)
	struct FFortDisplayAttribute                 LocalCurrentAttribute;                             // 0x70(0x70)(Edit)
	float                                        Temp_float_Variable;                               // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable2;                              // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable3;                              // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortClampState                   Temp_byte_Variable;                                // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0xED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0xEE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable4;                               // 0xEF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortComparisonType               Temp_byte_Variable5;                               // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3330[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable4;                              // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable5;                              // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable6;                              // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable7;                              // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortComparisonType               Temp_byte_Variable6;                               // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3331[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable7;                               // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable8;                               // 0x10D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable9;                               // 0x10E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable10;                              // 0x10F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select2_Default;                            // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select3_Default;                            // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortClampState                   Temp_byte_Variable11;                              // 0x112(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3332[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select4_Default;                            // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x89 (0x89 - 0x0)
// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBasicPairLabel
struct UStatsListItemWIdget_C_UpdateBasicPairLabel_Params
{
public:
	struct FFortDisplayAttribute                 CurrentAttribute;                                  // 0x0(0x70)(Parm)
	class FText                                  CallFunc_GetEmptyText_ReturnValue;                 // 0x70(0x18)()
	bool                                         CallFunc_NotEqual_TextText_ReturnValue;            // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateValueText
struct UStatsListItemWIdget_C_UpdateValueText_Params
{
public:
	struct FFortDisplayAttribute                 CurrentAttribute;                                  // 0x0(0x70)(Parm)
};

// 0x80 (0x80 - 0x0)
// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateType
struct UStatsListItemWIdget_C_UpdateType_Params
{
public:
	struct FFortDisplayAttribute                 CurrentAttribute;                                  // 0x0(0x70)(Parm)
	enum class EFortStatValueDisplayType         Temp_byte_Variable;                                // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3333[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default;                             // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A8 (0x1A8 - 0x0)
// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateColors
struct UStatsListItemWIdget_C_UpdateColors_Params
{
public:
	struct FFortDisplayAttribute                 CurrentAttribute;                                  // 0x0(0x70)(Parm)
	struct FFortDisplayAttribute                 LocalCurrentAttribute;                             // 0x70(0x70)(Edit)
	struct FLinearColor                          BuffColor;                                         // 0xE0(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BaseColor;                                         // 0xF0(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable;                               // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable2;                              // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortComparisonType               Temp_byte_Variable;                                // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    Temp_byte_Variable2;                               // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3334[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_Get_Base___Buff_Colors_Base;              // 0x114(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Base___Buff_Colors_Buff;              // 0x124(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3335[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Temp_class_Variable3;                              // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3336[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Temp_class_Variable4;                              // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_TextText_ReturnValue;            // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortComparisonType               Temp_byte_Variable3;                               // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3337[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_Select_Default;                             // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select2_Default;                            // 0x160(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x170(0x28)()
	struct FLinearColor                          K2Node_Select3_Default;                            // 0x198(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function StatsListItemWIdget.StatsListItemWIdget_C.Update
struct UStatsListItemWIdget_C_Update_Params
{
public:
	struct FFortDisplayAttribute                 CurrentAttribute;                                  // 0x0(0x70)(Edit)
	struct FFortDisplayAttribute                 CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute; // 0x70(0x70)()
};

// 0x4 (0x4 - 0x0)
// Function StatsListItemWIdget.StatsListItemWIdget_C.ValueChanged
struct UStatsListItemWIdget_C_ValueChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StatsListItemWIdget.StatsListItemWIdget_C.Construct
struct UStatsListItemWIdget_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StatsListItemWIdget.StatsListItemWIdget_C.PreviewEnded
struct UStatsListItemWIdget_C_PreviewEnded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StatsListItemWIdget.StatsListItemWIdget_C.PreviewStarted
struct UStatsListItemWIdget_C_PreviewStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StatsListItemWIdget.StatsListItemWIdget_C.DisplayAttributeChanged
struct UStatsListItemWIdget_C_DisplayAttributeChanged_Params
{
public:
};

// 0x7C (0x7C - 0x0)
// Function StatsListItemWIdget.StatsListItemWIdget_C.ExecuteUbergraph_StatsListItemWIdget
struct UStatsListItemWIdget_C_ExecuteUbergraph_StatsListItemWIdget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3338[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDisplayAttribute                 CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute; // 0x8(0x70)()
	float                                        K2Node_Event_Delta;                                // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
