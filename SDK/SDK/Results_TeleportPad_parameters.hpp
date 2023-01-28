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

// 0x3 (0x3 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.Should Hide Exit Timer
struct UResults_TeleportPad_C_Should_Hide_Exit_Timer_Params
{
public:
	bool                                         bHideExitTimer;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.Enable
struct UResults_TeleportPad_C_Enable_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.Disable
struct UResults_TeleportPad_C_Disable_Params
{
public:
};

// 0x1C (0x1C - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.Focus
struct UResults_TeleportPad_C_Focus_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResults_TeleportPadPlayer_C*          CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad;     // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidPad_bIsValid;                      // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC9 (0xC9 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.Initialize
struct UResults_TeleportPad_C_Initialize_Params
{
public:
	class UFortUIScoreReport*                    InScoreReport;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortCompletionResult             CompletionResult;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3645[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UResults_TeleportPadPlayer_C*          CurrentTeleportPad;                                // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentScoreReportIndex;                           // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3646[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIScoreReport*                    ScoreReport;                                       // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3647[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetPlayerCount_ReturnValue;               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_GetScoreReportIndicesByPlayerID_SortedScoreReportIndices; // 0x30(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3648[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPlayerCount_ReturnValue2;              // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item;                           // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3649[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UResults_TeleportPadPlayer_C*          CallFunc_Array_Get_Item2;                          // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_364A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UResults_TeleportPadPlayer_C*>  K2Node_MakeArray_Array;                            // 0x68(0x10)(ZeroConstructor, ReferenceParm)
	class AFortPlayerPawn*                       CallFunc_GetCurrentPlayerPawn_ReturnValue;         // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_364B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerState*                      K2Node_DynamicCast_AsFort_Player_State;            // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_364C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetPlatformUniqueNetId_ReturnValue;       // 0x98(0x18)(HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUniqueID_ReturnValue;                  // 0xB0(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValidNetID_ReturnValue;                 // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.Team Score Screen Intro
struct UResults_TeleportPad_C_Team_Score_Screen_Intro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.Team Score Screen Outro
struct UResults_TeleportPad_C_Team_Score_Screen_Outro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.Teleport Pad Screen Intro
struct UResults_TeleportPad_C_Teleport_Pad_Screen_Intro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_1_OnMissionStatsClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_1_OnMissionStatsClicked__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_2_OnMissionStatsClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_2_OnMissionStatsClicked__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_3_OnMissionStatsClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_3_OnMissionStatsClicked__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_4_OnMissionStatsClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_4_OnMissionStatsClicked__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.ExitButtonShown
struct UResults_TeleportPad_C_ExitButtonShown_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Anim_ExitButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__Anim_ExitButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Anim_ExitEnabled_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__Anim_ExitEnabled_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.OnExitTimerFinished
struct UResults_TeleportPad_C_OnExitTimerFinished_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.OnExitTimeRemainingUpdated
struct UResults_TeleportPad_C_OnExitTimeRemainingUpdated_Params
{
public:
	int32                                        TimeRemainingSeconds;                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.OnExitTimePercentagePassedUpdated
struct UResults_TeleportPad_C_OnExitTimePercentagePassedUpdated_Params
{
public:
	float                                        Percent;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_35_OnAddFriendClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_35_OnAddFriendClicked__DelegateSignature_Params
{
public:
	struct FUniqueNetIdRepl                      TargetId;                                          // 0x0(0x18)(Parm, HasGetValueTypeHash)
	class FString                                TargetName;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_0_OnAddFriendClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_0_OnAddFriendClicked__DelegateSignature_Params
{
public:
	struct FUniqueNetIdRepl                      TargetId;                                          // 0x0(0x18)(Parm, HasGetValueTypeHash)
	class FString                                TargetName;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_1_OnAddFriendClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_1_OnAddFriendClicked__DelegateSignature_Params
{
public:
	struct FUniqueNetIdRepl                      TargetId;                                          // 0x0(0x18)(Parm, HasGetValueTypeHash)
	class FString                                TargetName;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_2_OnAddFriendClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_2_OnAddFriendClicked__DelegateSignature_Params
{
public:
	struct FUniqueNetIdRepl                      TargetId;                                          // 0x0(0x18)(Parm, HasGetValueTypeHash)
	class FString                                TargetName;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_3_OnUpVoteClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_3_OnUpVoteClicked__DelegateSignature_Params
{
public:
	struct FUniqueNetIdRepl                      TargetId;                                          // 0x0(0x18)(Parm, HasGetValueTypeHash)
	class FString                                TargetName;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_4_OnUpVoteClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_4_OnUpVoteClicked__DelegateSignature_Params
{
public:
	struct FUniqueNetIdRepl                      TargetId;                                          // 0x0(0x18)(Parm, HasGetValueTypeHash)
	class FString                                TargetName;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_5_OnUpVoteClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_5_OnUpVoteClicked__DelegateSignature_Params
{
public:
	struct FUniqueNetIdRepl                      TargetId;                                          // 0x0(0x18)(Parm, HasGetValueTypeHash)
	class FString                                TargetName;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_6_OnUpVoteClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_6_OnUpVoteClicked__DelegateSignature_Params
{
public:
	struct FUniqueNetIdRepl                      TargetId;                                          // 0x0(0x18)(Parm, HasGetValueTypeHash)
	class FString                                TargetName;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__ButtonReturnHome_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__ButtonReturnHome_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Pad1_K2Node_ComponentBoundEvent_4_OnTeleportPadIntroFinished__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__Pad1_K2Node_ComponentBoundEvent_4_OnTeleportPadIntroFinished__DelegateSignature_Params
{
public:
	class UResults_TeleportPadPlayer_C*          TeleportPadPlayer;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Pad2_K2Node_ComponentBoundEvent_5_OnTeleportPadIntroFinished__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__Pad2_K2Node_ComponentBoundEvent_5_OnTeleportPadIntroFinished__DelegateSignature_Params
{
public:
	class UResults_TeleportPadPlayer_C*          TeleportPadPlayer;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Pad3_K2Node_ComponentBoundEvent_6_OnTeleportPadIntroFinished__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__Pad3_K2Node_ComponentBoundEvent_6_OnTeleportPadIntroFinished__DelegateSignature_Params
{
public:
	class UResults_TeleportPadPlayer_C*          TeleportPadPlayer;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Pad4_K2Node_ComponentBoundEvent_7_OnTeleportPadIntroFinished__DelegateSignature
struct UResults_TeleportPad_C_BndEvt__Pad4_K2Node_ComponentBoundEvent_7_OnTeleportPadIntroFinished__DelegateSignature_Params
{
public:
	class UResults_TeleportPadPlayer_C*          TeleportPadPlayer;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x221 (0x221 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.ExecuteUbergraph_Results_TeleportPad
struct UResults_TeleportPad_C_ExecuteUbergraph_Results_TeleportPad_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Should_Hide_Exit_Timer_bHideExitTimer;    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_A_Execution_Happened_Variable;           // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_B_Execution_Happened_Variable;           // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable2;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue2;                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable3;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue3;                  // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_364D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable2;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable3;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_364E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UResults_TeleportPadPlayer_C*          CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidPad_bIsValid;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_364F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UResults_TeleportPadPlayer_C*          CallFunc_Array_Get_Item2;                          // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue2;                // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidPad_bIsValid2;                     // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3650[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue3;                // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue2;                 // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3651[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable4;                    // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3652[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UResults_TeleportPadPlayer_C*          CallFunc_Array_Get_Item3;                          // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidPad_bIsValid3;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3653[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_TimeRemainingSeconds;                 // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Percent;                              // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_ComponentBoundEvent_TargetId8;              // 0x88(0x18)(HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_TargetName8;            // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UResults_TeleportPadPlayer_C*          CallFunc_Array_Get_Item4;                          // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidPad_bIsValid4;                     // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3654[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue4;                // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue3;                 // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3655[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      K2Node_ComponentBoundEvent_TargetId7;              // 0xC8(0x18)(HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_TargetName7;            // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_ComponentBoundEvent_TargetId6;              // 0xF0(0x18)(HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_TargetName6;            // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_ComponentBoundEvent_TargetId5;              // 0x118(0x18)(HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_TargetName5;            // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_ComponentBoundEvent_TargetId4;              // 0x140(0x18)(HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_TargetName4;            // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_ComponentBoundEvent_TargetId3;              // 0x168(0x18)(HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_TargetName3;            // 0x180(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_ComponentBoundEvent_TargetId2;              // 0x190(0x18)(HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_TargetName2;            // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_ComponentBoundEvent_TargetId;               // 0x1B8(0x18)(HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_TargetName;             // 0x1D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResults_TeleportPadPlayer_C*          K2Node_ComponentBoundEvent_TeleportPadPlayer4;     // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResults_TeleportPadPlayer_C*          K2Node_ComponentBoundEvent_TeleportPadPlayer3;     // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad;     // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad2;    // 0x1F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3656[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UResults_TeleportPadPlayer_C*          K2Node_ComponentBoundEvent_TeleportPadPlayer2;     // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResults_TeleportPadPlayer_C*          K2Node_ComponentBoundEvent_TeleportPadPlayer;      // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad3;    // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad4;    // 0x211(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3657[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable4;                   // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue4;                 // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3658[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue4;                  // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Should_Hide_Exit_Timer_bHideExitTimer2;   // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.OnUpVoteClicked__DelegateSignature
struct UResults_TeleportPad_C_OnUpVoteClicked__DelegateSignature_Params
{
public:
	struct FUniqueNetIdRepl                      TargetId;                                          // 0x0(0x18)(Parm, HasGetValueTypeHash)
	class FString                                TargetName;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.OnAddFriendClicked__DelegateSignature
struct UResults_TeleportPad_C_OnAddFriendClicked__DelegateSignature_Params
{
public:
	struct FUniqueNetIdRepl                      TargetId;                                          // 0x0(0x18)(Parm, HasGetValueTypeHash)
	class FString                                TargetName;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.OnExitClicked__DelegateSignature
struct UResults_TeleportPad_C_OnExitClicked__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPad.Results_TeleportPad_C.OnMissionStatsClicked__DelegateSignature
struct UResults_TeleportPad_C_OnMissionStatsClicked__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
