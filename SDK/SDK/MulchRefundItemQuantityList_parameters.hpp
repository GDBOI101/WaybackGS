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

// 0x8 (0x8 - 0x0)
// Function MulchRefundItemQuantityList.MulchRefundItemQuantityList_C.AddListEntry
struct UMulchRefundItemQuantityList_C_AddListEntry_Params
{
public:
	class UFortItemQuantityListEntryBase*        ListEntry;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function MulchRefundItemQuantityList.MulchRefundItemQuantityList_C.ExecuteUbergraph_MulchRefundItemQuantityList
struct UMulchRefundItemQuantityList_C_ExecuteUbergraph_MulchRefundItemQuantityList_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x4(0x10)(NoDestructor)
	uint8                                        Pad_2F68[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemQuantityListEntryBase*        K2Node_Event_ListEntry;                            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
