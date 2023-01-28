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

// 0x5 (0x5 - 0x0)
// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerUnhovered
struct AVaultWeaponPlacementHelper_C_OnLobbyPlayerUnhovered_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.GetFrontendAnimInstance
struct AVaultWeaponPlacementHelper_C_GetFrontendAnimInstance_Params
{
public:
};

// 0x191 (0x191 - 0x0)
// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberStateChanged
struct AVaultWeaponPlacementHelper_C_OnTeamMemberStateChanged_Params
{
public:
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x0(0x190)(Parm)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberRemoved
struct AVaultWeaponPlacementHelper_C_OnTeamMemberRemoved_Params
{
public:
	int32                                        TeamMemberInfo;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x191 (0x191 - 0x0)
// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberAdded
struct AVaultWeaponPlacementHelper_C_OnTeamMemberAdded_Params
{
public:
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x0(0x190)(Parm)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnFrontEndCameraChanged
struct AVaultWeaponPlacementHelper_C_OnFrontEndCameraChanged_Params
{
public:
	enum class EFrontEndCamera                   NewCamera;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFrontEndCamera                   OldCamera;                                         // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyStarted
struct AVaultWeaponPlacementHelper_C_OnLobbyStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.Initialize
struct AVaultWeaponPlacementHelper_C_Initialize_Params
{
public:
};

// 0xB8 (0xB8 - 0x0)
// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.InitializeContextEvents
struct AVaultWeaponPlacementHelper_C_InitializeContextEvents_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x50(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x60(0x10)(ZeroConstructor, NoDestructor)
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue3;                  // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue4;                  // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate7;             // 0x80(0x10)(ZeroConstructor, NoDestructor)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue5;                  // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUITeamInfo*                       CallFunc_GetLocalPlayerTeam_ReturnValue;           // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate8;             // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue6;                  // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerSelected
struct AVaultWeaponPlacementHelper_C_OnLobbyPlayerSelected_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerHovered
struct AVaultWeaponPlacementHelper_C_OnLobbyPlayerHovered_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.UserConstructionScript
struct AVaultWeaponPlacementHelper_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ReceiveBeginPlay
struct AVaultWeaponPlacementHelper_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ItemRez
struct AVaultWeaponPlacementHelper_C_ItemRez_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ExecuteUbergraph_VaultWeaponPlacementHelper
struct AVaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.NewEventDispatcher_0__DelegateSignature
struct AVaultWeaponPlacementHelper_C_NewEventDispatcher_0__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
