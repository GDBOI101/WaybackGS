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
// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.PlayIntro
struct UHordeWaveModifiersTile_C_PlayIntro_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.SetModifierItem
struct UHordeWaveModifiersTile_C_SetModifierItem_Params
{
public:
	class UFortItem*                             ModifierItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D7B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0x10(0x18)()
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x28(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.OnAnimReadyForNextModifier
struct UHordeWaveModifiersTile_C_OnAnimReadyForNextModifier_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.SetData
struct UHordeWaveModifiersTile_C_SetData_Params
{
public:
	class UObject*                               InData;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.ExecuteUbergraph_HordeWaveModifiersTile
struct UHordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D7C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_InData;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             K2Node_DynamicCast_AsFort_Item;                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D7D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0x20(0x18)()
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x38(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.OnReadyForNextModifierPresentation__DelegateSignature
struct UHordeWaveModifiersTile_C_OnReadyForNextModifierPresentation__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
