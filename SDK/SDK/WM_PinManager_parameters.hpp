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

// 0x5B0 (0x5B0 - 0x0)
// Function WM_PinManager.WM_PinManager_C.CreateWorldMapPin
struct AWM_PinManager_C_CreateWorldMapPin_Params
{
public:
	class FString                                TheaterId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class AWorldMapPin*                          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37B7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x20(0x30)(IsPlainOldData, NoDestructor)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTheaterMapData                   CallFunc_GetTheaterData_OutTheaterData;            // 0x58(0x540)()
	bool                                         CallFunc_GetTheaterData_ReturnValue;               // 0x598(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x5A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWorldMapPin*                          CallFunc_FinishSpawningActor_ReturnValue;          // 0x5A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function WM_PinManager.WM_PinManager_C.UserConstructionScript
struct AWM_PinManager_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WM_PinManager.WM_PinManager_C.ReceiveBeginPlay
struct AWM_PinManager_C_ReceiveBeginPlay_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function WM_PinManager.WM_PinManager_C.ExecuteUbergraph_WM_PinManager
struct AWM_PinManager_C_ExecuteUbergraph_WM_PinManager_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
