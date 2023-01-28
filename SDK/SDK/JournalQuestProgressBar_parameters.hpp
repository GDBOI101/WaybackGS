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
// Function JournalQuestProgressBar.JournalQuestProgressBar_C.SetStylesToDefault
struct UJournalQuestProgressBar_C_SetStylesToDefault_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function JournalQuestProgressBar.JournalQuestProgressBar_C.Construct
struct UJournalQuestProgressBar_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function JournalQuestProgressBar.JournalQuestProgressBar_C.HandleNewQuestObjectiveBP
struct UJournalQuestProgressBar_C_HandleNewQuestObjectiveBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function JournalQuestProgressBar.JournalQuestProgressBar_C.Handle Quests Updated
struct UJournalQuestProgressBar_C_Handle_Quests_Updated_Params
{
public:
};

// 0x24B (0x24B - 0x0)
// Function JournalQuestProgressBar.JournalQuestProgressBar_C.ExecuteUbergraph_JournalQuestProgressBar
struct UJournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                   CallFunc_SpawnTooltipContext_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCombinedDescription_OutDescription;    // 0x18(0x18)()
	bool                                         CallFunc_GetCombinedDescription_ReturnValue;       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortTooltipContext*                   CallFunc_SpawnTooltipContext_ReturnValue2;         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x40(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsVisibleToUser_ReturnValue;              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProgressBarStyle                     K2Node_MakeStruct_ProgressBarStyle;                // 0x60(0x1B8)()
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue3;                  // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTooltipNumericValue_Value;             // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetTooltipNumericValue_ReturnValue;       // 0x22C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetTooltipTextFromToken_OutText;          // 0x230(0x18)()
	bool                                         CallFunc_GetTooltipTextFromToken_ReturnValue;      // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x249(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x24A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
