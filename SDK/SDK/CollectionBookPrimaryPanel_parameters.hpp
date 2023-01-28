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

// 0x1 (0x1 - 0x0)
// Function CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C.OnSummonInfoPanelExecuted
struct UCollectionBookPrimaryPanel_C_OnSummonInfoPanelExecuted_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C.HandleDisplayInfoBox
struct UCollectionBookPrimaryPanel_C_HandleDisplayInfoBox_Params
{
public:
};

// 0x21 (0x21 - 0x0)
// Function CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C.ExecuteUbergraph_CollectionBookPrimaryPanel
struct UCollectionBookPrimaryPanel_C_ExecuteUbergraph_CollectionBookPrimaryPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3598[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetCachedWidget_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHelpWidget_C*                         K2Node_DynamicCast_AsHelp_Widget;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
