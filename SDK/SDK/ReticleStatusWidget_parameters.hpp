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
// Function ReticleStatusWidget.ReticleStatusWidget_C.Construct
struct UReticleStatusWidget_C_Construct_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function ReticleStatusWidget.ReticleStatusWidget_C.OnUnableToPerformAction
struct UReticleStatusWidget_C_OnUnableToPerformAction_Params
{
public:
	struct FGameplayTagContainer                 FailedReason;                                      // 0x0(0x20)(Parm)
	class FText                                  FailureText;                                       // 0x20(0x18)(Parm)
};

// 0x58 (0x58 - 0x0)
// Function ReticleStatusWidget.ReticleStatusWidget_C.ExecuteUbergraph_ReticleStatusWidget
struct UReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B90[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 K2Node_CustomEvent_FailedReason;                   // 0x8(0x20)()
	class FText                                  K2Node_CustomEvent_FailureText;                    // 0x28(0x18)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x40(0x10)(ZeroConstructor, NoDestructor)
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
