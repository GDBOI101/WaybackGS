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

// 0x30 (0x30 - 0x0)
// Function AthenaMainStatTile.AthenaMainStatTile_C.SetStatValue
struct UAthenaMainStatTile_C_SetStatValue_Params
{
public:
	class FText                                  StatValueAsText;                                   // 0x0(0x18)(Parm)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x18(0x18)()
};

// 0x40 (0x40 - 0x0)
// Function AthenaMainStatTile.AthenaMainStatTile_C.SetTagAndDisplayName
struct UAthenaMainStatTile_C_SetTagAndDisplayName_Params
{
public:
	class FString                                Tag;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Parm)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x28(0x18)()
};

// 0x1 (0x1 - 0x0)
// Function AthenaMainStatTile.AthenaMainStatTile_C.PreConstruct
struct UAthenaMainStatTile_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function AthenaMainStatTile.AthenaMainStatTile_C.ExecuteUbergraph_AthenaMainStatTile
struct UAthenaMainStatTile_C_ExecuteUbergraph_AthenaMainStatTile_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EF7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x8(0x18)()
	bool                                         K2Node_Event_IsDesignTime;                         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
