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

// 0x28 (0x28 - 0x0)
// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Completed_A3A081314405D22C4EED5CB989DC8CB1
struct UGA_DefaultPlayer_Consumable_C_Completed_A3A081314405D22C4EED5CB989DC8CB1_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Cancelled_A3A081314405D22C4EED5CB989DC8CB1
struct UGA_DefaultPlayer_Consumable_C_Cancelled_A3A081314405D22C4EED5CB989DC8CB1_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Triggered_A3A081314405D22C4EED5CB989DC8CB1
struct UGA_DefaultPlayer_Consumable_C_Triggered_A3A081314405D22C4EED5CB989DC8CB1_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.K2_ActivateAbilityFromEvent
struct UGA_DefaultPlayer_Consumable_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xA8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x1B1 (0x1B1 - 0x0)
// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.ExecuteUbergraph_GA_DefaultPlayer_Consumable
struct UGA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3430[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x8(0xA8)(ConstParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xB0(0x10)(ZeroConstructor, NoDestructor)
	class UFortConsumableItemDefinition*         K2Node_DynamicCast_AsFort_Consumable_Item_Definition; // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3431[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData3;                    // 0xD0(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag3;                // 0xF0(0x8)(NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CallFunc_GetUseAnimation_ReturnValue;              // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAnimPlayRate_ReturnValue;              // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3432[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue;        // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x110(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3433[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData2;                    // 0x128(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag2;                // 0x148(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData;                     // 0x150(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag;                 // 0x170(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x178(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x188(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable2;                             // 0x190(0x20)()
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
