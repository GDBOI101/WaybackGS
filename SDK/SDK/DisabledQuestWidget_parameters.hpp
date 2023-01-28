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

// 0x128 (0x128 - 0x0)
// Function DisabledQuestWidget.DisabledQuestWidget_C.CreateAllObjectiveWidgets
struct UDisabledQuestWidget_C_CreateAllObjectiveWidgets_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F43[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMcpQuestObjectiveInfo            CallFunc_Array_Get_Item;                           // 0x10(0xF8)()
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F44[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDailyQuestObjectiveEntry_C*           CallFunc_Create_ReturnValue;                       // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function DisabledQuestWidget.DisabledQuestWidget_C.UpdateObjectiveWidgets
struct UDisabledQuestWidget_C_UpdateObjectiveWidgets_Params
{
public:
};

// 0x129 (0x129 - 0x0)
// Function DisabledQuestWidget.DisabledQuestWidget_C.FilterObjectives
struct UDisabledQuestWidget_C_FilterObjectives_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F45[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortMcpQuestObjectiveInfo>    CallFunc_GetObjectives_BP_ReturnValue;             // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F46[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMcpQuestObjectiveInfo            CallFunc_Array_Get_Item;                           // 0x28(0xF8)()
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F47[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function DisabledQuestWidget.DisabledQuestWidget_C.SetQuestItem
struct UDisabledQuestWidget_C_SetQuestItem_Params
{
public:
	class UFortQuestItemDefinition*              QuestDefinition;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortRewardInfo                       CallFunc_GetRewardInfo_BP_ReturnValue;             // 0x8(0x30)()
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x38(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
