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

// 0xB0 (0xB0 - 0x0)
// Function XpBoostCounts.XpBoostCounts_C.Update Available Boosts
struct UXpBoostCounts_C_Update_Available_Boosts_Params
{
public:
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue2;             // 0x18(0x18)()
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                      CallFunc_GetAccountItemWithDefinition_ReturnValue; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                      CallFunc_GetAccountItemWithDefinition_ReturnValue2; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2491[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x50(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x68(0x18)()
	class FText                                  CallFunc_GetDisplayName_ReturnValue2;              // 0x80(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue2;              // 0x98(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function XpBoostCounts.XpBoostCounts_C.Construct
struct UXpBoostCounts_C_Construct_Params
{
public:
};

// 0x24 (0x24 - 0x0)
// Function XpBoostCounts.XpBoostCounts_C.HandleAccountUpdate
struct UXpBoostCounts_C_HandleAccountUpdate_Params
{
public:
	struct FFortPublicAccountInfo                NewInfo;                                           // 0x0(0x24)(Parm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function XpBoostCounts.XpBoostCounts_C.Xp Boost Changed
struct UXpBoostCounts_C_Xp_Boost_Changed_Params
{
public:
	int32                                        BoostAmount;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function XpBoostCounts.XpBoostCounts_C.ExecuteUbergraph_XpBoostCounts
struct UXpBoostCounts_C_ExecuteUbergraph_XpBoostCounts_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2492[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPublicAccountInfo                K2Node_CustomEvent_NewInfo;                        // 0x30(0x24)(NoDestructor)
	int32                                        K2Node_CustomEvent_BoostAmount;                    // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
