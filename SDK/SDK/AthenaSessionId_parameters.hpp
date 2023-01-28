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
// Function AthenaSessionId.AthenaSessionId_C.UpdateSessionId
struct UAthenaSessionId_C_UpdateSessionId_Params
{
public:
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetSessionId_ReturnValue;                 // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function AthenaSessionId.AthenaSessionId_C.Construct
struct UAthenaSessionId_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function AthenaSessionId.AthenaSessionId_C.ExecuteUbergraph_AthenaSessionId
struct UAthenaSessionId_C_ExecuteUbergraph_AthenaSessionId_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
