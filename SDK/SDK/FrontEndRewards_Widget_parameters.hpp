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
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionRewardsClaimFailed
struct UFrontEndRewards_Widget_C_HandleOnMissionRewardsClaimFailed_Params
{
public:
};

// 0x98 (0x98 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.DebugPrintChoiceReward
struct UFrontEndRewards_Widget_C_DebugPrintChoiceReward_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x70(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x80(0x18)()
};

// 0x9 (0x9 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SafePop
struct UFrontEndRewards_Widget_C_SafePop_Params
{
public:
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsActivated_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.TriggerUpdateWhenDone
struct UFrontEndRewards_Widget_C_TriggerUpdateWhenDone_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionAlertRewardsClaimed
struct UFrontEndRewards_Widget_C_HandleOnMissionAlertRewardsClaimed_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> Rewards;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class URewards_ItemCard_C*>           CallFunc_CreateCardsFromItemInstanceQuantityList_Cards; // 0x10(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimMissionAlertRewards
struct UFrontEndRewards_Widget_C_ClaimMissionAlertRewards_Params
{
public:
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateMissionAlertRewards
struct UFrontEndRewards_Widget_C_PopulateMissionAlertRewards_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitRewardsQueue
struct UFrontEndRewards_Widget_C_InitRewardsQueue_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortRewardNotificationData*           CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URewardsIcon_C*                        CallFunc_QueueReward_OutIcon;                      // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitializeRewardsData
struct UFrontEndRewards_Widget_C_InitializeRewardsData_Params
{
public:
	struct FFrontEndRewards_Definition           FrontEndRewards_Definition;                        // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable2;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable3;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue2;                  // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue3;                  // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable2;                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortExpeditionItem*                   CallFunc_Array_Get_Item;                           // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue2;                // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        CallFunc_Array_Get_Item2;                          // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue2;                 // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue3;                // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue3;                 // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable3;                    // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortCollectionBookRewards            CallFunc_Array_Get_Item3;                          // 0x98(0x70)()
};

// 0x48 (0x48 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitAdditionalRewards
struct UFrontEndRewards_Widget_C_InitAdditionalRewards_Params
{
public:
	struct FFrontEndRewards_Definition           Definition;                                        // 0x0(0x48)(Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleBorderShown
struct UFrontEndRewards_Widget_C_HandleBorderShown_Params
{
public:
};

// 0x1C (0x1C - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SkipPopAnimation
struct UFrontEndRewards_Widget_C_SkipPopAnimation_Params
{
public:
	struct FWidgetTransform                      K2Node_MakeStruct_WidgetTransform;                 // 0x0(0x1C)(NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SkipOpenAnimation
struct UFrontEndRewards_Widget_C_SkipOpenAnimation_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateVO
struct UFrontEndRewards_Widget_C_PopulateVO_Params
{
public:
	class UFortRewardQuestData*                  K2Node_DynamicCast_AsFort_Reward_Quest_Data;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortRewardEpicQuestData*              K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data;  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestItemDefinition*              CallFunc_GetQuestDefinitionBP_ReturnValue;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              CallFunc_GetQuestDefinitionBP_ReturnValue2;        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortConversation*                     CallFunc_GetClaimConversation_ReturnValue;         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortConversation*                     CallFunc_GetIntroConversation_ReturnValue;         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnNoRewardsToClaim
struct UFrontEndRewards_Widget_C_HandleOnNoRewardsToClaim_Params
{
public:
};

// 0x70 (0x70 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.UnbindEvents
struct UFrontEndRewards_Widget_C_UnbindEvents_Params
{
public:
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x28(0x10)(ZeroConstructor, NoDestructor)
	class UFortCollectionBookManager*            CallFunc_GetCollectionBookManager_ReturnValue;     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x40(0x10)(ZeroConstructor, NoDestructor)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue3;                  // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x58(0x10)(ZeroConstructor, NoDestructor)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue4;                  // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ResetQueueState
struct UFrontEndRewards_Widget_C_ResetQueueState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.TransitionIn
struct UFrontEndRewards_Widget_C_TransitionIn_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OpenReward
struct UFrontEndRewards_Widget_C_OpenReward_Params
{
public:
};

// 0x15 (0x15 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateChoiceRewardsWidgetFromCardList
struct UFrontEndRewards_Widget_C_PopulateChoiceRewardsWidgetFromCardList_Params
{
public:
	TArray<class URewards_ItemCard_C*>           Cards;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleCurrentRewardTransitionOutComplete
struct UFrontEndRewards_Widget_C_HandleCurrentRewardTransitionOutComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOpenAnimationFinished
struct UFrontEndRewards_Widget_C_HandleOpenAnimationFinished_Params
{
public:
};

// 0x34 (0x34 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitSubWidgets
struct UFrontEndRewards_Widget_C_InitSubWidgets_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortRewardNotificationSubWidget*      K2Node_DynamicCast_AsFort_Reward_Notification_Sub_Widget; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionRewardsClaimed
struct UFrontEndRewards_Widget_C_HandleOnMissionRewardsClaimed_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> Rewards;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class URewards_ItemCard_C*>           CallFunc_CreateCardsFromItemInstanceQuantityList_Cards; // 0x10(0x10)(ZeroConstructor, ReferenceParm)
};

// 0xA8 (0xA8 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateListRewardsWidgetFromCardList
struct UFrontEndRewards_Widget_C_PopulateListRewardsWidgetFromCardList_Params
{
public:
	TArray<class URewards_ItemCard_C*>           Cards;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x40(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x80(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x90(0x18)()
};

// 0x98 (0x98 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnCollectionBookRewardsClaimed
struct UFrontEndRewards_Widget_C_HandleOnCollectionBookRewardsClaimed_Params
{
public:
	struct FFortCollectionBookRewards            RewardRequested;                                   // 0x0(0x70)(Parm)
	bool                                         Success;                                           // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortItemInstanceQuantityPair> ActualRewards;                                     // 0x78(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class URewards_ItemCard_C*>           CallFunc_CreateCardsFromItemInstanceQuantityList_Cards; // 0x88(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x28 (0x28 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnQuestRewardsClaimed
struct UFrontEndRewards_Widget_C_HandleOnQuestRewardsClaimed_Params
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortItemInstanceQuantityPair> Rewards;                                           // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class URewards_ItemCard_C*>           CallFunc_CreateCardsFromItemInstanceQuantityList_Cards; // 0x18(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x38 (0x38 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimCollectionBookChoiceReward
struct UFrontEndRewards_Widget_C_ClaimCollectionBookChoiceReward_Params
{
public:
	class UFortRewardNotificationData*           NotificationData;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectionIndex;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             Item;                                              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRewardCollectionBookData*         K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortCollectionBookManager*            CallFunc_GetCollectionBookManager_ReturnValue;     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimCollectionBookRewards
struct UFrontEndRewards_Widget_C_ClaimCollectionBookRewards_Params
{
public:
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortCollectionBookManager*            CallFunc_GetCollectionBookManager_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRewardCollectionBookData*         K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimQuestListReward
struct UFrontEndRewards_Widget_C_ClaimQuestListReward_Params
{
public:
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRewardQuestData*                  K2Node_DynamicCast_AsFort_Reward_Quest_Data;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8C (0x8C - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateCollectionBookRewards
struct UFrontEndRewards_Widget_C_PopulateCollectionBookRewards_Params
{
public:
	TArray<struct FFortItemQuantityPair>         TempCollectionBookRewards;                         // 0x0(0x10)(Edit, ZeroConstructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRewardCollectionBookData*         K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasSelectableRewards_ReturnValue;         // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28C0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortSelectableRewardOption           CallFunc_Array_Get_Item;                           // 0x30(0x10)()
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortItemQuantityPair                 CallFunc_Array_Get_Item2;                          // 0x48(0x28)()
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class URewards_ItemCard_C*>           CallFunc_CreateCardsFromItemQuantityList_Cards;    // 0x78(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateExpedition
struct UFrontEndRewards_Widget_C_PopulateExpedition_Params
{
public:
	class UFortRewardExpeditionData*             K2Node_DynamicCast_AsFort_Reward_Expedition_Data;  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x20(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x38(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x78(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x88(0x18)()
};

// 0xA0 (0xA0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateNewQuest
struct UFrontEndRewards_Widget_C_PopulateNewQuest_Params
{
public:
	class UFortRewardEpicQuestData*              K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data;  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x20(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x38(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x78(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x88(0x18)()
};

// 0x42 (0x42 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateQuestRewards
struct UFrontEndRewards_Widget_C_PopulateQuestRewards_Params
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortItemInstanceQuantityPair> CallFunc_GetPreviewAllSelectableRewards_ReturnValue; // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class URewards_ItemCard_C*>           CallFunc_CreateCardsFromItemInstanceQuantityList_Cards; // 0x18(0x10)(ZeroConstructor, ReferenceParm)
	class UFortRewardQuestData*                  K2Node_DynamicCast_AsFort_Reward_Quest_Data;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestItemDefinition*              CallFunc_GetQuestDefinitionBP_ReturnValue;         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortQuestRewardType              CallFunc_GetRewardType_ReturnValue;                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateMissionRewards
struct UFrontEndRewards_Widget_C_PopulateMissionRewards_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SetHeaderVisibility
struct UFrontEndRewards_Widget_C_SetHeaderVisibility_Params
{
public:
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimMissionRewards
struct UFrontEndRewards_Widget_C_ClaimMissionRewards_Params
{
public:
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemInstanceQuantityList
struct UFrontEndRewards_Widget_C_CreateCardsFromItemInstanceQuantityList_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> Items;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class URewards_ItemCard_C*>           Cards;                                             // 0x10(0x10)(Parm, OutParm, ZeroConstructor)
	TArray<enum class EFortInventoryType>        ItemInventoryTypeList;                             // 0x20(0x10)(Edit, ZeroConstructor)
	TArray<class UFortItem*>                     FortItemList;                                      // 0x30(0x10)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortItemInstanceQuantityPair         CallFunc_Array_Get_Item;                           // 0x48(0x10)(NoDestructor)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue; // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue2;                   // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class URewards_ItemCard_C*>           CallFunc_CreateCardsFromItemList_Cards;            // 0x88(0x10)(ZeroConstructor, ReferenceParm)
};

// 0xAC (0xAC - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemQuantityList
struct UFrontEndRewards_Widget_C_CreateCardsFromItemQuantityList_Params
{
public:
	TArray<struct FFortItemQuantityPair>         Items;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class URewards_ItemCard_C*>           Cards;                                             // 0x10(0x10)(Parm, OutParm, ZeroConstructor)
	TArray<enum class EFortInventoryType>        ItemInventoryTypeList;                             // 0x20(0x10)(Edit, ZeroConstructor)
	TArray<class UFortItem*>                     FortItemList;                                      // 0x30(0x10)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortItemQuantityPair                 CallFunc_Array_Get_Item;                           // 0x50(0x28)()
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class URewards_ItemCard_C*>           CallFunc_CreateCardsFromItemList_Cards;            // 0x88(0x10)(ZeroConstructor, ReferenceParm)
	class UFortItemDefinition*                   CallFunc_GetItemFromItemQuantityPair_ReturnValue;  // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7C (0x7C - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemList
struct UFrontEndRewards_Widget_C_CreateCardsFromItemList_Params
{
public:
	TArray<class UFortItem*>                     Items;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<enum class EFortInventoryType>        ItemInventoryTypeList;                             // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class URewards_ItemCard_C*>           Cards;                                             // 0x20(0x10)(Parm, OutParm, ZeroConstructor)
	TArray<class URewards_ItemCard_C*>           CardList;                                          // 0x30(0x10)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URewards_ItemCard_C*                   CallFunc_Create_ReturnValue;                       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortInventoryType                CallFunc_Array_Get_Item;                           // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x6E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28CF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_Array_Get_Item2;                          // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimQuestChoiceReward
struct UFrontEndRewards_Widget_C_ClaimQuestChoiceReward_Params
{
public:
	class UFortRewardNotificationData*           NotificationData;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectionIndex;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             Item;                                              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRewardQuestData*                  K2Node_DynamicCast_AsFort_Reward_Quest_Data;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x33 (0x33 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleChoiceRewardSelected
struct UFrontEndRewards_Widget_C_HandleChoiceRewardSelected_Params
{
public:
	int32                                        RewardIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             Item;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRewardNotificationData*           NotificationData;                                  // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetPersistentName_ReturnValue;            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitInitialRewards
struct UFrontEndRewards_Widget_C_InitInitialRewards_Params
{
public:
	struct FFrontEndRewards_Definition           Definition;                                        // 0x0(0x48)(Parm, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleExpeditionCompleted
struct UFrontEndRewards_Widget_C_HandleExpeditionCompleted_Params
{
public:
	bool                                         Succeeded;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortItemInstanceQuantityPair> Rewards;                                           // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class URewards_ItemCard_C*>           CallFunc_CreateCardsFromItemInstanceQuantityList_Cards; // 0x18(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Cleanup
struct UFrontEndRewards_Widget_C_Cleanup_Params
{
public:
};

// 0x1A (0x1A - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ShowCurrentReward
struct UFrontEndRewards_Widget_C_ShowCurrentReward_Params
{
public:
	class UFortRewardEpicQuestData*              K2Node_DynamicCast_AsFort_Reward_Epic_Quest_Data;  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFrontEndRewards_ChoiceRewards_C*      K2Node_DynamicCast_AsFront_End_Rewards_Choice_Rewards; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateCurrentRewardWidget
struct UFrontEndRewards_Widget_C_PopulateCurrentRewardWidget_Params
{
public:
	TArray<struct FFortItemQuantityPair>         TempCollectionBookRewards;                         // 0x0(0x10)(Edit, ZeroConstructor)
	class UFortQuestItem*                        Quest;                                             // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRewardNotificationData*           RewardData;                                        // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2C (0x2C - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.AdjustCurrentRewardPadding
struct UFrontEndRewards_Widget_C_AdjustCurrentRewardPadding_Params
{
public:
	class UOverlaySlot*                          K2Node_DynamicCast_AsOverlay_Slot;                 // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlaySlot*                          K2Node_DynamicCast_AsOverlay_Slot2;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x1C(0x10)(NoDestructor)
};

// 0x140 (0x140 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.BindEvents
struct UFrontEndRewards_Widget_C_BindEvents_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x40(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x50(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x60(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate7;             // 0x70(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate8;             // 0x80(0x10)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate9;             // 0x98(0x10)(ZeroConstructor, NoDestructor)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue2;                  // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortCollectionBookManager*            CallFunc_GetCollectionBookManager_ReturnValue;     // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate10;            // 0xC0(0x10)(ZeroConstructor, NoDestructor)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue3;                  // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRewardNotificationSubWidget*      CallFunc_Array_Get_Item;                           // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate11;            // 0xE8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0xF8(0x10)(ZeroConstructor, NoDestructor)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue4;                  // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate13;            // 0x110(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate14;            // 0x120(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate15;            // 0x130(0x10)(ZeroConstructor, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleShowHeaderFinished
struct UFrontEndRewards_Widget_C_HandleShowHeaderFinished_Params
{
public:
	class UFortRewardQuestData*                  K2Node_DynamicCast_AsFort_Reward_Quest_Data;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopNextReward
struct UFrontEndRewards_Widget_C_PopNextReward_Params
{
public:
	class UFortRewardNotificationData*           NextReward;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortRewardNotificationData*           CallFunc_DequeueReward_OutReward;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.DropReward
struct UFrontEndRewards_Widget_C_DropReward_Params
{
public:
	class UFortRewardNotificationData*           InReward;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleCurrentRewardDisplayed
struct UFrontEndRewards_Widget_C_HandleCurrentRewardDisplayed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationLeft
struct UFrontEndRewards_Widget_C_OnNavigationLeft_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationRight
struct UFrontEndRewards_Widget_C_OnNavigationRight_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationUp
struct UFrontEndRewards_Widget_C_OnNavigationUp_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationDown
struct UFrontEndRewards_Widget_C_OnNavigationDown_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionDisabled
struct UFrontEndRewards_Widget_C_OnPrimaryActionDisabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionEnabled
struct UFrontEndRewards_Widget_C_OnPrimaryActionEnabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionHidden
struct UFrontEndRewards_Widget_C_OnPrimaryActionHidden_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionTextChanged
struct UFrontEndRewards_Widget_C_OnPrimaryActionTextChanged_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.BndEvt__ButtonOpen_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature
struct UFrontEndRewards_Widget_C_BndEvt__ButtonOpen_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Construct
struct UFrontEndRewards_Widget_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnActivated
struct UFrontEndRewards_Widget_C_OnActivated_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HideStarburst
struct UFrontEndRewards_Widget_C_HideStarburst_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnDeactivated
struct UFrontEndRewards_Widget_C_OnDeactivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InspectItem
struct UFrontEndRewards_Widget_C_InspectItem_Params
{
public:
	class UFortItem*                             ItemToInspect;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.IntroSequence
struct UFrontEndRewards_Widget_C_IntroSequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Destruct
struct UFrontEndRewards_Widget_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnMatchmakingOrLobbyStarted
struct UFrontEndRewards_Widget_C_OnMatchmakingOrLobbyStarted_Params
{
public:
};

// 0x99 (0x99 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ExecuteUbergraph_FrontEndRewards_Widget
struct UFrontEndRewards_Widget_C_ExecuteUbergraph_FrontEndRewards_Widget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue4;                     // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                  K2Node_Event_Text;                                 // 0x8(0x18)(ConstParm)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue5;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_CustomEvent_Delay;                          // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue6;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             K2Node_Event_ItemToInspect;                        // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x50(0x10)(ZeroConstructor, NoDestructor)
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue2;                  // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue7;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInspectScreen_C*                  CallFunc_Create_ReturnValue;                       // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue2;          // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue3;                  // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue8;                     // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsIgnored__DelegateSignature
struct UFrontEndRewards_Widget_C_OnRewardsIgnored__DelegateSignature_Params
{
public:
	class UFrontEndRewards_Widget_C*             RewardsWidget;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsClaimError__DelegateSignature
struct UFrontEndRewards_Widget_C_OnRewardsClaimError__DelegateSignature_Params
{
public:
	class UFrontEndRewards_Widget_C*             RewardsWidget;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsClaimed__DelegateSignature
struct UFrontEndRewards_Widget_C_OnRewardsClaimed__DelegateSignature_Params
{
public:
	class UFrontEndRewards_Widget_C*             RewardsWidget;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnComplete__DelegateSignature
struct UFrontEndRewards_Widget_C_OnComplete__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
