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

// 0x21 (0x21 - 0x0)
// Function ToastDisplayArea.ToastDisplayArea_C.AttemptDisplayNextToast
struct UToastDisplayArea_C_AttemptDisplayNextToast_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30F2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30F3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINotification*                   CallFunc_GetNextNotification_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function ToastDisplayArea.ToastDisplayArea_C.RegisterToastHandler
struct UToastDisplayArea_C_RegisterToastHandler_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINotificationQueue*              CallFunc_GetUINotificationQueue_ReturnValue;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ToastDisplayArea.ToastDisplayArea_C.Construct
struct UToastDisplayArea_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastDisplayArea.ToastDisplayArea_C.HandleNewToastAvailable
struct UToastDisplayArea_C_HandleNewToastAvailable_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastDisplayArea.ToastDisplayArea_C.Destruct
struct UToastDisplayArea_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastDisplayArea.ToastDisplayArea_C.BndEvt__ToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature
struct UToastDisplayArea_C_BndEvt__ToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastDisplayArea.ToastDisplayArea_C.BndEvt__PowerToastWidget_K2Node_ComponentBoundEvent_8_OnFinishedToast__DelegateSignature
struct UToastDisplayArea_C_BndEvt__PowerToastWidget_K2Node_ComponentBoundEvent_8_OnFinishedToast__DelegateSignature_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function ToastDisplayArea.ToastDisplayArea_C.ExecuteUbergraph_ToastDisplayArea
struct UToastDisplayArea_C_ExecuteUbergraph_ToastDisplayArea_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
