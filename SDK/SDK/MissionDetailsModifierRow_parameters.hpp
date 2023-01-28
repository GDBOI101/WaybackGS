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
// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.PlayIntroAnimation
struct UMissionDetailsModifierRow_C_PlayIntroAnimation_Params
{
public:
};

// 0x75 (0x75 - 0x0)
// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Init
struct UMissionDetailsModifierRow_C_Init_Params
{
public:
	class FText                                  ModifierName;                                      // 0x0(0x18)(Parm)
	class FText                                  ModifierDescription;                               // 0x18(0x18)(Parm)
	class UTexture2D*                            ModifierIcon;                                      // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TextStyle;                                         // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Description;                                  // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseSmallIcon;                                      // 0x41(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3393[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             NormalSize;                                        // 0x44(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             SmallSize;                                         // 0x4C(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x56(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x57(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable3;                               // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3394[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakVector2D_X;                          // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X2;                         // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y2;                         // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select2_Default;                            // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select3_Default;                            // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Construct
struct UMissionDetailsModifierRow_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.ExecuteUbergraph_MissionDetailsModifierRow
struct UMissionDetailsModifierRow_C_ExecuteUbergraph_MissionDetailsModifierRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
