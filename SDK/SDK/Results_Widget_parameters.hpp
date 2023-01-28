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

// 0x3CA (0x3CA - 0x0)
// Function Results_Widget.Results_Widget_C.UseVideos
struct UResults_Widget_C_UseVideos_Params
{
public:
	bool                                         bVideos;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShouldShowMissionResultsMovies_ReturnValue; // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D7B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortBasicMissionInfo                 CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo; // 0x10(0x3B8)()
	bool                                         CallFunc_GetCurrentBasicMissionInfo_ReturnValue;   // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function Results_Widget.Results_Widget_C.Focus
struct UResults_Widget_C_Focus_Params
{
public:
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue2;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D7C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue3;                   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Results_Widget.Results_Widget_C.InitializeInput
struct UResults_Widget_C_InitializeInput_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Results_Widget.Results_Widget_C.OnInputSkip
struct UResults_Widget_C_OnInputSkip_Params
{
public:
	bool                                         bCommited;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function Results_Widget.Results_Widget_C.LogAnalytics
struct UResults_Widget_C_LogAnalytics_Params
{
public:
	class FString                                ScreenName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         bSkipped;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D7D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetRealTimeSeconds_ReturnValue;           // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function Results_Widget.Results_Widget_C.PlayMissionResultSound
struct UResults_Widget_C_PlayMissionResultSound_Params
{
public:
	enum class EFortCompletionResult             Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D7E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function Results_Widget.Results_Widget_C.Toggle Top Level Tab Controls
struct UResults_Widget_C_Toggle_Top_Level_Tab_Controls_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D7F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIStateWidget_NUI*                CallFunc_GetCurrentUIStateWidget_ReturnValue;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHUD_C*                                K2Node_DynamicCast_AsHUD;                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function Results_Widget.Results_Widget_C.SpawnResultsMusic
struct UResults_Widget_C_SpawnResultsMusic_Params
{
public:
	enum class EFortCompletionResult             Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D80[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function Results_Widget.Results_Widget_C.Toggle Chat
struct UResults_Widget_C_Toggle_Chat_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D81[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIStateWidget_NUI*                CallFunc_GetCurrentUIStateWidget_ReturnValue;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHUD_C*                                K2Node_DynamicCast_AsHUD;                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x418 (0x418 - 0x0)
// Function Results_Widget.Results_Widget_C.Initialize Video
struct UResults_Widget_C_Initialize_Video_Params
{
public:
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UseVideos_bVideos;                        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D82[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortBasicMissionInfo                 CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo; // 0x10(0x3B8)()
	bool                                         CallFunc_GetCurrentBasicMissionInfo_ReturnValue;   // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D83[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x3D0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D84[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaPlayer*                          CallFunc_GetMediaPlayer_ReturnValue;               // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x3F8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D86[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaSource*                          K2Node_Select_Default;                             // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function Results_Widget.Results_Widget_C.Initialize
struct UResults_Widget_C_Initialize_Params
{
public:
	class UFortUIScoreReport*                    ScoreReport;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                     RewardData;                                        // 0x8(0x10)(Edit, ZeroConstructor)
	class FText                                  Temp_text_Variable;                                // 0x18(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x30(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x48(0x18)()
	class FText                                  Temp_text_Variable4;                               // 0x60(0x18)()
	int32                                        CallFunc_GetTotalMissionPointsEarned_ReturnValue;  // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortCompletionResult             Temp_byte_Variable;                                // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D87[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIScoreReport*                    CallFunc_GetScoreReport_ReturnValue;               // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0x90(0x18)()
	enum class EFortCompletionResult             CallFunc_GetZoneCompletionResult_ReturnValue;      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D88[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortItem*>                     CallFunc_GetRewardsByType_OutRewards;              // 0xB0(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.BndEvt__ResultsSummary_K2Node_ComponentBoundEvent_1_OnReturnClicked__DelegateSignature
struct UResults_Widget_C_BndEvt__ResultsSummary_K2Node_ComponentBoundEvent_1_OnReturnClicked__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.Teleport Scene Sequence
struct UResults_Widget_C_Teleport_Scene_Sequence_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature
struct UResults_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature_Params
{
public:
	struct FUniqueNetIdRepl                      TargetId;                                          // 0x0(0x18)(Parm, HasGetValueTypeHash)
	class FString                                TargetName;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature
struct UResults_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature_Params
{
public:
	struct FUniqueNetIdRepl                      TargetId;                                          // 0x0(0x18)(Parm, HasGetValueTypeHash)
	class FString                                TargetName;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_5_OnMissionStatsClicked__DelegateSignature
struct UResults_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_5_OnMissionStatsClicked__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_1_OnExitClicked__DelegateSignature
struct UResults_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_1_OnExitClicked__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.Badge Loot Sequence
struct UResults_Widget_C_Badge_Loot_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.BndEvt__ResultsBadgeLoot_K2Node_ComponentBoundEvent_0_Finished__DelegateSignature
struct UResults_Widget_C_BndEvt__ResultsBadgeLoot_K2Node_ComponentBoundEvent_0_Finished__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.Commander XP Sequence
struct UResults_Widget_C_Commander_XP_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.BndEvt__ResultsCommanderXP_K2Node_ComponentBoundEvent_6_Finished__DelegateSignature
struct UResults_Widget_C_BndEvt__ResultsCommanderXP_K2Node_ComponentBoundEvent_6_Finished__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.BndEvt__Anim_CommanderXPIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_Widget_C_BndEvt__Anim_CommanderXPIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.BndEvt__Anim_CommanderXPOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_Widget_C_BndEvt__Anim_CommanderXPOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.BndEvt__Results_ScoreAndXP_K2Node_ComponentBoundEvent_3_Finished__DelegateSignature
struct UResults_Widget_C_BndEvt__Results_ScoreAndXP_K2Node_ComponentBoundEvent_3_Finished__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.Team Score Sequence
struct UResults_Widget_C_Team_Score_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.BndEvt__TopPanel_K2Node_ComponentBoundEvent_1_IntroComplete__DelegateSignature
struct UResults_Widget_C_BndEvt__TopPanel_K2Node_ComponentBoundEvent_1_IntroComplete__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.PreResults Sequence
struct UResults_Widget_C_PreResults_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.BndEvt__Anim_ZoneCompletionIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_Widget_C_BndEvt__Anim_ZoneCompletionIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.VideoSequenceStart
struct UResults_Widget_C_VideoSequenceStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.OnVideoEndReached
struct UResults_Widget_C_OnVideoEndReached_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.BndEvt__Anim_VideoOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_Widget_C_BndEvt__Anim_VideoOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.SkipVideo
struct UResults_Widget_C_SkipVideo_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.OnMediaOpened
struct UResults_Widget_C_OnMediaOpened_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.Construct
struct UResults_Widget_C_Construct_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function Results_Widget.Results_Widget_C.HandleClientEvent_PlayerLeftEvent
struct UResults_Widget_C_HandleClientEvent_PlayerLeftEvent_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.Wait for Replication
struct UResults_Widget_C_Wait_for_Replication_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.Destruct
struct UResults_Widget_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_Widget.Results_Widget_C.OnActivated
struct UResults_Widget_C_OnActivated_Params
{
public:
};

// 0x103 (0x103 - 0x0)
// Function Results_Widget.Results_Widget_C.ExecuteUbergraph_Results_Widget
struct UResults_Widget_C_ExecuteUbergraph_Results_Widget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D89[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      K2Node_ComponentBoundEvent_TargetId2;              // 0x8(0x18)(HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_TargetName2;            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_ComponentBoundEvent_TargetId;               // 0x30(0x18)(HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_TargetName;             // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRealTimeSeconds_ReturnValue;           // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D8A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRealTimeSeconds_ReturnValue2;          // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D8B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRealTimeSeconds_ReturnValue3;          // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRealTimeSeconds_ReturnValue4;          // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTotalMissionPointsEarned_ReturnValue;  // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D8C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetRealTimeSeconds_ReturnValue5;          // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRealTimeSeconds_ReturnValue6;          // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_B_Execution_Happened_Variable;           // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_A_Execution_Happened_Variable;           // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Play_ReturnValue;                         // 0x93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_UseVideos_bVideos;                        // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D8D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x98(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0xA8(0x8)(NoDestructor)
	float                                        CallFunc_GetRealTimeSeconds_ReturnValue7;          // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D8E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_HandleClientEvent_EventSource;              // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus;               // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent;              // 0xC8(0x20)(ConstParm, NoDestructor)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D8F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputManager*                   CallFunc_GetInputManager_ReturnValue;              // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDataFinalized_ReturnValue;              // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x102(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
