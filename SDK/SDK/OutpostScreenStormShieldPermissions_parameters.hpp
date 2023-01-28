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
// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.CenterWidget
struct UOutpostScreenStormShieldPermissions_C_CenterWidget_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.SetParent
struct UOutpostScreenStormShieldPermissions_C_SetParent_Params
{
public:
	class UOutpostScreenStormShield_C*           ParentWidget;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.HandleBack
struct UOutpostScreenStormShieldPermissions_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.AddInputHandlers
struct UOutpostScreenStormShieldPermissions_C_AddInputHandlers_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x10(0x10)(NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.IsOwningPlayerOutpostOwner
struct UOutpostScreenStormShieldPermissions_C_IsOwningPlayerOutpostOwner_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A20[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerOutpost*          K2Node_DynamicCast_AsFort_Player_Controller_Outpost; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsOutpostOwner_ReturnValue;               // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilages
struct UOutpostScreenStormShieldPermissions_C_UpdatePrivilages_Params
{
public:
	bool                                         CallFunc_isPlayerAlone_isAlone;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2D (0x2D - 0x0)
// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.isPlayerAlone
struct UOutpostScreenStormShieldPermissions_C_IsPlayerAlone_Params
{
public:
	bool                                         IsAlone;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A21[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUITeamInfo*                       CallFunc_GetLocalPlayerTeam_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortTeamMemberInfo>           CallFunc_GetTeamMembers_TeamMembers;               // 0x18(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.Construct
struct UOutpostScreenStormShieldPermissions_C_Construct_Params
{
public:
};

// 0x190 (0x190 - 0x0)
// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilagesEvent_0
struct UOutpostScreenStormShieldPermissions_C_UpdatePrivilagesEvent_0_Params
{
public:
	struct FFortTeamMemberInfo                   NewTeamMemberInfo;                                 // 0x0(0x190)(Parm)
};

// 0x4 (0x4 - 0x0)
// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilagesEvent_1
struct UOutpostScreenStormShieldPermissions_C_UpdatePrivilagesEvent_1_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.OnActivated
struct UOutpostScreenStormShieldPermissions_C_OnActivated_Params
{
public:
};

// 0x1E8 (0x1E8 - 0x0)
// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.ExecuteUbergraph_OutpostScreenStormShieldPermissions
struct UOutpostScreenStormShieldPermissions_C_ExecuteUbergraph_OutpostScreenStormShieldPermissions_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A22[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerOutpost*          K2Node_DynamicCast_AsFort_Player_Controller_Outpost; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	struct FFortTeamMemberInfo                   K2Node_CustomEvent_NewTeamMemberInfo;              // 0x40(0x190)()
	int32                                        K2Node_CustomEvent_PlayerIndex;                    // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A24[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUITeamInfo*                       CallFunc_GetLocalPlayerTeam_ReturnValue;           // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.CloseOutpostScreen__DelegateSignature
struct UOutpostScreenStormShieldPermissions_C_CloseOutpostScreen__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
