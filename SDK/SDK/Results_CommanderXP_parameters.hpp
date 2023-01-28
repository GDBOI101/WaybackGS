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
// Function Results_CommanderXP.Results_CommanderXP_C.Focus
struct UResults_CommanderXP_C_Focus_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.PlayAnimationCommon
struct UResults_CommanderXP_C_PlayAnimationCommon_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.SetSkippingToEnd
struct UResults_CommanderXP_C_SetSkippingToEnd_Params
{
public:
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue2;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue3;          // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.SkipToFinalState
struct UResults_CommanderXP_C_SkipToFinalState_Params
{
public:
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.UpdatePointsText
struct UResults_CommanderXP_C_UpdatePointsText_Params
{
public:
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x50(0x18)()
};

// 0xD0 (0xD0 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.UpdatePointsForLevel
struct UResults_CommanderXP_C_UpdatePointsForLevel_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RewardedPoints;                                    // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x20(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x60(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_287F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x78(0x18)()
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortItemQuantityPair>         CallFunc_GetAccountLevelUpRewards_Rewards;         // 0x98(0x10)(ZeroConstructor, ReferenceParm)
	struct FFortItemQuantityPair                 CallFunc_Array_Get_Item;                           // 0xA8(0x28)()
};

// 0x1E0 (0x1E0 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.Initialize
struct UResults_CommanderXP_C_Initialize_Params
{
public:
	class UFortUIScoreReport*                    InScoreReport;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResults_TeamTotalScore_C*             TeamTotalScore;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SkillPoints;                                       // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FinalLevel;                                        // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InitialLevel;                                      // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2880[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIScoreReport*                    ScoreReport;                                       // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue2;                  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortHomeBaseInfo                     CallFunc_GetHomeBaseInfo_Result;                   // 0x38(0x40)()
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetSmallPreviewImage_ReturnValue;         // 0x78(0x20)(HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_AssetToObject_ReturnValue;           // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2881[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue2;          // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue3;          // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue3;                  // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2882[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortHomeBaseInfo                     CallFunc_GetHomeBaseInfo_Result2;                  // 0xD8(0x40)()
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue2;           // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2883[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortItemQuantityPair>         CallFunc_GetAccountLevelUpRewards_Rewards;         // 0x130(0x10)(ZeroConstructor, ReferenceParm)
	struct FFortItemQuantityPair                 CallFunc_Array_Get_Item;                           // 0x140(0x28)()
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2884[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue2;                  // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue3;                  // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2885[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerState*                      K2Node_DynamicCast_AsFort_Player_State;            // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2886[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetUniqueID_ReturnValue;                  // 0x190(0x18)(HasGetValueTypeHash)
	int32                                        CallFunc_GetScoreReportIndex_ReturnValue;          // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortUIXpInfo                         CallFunc_GetXpInfo_OutXpInfo;                      // 0x1AC(0x2C)(NoDestructor)
	bool                                         CallFunc_GetXpInfo_ReturnValue;                    // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2887[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x1DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Results_CommanderXPBar_K2Node_ComponentBoundEvent_1_LeveledUp__DelegateSignature
struct UResults_CommanderXP_C_BndEvt__Results_CommanderXPBar_K2Node_ComponentBoundEvent_1_LeveledUp__DelegateSignature_Params
{
public:
	int32                                        NewLevel;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_SkillPointIncrementIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_CommanderXP_C_BndEvt__Anim_SkillPointIncrementIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.Intro Sequence
struct UResults_CommanderXP_C_Intro_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature
struct UResults_CommanderXP_C_BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_CommanderXP_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.Count Sequence
struct UResults_CommanderXP_C_Count_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_3_CountFinished__DelegateSignature
struct UResults_CommanderXP_C_BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_3_CountFinished__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_CommanderXP_C_BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_SkillPointIncrement2_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_CommanderXP_C_BndEvt__Anim_SkillPointIncrement2_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.GateSkillPointAnimation1
struct UResults_CommanderXP_C_GateSkillPointAnimation1_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.GateSkillPointAnimation2
struct UResults_CommanderXP_C_GateSkillPointAnimation2_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.ResetGateSkillPointAnimation2
struct UResults_CommanderXP_C_ResetGateSkillPointAnimation2_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.ResetGateSkillPointAnimation1
struct UResults_CommanderXP_C_ResetGateSkillPointAnimation1_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.Skip To End Sequence
struct UResults_CommanderXP_C_Skip_To_End_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.Skip
struct UResults_CommanderXP_C_Skip_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UResults_CommanderXP_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_CommanderXP_C_BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.ExecuteUbergraph_Results_CommanderXP
struct UResults_CommanderXP_C_ExecuteUbergraph_Results_CommanderXP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue2;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue3;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue4;                   // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        K2Node_ComponentBoundEvent_NewLevel;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_B_Execution_Happened_Variable;           // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_A_Execution_Happened_Variable;           // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue2;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue3;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_B_Execution_Happened_Variable2;          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_A_Execution_Happened_Variable2;          // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2888[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Results_CommanderXP.Results_CommanderXP_C.Finished__DelegateSignature
struct UResults_CommanderXP_C_Finished__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
