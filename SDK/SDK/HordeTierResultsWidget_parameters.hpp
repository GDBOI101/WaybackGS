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

// 0x178 (0x178 - 0x0)
// Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnHandleAction
struct UHordeTierResultsWidget_C_OnHandleAction_Params
{
public:
	struct FEventReply                           Result;                                            // 0x0(0xB8)(Parm, OutParm)
	bool                                         bPassThrough;                                      // 0xB8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xC0(0xB8)()
};

// 0x18 (0x18 - 0x0)
// Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnEndOfMovieReached
struct UHordeTierResultsWidget_C_OnEndOfMovieReached_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	class UMediaPlayer*                          CallFunc_GetMediaPlayer_ReturnValue;               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x400 (0x400 - 0x0)
// Function HordeTierResultsWidget.HordeTierResultsWidget_C.ChooseMediaToUse
struct UHordeTierResultsWidget_C_ChooseMediaToUse_Params
{
public:
	class UMediaSource*                          MediaToUse;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                StringTest;                                        // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortCompletionResult             Temp_byte_Variable;                                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortCompletionResult             Temp_byte_Variable2;                               // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32F4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortBasicMissionInfo                 CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo; // 0x28(0x3B8)()
	bool                                         CallFunc_GetCurrentBasicMissionInfo_ReturnValue;   // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaSource*                          K2Node_Select_Default;                             // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                          K2Node_Select2_Default;                            // 0x3F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                          K2Node_Select3_Default;                            // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function HordeTierResultsWidget.HordeTierResultsWidget_C.Initialize
struct UHordeTierResultsWidget_C_Initialize_Params
{
public:
	enum class EFortCompletionResult             Result;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortCompletionResult             Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32F6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x10(0x8)(NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function HordeTierResultsWidget.HordeTierResultsWidget_C.InitializeMovie
struct UHordeTierResultsWidget_C_InitializeMovie_Params
{
public:
	class UMediaSource*                          MediaToUse;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UMediaSource*                          CallFunc_ChooseMediaToUse_MediaToUse;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaPlayer*                          CallFunc_GetMediaPlayer_ReturnValue;               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnTierResultsWidgetComplete__DelegateSignature
struct UHordeTierResultsWidget_C_OnTierResultsWidgetComplete__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
