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

// 0x9 (0x9 - 0x0)
// Function RewardsIcon.RewardsIcon_C.PopulateFromMissionAlertRewards
struct URewardsIcon_C_PopulateFromMissionAlertRewards_Params
{
public:
	class UFortRewardMissionAlertData*           K2Node_DynamicCast_AsFort_Reward_Mission_Alert_Data; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function RewardsIcon.RewardsIcon_C.Play Show Animation Sound
struct URewardsIcon_C_Play_Show_Animation_Sound_Params
{
public:
	enum class EFrontEndRewardType               Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3886[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable2;                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable3;                             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable4;                             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable5;                             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable6;                             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function RewardsIcon.RewardsIcon_C.Play Hide Animation Sound
struct URewardsIcon_C_Play_Hide_Animation_Sound_Params
{
public:
	enum class EFrontEndRewardType               Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3887[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable2;                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable3;                             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable4;                             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable5;                             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable6;                             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function RewardsIcon.RewardsIcon_C.PlayShowAnimation
struct URewardsIcon_C_PlayShowAnimation_Params
{
public:
};

// 0x220 (0x220 - 0x0)
// Function RewardsIcon.RewardsIcon_C.On_ImageIcon_MouseButtonDown_0
struct URewardsIcon_C_On_ImageIcon_MouseButtonDown_0_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3888[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x168(0xB8)()
};

// 0x8 (0x8 - 0x0)
// Function RewardsIcon.RewardsIcon_C.RandomizeDesignView
struct URewardsIcon_C_RandomizeDesignView_Params
{
public:
	class UTexture2D*                            CallFunc_PopulateFromRandomLootLevel_Texture;      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function RewardsIcon.RewardsIcon_C.PopulateFromRandomLootLevel
struct URewardsIcon_C_PopulateFromRandomLootLevel_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3889[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_PopulateFromLootLevel_Texture;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function RewardsIcon.RewardsIcon_C.PopulateFromCollectionBookRewards
struct URewardsIcon_C_PopulateFromCollectionBookRewards_Params
{
public:
	class UFortRewardCollectionBookData*         K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function RewardsIcon.RewardsIcon_C.PopulateFromExpedition
struct URewardsIcon_C_PopulateFromExpedition_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RewardsIcon.RewardsIcon_C.PopulateFromNewQuest
struct URewardsIcon_C_PopulateFromNewQuest_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RewardsIcon.RewardsIcon_C.PopulateFromQuestRewards
struct URewardsIcon_C_PopulateFromQuestRewards_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function RewardsIcon.RewardsIcon_C.PopulateFromMissionRewards
struct URewardsIcon_C_PopulateFromMissionRewards_Params
{
public:
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIRewardReport*                   CallFunc_GetLastMissionRewardReport_ReturnValue;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRewardMissionData*                K2Node_DynamicCast_AsFort_Reward_Mission_Data;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_388A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetRewardedChestIndex_ReturnValue;        // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_PopulateFromLootLevel_Texture;            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function RewardsIcon.RewardsIcon_C.GetScale
struct URewardsIcon_C_GetScale_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function RewardsIcon.RewardsIcon_C.SetScale
struct URewardsIcon_C_SetScale_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function RewardsIcon.RewardsIcon_C.PopulateFromLootLevel
struct URewardsIcon_C_PopulateFromLootLevel_Params
{
public:
	int32                                        LootLevel;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_388B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Texture;                                           // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            ChestTexture;                                      // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2C (0x2C - 0x0)
// Function RewardsIcon.RewardsIcon_C.PlaySlideAnimation
struct URewardsIcon_C_PlaySlideAnimation_Params
{
public:
	float                                        TargetTranslation;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_388C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_BreakVector2D_X;                          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x20(0x8)(NoDestructor)
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function RewardsIcon.RewardsIcon_C.TickSlideAnimation
struct URewardsIcon_C_TickSlideAnimation_Params
{
public:
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMin_ReturnValue;                         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_388D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Ease_ReturnValue;                         // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x20(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function RewardsIcon.RewardsIcon_C.HandleSlideAnimationFinished
struct URewardsIcon_C_HandleSlideAnimationFinished_Params
{
public:
	float                                        TranslatedDist;                                    // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function RewardsIcon.RewardsIcon_C.HandleShowAnimationFinished
struct URewardsIcon_C_HandleShowAnimationFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RewardsIcon.RewardsIcon_C.HandleHideAnimationFinished
struct URewardsIcon_C_HandleHideAnimationFinished_Params
{
public:
};

// 0x22 (0x22 - 0x0)
// Function RewardsIcon.RewardsIcon_C.PopulateFromReward
struct URewardsIcon_C_PopulateFromReward_Params
{
public:
	class UFortRewardNotificationData*           InRewardItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TintColor;                                         // 0x8(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_PopulateFromRandomLootLevel_Texture;      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function RewardsIcon.RewardsIcon_C.Cleanup
struct URewardsIcon_C_Cleanup_Params
{
public:
};

// 0x11 (0x11 - 0x0)
// Function RewardsIcon.RewardsIcon_C.PlayHideAnimation
struct URewardsIcon_C_PlayHideAnimation_Params
{
public:
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function RewardsIcon.RewardsIcon_C.Construct
struct URewardsIcon_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function RewardsIcon.RewardsIcon_C.PreConstruct
struct URewardsIcon_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function RewardsIcon.RewardsIcon_C.whiteFadeOut
struct URewardsIcon_C_WhiteFadeOut_Params
{
public:
	float                                        Percent;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function RewardsIcon.RewardsIcon_C.ExecuteUbergraph_RewardsIcon
struct URewardsIcon_C_ExecuteUbergraph_RewardsIcon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_388E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_388F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_percent;                        // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function RewardsIcon.RewardsIcon_C.OnImageClicked__DelegateSignature
struct URewardsIcon_C_OnImageClicked__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function RewardsIcon.RewardsIcon_C.OnMaterializeAnimationFinished__DelegateSignature
struct URewardsIcon_C_OnMaterializeAnimationFinished__DelegateSignature_Params
{
public:
	class URewardsIcon_C*                        Icon;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function RewardsIcon.RewardsIcon_C.OnDisperseAnimationFinished__DelegateSignature
struct URewardsIcon_C_OnDisperseAnimationFinished__DelegateSignature_Params
{
public:
	class URewardsIcon_C*                        Icon;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function RewardsIcon.RewardsIcon_C.OnSlideAnimationFinished__DelegateSignature
struct URewardsIcon_C_OnSlideAnimationFinished__DelegateSignature_Params
{
public:
	class URewardsIcon_C*                        Icon;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
