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
// Function GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.PickDeathMontageSection
struct UGA_DefaultPlayer_Death_C_PickDeathMontageSection_Params
{
public:
};

// 0x19 (0x19 - 0x0)
// Function GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.ExecuteUbergraph_GA_DefaultPlayer_Death
struct UGA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_342F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Generic_C*                 K2Node_DynamicCast_AsPlayer_Pawn_Generic;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
