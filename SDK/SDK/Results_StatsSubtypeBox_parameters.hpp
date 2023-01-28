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

// 0x3F9 (0x3F9 - 0x0)
// Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.InitializeScoreType
struct UResults_StatsSubtypeBox_C_InitializeScoreType_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x8(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x18(0x18)(Edit)
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue;    // 0x30(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortScoreStylingInfo                 CallFunc_GetScoreStylingData_ScoreStylingInfo;     // 0x40(0x388)()
	bool                                         CallFunc_GetScoreStylingData_ReturnValue;          // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D79[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x3D0(0x28)()
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.Construct
struct UResults_StatsSubtypeBox_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.PreConstruct
struct UResults_StatsSubtypeBox_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.ExecuteUbergraph_Results_StatsSubtypeBox
struct UResults_StatsSubtypeBox_C_ExecuteUbergraph_Results_StatsSubtypeBox_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
