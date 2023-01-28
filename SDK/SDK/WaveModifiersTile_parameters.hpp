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
// Function WaveModifiersTile.WaveModifiersTile_C.PlayIntro
struct UWaveModifiersTile_C_PlayIntro_Params
{
public:
};

// 0xD0 (0xD0 - 0x0)
// Function WaveModifiersTile.WaveModifiersTile_C.SetModifierItem
struct UWaveModifiersTile_C_SetModifierItem_Params
{
public:
	class UFortItem*                             ModifierItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x10(0x90)()
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0xA0(0x18)()
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0xB8(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function WaveModifiersTile.WaveModifiersTile_C.OnAnimReadyForNextModifier
struct UWaveModifiersTile_C_OnAnimReadyForNextModifier_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function WaveModifiersTile.WaveModifiersTile_C.SetData
struct UWaveModifiersTile_C_SetData_Params
{
public:
	class UObject*                               InData;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function WaveModifiersTile.WaveModifiersTile_C.ExecuteUbergraph_WaveModifiersTile
struct UWaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DA2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_InData;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             K2Node_DynamicCast_AsFort_Item;                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DA3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x20(0x90)()
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0xB0(0x18)()
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0xC8(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function WaveModifiersTile.WaveModifiersTile_C.OnReadyForNextModifierPresentation__DelegateSignature
struct UWaveModifiersTile_C_OnReadyForNextModifierPresentation__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
