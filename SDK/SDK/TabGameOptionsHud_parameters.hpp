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
// Function TabGameOptionsHud.TabGameOptionsHud_C.Construct
struct UTabGameOptionsHud_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabGameOptionsHud.TabGameOptionsHud_C.UpdateOptionsTab
struct UTabGameOptionsHud_C_UpdateOptionsTab_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabGameOptionsHud.TabGameOptionsHud_C.CenterOnTab
struct UTabGameOptionsHud_C_CenterOnTab_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function TabGameOptionsHud.TabGameOptionsHud_C.BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_37_OnListViewItemWidgetCreated__DelegateSignature
struct UTabGameOptionsHud_C_BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_37_OnListViewItemWidgetCreated__DelegateSignature_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function TabGameOptionsHud.TabGameOptionsHud_C.HUD Changed
struct UTabGameOptionsHud_C_HUD_Changed_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_246E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Gameplay_Tag;                                      // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function TabGameOptionsHud.TabGameOptionsHud_C.ExecuteUbergraph_TabGameOptionsHud
struct UTabGameOptionsHud_C_ExecuteUbergraph_TabGameOptionsHud_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_246F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UUserWidget*                           K2Node_ComponentBoundEvent_Widget;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOptionsMenuHudRotator_C*              K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator;     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2470[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Selected_Index;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_CustomEvent_Gameplay_Tag;                   // 0x30(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2471[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetItemAt_ReturnValue;                    // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
