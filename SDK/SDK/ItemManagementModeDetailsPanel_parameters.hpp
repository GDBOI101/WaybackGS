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
// Function ItemManagementModeDetailsPanel.ItemManagementModeDetailsPanel_C.HandleDifferentItemManagementModeSetBP
struct UItemManagementModeDetailsPanel_C_HandleDifferentItemManagementModeSetBP_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ItemManagementModeDetailsPanel.ItemManagementModeDetailsPanel_C.ExecuteUbergraph_ItemManagementModeDetailsPanel
struct UItemManagementModeDetailsPanel_C_ExecuteUbergraph_ItemManagementModeDetailsPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemManagementMode           Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemManagementMode           CallFunc_GetItemManagementMode_ReturnValue;        // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3459[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
