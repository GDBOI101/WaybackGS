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
// Function RotatorSelector.RotatorSelector_C.Update Options
struct URotatorSelector_C_Update_Options_Params
{
public:
	TArray<class FText>                          NewParam;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function RotatorSelector.RotatorSelector_C.Center on Widget
struct URotatorSelector_C_Center_on_Widget_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function RotatorSelector.RotatorSelector_C.Initialize
struct URotatorSelector_C_Initialize_Params
{
public:
	class FText                                  Display_Text;                                      // 0x0(0x18)(Parm)
	TArray<class FText>                          Options;                                           // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FText                                  Hover_Text;                                        // 0x28(0x18)(Parm)
	class UCommonTextBlock*                      Tab_Tooltip;                                       // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function RotatorSelector.RotatorSelector_C.Update Row Selector
struct URotatorSelector_C_Update_Row_Selector_Params
{
public:
	int32                                        Currently_Selected;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function RotatorSelector.RotatorSelector_C.Construct
struct URotatorSelector_C_Construct_Params
{
public:
};

// 0x78 (0x78 - 0x0)
// Function RotatorSelector.RotatorSelector_C.OnMouseLeave
struct URotatorSelector_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0xB0 (0xB0 - 0x0)
// Function RotatorSelector.RotatorSelector_C.OnMouseEnter
struct URotatorSelector_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A44[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function RotatorSelector.RotatorSelector_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature
struct URotatorSelector_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x130 (0x130 - 0x0)
// Function RotatorSelector.RotatorSelector_C.ExecuteUbergraph_RotatorSelector
struct URotatorSelector_C_ExecuteUbergraph_RotatorSelector_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Value;                  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_Event_MouseEvent2;                          // 0x8(0x78)(ConstParm)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x80(0x34)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A45[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xB8(0x78)(ConstParm)
};

// 0x4 (0x4 - 0x0)
// Function RotatorSelector.RotatorSelector_C.Selection Changed__DelegateSignature
struct URotatorSelector_C_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
