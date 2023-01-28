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

// 0x31 (0x31 - 0x0)
// Function JournalObjectiveEntry.JournalObjectiveEntry_C.Update
struct UJournalObjectiveEntry_C_Update_Params
{
public:
	class UFortQuestObjectiveInfo*               Objective;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                   CallFunc_SpawnTooltipContext_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCombinedDescription_OutDescription;    // 0x18(0x18)()
	bool                                         CallFunc_GetCombinedDescription_ReturnValue;       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function JournalObjectiveEntry.JournalObjectiveEntry_C.UpdateProgress
struct UJournalObjectiveEntry_C_UpdateProgress_Params
{
public:
	class UFortQuestObjectiveInfo*               Objective;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function JournalObjectiveEntry.JournalObjectiveEntry_C.SetData
struct UJournalObjectiveEntry_C_SetData_Params
{
public:
	class UObject*                               InData;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function JournalObjectiveEntry.JournalObjectiveEntry_C.Construct
struct UJournalObjectiveEntry_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function JournalObjectiveEntry.JournalObjectiveEntry_C.Handle Quests Updated
struct UJournalObjectiveEntry_C_Handle_Quests_Updated_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function JournalObjectiveEntry.JournalObjectiveEntry_C.ExecuteUbergraph_JournalObjectiveEntry
struct UJournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A16[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UObject*                               K2Node_Event_InData;                               // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestObjectiveInfo*               K2Node_DynamicCast_AsFort_Quest_Objective_Info;    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A17[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
