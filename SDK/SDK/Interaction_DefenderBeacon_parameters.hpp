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

// 0x12 (0x12 - 0x0)
// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.CheckAmmoValid
struct UInteraction_DefenderBeacon_C_CheckAmmoValid_Params
{
public:
	bool                                         AmmoValid;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3682[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAIPawn*                           LocalDefenderPawn;                                 // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x32 (0x32 - 0x0)
// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.DisplayWeaponType
struct UInteraction_DefenderBeacon_C_DisplayWeaponType_Params
{
public:
	class AFortAIPawn*                           LocalDefenderPawn;                                 // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TagMelee;                                          // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TagPistol;                                         // 0x10(0x8)(Edit, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TagSniper;                                         // 0x18(0x8)(Edit, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TagShotgun;                                        // 0x20(0x8)(Edit, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TagAssault;                                        // 0x28(0x8)(Edit, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.Construct
struct UInteraction_DefenderBeacon_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.UpdateDefenderBeaconWidget
struct UInteraction_DefenderBeacon_C_UpdateDefenderBeaconWidget_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.Destruct
struct UInteraction_DefenderBeacon_C_Destruct_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.OnDefenderEquippedWeapon
struct UInteraction_DefenderBeacon_C_OnDefenderEquippedWeapon_Params
{
public:
	class AFortWeapon*                           NewWeapon;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                           OldWeapon;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function Interaction_DefenderBeacon.Interaction_DefenderBeacon_C.ExecuteUbergraph_Interaction_DefenderBeacon
struct UInteraction_DefenderBeacon_C_ExecuteUbergraph_Interaction_DefenderBeacon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3683[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3684[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	class FText                                  CallFunc_GetLastInteractErrorText_ReturnValue;     // 0x30(0x18)()
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3685[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_K2_FindExistingItemForDefinition_ReturnValue; // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue4;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue5;                     // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue6;                     // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3686[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_K2_FindExistingItemForDefinition_ReturnValue2; // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckAmmoValid_AmmoValid;                 // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CheckAmmoValid_AmmoValid2;                // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3687[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetRemainingAmmo_ReturnValue;             // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*              CallFunc_GetAmmoWorldItemDefinition_BP_ReturnValue; // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue7;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3688[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x88(0x10)(ZeroConstructor, NoDestructor)
	class AFortWeapon*                           K2Node_CustomEvent_NewWeapon;                      // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                           K2Node_CustomEvent_OldWeapon;                      // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0xA8(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
