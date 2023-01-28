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

// 0x48 (0x48 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberKillsChanged
struct UFullPartyMemberAthena_C_HandleAthenaTeamMemberKillsChanged_Params
{
public:
	TArray<int32>                                Kills;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x10(0x18)()
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3560[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Get_Item;                           // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue2;              // 0x30(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateMicIndicator
struct UFullPartyMemberAthena_C_UpdateMicIndicator_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HighlightEmptyBanner
struct UFullPartyMemberAthena_C_HighlightEmptyBanner_Params
{
public:
	bool                                         BannerIsHighlighted;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3561[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable2;                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_Select_Default;                             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.SetTeamMemberIndex
struct UFullPartyMemberAthena_C_SetTeamMemberIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberTalkingChanged
struct UFullPartyMemberAthena_C_HandleAthenaTeamMemberTalkingChanged_Params
{
public:
	TArray<bool>                                 Talking;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Get_Item;                           // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberMuteChanged
struct UFullPartyMemberAthena_C_HandleAthenaTeamMemberMuteChanged_Params
{
public:
	TArray<bool>                                 Mutes;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Get_Item;                           // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberChanged
struct UFullPartyMemberAthena_C_HandleAthenaTeamMemberChanged_Params
{
public:
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*           K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3562[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerStateAthena*                CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.InitializeConnectedWidget
struct UFullPartyMemberAthena_C_InitializeConnectedWidget_Params
{
public:
	class UFullPartyMemberConnected_C*           ConnectedWidget;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E8 (0x1E8 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.MakeLocalPlayerConfirmActions
struct UFullPartyMemberAthena_C_MakeLocalPlayerConfirmActions_Params
{
public:
	bool                                         LocalPlayerAlone;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3563[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConfirmationDialogAction>     OutConfirmActions;                                 // 0x8(0x10)(Parm, OutParm, ZeroConstructor)
	TArray<struct FConfirmationDialogAction>     ConfirmActions;                                    // 0x18(0x10)(Edit, ZeroConstructor)
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue2;           // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3564[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConfirmationDialogAction             K2Node_MakeStruct_ConfirmationDialogAction;        // 0x40(0xD0)()
	struct FConfirmationDialogAction             K2Node_MakeStruct_ConfirmationDialogAction2;       // 0x110(0xD0)()
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue2;                   // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleLocalPlayerActionsResult
struct UFullPartyMemberAthena_C_HandleLocalPlayerActionsResult_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3565[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ResultName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue2;         // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3566[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue2;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x25 (0x25 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateLocalPlayerAction
struct UFullPartyMemberAthena_C_UpdateLocalPlayerAction_Params
{
public:
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUITeamInfo*                       CallFunc_GetLocalPlayerTeam_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FUniqueNetIdRepl>              CallFunc_GetTeamMemberIDs_TeamMemberIDs;           // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.DuplicateConnectedWidget
struct UFullPartyMemberAthena_C_DuplicateConnectedWidget_Params
{
public:
	class UFullPartyMemberConnected_C*           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFullPartyMemberConnected_C*           CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateDimensions
struct UFullPartyMemberAthena_C_UpdateDimensions_Params
{
public:
	struct FVector2D                             NewDimensions;                                     // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ShowConnected
struct UFullPartyMemberAthena_C_ShowConnected_Params
{
public:
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*           K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3567[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerStateAthena*                CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x30(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ShowConnecting
struct UFullPartyMemberAthena_C_ShowConnecting_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ShowOpen
struct UFullPartyMemberAthena_C_ShowOpen_Params
{
public:
};

// 0x19A (0x19A - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateMemberInfo
struct UFullPartyMemberAthena_C_UpdateMemberInfo_Params
{
public:
	struct FFortTeamMemberInfo                   NewMemberInfo;                                     // 0x0(0x190)(Parm)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortPartyMemberDisplayState      CallFunc_GetPartyMemberDisplayState_ReturnValue;   // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.Construct
struct UFullPartyMemberAthena_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.PreConstruct
struct UFullPartyMemberAthena_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.OnClicked
struct UFullPartyMemberAthena_C_OnClicked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.Destruct
struct UFullPartyMemberAthena_C_Destruct_Params
{
public:
};

// 0x190 (0x190 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.OnPlayerInfoChanged
struct UFullPartyMemberAthena_C_OnPlayerInfoChanged_Params
{
public:
	struct FFortTeamMemberInfo                   NewInfo;                                           // 0x0(0x190)(Parm)
};

// 0x2B9 (0x2B9 - 0x0)
// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ExecuteUbergraph_FullPartyMemberAthena
struct UFullPartyMemberAthena_C_ExecuteUbergraph_FullPartyMemberAthena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3568[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3569[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x48(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x58(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAthena_PlayerController_C*            K2Node_DynamicCast_AsAthena_Player_Controller;     // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_356A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 CallFunc_GetTeamMuted_MutedStates;                 // 0x80(0x10)(ZeroConstructor, ReferenceParm)
	TArray<int32>                                CallFunc_GetTeamKills_Kills;                       // 0x90(0x10)(ZeroConstructor, ReferenceParm)
	TArray<bool>                                 CallFunc_GetTeamTalking_TalkingStates;             // 0xA0(0x10)(ZeroConstructor, ReferenceParm)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue2;             // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*           K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_356B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue2;                  // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerStateAthena*                CallFunc_Array_Get_Item;                           // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_356C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetPlatformUniqueNetId_ReturnValue;       // 0xE0(0x18)(HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_356D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTeamMemberInfo                   K2Node_CustomEvent_NewInfo;                        // 0x108(0x190)()
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x298(0x10)(ZeroConstructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x2A8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_StartsWith_ReturnValue;                   // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
