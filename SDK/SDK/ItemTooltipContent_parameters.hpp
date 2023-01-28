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
// Function ItemTooltipContent.ItemTooltipContent_C.ClearExtendedInfo
struct UItemTooltipContent_C_ClearExtendedInfo_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Set Rating
struct UItemTooltipContent_C_Set_Rating_Params
{
public:
	class ULegacyRatingWidget_C*                 ActiveWidget;                                      // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemType                     CallFunc_GetType_ReturnValue;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3483[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetRating_ReturnValue;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3484[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetRating_ReturnValue2;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3485[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULegacyRatingWidget_C*                 K2Node_Select2_Default;                            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Set Quantity
struct UItemTooltipContent_C_Set_Quantity_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBrushSize                    Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBrushSize                    Temp_byte_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable2;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable3;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBrushSize                    K2Node_Select_Default;                             // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3486[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemStackCounter_C*                   K2Node_Select2_Default;                            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumInStack_ReturnValue;                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select3_Default;                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC1 (0xC1 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.SetDescriptionText
struct UItemTooltipContent_C_SetDescriptionText_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3487[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0x10(0x18)()
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x28(0x10)(ZeroConstructor, ReferenceParm)
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3488[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTooltip_DescriptionText_C*            CallFunc_Create_ReturnValue;                       // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable2;                               // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3489[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          K2Node_Select_Default;                             // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                   CallFunc_Init_Tooltip_Context_Tooltip_Context;     // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          CallFunc_GetDescription_OutDescription;            // 0x78(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_GetDescription_ReturnValue2;              // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_348A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          K2Node_Select2_Default;                            // 0x90(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_348B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Array_Get_Item;                           // 0xA8(0x18)()
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4B0 (0x4B0 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Create Custom Integer Stat
struct UItemTooltipContent_C_Create_Custom_Integer_Stat_Params
{
public:
	enum class EFortStatValueDisplayType         Display_Type;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_348C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Label;                                             // 0x8(0x18)(Parm)
	int32                                        Value;                                             // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Comparison_Value;                                  // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HigherIsBetter;                                    // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_348D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDisplayAttribute                 Display_Attribute;                                 // 0x30(0x70)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xA3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_348E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0xA8(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue2;              // 0xC0(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xD8(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0x118(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData3;             // 0x158(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x198(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array2;                           // 0x1A8(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1B8(0x18)()
	class FText                                  CallFunc_Format_ReturnValue2;                      // 0x1D0(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData4;             // 0x1E8(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData5;             // 0x228(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData6;             // 0x268(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData7;             // 0x2A8(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData8;             // 0x2E8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array3;                           // 0x328(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array4;                           // 0x338(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue3;                      // 0x348(0x18)()
	class FText                                  CallFunc_Format_ReturnValue4;                      // 0x360(0x18)()
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_348F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x380(0x18)()
	bool                                         Temp_bool_Variable2;                               // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable3;                               // 0x399(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3490[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select2_Default;                            // 0x3A0(0x18)()
	enum class EFortBuffState                    Temp_byte_Variable;                                // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    Temp_byte_Variable2;                               // 0x3B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable4;                               // 0x3BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    K2Node_Select3_Default;                            // 0x3BB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    Temp_byte_Variable3;                               // 0x3BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    Temp_byte_Variable4;                               // 0x3BD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemTooltip_DisplayMode          Temp_byte_Variable5;                               // 0x3BE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBuffState                    K2Node_Select4_Default;                            // 0x3BF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable5;                               // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemTooltip_DisplayMode          Temp_byte_Variable6;                               // 0x3C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable6;                               // 0x3C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortComparisonType               Temp_byte_Variable7;                               // 0x3C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortComparisonType               Temp_byte_Variable8;                               // 0x3C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable7;                               // 0x3C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortComparisonType               K2Node_Select5_Default;                            // 0x3C6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortComparisonType               Temp_byte_Variable9;                               // 0x3C7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable8;                               // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortComparisonType               K2Node_Select6_Default;                            // 0x3C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    Temp_byte_Variable10;                              // 0x3CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable9;                               // 0x3CB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    K2Node_Select7_Default;                            // 0x3CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemTooltip_DisplayMode          Temp_byte_Variable11;                              // 0x3CD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBuffState                    K2Node_Select8_Default;                            // 0x3CE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    Temp_byte_Variable12;                              // 0x3CF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemTooltip_DisplayMode          Temp_byte_Variable13;                              // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortComparisonType               Temp_byte_Variable14;                              // 0x3D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortComparisonType               Temp_byte_Variable15;                              // 0x3D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortComparisonType               Temp_byte_Variable16;                              // 0x3D3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable10;                              // 0x3D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortComparisonType               K2Node_Select9_Default;                            // 0x3D5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable11;                              // 0x3D6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    Temp_byte_Variable17;                              // 0x3D7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable12;                              // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    Temp_byte_Variable18;                              // 0x3D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    Temp_byte_Variable19;                              // 0x3DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3491[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select10_Default;                           // 0x3E0(0x18)()
	class FText                                  K2Node_Select11_Default;                           // 0x3F8(0x18)()
	bool                                         Temp_bool_Variable13;                              // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3492[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select12_Default;                           // 0x418(0x18)()
	enum class EFortBuffState                    Temp_byte_Variable20;                              // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    K2Node_Select13_Default;                           // 0x431(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    K2Node_Select14_Default;                           // 0x432(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    Temp_byte_Variable21;                              // 0x433(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable14;                              // 0x434(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    K2Node_Select15_Default;                           // 0x435(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    K2Node_Select16_Default;                           // 0x436(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortComparisonType               K2Node_Select17_Default;                           // 0x437(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    K2Node_Select18_Default;                           // 0x438(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3493[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDisplayAttribute                 K2Node_MakeStruct_FortDisplayAttribute;            // 0x440(0x70)()
};

// 0x72 (0x72 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Build Perks List
struct UItemTooltipContent_C_Build_Perks_List_Params
{
public:
	class UFortHero*                             Hero;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortAlterationItemDefinition*> CallFunc_GetAlterations_ReturnValue;               // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3494[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULegacyPerksWidget_C*                  CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue2;             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortAlterationItemDefinition*> CallFunc_GetAlterations_ReturnValue2;              // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	class ULegacyAlterationGroup_Widget_C*       CallFunc_Create_ReturnValue2;                      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetLevel_ReturnValue;                     // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3495[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue2;       // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHero*                             K2Node_DynamicCast_AsFort_Hero;                    // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.IsComparison
struct UItemTooltipContent_C_IsComparison_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.BuildHeroBonuses
struct UItemTooltipContent_C_BuildHeroBonuses_Params
{
public:
	class UFortHero*                             Hero;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTooltipHeroBonuses_C*                 CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsComparison_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3496[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHero*                             K2Node_DynamicCast_AsFort_Hero;                    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3497[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          K2Node_Select_Default;                             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Build Ingredients
struct UItemTooltipContent_C_Build_Ingredients_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3498[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTooltipIngredientList_C*              CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          K2Node_Select_Default;                             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSchematicItem*                    K2Node_DynamicCast_AsFort_Schematic_Item;          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Init Tooltip Context
struct UItemTooltipContent_C_Init_Tooltip_Context_Params
{
public:
	class UFortTooltipContext*                   Tooltip_Context;                                   // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_Get_Query_Tag_Tag;                        // 0x8(0x8)(NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                   CallFunc_SpawnTooltipContextWithSource_ReturnValue; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddGameplayTagToContainer_ReturnValue;    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Get Query Tag
struct UItemTooltipContent_C_Get_Query_Tag_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	enum class EItemTooltip_DisplayMode          Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3499[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable2;                             // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable3;                             // 0x20(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Select_Default;                             // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Build Schematic Ingredients
struct UItemTooltipContent_C_Build_Schematic_Ingredients_Params
{
public:
};

// 0x88 (0x88 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Set Rarity Data
struct UItemTooltipContent_C_Set_Rarity_Data_Params
{
public:
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_349A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x8(0x80)()
};

// 0x8 (0x8 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Set Display Mode
struct UItemTooltipContent_C_Set_Display_Mode_Params
{
public:
	enum class EItemTooltip_DisplayMode          DisplayMode;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemTooltip_DisplayMode          Temp_byte_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemTooltip_DisplayMode          K2Node_Select_Default;                             // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x180 (0x180 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Set Level Text
struct UItemTooltipContent_C_Set_Level_Text_Params
{
public:
	int32                                        CompareMaxLevel;                                   // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CompareLevel;                                      // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasLevel;                                          // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_349B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          ActiveBox;                                         // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxLevel;                                          // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentLevel;                                      // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_349C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMaxLevel_ReturnValue;                  // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_349D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetLevel_ReturnValue;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_349E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDisplayAttribute                 CallFunc_Create_Custom_Integer_Stat_Display_Attribute; // 0x38(0x70)()
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTooltip_DisplayAttribute_C*           CallFunc_Create_ReturnValue;                       // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_349F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0xC4(0x10)(NoDestructor)
	uint8                                        Pad_34A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDisplayAttribute                 CallFunc_Create_Custom_Integer_Stat_Display_Attribute2; // 0xD8(0x70)()
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x14A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x14B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue2;              // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetMaxLevel_ReturnValue2;                 // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetLevel_ReturnValue2;                    // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue2;             // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTooltip_DisplayAttribute_C*           CallFunc_Create_ReturnValue2;                      // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          K2Node_Select2_Default;                            // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue2;       // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7C (0x7C - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Set Tier
struct UItemTooltipContent_C_Set_Tier_Params
{
public:
	int32                                        MaxTier;                                           // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentTier;                                       // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        ActiveBox;                                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasTier;                                           // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34A4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x18(0x10)(NoDestructor)
	enum class EFortItemTier                     CallFunc_GetMaxTier_ReturnValue;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemTier                     CallFunc_GetTier_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34A5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Convert_Tier_To_Integer_Numeric_Tier;     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Convert_Tier_To_Integer_Numeric_Tier2;    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItem_TierStar_C*                      CallFunc_Create_ReturnValue;                       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue2;            // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34A7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        K2Node_Select2_Default;                            // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemTier                     CallFunc_GetTier_ReturnValue2;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable3;                               // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34A8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select3_Default;                            // 0x6C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB2 (0xB2 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Set Tertiary Category Icon & Text
struct UItemTooltipContent_C_Set_Tertiary_Category_Icon___Text_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBrushSize                    Temp_byte_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBrushSize                    Temp_byte_Variable3;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable4;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBrushSize                    K2Node_Select_Default;                             // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34A9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetTertiaryCategory_ItemCategoryText;     // 0x8(0x18)()
	struct FSlateBrush                           CallFunc_GetTertiaryCategory_ItemCategoryBrush;    // 0x20(0x90)()
	bool                                         CallFunc_GetTertiaryCategory_ReturnValue;          // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select2_Default;                            // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB2 (0xB2 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Set Secondary Category Icon & Text
struct UItemTooltipContent_C_Set_Secondary_Category_Icon___Text_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBrushSize                    Temp_byte_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBrushSize                    Temp_byte_Variable3;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable4;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBrushSize                    K2Node_Select_Default;                             // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34AA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetSecondaryCategory_ItemCategoryText;    // 0x8(0x18)()
	struct FSlateBrush                           CallFunc_GetSecondaryCategory_ItemCategoryBrush;   // 0x20(0x90)()
	bool                                         CallFunc_GetSecondaryCategory_ReturnValue;         // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select2_Default;                            // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Set Primary Category Text
struct UItemTooltipContent_C_Set_Primary_Category_Text_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34AB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetPrimaryCategory_ItemCategoryText;      // 0x8(0x18)()
	bool                                         CallFunc_GetPrimaryCategory_ReturnValue;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x98 (0x98 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Set Display Name Text
struct UItemTooltipContent_C_Set_Display_Name_Text_Params
{
public:
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x0(0x18)()
	class FText                                  CallFunc_TextTrimPrecedingAndTrailing_ReturnValue; // 0x18(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x70(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x80(0x18)()
};

// 0x108 (0x108 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Build Basic Stat Block
struct UItemTooltipContent_C_Build_Basic_Stat_Block_Params
{
public:
	TArray<struct FFortDisplayAttribute>         StatArray;                                         // 0x0(0x10)(Edit, ZeroConstructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDisplayAttribute                 CallFunc_Array_Get_Item;                           // 0x28(0x70)()
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x9D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34AD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTooltip_DisplayAttribute_C*           CallFunc_Create_ReturnValue;                       // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          K2Node_Select_Default;                             // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                   CallFunc_SpawnTooltipContextWithSource_ReturnValue; // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortDisplayAttribute>         CallFunc_GetTooltipStats_ReturnValue;              // 0xD8(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFortDisplayAttribute>         CallFunc_GetUpgradeStats_ReturnValue;              // 0xE8(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFortDisplayAttribute>         CallFunc_GetComparisonStats_ReturnValue;           // 0xF8(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Intro
struct UItemTooltipContent_C_Intro_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Build Durability
struct UItemTooltipContent_C_Build_Durability_Params
{
public:
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                   CallFunc_Init_Tooltip_Context_Tooltip_Context;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTooltipDurabilityMeter_C*             CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTooltipNumericValue_Value;             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetTooltipNumericValue_ReturnValue;       // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDisplayAttribute                 CallFunc_GetTooltipStat_OutDisplayAttribute;       // 0x28(0x70)()
	bool                                         CallFunc_GetTooltipStat_ReturnValue;               // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34B0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          K2Node_Select_Default;                             // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Build Alteration Info
struct UItemTooltipContent_C_Build_Alteration_Info_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetLevel_ReturnValue;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Build Worker Stats
struct UItemTooltipContent_C_Build_Worker_Stats_Params
{
public:
	class UObject*                               OccupiedBuildingDefinition;                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWorkerTooltipStatsWidget_C*           CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorker*                           K2Node_DynamicCast_AsFort_Worker;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB2 (0xB2 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Build Weapon DPS Stat
struct UItemTooltipContent_C_Build_Weapon_DPS_Stat_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34B2[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                   CallFunc_Init_Tooltip_Context_Tooltip_Context;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          K2Node_Select_Default;                             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponTooltipDPSWidget_C*             CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDisplayAttribute                 CallFunc_GetTooltipStat_OutDisplayAttribute;       // 0x30(0x70)()
	bool                                         CallFunc_GetTooltipStat_ReturnValue;               // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable2;                               // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select2_Default;                            // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Build Basic Info
struct UItemTooltipContent_C_Build_Basic_Info_Params
{
public:
};

// 0x19 (0x19 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Set Item Data
struct UItemTooltipContent_C_Set_Item_Data_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             Comparison_Item;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemTooltip_DisplayMode          DisplayMode;                                       // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OverrideQuantity;                                  // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Update_Success;                           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Update
struct UItemTooltipContent_C_Update_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34B5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.Construct
struct UItemTooltipContent_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function ItemTooltipContent.ItemTooltipContent_C.ExecuteUbergraph_ItemTooltipContent
struct UItemTooltipContent_C_ExecuteUbergraph_ItemTooltipContent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
