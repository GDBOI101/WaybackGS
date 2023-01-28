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

// 0x58 (0x58 - 0x0)
// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.GetToolTipWidget_0
struct UBP_FortLiveStreamGrantWindowExpires_C_GetToolTipWidget_0_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x20(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue2;             // 0x38(0x18)()
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Clean Up Name Text
struct UBP_FortLiveStreamGrantWindowExpires_C_Clean_Up_Name_Text_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Update Name Text
struct UBP_FortLiveStreamGrantWindowExpires_C_Update_Name_Text_Params
{
public:
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Array_Get_Item;                           // 0x8(0x18)()
};

// 0x40 (0x40 - 0x0)
// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Update Expiration Text
struct UBP_FortLiveStreamGrantWindowExpires_C_Update_Expiration_Text_Params
{
public:
	struct FTimespan                             Timespan;                                          // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetTotalSeconds_ReturnValue;              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetTotalSeconds_ReturnValue2;             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimespan                             CallFunc_FromSeconds_ReturnValue;                  // 0x20(0x8)(NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetTimespanAsText_ReturnValue;            // 0x28(0x18)()
};

// 0x90 (0x90 - 0x0)
// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Set Stream Brush
struct UBP_FortLiveStreamGrantWindowExpires_C_Set_Stream_Brush_Params
{
public:
	struct FSlateBrush                           InBrush;                                           // 0x0(0x90)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.PreConstruct
struct UBP_FortLiveStreamGrantWindowExpires_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Construct
struct UBP_FortLiveStreamGrantWindowExpires_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.OnLiveStreamingQuestWindowStarts_Event_0
struct UBP_FortLiveStreamGrantWindowExpires_C_OnLiveStreamingQuestWindowStarts_Event_0_Params
{
public:
	float                                        Seconds;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.OnLiveStreamingQuestWindowEnds_Event_0
struct UBP_FortLiveStreamGrantWindowExpires_C_OnLiveStreamingQuestWindowEnds_Event_0_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.OnLiveStreamingQuestWindowSelectedViewers_Event_0
struct UBP_FortLiveStreamGrantWindowExpires_C_OnLiveStreamingQuestWindowSelectedViewers_Event_0_Params
{
public:
	TArray<class FText>                          Names;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.HandleSimulateExpirationTimer
struct UBP_FortLiveStreamGrantWindowExpires_C_HandleSimulateExpirationTimer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.OnAnimation_Finished
struct UBP_FortLiveStreamGrantWindowExpires_C_OnAnimation_Finished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Handle Wait Between Names
struct UBP_FortLiveStreamGrantWindowExpires_C_Handle_Wait_Between_Names_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.TextFadedOut
struct UBP_FortLiveStreamGrantWindowExpires_C_TextFadedOut_Params
{
public:
};

// 0xD1 (0xD1 - 0x0)
// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.ExecuteUbergraph_BP_FortLiveStreamGrantWindowExpires
struct UBP_FortLiveStreamGrantWindowExpires_C_ExecuteUbergraph_BP_FortLiveStreamGrantWindowExpires_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimespan                             CallFunc_MakeTimespan_ReturnValue;                 // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Seconds;                        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimespan                             CallFunc_FromSeconds_ReturnValue;                  // 0x20(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x40(0x8)(NoDestructor)
	TArray<class FText>                          K2Node_CustomEvent_Names;                          // 0x48(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x58(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x68(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x78(0x10)(ZeroConstructor, NoDestructor)
	struct FTimespan                             CallFunc_Subtract_TimespanTimespan_ReturnValue;    // 0x88(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTotalSeconds_ReturnValue;              // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32EA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x98(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue2;                // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue2;           // 0xAD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32EB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetBroadcasterGrantWindowSecondsRemaining_ReturnValue; // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0xB8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue2;         // 0xC8(0x8)(NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.StreamTimerStarted__DelegateSignature
struct UBP_FortLiveStreamGrantWindowExpires_C_StreamTimerStarted__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.StreamTimerExpired__DelegateSignature
struct UBP_FortLiveStreamGrantWindowExpires_C_StreamTimerExpired__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
