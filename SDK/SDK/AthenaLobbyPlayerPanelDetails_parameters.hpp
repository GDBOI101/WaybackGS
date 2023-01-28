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
// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshBanner
struct UAthenaLobbyPlayerPanelDetails_C_RefreshBanner_Params
{
public:
};

// 0x190 (0x190 - 0x0)
// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.SetTeamMemberInfo
struct UAthenaLobbyPlayerPanelDetails_C_SetTeamMemberInfo_Params
{
public:
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x0(0x190)(Parm)
};

// 0x30 (0x30 - 0x0)
// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.InitializeContextEvents
struct UAthenaLobbyPlayerPanelDetails_C_InitializeContextEvents_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue2;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnActiveFriendsCountUpdated
struct UAthenaLobbyPlayerPanelDetails_C_OnActiveFriendsCountUpdated_Params
{
public:
	int32                                        ActiveFriendsCount;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnPartyInvitesCountChanged
struct UAthenaLobbyPlayerPanelDetails_C_OnPartyInvitesCountChanged_Params
{
public:
	int32                                        InvitesCount;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.Initialize
struct UAthenaLobbyPlayerPanelDetails_C_Initialize_Params
{
public:
};

// 0x58 (0x58 - 0x0)
// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.IsInvitationPending
struct UAthenaLobbyPlayerPanelDetails_C_IsInvitationPending_Params
{
public:
	bool                                         bIsInvitationPending;                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      PlayerUniqueId;                                    // 0x8(0x18)(Edit, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidNetID_ReturnValue;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasPendingPartyInvitation_ReturnValue;    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortFriendRequestStatus          CallFunc_GetFriendRequestStatusForPlayer_ReturnValue; // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortFriendRequestStatus          Temp_byte_Variable;                                // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable3;                               // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable4;                               // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable5;                               // 0x37(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable6;                               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable7;                               // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default;                             // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable8;                               // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select2_Default;                            // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidNetID_ReturnValue2;                // 0x3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27E9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      K2Node_Select3_Default;                            // 0x40(0x18)(HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshPendingInvite
struct UAthenaLobbyPlayerPanelDetails_C_RefreshPendingInvite_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInvitationPending_bIsInvitationPending; // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshPlayerName
struct UAthenaLobbyPlayerPanelDetails_C_RefreshPlayerName_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.Refresh
struct UAthenaLobbyPlayerPanelDetails_C_Refresh_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.PreConstruct
struct UAthenaLobbyPlayerPanelDetails_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.ExecuteUbergraph_AthenaLobbyPlayerPanelDetails
struct UAthenaLobbyPlayerPanelDetails_C_ExecuteUbergraph_AthenaLobbyPlayerPanelDetails_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27EA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable2;                             // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable3;                             // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable4;                             // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default;                             // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x68(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
