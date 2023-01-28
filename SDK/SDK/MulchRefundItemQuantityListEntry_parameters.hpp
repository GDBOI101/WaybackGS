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

// 0x10 (0x10 - 0x0)
// Function MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C.UpdateItemAndQuantity
struct UMulchRefundItemQuantityListEntry_C_UpdateItemAndQuantity_Params
{
public:
	bool                                         DirectlySetQuantity;                               // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D86[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   CallFunc_GetItemDefinition_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C.HandleDifferentItemOrQuantitySetBP
struct UMulchRefundItemQuantityListEntry_C_HandleDifferentItemOrQuantitySetBP_Params
{
public:
	bool                                         IsBeingReset;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C.Construct
struct UMulchRefundItemQuantityListEntry_C_Construct_Params
{
public:
};

// 0x5 (0x5 - 0x0)
// Function MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C.ExecuteUbergraph_MulchRefundItemQuantityListEntry
struct UMulchRefundItemQuantityListEntry_C_ExecuteUbergraph_MulchRefundItemQuantityListEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsBeingReset;                         // 0x4(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
