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
// Function Credits.Credits_C.Reset
struct UCredits_C_Reset_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function Credits.Credits_C.CaptureEndPoint
struct UCredits_C_CaptureEndPoint_Params
{
public:
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function Credits.Credits_C.ScrollCredits
struct UCredits_C_ScrollCredits_Params
{
public:
	float                                        CurrentPosition;                                   // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScrollOffset_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Credits.Credits_C.ToggleScrollTimer
struct UCredits_C_ToggleScrollTimer_Params
{
public:
	bool                                         EnableTimer;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B26[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Credits.Credits_C.HandleBack
struct UCredits_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B27[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Credits.Credits_C.HandleFadeInFinished
struct UCredits_C_HandleFadeInFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Credits.Credits_C.OnDeactivated
struct UCredits_C_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Credits.Credits_C.OnActivated
struct UCredits_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Credits.Credits_C.Construct
struct UCredits_C_Construct_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function Credits.Credits_C.ExecuteUbergraph_Credits
struct UCredits_C_ExecuteUbergraph_Credits_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B28[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
