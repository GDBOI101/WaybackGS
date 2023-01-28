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
// Function Results_TeamTotalScore.Results_TeamTotalScore_C.InitializeConvertScorePlayRate
struct UResults_TeamTotalScore_C_InitializeConvertScorePlayRate_Params
{
public:
	float                                        PlayRate;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Results_TeamTotalScore.Results_TeamTotalScore_C.InitializeCountScorePlayRate
struct UResults_TeamTotalScore_C_InitializeCountScorePlayRate_Params
{
public:
	float                                        PlayRate;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SetSkippingToConvertScoreEnd
struct UResults_TeamTotalScore_C_SetSkippingToConvertScoreEnd_Params
{
public:
	bool                                         CallFunc_IsInterpolatingNumericValue_ReturnValue;  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SkipToConvertScoreFinalState
struct UResults_TeamTotalScore_C_SkipToConvertScoreFinalState_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SetSkippingToCountScoreEnd
struct UResults_TeamTotalScore_C_SetSkippingToCountScoreEnd_Params
{
public:
	bool                                         CallFunc_IsInterpolatingNumericValue_ReturnValue;  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SkipToCountScoreFinalState
struct UResults_TeamTotalScore_C_SkipToCountScoreFinalState_Params
{
public:
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Initialize
struct UResults_TeamTotalScore_C_Initialize_Params
{
public:
	class UFortUIScoreReport*                    Score_Report;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTeamScore_ReturnValue;                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTeamScore_ReturnValue2;                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTeamScore_ReturnValue3;                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTeamScore_ReturnValue4;                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue2;                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue3;                  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Sequence
struct UResults_TeamTotalScore_C_Count_Score_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Intro Sequence
struct UResults_TeamTotalScore_C_Count_Score_Intro_Sequence_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Results_TeamTotalScore.Results_TeamTotalScore_C.PreConstruct
struct UResults_TeamTotalScore_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Intro Sequence
struct UResults_TeamTotalScore_C_Convert_Score_Intro_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Sequence
struct UResults_TeamTotalScore_C_Convert_Score_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Interpolation Finished
struct UResults_TeamTotalScore_C_Count_Score_Interpolation_Finished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Interpolation Finished
struct UResults_TeamTotalScore_C_Convert_Score_Interpolation_Finished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Teleport Pad Intro Sequence
struct UResults_TeamTotalScore_C_Teleport_Pad_Intro_Sequence_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function Results_TeamTotalScore.Results_TeamTotalScore_C.BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature
struct UResults_TeamTotalScore_C_BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature_Params
{
public:
	class UCommonNumericTextBlock*               NumericTextBlock;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HadCompleted;                                      // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x34 (0x34 - 0x0)
// Function Results_TeamTotalScore.Results_TeamTotalScore_C.ExecuteUbergraph_Results_TeamTotalScore
struct UResults_TeamTotalScore_C_ExecuteUbergraph_Results_TeamTotalScore_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue2;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue3;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D5D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D5E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue2;             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue3;             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue4;                   // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D5F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_CreateSound2D_ReturnValue;                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               K2Node_ComponentBoundEvent_NumericTextBlock;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_HadCompleted;           // 0x30(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue5;                   // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue2;         // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Finished__DelegateSignature
struct UResults_TeamTotalScore_C_Count_Score_Finished__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
