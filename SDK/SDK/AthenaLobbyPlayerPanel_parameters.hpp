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
// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Cancel
struct UAthenaLobbyPlayerPanel_C_Cancel_Params
{
public:
};

// 0x191 (0x191 - 0x0)
// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnTeamMemberStateChanged
struct UAthenaLobbyPlayerPanel_C_OnTeamMemberStateChanged_Params
{
public:
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x0(0x190)(Parm)
	bool                                         CallFunc_AreUniqueIDsIdentical_ReturnValue;        // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.InitializeContextEvents
struct UAthenaLobbyPlayerPanel_C_InitializeContextEvents_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUITeamInfo*                       CallFunc_GetLocalPlayerTeam_ReturnValue;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Focus
struct UAthenaLobbyPlayerPanel_C_Focus_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasValidActions_bHasValidActions;         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Refresh
struct UAthenaLobbyPlayerPanel_C_Refresh_Params
{
public:
};

// 0x190 (0x190 - 0x0)
// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.SetTeamMemberInfo
struct UAthenaLobbyPlayerPanel_C_SetTeamMemberInfo_Params
{
public:
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x0(0x190)(Parm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Initialize
struct UAthenaLobbyPlayerPanel_C_Initialize_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnClosed__DelegateSignature
struct UAthenaLobbyPlayerPanel_C_OnClosed__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnGadgetsClicked__DelegateSignature
struct UAthenaLobbyPlayerPanel_C_OnGadgetsClicked__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
