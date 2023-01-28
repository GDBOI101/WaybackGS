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

// 0xF8 (0xF8 - 0x0)
// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.UpdateFromObjectiveInfo
struct UDailyQuestObjectiveEntry_C_UpdateFromObjectiveInfo_Params
{
public:
	struct FFortMcpQuestObjectiveInfo            ObjectiveInfo;                                     // 0x0(0xF8)(Parm)
};

// 0x0 (0x0 - 0x0)
// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.PlayAppearAnimation
struct UDailyQuestObjectiveEntry_C_PlayAppearAnimation_Params
{
public:
};

// 0x5A (0x5A - 0x0)
// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.Update
struct UDailyQuestObjectiveEntry_C_Update_Params
{
public:
	class UFortQuestObjectiveInfo*               Objective;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AchievedCount;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortTooltipContext*                   CallFunc_SpawnTooltipContext_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x18(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCombinedDescription_OutDescription;    // 0x40(0x18)()
	bool                                         CallFunc_GetCombinedDescription_ReturnValue;       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.UpdateProgress
struct UDailyQuestObjectiveEntry_C_UpdateProgress_Params
{
public:
	class UFortQuestObjectiveInfo*               Objective;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AchievedCount;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.SetData
struct UDailyQuestObjectiveEntry_C_SetData_Params
{
public:
	class UObject*                               InData;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.ExecuteUbergraph_DailyQuestObjectiveEntry
struct UDailyQuestObjectiveEntry_C_ExecuteUbergraph_DailyQuestObjectiveEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_InData;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestObjectiveInfo*               K2Node_DynamicCast_AsFort_Quest_Objective_Info;    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
