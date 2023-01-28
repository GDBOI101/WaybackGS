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
// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.ShowBorder
struct UQuestInfo_BulletListEntry_C_ShowBorder_Params
{
public:
};

// 0x41 (0x41 - 0x0)
// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.CalcBrushSize
struct UQuestInfo_BulletListEntry_C_CalcBrushSize_Params
{
public:
	struct FVector2D                             InImageSize;                                       // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Min;                                               // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scale;                                             // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x18(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X2;                         // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y2;                         // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue2;           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X3;                         // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y3;                         // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB0 (0xB0 - 0x0)
// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.InitBrush
struct UQuestInfo_BulletListEntry_C_InitBrush_Params
{
public:
	class FText                                  EntryText;                                         // 0x0(0x18)(Parm)
	struct FSlateBrush                           EntryIconBrush;                                    // 0x18(0x90)(Parm)
	struct FVector2D                             CallFunc_CalcBrushSize_ReturnValue;                // 0xA8(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.InitBullet
struct UQuestInfo_BulletListEntry_C_InitBullet_Params
{
public:
	class FText                                  EntryText;                                         // 0x0(0x18)(Parm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
