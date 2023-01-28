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

// 0x8 (0x8 - 0x0)
// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsIgnored
struct ACheckFrontEndRewardsAction_C_HandleRewardsIgnored_Params
{
public:
	class UFrontEndRewards_Widget_C*             RewardsWidget;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.CanShowFrontendRewards
struct ACheckFrontEndRewardsAction_C_CanShowFrontendRewards_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E6B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue2;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInLobby_ReturnValue;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortStoreState                   CallFunc_GetStoreState_ReturnValue;                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMatchmakingLocal_ReturnValue;           // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E6C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue2;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E6D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUIManager_C*                          K2Node_DynamicCast_AsUIManager;                    // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue3;                   // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsShowingModalsConfirmationsErrors_ReturnValue; // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E6E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue3;                  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue4;                  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortPartyMemberLocation          CallFunc_GetLocalPartyMemberLocation_Location;     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetLocalPartyMemberLocation_ReturnValue;  // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue2;           // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue4;                   // 0x56(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x57(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Is FrontEndRewards Running
struct ACheckFrontEndRewardsAction_C_Is_FrontEndRewards_Running_Params
{
public:
	bool                                         bRunning;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E6F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetCachedWidget_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFrontEndRewards_Widget_C*             K2Node_DynamicCast_AsFront_End_Rewards_Widget;     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateMissionAlertRewards
struct ACheckFrontEndRewardsAction_C_PopulateMissionAlertRewards_Params
{
public:
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasPendingMissionAlertRewards_ReturnValue; // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsClaimError
struct ACheckFrontEndRewardsAction_C_HandleRewardsClaimError_Params
{
public:
	class UFrontEndRewards_Widget_C*             RewardsWidget;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Clear
struct ACheckFrontEndRewardsAction_C_Clear_Params
{
public:
	TArray<struct FFortCollectionBookRewards>    K2Node_MakeArray_Array;                            // 0x0(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class UFortExpeditionItem*>           K2Node_MakeArray_Array2;                           // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class UFortQuestItem*>                K2Node_MakeArray_Array3;                           // 0x20(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class UFortQuestItem*>                K2Node_MakeArray_Array4;                           // 0x30(0x10)(ZeroConstructor, ReferenceParm)
	struct FFrontEndRewards_Definition           K2Node_MakeStruct_FrontEndRewards_Definition;      // 0x40(0x48)(HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsClaimed
struct ACheckFrontEndRewardsAction_C_HandleRewardsClaimed_Params
{
public:
	class UFrontEndRewards_Widget_C*             RewardsWidget;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x25 (0x25 - 0x0)
// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateCollectionBookRewards
struct ACheckFrontEndRewardsAction_C_PopulateCollectionBookRewards_Params
{
public:
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortCollectionBookManager*            CallFunc_GetCollectionBookManager_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortCollectionBookRewards>    CallFunc_PopulateCollectionBookRewards_OutAvailableRewards; // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateRewards
struct ACheckFrontEndRewardsAction_C_PopulateRewards_Params
{
public:
};

// 0x69 (0x69 - 0x0)
// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.OpenFrontEndRewards
struct ACheckFrontEndRewardsAction_C_OpenFrontEndRewards_Params
{
public:
	class UFrontEndRewards_Widget_C*             LocalRewardsWidget;                                // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E70[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x40(0x10)(ZeroConstructor, NoDestructor)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetCachedWidget_ReturnValue;              // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFrontEndRewards_Widget_C*             K2Node_DynamicCast_AsFront_End_Rewards_Widget;     // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateUnseenQuests
struct ACheckFrontEndRewardsAction_C_PopulateUnseenQuests_Params
{
public:
	enum class EFortQuestType                    QuestType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E71[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortQuestItem*>                TempNewQuests;                                     // 0x8(0x10)(Edit, ZeroConstructor)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        CallFunc_GetNextUnseenQuest_ReturnValue;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasBeenSeenLocally_ReturnValue;           // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisibleToUser_ReturnValue;              // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.GetCompletedQuests
struct ACheckFrontEndRewardsAction_C_GetCompletedQuests_Params
{
public:
	TArray<class UFortQuestItem*>                Completed_Quests;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortQuestItem*>                CallFunc_GetCompletedQuests_OutCompletedQuests;    // 0x20(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateNewQuests
struct ACheckFrontEndRewardsAction_C_PopulateNewQuests_Params
{
public:
};

// 0xA1 (0xA1 - 0x0)
// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateQuestRewards
struct ACheckFrontEndRewardsAction_C_PopulateQuestRewards_Params
{
public:
	TArray<class UFortQuestItem*>                TempNewQuests;                                     // 0x0(0x10)(Edit, ZeroConstructor)
	TArray<class UFortQuestItem*>                TempCompletedQuests;                               // 0x10(0x10)(Edit, ZeroConstructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable2;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortQuestItem*>                CallFunc_GetCompletedQuests_Completed_Quests;      // 0x30(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue2;                  // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E72[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestItem*                        CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E73[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortItemInstanceQuantityPair> CallFunc_GetPreviewRewards_ReturnValue;            // 0x58(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_HasVisibleRewards_ReturnValue;            // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E74[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E75[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue2;                // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue2;                 // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E76[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable2;                    // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortItemInstanceQuantityPair         CallFunc_Array_Get_Item2;                          // 0x80(0x10)(NoDestructor)
	class UFortQuestItem*                        K2Node_DynamicCast_AsFort_Quest_Item;              // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E77[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue2;                   // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisibleToUser_ReturnValue;              // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateMissionRewards
struct ACheckFrontEndRewardsAction_C_PopulateMissionRewards_Params
{
public:
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AreMissionRewardsAvailable_ReturnValue;   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.CompleteRewardsAction
struct ACheckFrontEndRewardsAction_C_CompleteRewardsAction_Params
{
public:
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateFrontEnd*                K2Node_DynamicCast_AsFort_Game_State_Front_End;    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E78[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.UserConstructionScript
struct ACheckFrontEndRewardsAction_C_UserConstructionScript_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Execute
struct ACheckFrontEndRewardsAction_C_Execute_Params
{
public:
	struct FFortScriptedActionParams             Params;                                            // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x71 (0x71 - 0x0)
// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.ExecuteUbergraph_CheckFrontEndRewardsAction
struct ACheckFrontEndRewardsAction_C_ExecuteUbergraph_CheckFrontEndRewardsAction_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E79[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortScriptedActionParams             K2Node_Event_Params;                               // 0x8(0x30)(ConstParm, NoDestructor)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPendingLogout_ReturnValue;              // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_FrontEndRewards_Running_bRunning;      // 0x4E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E7A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue2;          // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanShowFrontendRewards_ReturnValue;       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E7B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetCachedWidget_ReturnValue;              // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFrontEndRewards_Widget_C*             K2Node_DynamicCast_AsFront_End_Rewards_Widget;     // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
