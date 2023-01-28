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

// 0x29 (0x29 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.ShowValidResidualScores
struct UResults_TeamScoreRow_C_ShowValidResidualScores_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D62[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonNumericTextBlock*               CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResults_PlayerScoreBox_C*             CallFunc_Array_Get_Item2;                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsValidScoreBox_bIsValidScoreBox;      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D63[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.SkipToFinalState
struct UResults_TeamScoreRow_C_SkipToFinalState_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.SetSkippingToEnd
struct UResults_TeamScoreRow_C_SetSkippingToEnd_Params
{
public:
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x114 (0x114 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.Initialize
struct UResults_TeamScoreRow_C_Initialize_Params
{
public:
	class UFortUIScoreReport*                    InScoreReport;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayRate;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D64[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonNumericTextBlock*               CurrentResidualScoreText;                          // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentScoreReportIndex;                           // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D65[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UResults_PlayerScoreBox_C*             CurrentScoreBox;                                   // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIScoreReport*                    ScoreReport;                                       // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BestScore;                                         // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D66[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UResults_PlayerScoreBox_C*             ScoreBoxBest;                                      // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UCommonNumericTextBlock*>       K2Node_MakeArray_Array;                            // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D67[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_GetScoreReportIndicesByPlayerID_SortedScoreReportIndices; // 0x58(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item;                           // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D68[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UResults_PlayerScoreBox_C*             CallFunc_Array_Get_Item2;                          // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               CallFunc_Array_Get_Item3;                          // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPlayerCount_ReturnValue;               // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D69[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UResults_PlayerScoreBox_C*>     K2Node_MakeArray_Array2;                           // 0xA0(0x10)(ZeroConstructor, ReferenceParm)
	class UCommonNumericTextBlock*               CallFunc_Array_Get_Item4;                          // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTeamScore_ReturnValue;                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D6A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UResults_PlayerScoreBox_C*             CallFunc_Array_Get_Item5;                          // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue2;                // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D6B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0xD0(0x28)()
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsValidScoreBox_bIsValidScoreBox;      // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D6C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPlayerScore_ReturnValue;               // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D6D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue2;                  // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.Intro Sequence
struct UResults_TeamScoreRow_C_Intro_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.BndEvt__Anim_Absorb_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_TeamScoreRow_C_BndEvt__Anim_Absorb_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.Count Up Sequence
struct UResults_TeamScoreRow_C_Count_Up_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_5_CountUpFinished__DelegateSignature
struct UResults_TeamScoreRow_C_BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_5_CountUpFinished__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.Count Down Sequence
struct UResults_TeamScoreRow_C_Count_Down_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature
struct UResults_TeamScoreRow_C_BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature
struct UResults_TeamScoreRow_C_BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.Stop Count Down Absorption
struct UResults_TeamScoreRow_C_Stop_Count_Down_Absorption_Params
{
public:
};

// 0x2D (0x2D - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.ExecuteUbergraph_Results_TeamScoreRow
struct UResults_TeamScoreRow_C_ExecuteUbergraph_Results_TeamScoreRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue2;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D6E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue3;                   // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue4;                   // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue5;                   // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue6;                   // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UResults_PlayerScoreBox_C*             CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsValidScoreBox_bIsValidScoreBox;      // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue7;                   // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D6F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D70[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue8;                   // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.CountDownFinished__DelegateSignature
struct UResults_TeamScoreRow_C_CountDownFinished__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.CountUpFinished__DelegateSignature
struct UResults_TeamScoreRow_C_CountUpFinished__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
