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
// Function B_StockBattleBus.B_StockBattleBus_C.UserConstructionScript
struct AB_StockBattleBus_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_StockBattleBus.B_StockBattleBus_C.ReceiveBeginPlay
struct AB_StockBattleBus_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_StockBattleBus.B_StockBattleBus_C.Start Audio
struct AB_StockBattleBus_C_Start_Audio_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function B_StockBattleBus.B_StockBattleBus_C.ExecuteUbergraph_B_StockBattleBus
struct AB_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FA1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue2;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
