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

// 0x1 (0x1 - 0x0)
// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.HandleNextAction
struct UAthenaBannerSelectModal_C_HandleNextAction_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.HandlePreviousAction
struct UAthenaBannerSelectModal_C_HandlePreviousAction_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Setup Input Action Handlers
struct UAthenaBannerSelectModal_C_Setup_Input_Action_Handlers_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.HandleCloseAction
struct UAthenaBannerSelectModal_C_HandleCloseAction_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F56[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Construct
struct UAthenaBannerSelectModal_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_14_CloseProfileModal__DelegateSignature
struct UAthenaBannerSelectModal_C_BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_14_CloseProfileModal__DelegateSignature_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature
struct UAthenaBannerSelectModal_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature_Params
{
public:
	class FName                                  IconId;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ColorId;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.OnDeactivated
struct UAthenaBannerSelectModal_C_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.OnActivated
struct UAthenaBannerSelectModal_C_OnActivated_Params
{
public:
};

// 0x1A (0x1A - 0x0)
// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.ExecuteUbergraph_AthenaBannerSelectModal
struct UAthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F57[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_ComponentBoundEvent_IconId;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_ComponentBoundEvent_ColorId;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HandleCloseAction_PassThrough;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleCloseAction_PassThrough2;           // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
