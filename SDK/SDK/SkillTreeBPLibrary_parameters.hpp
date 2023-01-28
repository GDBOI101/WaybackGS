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

// 0x17 (0x17 - 0x0)
// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeIconSizeByMagnitude
struct USkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude_Params
{
public:
	enum class EFortHomebaseNodeMagnitude        Node_Magnitude;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D87[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBrushSize                    Icon_Size;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortHomebaseNodeMagnitude        Temp_byte_Variable;                                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBrushSize                    Temp_byte_Variable2;                               // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBrushSize                    Temp_byte_Variable3;                               // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBrushSize                    Temp_byte_Variable4;                               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBrushSize                    Temp_byte_Variable5;                               // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBrushSize                    K2Node_Select_Default;                             // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeShapeByDisplayType
struct USkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType_Params
{
public:
	enum class EFortHomebaseNodeDisplayType      Display_Type;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D88[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSquare;                                          // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsExitNode;                                        // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortHomebaseNodeDisplayType      Temp_byte_Variable;                                // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable3;                               // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable4;                               // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable5;                               // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable6;                               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable7;                               // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortHomebaseNodeDisplayType      Temp_byte_Variable2;                               // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default;                             // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable8;                               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable9;                               // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable10;                              // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable11;                              // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable12;                              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable13;                              // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable14;                              // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select2_Default;                            // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeSizeByMagnitude
struct USkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude_Params
{
public:
	enum class EFortHomebaseNodeMagnitude        Node_Magnitude;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortHomebaseNodeDisplayType      Display_Type;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D89[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               World_Context;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Size;                                              // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSkillTreeNodeShapeByDisplayType_IsSquare; // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSkillTreeNodeShapeByDisplayType_IsExitNode; // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D8A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable2;                              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortHomebaseNodeMagnitude        Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D8B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable3;                              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable4;                              // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable5;                              // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select2_Default;                            // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.UpdateSkillTreeNodeMaterial_DynamicData
struct USkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData_Params
{
public:
	class UObject*                               World_Context;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Material;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHomebaseNodeState                    NodeState;                                         // 0x10(0x8)(Parm, NoDestructor)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue2;            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D8C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue3;            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x159 (0x159 - 0x0)
// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeCostTint
struct USkillTreeBPLibrary_C_GetSkillTreeNodeCostTint_Params
{
public:
	struct FHomebaseNode                         HomebaseNode;                                      // 0x0(0xC0)(ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0xC0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          NodeTintColour;                                    // 0xC8(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHomebaseUIContext*                CallFunc_GetContext_ReturnValue2;                  // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetQuestNodeColour_ReturnValue;           // 0xE8(0x28)()
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D8D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortItemQuantityPair                 CallFunc_Array_Get_Item;                           // 0x118(0x28)()
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D8E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   CallFunc_GetItemFromItemQuantityPair_ReturnValue;  // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTokenType*                        K2Node_DynamicCast_AsFort_Token_Type;              // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x528 (0x528 - 0x0)
// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.UpdateSkillTreeNodeMaterial_StaticData
struct USkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData_Params
{
public:
	class UObject*                               World_Context;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Material;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHomebaseNode                         NodeData;                                          // 0x10(0xC0)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FFortSkillTreeNodeDisplayData         DisplayData;                                       // 0xD0(0x368)(Parm)
	class UCommonButton*                         Button;                                            // 0x438(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x440(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable;                               // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBrushSize                    CallFunc_GetSkillTreeNodeIconSizeByMagnitude_Icon_Size; // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x451(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D8F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue; // 0x458(0x90)(ConstParm)
	struct FLinearColor                          CallFunc_GetSkillTreeNodeCostTint_NodeTintColour;  // 0x4E8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_GetBrushResourceAsTexture2D_ReturnValue;  // 0x4F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable2;                              // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable3;                              // 0x508(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable4;                              // 0x510(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortHomebaseNodeMagnitude        Temp_byte_Variable;                                // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D90[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_Select_Default;                             // 0x520(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
