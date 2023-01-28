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

// 0x20 (0x20 - 0x0)
// Function PanelButton.PanelButton_C.UpdateStyle
struct UPanelButton_C_UpdateStyle_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_259D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ActionText;                                        // 0x8(0x18)(Edit)
};

// 0x0 (0x0 - 0x0)
// Function PanelButton.PanelButton_C.InitializeButton
struct UPanelButton_C_InitializeButton_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function PanelButton.PanelButton_C.UpdateTextAndStyle
struct UPanelButton_C_UpdateTextAndStyle_Params
{
public:
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function PanelButton.PanelButton_C.PreConstruct
struct UPanelButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function PanelButton.PanelButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
struct UPanelButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function PanelButton.PanelButton_C.OnTriggeredInputActionChanged
struct UPanelButton_C_OnTriggeredInputActionChanged_Params
{
public:
	struct FDataTableRowHandle                   NewTriggeredAction;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function PanelButton.PanelButton_C.OnActionProgress
struct UPanelButton_C_OnActionProgress_Params
{
public:
	float                                        HeldPercent;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PanelButton.PanelButton_C.OnActionComplete
struct UPanelButton_C_OnActionComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PanelButton.PanelButton_C.Construct
struct UPanelButton_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PanelButton.PanelButton_C.OnHovered
struct UPanelButton_C_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PanelButton.PanelButton_C.OnUnhovered
struct UPanelButton_C_OnUnhovered_Params
{
public:
};

// 0x24 (0x24 - 0x0)
// Function PanelButton.PanelButton_C.ExecuteUbergraph_PanelButton
struct UPanelButton_C_ExecuteUbergraph_PanelButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bUsingGamepad;          // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_259E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_Event_NewTriggeredAction;                   // 0x10(0x10)(ConstParm, NoDestructor)
	float                                        K2Node_Event_HeldPercent;                          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
