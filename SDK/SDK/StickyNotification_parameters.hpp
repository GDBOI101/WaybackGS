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
// Function StickyNotification.StickyNotification_C.CloseSticky
struct UStickyNotification_C_CloseSticky_Params
{
public:
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function StickyNotification.StickyNotification_C.BindDelegates
struct UStickyNotification_C_BindDelegates_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class UFortDialogNotificationHandler*        K2Node_DynamicCast_AsFort_Dialog_Notification_Handler; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D47[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x40(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x50(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x60(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate7;             // 0x70(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate8;             // 0x80(0x10)(ZeroConstructor, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function StickyNotification.StickyNotification_C.InitializeNotification
struct UStickyNotification_C_InitializeNotification_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StickyNotification.StickyNotification_C.Handle_OutroFinished
struct UStickyNotification_C_Handle_OutroFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StickyNotification.StickyNotification_C.Handle_ShowContentsFinished
struct UStickyNotification_C_Handle_ShowContentsFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StickyNotification.StickyNotification_C.Handle_HideFinished
struct UStickyNotification_C_Handle_HideFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StickyNotification.StickyNotification_C.Handle_IntroFinished
struct UStickyNotification_C_Handle_IntroFinished_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function StickyNotification.StickyNotification_C.BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_826_FortBaseButtonClicked__DelegateSignature
struct UStickyNotification_C_BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_826_FortBaseButtonClicked__DelegateSignature_Params
{
public:
	class UFortBaseButton*                       Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StickyNotification.StickyNotification_C.Handle_IntroStarted
struct UStickyNotification_C_Handle_IntroStarted_Params
{
public:
};

// 0x78 (0x78 - 0x0)
// Function StickyNotification.StickyNotification_C.OnMouseLeave
struct UStickyNotification_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0xB0 (0xB0 - 0x0)
// Function StickyNotification.StickyNotification_C.OnMouseEnter
struct UStickyNotification_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D48[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function StickyNotification.StickyNotification_C.BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_1161_On Mouse Hovered Changed__DelegateSignature
struct UStickyNotification_C_BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_1161_On_Mouse_Hovered_Changed__DelegateSignature_Params
{
public:
	bool                                         Is_Hovered;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function StickyNotification.StickyNotification_C.BndEvt__ButtonIconText_Close_K2Node_ComponentBoundEvent_1644_FortBaseButtonClicked__DelegateSignature
struct UStickyNotification_C_BndEvt__ButtonIconText_Close_K2Node_ComponentBoundEvent_1644_FortBaseButtonClicked__DelegateSignature_Params
{
public:
	class UFortBaseButton*                       Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StickyNotification.StickyNotification_C.Handle_OpenFinished
struct UStickyNotification_C_Handle_OpenFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StickyNotification.StickyNotification_C.HandleAccepted
struct UStickyNotification_C_HandleAccepted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StickyNotification.StickyNotification_C.Construct
struct UStickyNotification_C_Construct_Params
{
public:
};

// 0x151 (0x151 - 0x0)
// Function StickyNotification.StickyNotification_C.ExecuteUbergraph_StickyNotification
struct UStickyNotification_C_ExecuteUbergraph_StickyNotification_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D49[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortBaseButton*                       K2Node_ComponentBoundEvent_Button2;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_Event_MouseEvent2;                          // 0x18(0x78)(ConstParm)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x90(0x34)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xC8(0x78)(ConstParm)
	bool                                         K2Node_ComponentBoundEvent_Is_Hovered;             // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D4B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortBaseButton*                       K2Node_ComponentBoundEvent_Button;                 // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
