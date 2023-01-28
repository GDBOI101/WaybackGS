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
// Function LegacyPerksWidget.LegacyPerksWidget_C.Construct
struct ULegacyPerksWidget_C_Construct_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function LegacyPerksWidget.LegacyPerksWidget_C.OnGeneratePerkTier
struct ULegacyPerksWidget_C_OnGeneratePerkTier_Params
{
public:
	struct FFortUIPerkTier                       FortPerkTier;                                      // 0x0(0x20)(Parm, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function LegacyPerksWidget.LegacyPerksWidget_C.ExecuteUbergraph_LegacyPerksWidget
struct ULegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_326C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortUIPerkTier                       K2Node_Event_FortPerkTier;                         // 0x8(0x20)(NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULegacyPerkTierWidget_C*               CallFunc_Create_ReturnValue;                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
