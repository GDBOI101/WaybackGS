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

// 0x2A8 (0x2A8 - 0x0)
// Function ProgressModalWidget.ProgressModalWidget_C.OnAnalogValueChanged
struct UProgressModalWidget_C_OnAnalogValueChanged_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_394C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnalogInputEvent                     InAnalogInputEvent;                                // 0x38(0x48)(Parm)
	struct FEventReply                           ReturnValue;                                       // 0x80(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x138(0xB8)()
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x1F0(0xB8)()
};

// 0x90 (0x90 - 0x0)
// Function ProgressModalWidget.ProgressModalWidget_C.SetIcon
struct UProgressModalWidget_C_SetIcon_Params
{
public:
	struct FSlateBrush                           Icon;                                              // 0x0(0x90)(Parm)
};

// 0x18 (0x18 - 0x0)
// Function ProgressModalWidget.ProgressModalWidget_C.SetDescription
struct UProgressModalWidget_C_SetDescription_Params
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(Parm)
};

// 0x18 (0x18 - 0x0)
// Function ProgressModalWidget.ProgressModalWidget_C.SetTitle
struct UProgressModalWidget_C_SetTitle_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(Parm)
};

// 0x8 (0x8 - 0x0)
// Function ProgressModalWidget.ProgressModalWidget_C.Initialize
struct UProgressModalWidget_C_Initialize_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ProgressModalWidget.ProgressModalWidget_C.Construct
struct UProgressModalWidget_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ProgressModalWidget.ProgressModalWidget_C.HandleIntroEnded
struct UProgressModalWidget_C_HandleIntroEnded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ProgressModalWidget.ProgressModalWidget_C.HandleOutroEnded
struct UProgressModalWidget_C_HandleOutroEnded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ProgressModalWidget.ProgressModalWidget_C.OnBeginIntro
struct UProgressModalWidget_C_OnBeginIntro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ProgressModalWidget.ProgressModalWidget_C.OnBeginOutro
struct UProgressModalWidget_C_OnBeginOutro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ProgressModalWidget.ProgressModalWidget_C.Destruct
struct UProgressModalWidget_C_Destruct_Params
{
public:
};

// 0x48 (0x48 - 0x0)
// Function ProgressModalWidget.ProgressModalWidget_C.ExecuteUbergraph_ProgressModalWidget
struct UProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_394D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x28(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x38(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
