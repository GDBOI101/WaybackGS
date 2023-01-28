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
// Function WeaponTooltipDPSWidget.WeaponTooltipDPSWidget_C.Construct
struct UWeaponTooltipDPSWidget_C_Construct_Params
{
public:
};

// 0x60 (0x60 - 0x0)
// Function WeaponTooltipDPSWidget.WeaponTooltipDPSWidget_C.ExecuteUbergraph_WeaponTooltipDPSWidget
struct UWeaponTooltipDPSWidget_C_ExecuteUbergraph_WeaponTooltipDPSWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B63[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_Get_Base___Buff_Colors_Base;              // 0x8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Base___Buff_Colors_Buff;              // 0x18(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x28(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x38(0x28)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
