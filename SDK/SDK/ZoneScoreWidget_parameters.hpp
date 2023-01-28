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

// 0x88 (0x88 - 0x0)
// Function ZoneScoreWidget.ZoneScoreWidget_C.BindEndOfDayHeaderText
struct UZoneScoreWidget_C_BindEndOfDayHeaderText_Params
{
public:
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3305[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x20(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x60(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x70(0x18)()
};

// 0x2D4 (0x2D4 - 0x0)
// Function ZoneScoreWidget.ZoneScoreWidget_C.ShowTeamScoreContributions
struct UZoneScoreWidget_C_ShowTeamScoreContributions_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3306[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortPlayerScoreReport                CallFunc_Array_Get_Item;                           // 0x8(0x288)()
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3307[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x2A0(0x10)(NoDestructor)
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize;                  // 0x2B0(0x8)(NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerZoneTeamScoreContributionWidget_C* CallFunc_Create_ReturnValue;                       // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x79 (0x79 - 0x0)
// Function ZoneScoreWidget.ZoneScoreWidget_C.ShowXPReward
struct UZoneScoreWidget_C_ShowXPReward_Params
{
public:
	class UFortUIScoreReport*                    ScoreReport;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIScoreReport*                    CallFunc_GetScoreReport_ReturnValue;               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerState*                      K2Node_DynamicCast_AsFort_Player_State;            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3308[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetUniqueID_ReturnValue;                  // 0x30(0x18)(HasGetValueTypeHash)
	int32                                        CallFunc_GetScoreReportIndex_ReturnValue;          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortUIXpInfo                         CallFunc_GetXpInfo_OutXpInfo;                      // 0x4C(0x2C)(NoDestructor)
	bool                                         CallFunc_GetXpInfo_ReturnValue;                    // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ZoneScoreWidget.ZoneScoreWidget_C.UpdateXPLERP
struct UZoneScoreWidget_C_UpdateXPLERP_Params
{
public:
	float                                        LERP_Factor;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ZoneScoreWidget.ZoneScoreWidget_C.BeginTweeningXP
struct UZoneScoreWidget_C_BeginTweeningXP_Params
{
public:
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function ZoneScoreWidget.ZoneScoreWidget_C.UpdateScoresLERP
struct UZoneScoreWidget_C_UpdateScoresLERP_Params
{
public:
	float                                        LERP_Factor;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3309[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerZoneTeamScoreContributionWidget_C* CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ZoneScoreWidget.ZoneScoreWidget_C.BeginTweeningScores
struct UZoneScoreWidget_C_BeginTweeningScores_Params
{
public:
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ZoneScoreWidget.ZoneScoreWidget_C.StartEndOfDayRecapAfterAnimation
struct UZoneScoreWidget_C_StartEndOfDayRecapAfterAnimation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ZoneScoreWidget.ZoneScoreWidget_C.OnXPTweenEndEvent
struct UZoneScoreWidget_C_OnXPTweenEndEvent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ZoneScoreWidget.ZoneScoreWidget_C.OnScoreTweenEndEvent
struct UZoneScoreWidget_C_OnScoreTweenEndEvent_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function ZoneScoreWidget.ZoneScoreWidget_C.Tick
struct UZoneScoreWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ZoneScoreWidget.ZoneScoreWidget_C.Construct
struct UZoneScoreWidget_C_Construct_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function ZoneScoreWidget.ZoneScoreWidget_C.OnEndOfDayRecap
struct UZoneScoreWidget_C_OnEndOfDayRecap_Params
{
public:
	struct FEndOfDayRecap                        EndOfDayRecap;                                     // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0xA8 (0xA8 - 0x0)
// Function ZoneScoreWidget.ZoneScoreWidget_C.ExecuteUbergraph_ZoneScoreWidget
struct UZoneScoreWidget_C_ExecuteUbergraph_ZoneScoreWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_330A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_330B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x14(0x34)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue2;         // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_330C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x68(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x78(0x10)(ZeroConstructor, NoDestructor)
	struct FEndOfDayRecap                        K2Node_CustomEvent_EndOfDayRecap;                  // 0x88(0x20)(ConstParm)
};

// 0x0 (0x0 - 0x0)
// Function ZoneScoreWidget.ZoneScoreWidget_C.OnEndOfDayRecapEnded__DelegateSignature
struct UZoneScoreWidget_C_OnEndOfDayRecapEnded__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
