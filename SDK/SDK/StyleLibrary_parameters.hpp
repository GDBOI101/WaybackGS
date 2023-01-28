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

// 0x35 (0x35 - 0x0)
// Function StyleLibrary.StyleLibrary_C.Get Conning Color For Specific Difficulty
struct UStyleLibrary_C_Get_Conning_Color_For_Specific_Difficulty_Params
{
public:
	int32                                        Difficulty_Value;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Difficulty_Linear_Color;                           // 0x10(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Invalid;                                           // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          DifficultyColor;                                   // 0x24(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x290 (0x290 - 0x0)
// Function StyleLibrary.StyleLibrary_C.Get Conning Color From Difficulty Value
struct UStyleLibrary_C_Get_Conning_Color_From_Difficulty_Value_Params
{
public:
	int32                                        Player_Skill_Level;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Content_Difficulty_Level;                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameDifficultyInfo                   Game_Difficulty_Info;                              // 0x8(0x80)(Parm)
	int32                                        Content_Skill_Points;                              // 0x88(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x90(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Difficulty_Linear_Color;                           // 0x98(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0xA8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ToolTipText;                                       // 0xB0(0x18)(Parm, OutParm)
	int32                                        DifficultyValue;                                   // 0xC8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          DifficultyColorNames;                              // 0xD0(0x10)(Edit, ZeroConstructor)
	TArray<class FText>                          DifficultyTooltips;                                // 0xE0(0x10)(Edit, ZeroConstructor)
	TArray<int32>                                DifficultyIndices;                                 // 0xF0(0x10)(Edit, ZeroConstructor)
	TArray<struct FLinearColor>                  DifficultyColors;                                  // 0x100(0x10)(Edit, ZeroConstructor)
	TArray<class FName>                          RowNames;                                          // 0x110(0x10)(Edit, ZeroConstructor)
	int32                                        DifficultyOut;                                     // 0x120(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MultipleGreenHexIndexOffset;                       // 0x124(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GreenBottomArrayElementIndex;                      // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Content_DL_In;                                     // 0x12C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  DifficultyColorName;                               // 0x130(0x18)(Edit)
	class FText                                  ConningTooltipText;                                // 0x148(0x18)(Edit)
	int32                                        Content_SP;                                        // 0x160(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Valid;                                             // 0x164(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Player_Skill_Level_In;                             // 0x168(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                SPCutoffValues;                                    // 0x170(0x10)(Edit, ZeroConstructor)
	int32                                        Stonewood_VLT_Skill_Level;                         // 0x180(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DifficultyColor;                                   // 0x184(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BucketOffsetValue;                                 // 0x194(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30FC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x1A0(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          K2Node_MakeArray_Array2;                           // 0x1B8(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          K2Node_MakeArray_Array3;                           // 0x1D0(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item;                           // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3100[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue2;                  // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                K2Node_MakeArray_Array4;                           // 0x200(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item2;                          // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Array_Get_Item3;                          // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x21C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3101[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                K2Node_MakeArray_Array5;                           // 0x220(0x10)(ZeroConstructor, ReferenceParm)
	enum class EEvaluateCurveTableResult         CallFunc_EvaluateCurveTableRow_OutResult;          // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3102[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_EvaluateCurveTableRow_OutXY;              // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x23A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x23B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3103[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLinearColor>                  K2Node_MakeArray_Array6;                           // 0x240(0x10)(ZeroConstructor, ReferenceParm)
	struct FLinearColor                          CallFunc_Array_Get_Item4;                          // 0x250(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Array_Get_Item5;                          // 0x260(0x18)()
	class FText                                  CallFunc_Array_Get_Item6;                          // 0x278(0x18)()
};

// 0xBC8 (0xBC8 - 0x0)
// Function StyleLibrary.StyleLibrary_C.Get HarvestWeakPoint Color
struct UStyleLibrary_C_Get_HarvestWeakPoint_Color_Params
{
public:
	struct FFortUIStylesheet                     Stylesheet;                                        // 0x0(0xBB0)(Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0xBB0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          StyleSheetOut;                                     // 0xBB8(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C8 (0x1C8 - 0x0)
// Function StyleLibrary.StyleLibrary_C.ResizeBrush
struct UStyleLibrary_C_ResizeBrush_Params
{
public:
	enum class EFortBrushSize                    BrushSize;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3104[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BaseBrush;                                         // 0x8(0x90)(Parm)
	class UObject*                               __WorldContext;                                    // 0x98(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           NewParam;                                          // 0xA0(0x90)(Parm, OutParm)
	struct FVector2D                             CallFunc_Get_Standard_Icon_Size_Icon_Size;         // 0x130(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x138(0x90)()
};

// 0xC98 (0xC98 - 0x0)
// Function StyleLibrary.StyleLibrary_C.Get Base & Buff Colors
struct UStyleLibrary_C_Get_Base___Buff_Colors_Params
{
public:
	enum class EFortStatValueDisplayType         Display_Type;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    Buff_State;                                        // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3105[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortUIStylesheet                     Stylesheet;                                        // 0x8(0xBB0)(Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0xBB8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Base;                                              // 0xBC0(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          buff;                                              // 0xBD0(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable;                              // 0xBE0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Buff_Color_Color;                     // 0xBF0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Debuff_Color_Color;                   // 0xC00(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Unique_Color_Color;                   // 0xC10(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Fire_Elemental_Color_Color;           // 0xC20(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Ice_Elemental_Color_Color;            // 0xC30(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Bolt_Elemental_Color_Color;           // 0xC40(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortStatValueDisplayType         Temp_byte_Variable;                                // 0xC50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3106[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable2;                             // 0xC54(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable3;                             // 0xC64(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBuffState                    Temp_byte_Variable2;                               // 0xC74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3107[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select_Default;                             // 0xC78(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select2_Default;                            // 0xC88(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBC8 (0xBC8 - 0x0)
// Function StyleLibrary.StyleLibrary_C.Get Bolt Elemental Color
struct UStyleLibrary_C_Get_Bolt_Elemental_Color_Params
{
public:
	struct FFortUIStylesheet                     Stylesheet;                                        // 0x0(0xBB0)(Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0xBB0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0xBB8(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBC8 (0xBC8 - 0x0)
// Function StyleLibrary.StyleLibrary_C.Get Ice Elemental Color
struct UStyleLibrary_C_Get_Ice_Elemental_Color_Params
{
public:
	struct FFortUIStylesheet                     Stylesheet;                                        // 0x0(0xBB0)(Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0xBB0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0xBB8(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBC8 (0xBC8 - 0x0)
// Function StyleLibrary.StyleLibrary_C.Get Fire Elemental Color
struct UStyleLibrary_C_Get_Fire_Elemental_Color_Params
{
public:
	struct FFortUIStylesheet                     Stylesheet;                                        // 0x0(0xBB0)(Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0xBB0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0xBB8(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBC8 (0xBC8 - 0x0)
// Function StyleLibrary.StyleLibrary_C.Get Unique Color
struct UStyleLibrary_C_Get_Unique_Color_Params
{
public:
	struct FFortUIStylesheet                     Stylesheet;                                        // 0x0(0xBB0)(Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0xBB0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0xBB8(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC58 (0xC58 - 0x0)
// Function StyleLibrary.StyleLibrary_C.Get Item Size
struct UStyleLibrary_C_Get_Item_Size_Params
{
public:
	struct FFortUIStylesheet                     Stylesheet;                                        // 0x0(0xBB0)(Parm, HasGetValueTypeHash)
	enum class EFortBrushSize                    Brush_Size;                                        // 0xBB0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3108[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0xBB8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Item_Size;                                         // 0xBC0(0x8)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue; // 0xBC8(0x90)(ConstParm)
};

// 0xBC8 (0xBC8 - 0x0)
// Function StyleLibrary.StyleLibrary_C.Get Debuff Color
struct UStyleLibrary_C_Get_Debuff_Color_Params
{
public:
	struct FFortUIStylesheet                     Stylesheet;                                        // 0x0(0xBB0)(Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0xBB0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0xBB8(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBC8 (0xBC8 - 0x0)
// Function StyleLibrary.StyleLibrary_C.Get Buff Color
struct UStyleLibrary_C_Get_Buff_Color_Params
{
public:
	struct FFortUIStylesheet                     Stylesheet;                                        // 0x0(0xBB0)(Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0xBB0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0xBB8(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC58 (0xC58 - 0x0)
// Function StyleLibrary.StyleLibrary_C.Get Item Icon Size
struct UStyleLibrary_C_Get_Item_Icon_Size_Params
{
public:
	struct FFortUIStylesheet                     Stylesheet;                                        // 0x0(0xBB0)(Parm, HasGetValueTypeHash)
	enum class EFortBrushSize                    Brush_Size;                                        // 0xBB0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3109[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0xBB8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Icon_Size;                                         // 0xBC0(0x8)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue; // 0xBC8(0x90)(ConstParm)
};

// 0xC58 (0xC58 - 0x0)
// Function StyleLibrary.StyleLibrary_C.Get Standard Icon Size
struct UStyleLibrary_C_Get_Standard_Icon_Size_Params
{
public:
	struct FFortUIStylesheet                     Stylesheet;                                        // 0x0(0xBB0)(Parm, HasGetValueTypeHash)
	enum class EFortBrushSize                    Brush_Size;                                        // 0xBB0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_310A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0xBB8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Icon_Size;                                         // 0xBC0(0x8)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue; // 0xBC8(0x90)(ConstParm)
};

// 0xC84 (0xC84 - 0x0)
// Function StyleLibrary.StyleLibrary_C.Get Theme
struct UStyleLibrary_C_Get_Theme_Params
{
public:
	struct FFortUIStylesheet                     Stylesheet;                                        // 0x0(0xBB0)(Parm, HasGetValueTypeHash)
	enum class EFortUITheme                      Theme_Type;                                        // 0xBB0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_310B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0xBB8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortUITheme                          Theme;                                             // 0xBC0(0x60)(Parm, OutParm, HasGetValueTypeHash)
	enum class EFortUITheme                      Temp_byte_Variable;                                // 0xC20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_310C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortUITheme                          K2Node_Select_Default;                             // 0xC24(0x60)(HasGetValueTypeHash)
};

// 0xC44 (0xC44 - 0x0)
// Function StyleLibrary.StyleLibrary_C.Get Theme Color
struct UStyleLibrary_C_Get_Theme_Color_Params
{
public:
	struct FFortUIStylesheet                     Stylesheet;                                        // 0x0(0xBB0)(Parm, HasGetValueTypeHash)
	enum class EFortUITheme                      Theme_Type;                                        // 0xBB0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIThemeColor                 Color_Type;                                        // 0xBB1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_310D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0xBB8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Theme_Color;                                       // 0xBC0(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIThemeColor                 Temp_byte_Variable;                                // 0xBD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_310E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortUITheme                          CallFunc_Get_Theme_Theme;                          // 0xBD4(0x60)(HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0xC34(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
