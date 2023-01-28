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
// Function LegacyAlterationGroup_Widget.LegacyAlterationGroup_Widget_C.Construct
struct ULegacyAlterationGroup_Widget_C_Construct_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function LegacyAlterationGroup_Widget.LegacyAlterationGroup_Widget_C.OnGenerateAlteration
struct ULegacyAlterationGroup_Widget_C_OnGenerateAlteration_Params
{
public:
	struct FFortUIAlteration                     AlterationInfo;                                    // 0x0(0x18)(Parm, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function LegacyAlterationGroup_Widget.LegacyAlterationGroup_Widget_C.ExecuteUbergraph_LegacyAlterationGroup_Widget
struct ULegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_326D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortUIAlteration                     K2Node_Event_AlterationInfo;                       // 0x8(0x18)(NoDestructor)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x20(0x10)(NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULegacyAlteration_Widget_C*            CallFunc_Create_ReturnValue;                       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
