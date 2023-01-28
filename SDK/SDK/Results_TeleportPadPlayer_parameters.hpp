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
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.IsLocalPlayersPad
struct UResults_TeleportPadPlayer_C_IsLocalPlayersPad_Params
{
public:
	bool                                         bIsLocalPlayersPad;                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Focus
struct UResults_TeleportPadPlayer_C_Focus_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D (0x2D - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.CanFriend
struct UResults_TeleportPadPlayer_C_CanFriend_Params
{
public:
	bool                                         bCanFriendPlayer;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortFriendRequestStatus          FriendRequestStatus;                               // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable3;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable4;                               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable5;                               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable6;                               // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable7;                               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortFriendRequestStatus          Temp_byte_Variable;                                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33A3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default;                             // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue2;           // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select2_Default;                            // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortFriendRequestStatus          CallFunc_GetFriendRequestStatusForPlayer_ReturnValue; // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2A (0x2A - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.CanInviteParty
struct UResults_TeleportPadPlayer_C_CanInviteParty_Params
{
public:
	bool                                         bCanInvitePlayer;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue2;           // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33A5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortPartyRestriction             CallFunc_CanBeInvitedNetID_FailReason;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanBeInvitedNetID_ReturnValue;            // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.InvitePlayer
struct UResults_TeleportPadPlayer_C_InvitePlayer_Params
{
public:
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue2;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanInviteParty_bCanInvitePlayer;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanFriend_bCanFriendPlayer;               // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.ThumbsUpPlayer
struct UResults_TeleportPadPlayer_C_ThumbsUpPlayer_Params
{
public:
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.IsValidPad
struct UResults_TeleportPadPlayer_C_IsValidPad_Params
{
public:
	bool                                         bIsValid;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.SetIsValidPad
struct UResults_TeleportPadPlayer_C_SetIsValidPad_Params
{
public:
};

// 0x6C (0x6C - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Initialize
struct UResults_TeleportPadPlayer_C_Initialize_Params
{
public:
	struct FUniqueNetIdRepl                      InUniqueId;                                        // 0x0(0x18)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UFortUIScoreReport*                    InScoreReport;                                     // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      InConsoleUniqueId;                                 // 0x20(0x18)(Parm, HasGetValueTypeHash)
	int32                                        ScoreReportIndex;                                  // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIScoreReport*                    ScoreReport;                                       // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanFriend_bCanFriendPlayer;               // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalPlayer_ReturnValue;                // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33A7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetPlayerName_ReturnValue;                // 0x50(0x18)()
	int32                                        CallFunc_GetScoreReportIndex_ReturnValue;          // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Team Score Screen Intro
struct UResults_TeleportPadPlayer_C_Team_Score_Screen_Intro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Team Score Screen Outro
struct UResults_TeleportPadPlayer_C_Team_Score_Screen_Outro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Teleport Pad Screen Intro
struct UResults_TeleportPadPlayer_C_Teleport_Pad_Screen_Intro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Outro
struct UResults_TeleportPadPlayer_C_Outro_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct UResults_TeleportPadPlayer_C_BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
struct UResults_TeleportPadPlayer_C_BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_TeleportPadPlayer_C_BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature
struct UResults_TeleportPadPlayer_C_BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.ExecuteUbergraph_Results_TeleportPadPlayer
struct UResults_TeleportPadPlayer_C_ExecuteUbergraph_Results_TeleportPadPlayer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)()
	bool                                         CallFunc_CanInviteParty_bCanInvitePlayer;          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanFriend_bCanFriendPlayer;               // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33A9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button3;                // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x40(0x90)()
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button2;                // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0xD8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnTeleportPadIntroFinished__DelegateSignature
struct UResults_TeleportPadPlayer_C_OnTeleportPadIntroFinished__DelegateSignature_Params
{
public:
	class UResults_TeleportPadPlayer_C*          TeleportPadPlayer;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnUpVoteClicked__DelegateSignature
struct UResults_TeleportPadPlayer_C_OnUpVoteClicked__DelegateSignature_Params
{
public:
	struct FUniqueNetIdRepl                      TargetId;                                          // 0x0(0x18)(Parm, HasGetValueTypeHash)
	class FString                                TargetName;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnAddFriendClicked__DelegateSignature
struct UResults_TeleportPadPlayer_C_OnAddFriendClicked__DelegateSignature_Params
{
public:
	struct FUniqueNetIdRepl                      TargetId;                                          // 0x0(0x18)(Parm, HasGetValueTypeHash)
	class FString                                TargetName;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnMissionStatsClicked__DelegateSignature
struct UResults_TeleportPadPlayer_C_OnMissionStatsClicked__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
