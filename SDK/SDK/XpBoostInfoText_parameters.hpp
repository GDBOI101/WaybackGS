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

// 0x39 (0x39 - 0x0)
// Function XpBoostInfoText.XpBoostInfoText_C.Update Available Boosts
struct UXpBoostInfoText_C_Update_Available_Boosts_Params
{
public:
	class UFortItemDefinition*                   Xpboostitem;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                   CallFunc_SpawnTooltipContextWithSource_ReturnValue; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCombinedDescription_OutDescription;    // 0x20(0x18)()
	bool                                         CallFunc_GetCombinedDescription_ReturnValue;       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function XpBoostInfoText.XpBoostInfoText_C.Construct
struct UXpBoostInfoText_C_Construct_Params
{
public:
};

// 0x24 (0x24 - 0x0)
// Function XpBoostInfoText.XpBoostInfoText_C.HandleAccountUpdate
struct UXpBoostInfoText_C_HandleAccountUpdate_Params
{
public:
	struct FFortPublicAccountInfo                NewInfo;                                           // 0x0(0x24)(Parm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function XpBoostInfoText.XpBoostInfoText_C.Xp Boost Changed
struct UXpBoostInfoText_C_Xp_Boost_Changed_Params
{
public:
	int32                                        BoostAmount;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function XpBoostInfoText.XpBoostInfoText_C.ExecuteUbergraph_XpBoostInfoText
struct UXpBoostInfoText_C_ExecuteUbergraph_XpBoostInfoText_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3681[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
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
