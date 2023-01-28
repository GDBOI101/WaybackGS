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

// 0x28 (0x28 - 0x0)
// Function Results_SummaryBadge.Results_SummaryBadge_C.Initialize
struct UResults_SummaryBadge_C_Initialize_Params
{
public:
	class UFortItem*                             BadgeItem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x8(0x18)()
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Results_SummaryBadge.Results_SummaryBadge_C.PreConstruct
struct UResults_SummaryBadge_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Results_SummaryBadge.Results_SummaryBadge_C.Manual Pre Construct
struct UResults_SummaryBadge_C_Manual_Pre_Construct_Params
{
public:
};

// 0xA8 (0xA8 - 0x0)
// Function Results_SummaryBadge.Results_SummaryBadge_C.ExecuteUbergraph_Results_SummaryBadge
struct UResults_SummaryBadge_C_ExecuteUbergraph_Results_SummaryBadge_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable;                              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable2;                             // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable3;                             // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable4;                             // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable5;                             // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable6;                             // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable7;                             // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D2E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default;                             // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x90(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
