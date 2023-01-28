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

// 0x50 (0x50 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.SetBackgroundColor
struct UDefaultSkillNode_C_SetBackgroundColor_Params
{
public:
	enum class ESkillTreePages                   Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESkillTreePages                   Temp_byte_Variable2;                               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESkillTreePages                   Temp_byte_Variable3;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESkillTreeGroups                  Temp_byte_Variable4;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B84[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x10(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select2_Default;                            // 0x20(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select3_Default;                            // 0x30(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select4_Default;                            // 0x40(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.UpdateFromButtonState
struct UDefaultSkillNode_C_UpdateFromButtonState_Params
{
public:
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.UpdateSelectionGlow
struct UDefaultSkillNode_C_UpdateSelectionGlow_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.UpdateHoverGlow
struct UDefaultSkillNode_C_UpdateHoverGlow_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.StepSelectionGlowInterpolation
struct UDefaultSkillNode_C_StepSelectionGlowInterpolation_Params
{
public:
	float                                        TargetGlowPercentage;                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B85[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMin_ReturnValue;                         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B86[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1E (0x1E - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.StepHoverGlowInterpolation
struct UDefaultSkillNode_C_StepHoverGlowInterpolation_Params
{
public:
	float                                        TargetGlowPercentage;                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMin_ReturnValue;                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B87[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x448 (0x448 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.UpdateFromNodeData
struct UDefaultSkillNode_C_UpdateFromNodeData_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortSkillTreeNodeDisplayData         CallFunc_TryGetNodeDisplayData_OutDisplayData;     // 0x8(0x368)()
	bool                                         CallFunc_TryGetNodeDisplayData_ReturnValue;        // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B88[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHomebaseNode                         CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData; // 0x378(0xC0)()
	bool                                         CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue; // 0x438(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x439(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B89[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetSkillTreeNodeSizeByMagnitude_Size;     // 0x43C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x440(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.UpdateFromNodeState
struct UDefaultSkillNode_C_UpdateFromNodeState_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHomebaseNodeState                    CallFunc_TryGetSkillTreeNodeState_OutNodeState;    // 0x8(0x8)(NoDestructor)
	bool                                         CallFunc_TryGetSkillTreeNodeState_ReturnValue;     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.Construct
struct UDefaultSkillNode_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.HandleSkillTreeNodeStateChanged
struct UDefaultSkillNode_C_HandleSkillTreeNodeStateChanged_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.PreConstruct
struct UDefaultSkillNode_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.OnUnhovered
struct UDefaultSkillNode_C_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.OnHovered
struct UDefaultSkillNode_C_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.OnSelected
struct UDefaultSkillNode_C_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.OnDeselected
struct UDefaultSkillNode_C_OnDeselected_Params
{
public:
};

// 0xF9 (0xF9 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.ExecuteUbergraph_DefaultSkillNode
struct UDefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B8A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x8(0x8)(NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue2;                 // 0x10(0x8)(NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue3;                 // 0x18(0x8)(NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue4;                 // 0x20(0x8)(NoDestructor)
	struct FHomebaseNode                         CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData; // 0x28(0xC0)()
	bool                                         CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue; // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
