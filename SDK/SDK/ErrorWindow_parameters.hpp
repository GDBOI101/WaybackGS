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

// 0x8 (0x8 - 0x0)
// Function ErrorWindow.ErrorWindow_C.CloseErrorWindow
struct UErrorWindow_C_CloseErrorWindow_Params
{
public:
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ErrorWindow.ErrorWindow_C.GetShouldLogout
struct UErrorWindow_C_GetShouldLogout_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function ErrorWindow.ErrorWindow_C.Initialize
struct UErrorWindow_C_Initialize_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputManager*                   CallFunc_GetInputManager_ReturnValue;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetInputPriority_ReturnValue;             // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC1 (0xC1 - 0x0)
// Function ErrorWindow.ErrorWindow_C.AddError
struct UErrorWindow_C_AddError_Params
{
public:
	struct FFortErrorInfo                        ErrorInfo;                                         // 0x0(0x80)(Parm, OutParm, ReferenceParm)
	bool                                         First_Error;                                       // 0x80(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3952[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UErrorEntry_C*                         ErrorEntry;                                        // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Center_on_Widget_Did_Center;              // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3953[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue2;                   // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3954[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUserWidget*                     CallFunc_GetErrorEntry_ReturnValue;                // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UErrorEntry_C*                         K2Node_DynamicCast_AsError_Entry;                  // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ErrorWindow.ErrorWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
struct UErrorWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ErrorWindow.ErrorWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature
struct UErrorWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ErrorWindow.ErrorWindow_C.Construct
struct UErrorWindow_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ErrorWindow.ErrorWindow_C.Destruct
struct UErrorWindow_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ErrorWindow.ErrorWindow_C.OnBeginOutro
struct UErrorWindow_C_OnBeginOutro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ErrorWindow.ErrorWindow_C.OnBeginIntro
struct UErrorWindow_C_OnBeginIntro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ErrorWindow.ErrorWindow_C.IntroEnded
struct UErrorWindow_C_IntroEnded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ErrorWindow.ErrorWindow_C.OutroEnded
struct UErrorWindow_C_OutroEnded_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function ErrorWindow.ErrorWindow_C.ExecuteUbergraph_ErrorWindow
struct UErrorWindow_C_ExecuteUbergraph_ErrorWindow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3955[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button2;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
