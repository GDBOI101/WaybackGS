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
// Function LegacyPerkTierWidget.LegacyPerkTierWidget_C.Construct
struct ULegacyPerkTierWidget_C_Construct_Params
{
public:
};

// 0x88 (0x88 - 0x0)
// Function LegacyPerkTierWidget.LegacyPerkTierWidget_C.OnGeneratePerk
struct ULegacyPerkTierWidget_C_OnGeneratePerk_Params
{
public:
	struct FFortUIPerk                           Perk;                                              // 0x0(0x88)(Parm)
};

// 0xC4 (0xC4 - 0x0)
// Function LegacyPerkTierWidget.LegacyPerkTierWidget_C.ExecuteUbergraph_LegacyPerkTierWidget
struct ULegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3269[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortUIPerk                           K2Node_Event_Perk;                                 // 0x8(0x88)()
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULegacyPerkWidget_C*                   CallFunc_Create_ReturnValue;                       // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      K2Node_DynamicCast_AsVertical_Box_Slot;            // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_326A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0xB4(0x10)(NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
