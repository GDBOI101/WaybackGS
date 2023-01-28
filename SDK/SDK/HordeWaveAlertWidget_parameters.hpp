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

// 0x3C (0x3C - 0x0)
// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveStarted
struct UHordeWaveAlertWidget_C_OnWaveStarted_Params
{
public:
	class FText                                  LevelText;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm)
	int32                                        Level;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F1C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  WaveText;                                          // 0x20(0x18)(ConstParm, Parm, OutParm, ReferenceParm)
	int32                                        WaveNum;                                           // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveCompleted
struct UHordeWaveAlertWidget_C_OnWaveCompleted_Params
{
public:
	int32                                        Wave;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F1D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortItemInstanceQuantityPair> Rewards;                                           // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnHordeTierInitialized_Event_0
struct UHordeWaveAlertWidget_C_OnHordeTierInitialized_Event_0_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> Items;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveModifiersAdded
struct UHordeWaveAlertWidget_C_OnWaveModifiersAdded_Params
{
public:
	TArray<class UFortGameplayModifierItemDefinition*> Modifiers;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.Construct
struct UHordeWaveAlertWidget_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnModifierAppearanceAnimComplete
struct UHordeWaveAlertWidget_C_OnModifierAppearanceAnimComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnAllModifiersPresented
struct UHordeWaveAlertWidget_C_OnAllModifiersPresented_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnAppearanceDisappearanceAnimComplete
struct UHordeWaveAlertWidget_C_OnAppearanceDisappearanceAnimComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnModifierDisappearanceAnimComplete
struct UHordeWaveAlertWidget_C_OnModifierDisappearanceAnimComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnAppearanceDisappearanceAnimComplete_Quick
struct UHordeWaveAlertWidget_C_OnAppearanceDisappearanceAnimComplete_Quick_Params
{
public:
};

// 0x280 (0x280 - 0x0)
// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.ExecuteUbergraph_HordeWaveAlertWidget
struct UHordeWaveAlertWidget_C_ExecuteUbergraph_HordeWaveAlertWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F1E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class FText                                  K2Node_CustomEvent_LevelText;                      // 0x18(0x18)(ConstParm)
	int32                                        K2Node_CustomEvent_Level;                          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F1F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_WaveText;                       // 0x38(0x18)(ConstParm)
	int32                                        K2Node_CustomEvent_WaveNum;                        // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x58(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue2;              // 0x70(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x88(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0xC8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x108(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array2;                           // 0x118(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x128(0x18)()
	class FText                                  CallFunc_Format_ReturnValue2;                      // 0x140(0x18)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x158(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x168(0x10)(ZeroConstructor, NoDestructor)
	int32                                        K2Node_CustomEvent_Wave;                           // 0x178(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F21[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortItemInstanceQuantityPair> K2Node_CustomEvent_Rewards;                        // 0x180(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x190(0x10)(ZeroConstructor, NoDestructor)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData3;             // 0x1A0(0x40)(HasGetValueTypeHash)
	TArray<struct FFortItemInstanceQuantityPair> K2Node_CustomEvent_Items;                          // 0x1E0(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array3;                           // 0x1F0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue3;                      // 0x200(0x18)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x218(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x228(0x10)(ZeroConstructor, NoDestructor)
	TArray<class UFortGameplayModifierItemDefinition*> K2Node_CustomEvent_Modifiers;                      // 0x238(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate7;             // 0x248(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate8;             // 0x258(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate9;             // 0x268(0x10)(ZeroConstructor, NoDestructor)
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
