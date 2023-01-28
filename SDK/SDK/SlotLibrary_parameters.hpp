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

// 0x1F0 (0x1F0 - 0x0)
// Function SlotLibrary.SlotLibrary_C.Get Attribute Modifier Header Text
struct USlotLibrary_C_Get_Attribute_Modifier_Header_Text_Params
{
public:
	struct FFortAttributeInfo                    Attribute_Info;                                    // 0x0(0x78)(Parm)
	struct FGameplayTagContainer                 Required_Tags;                                     // 0x78(0x20)(Parm)
	class FText                                  Required_Gameplay_Tags_Description;                // 0x98(0x18)(Parm)
	class UObject*                               __WorldContext;                                    // 0xB0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ReturnValue;                                       // 0xB8(0x18)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C48[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xE0(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetAttributeDisplayName_ReturnValue;      // 0x120(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0x140(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue2;                 // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C4A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x188(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C4B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1A0(0x18)()
	bool                                         Temp_bool_Variable2;                               // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C4C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x1C0(0x18)()
	class FText                                  K2Node_Select2_Default;                            // 0x1D8(0x18)()
};

// 0x240 (0x240 - 0x0)
// Function SlotLibrary.SlotLibrary_C.Create Attribute Modifier Tool Tip
struct USlotLibrary_C_Create_Attribute_Modifier_Tool_Tip_Params
{
public:
	class APlayerController*                     Owning_Player;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortAttributeInfo                    Attribute_Info;                                    // 0x8(0x78)(Parm)
	struct FGameplayTagContainer                 Required_Gameplay_Tags;                            // 0x80(0x20)(Parm)
	class FText                                  Required_Gameplay_Tags_Description;                // 0xA0(0x18)(Parm)
	class FText                                  Modifier_Source;                                   // 0xB8(0x18)(Parm)
	class UObject*                               __WorldContext;                                    // 0xD0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               Result;                                            // 0xD8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0xE0(0x18)()
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAttributeDescription_ReturnValue;      // 0x100(0x18)()
	class FText                                  CallFunc_Get_Attribute_Modifier_Header_Text_ReturnValue; // 0x118(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue2;                 // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C4D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x138(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue3;                 // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C4E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x180(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         Temp_bool_Variable;                                // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C4F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x198(0x18)()
	bool                                         Temp_bool_Variable2;                               // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C50[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x1B8(0x18)()
	TArray<class FText>                          K2Node_MakeArray_Array2;                           // 0x1D0(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array3;                           // 0x1E0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  Temp_text_Variable2;                               // 0x1F0(0x18)()
	TArray<class FText>                          K2Node_Select2_Default;                            // 0x208(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         Temp_bool_Variable3;                               // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C51[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select3_Default;                            // 0x220(0x18)()
	class UUserWidget*                           CallFunc_Create_Basic_Multi_Line_Tooltip_Output;   // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x174 (0x174 - 0x0)
// Function SlotLibrary.SlotLibrary_C.Get Traits Of Workers
struct USlotLibrary_C_Get_Traits_Of_Workers_Params
{
public:
	TArray<class UFortWorker*>                   Workers;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 Chief_Personality;                                 // 0x18(0x20)(Parm, OutParm)
	struct FGameplayTagContainer                 Crew_Personalities;                                // 0x38(0x20)(Parm, OutParm)
	struct FGameplayTagContainer                 Crew_Set_Bonuses;                                  // 0x58(0x20)(Parm, OutParm)
	TArray<struct FGameplayTag>                  Crew_Personalities_Result;                         // 0x78(0x10)(Edit, ZeroConstructor)
	TArray<struct FGameplayTag>                  Crew_Set_Bonuses_Result;                           // 0x88(0x10)(Edit, ZeroConstructor)
	TArray<struct FGameplayTag>                  Chief_Personalities_Result;                        // 0x98(0x10)(Edit, ZeroConstructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorker*                           CallFunc_Array_Get_Item;                           // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  CallFunc_BreakGameplayTagContainer_GameplayTags;   // 0xB8(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FGameplayTag>                  CallFunc_BreakGameplayTagContainer_GameplayTags2;  // 0xC8(0x10)(ZeroConstructor, ReferenceParm)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C52[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortWorkerType*                       K2Node_DynamicCast_AsFort_Worker_Type;             // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C53[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_MakeGameplayTagContainerFromArray_ReturnValue; // 0xF8(0x20)()
	TArray<struct FGameplayTag>                  K2Node_Select_Default;                             // 0x118(0x10)(ZeroConstructor, ReferenceParm)
	struct FGameplayTagContainer                 CallFunc_MakeGameplayTagContainerFromArray_ReturnValue2; // 0x128(0x20)()
	struct FGameplayTagContainer                 CallFunc_MakeGameplayTagContainerFromArray_ReturnValue3; // 0x148(0x20)()
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x16C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C54[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function SlotLibrary.SlotLibrary_C.Calculate Current Pulsing Highlight Color
struct USlotLibrary_C_Calculate_Current_Pulsing_Highlight_Color_Params
{
public:
	struct FLinearColor                          Base_Color;                                        // 0x0(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Hightlight_Color;                                  // 0x10(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Current_Color;                                     // 0x28(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RGBToHSV_H;                               // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RGBToHSV_S;                               // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RGBToHSV_V;                               // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RGBToHSV_A;                               // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue2;         // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue3;         // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Sin_ReturnValue;                          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_HSVToRGB_ReturnValue;                     // 0x5C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Abs_ReturnValue;                          // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_CInterpTo_ReturnValue;                    // 0x70(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x528 (0x528 - 0x0)
// Function SlotLibrary.SlotLibrary_C.EnsureIconBrush
struct USlotLibrary_C_EnsureIconBrush_Params
{
public:
	struct FFortMultiSizeBrush                   Multi_size_Brush;                                  // 0x0(0x360)(Parm)
	class UObject*                               __WorldContext;                                    // 0x360(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           Brush;                                             // 0x368(0x90)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x400(0x90)()
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C56[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_Select_Default;                             // 0x498(0x90)()
};

// 0x28 (0x28 - 0x0)
// Function SlotLibrary.SlotLibrary_C.InitItemWidget
struct USlotLibrary_C_InitItemWidget_Params
{
public:
	class UFortItemWidget*                       Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             Item;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_Create_Item_Tooltip_Return_Value;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
