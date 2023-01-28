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

// 0xA (0xA - 0x0)
// Function PotentialResourceWidget.PotentialResourceWidget_C.ShowPotentialResource
struct UPotentialResourceWidget_C_ShowPotentialResource_Params
{
public:
	class UFortItem*                             PotentialResource;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWeakpointDamage;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function PotentialResourceWidget.PotentialResourceWidget_C.SetupFont
struct UPotentialResourceWidget_C_SetupFont_Params
{
public:
	struct FLinearColor                          Temp_struct_Variable;                              // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C76[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_Get_HarvestWeakPoint_Color_StyleSheetOut; // 0x14(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable2;                               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C77[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select2_Default;                            // 0x2C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C78[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x40(0x28)()
};

// 0xA8 (0xA8 - 0x0)
// Function PotentialResourceWidget.PotentialResourceWidget_C.GetResourceCountAsText
struct UPotentialResourceWidget_C_GetResourceCountAsText_Params
{
public:
	class UFortItem*                             Resource;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Result;                                            // 0x8(0x18)(Parm, OutParm)
	int32                                        CallFunc_GetNumInStack_ReturnValue;                // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C79[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x28(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x40(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x80(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x90(0x18)()
};

// 0x18 (0x18 - 0x0)
// Function PotentialResourceWidget.PotentialResourceWidget_C.UpdateResourceCountText
struct UPotentialResourceWidget_C_UpdateResourceCountText_Params
{
public:
	class FText                                  CallFunc_GetResourceCountAsText_Result;            // 0x0(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function PotentialResourceWidget.PotentialResourceWidget_C.Construct
struct UPotentialResourceWidget_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PotentialResourceWidget.PotentialResourceWidget_C.HandleTranslateAndFadeUpFinished
struct UPotentialResourceWidget_C_HandleTranslateAndFadeUpFinished_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function PotentialResourceWidget.PotentialResourceWidget_C.ExecuteUbergraph_PotentialResourceWidget
struct UPotentialResourceWidget_C_ExecuteUbergraph_PotentialResourceWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C7A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PotentialResourceWidget.PotentialResourceWidget_C.FinishedShowing__DelegateSignature
struct UPotentialResourceWidget_C_FinishedShowing__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
