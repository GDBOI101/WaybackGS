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

// 0x508 (0x508 - 0x0)
// Function Tooltip-CoreStat.Tooltip-CoreStat_C.Update
struct UTooltip_CoreStat_C_Update_Params
{
public:
	struct FHeroCoreStat                         Data;                                              // 0x0(0x3B0)(Parm, HasGetValueTypeHash)
	float                                        Value;                                             // 0x3B0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3273[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue; // 0x3B8(0x90)(ConstParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x448(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x488(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0x4A0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x4E0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x4F0(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function Tooltip-CoreStat.Tooltip-CoreStat_C.Construct
struct UTooltip_CoreStat_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function Tooltip-CoreStat.Tooltip-CoreStat_C.ExecuteUbergraph_Tooltip-CoreStat
struct UTooltip_CoreStat_C_ExecuteUbergraph_Tooltip_CoreStat_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
