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

// 0x30 (0x30 - 0x0)
// Function QuestInfo_Widget.QuestInfo_Widget_C.SetQuestText
struct UQuestInfo_Widget_C_SetQuestText_Params
{
public:
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0x0(0x18)()
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x18(0x18)()
};

// 0x128 (0x128 - 0x0)
// Function QuestInfo_Widget.QuestInfo_Widget_C.SetQuestIcon
struct UQuestInfo_Widget_C_SetQuestIcon_Params
{
public:
	struct FSlateBrush                           CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x0(0x90)()
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B66[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_SetFieldsInStruct_StructOut;                // 0x98(0x90)()
};

// 0xF9 (0xF9 - 0x0)
// Function QuestInfo_Widget.QuestInfo_Widget_C.PopulateRewards
struct UQuestInfo_Widget_C_PopulateRewards_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B67[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortItemInstanceQuantityPair> CallFunc_GetPreviewRewards_ReturnValue;            // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B68[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortItemInstanceQuantityPair         CallFunc_Array_Get_Item;                           // 0x28(0x10)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B69[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x40(0x90)()
	class UFortQuestItem*                        K2Node_DynamicCast_AsFort_Quest_Item;              // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0xE0(0x18)()
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function QuestInfo_Widget.QuestInfo_Widget_C.PopulateObjectives
struct UQuestInfo_Widget_C_PopulateObjectives_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestObjectiveInfo*               CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisibleToUser_ReturnValue;              // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function QuestInfo_Widget.QuestInfo_Widget_C.Reset
struct UQuestInfo_Widget_C_Reset_Params
{
public:
};

// 0x19 (0x19 - 0x0)
// Function QuestInfo_Widget.QuestInfo_Widget_C.InitDesignView
struct UQuestInfo_Widget_C_InitDesignView_Params
{
public:
	class UFortQuestItemDefinition*              TempQuestDefinition;                               // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        K2Node_DynamicCast_AsFort_Quest_Item;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function QuestInfo_Widget.QuestInfo_Widget_C.PopulateFromQuest
struct UQuestInfo_Widget_C_PopulateFromQuest_Params
{
public:
	class UFortQuestItem*                        InQuest;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function QuestInfo_Widget.QuestInfo_Widget_C.Construct
struct UQuestInfo_Widget_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function QuestInfo_Widget.QuestInfo_Widget_C.PreConstruct
struct UQuestInfo_Widget_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function QuestInfo_Widget.QuestInfo_Widget_C.ExecuteUbergraph_QuestInfo_Widget
struct UQuestInfo_Widget_C_ExecuteUbergraph_QuestInfo_Widget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
