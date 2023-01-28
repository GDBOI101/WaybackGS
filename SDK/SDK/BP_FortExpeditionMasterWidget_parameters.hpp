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

// 0x4 (0x4 - 0x0)
// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleSortExpeditionListAction
struct UBP_FortExpeditionMasterWidget_C_HandleSortExpeditionListAction_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_Add_ByteByte_ReturnValue;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_ByteByte_ReturnValue;             // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Disable Input Action
struct UBP_FortExpeditionMasterWidget_C_Disable_Input_Action_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleCollectExpeditionAction
struct UBP_FortExpeditionMasterWidget_C_HandleCollectExpeditionAction_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleAbandonExpeditionAction
struct UBP_FortExpeditionMasterWidget_C_HandleAbandonExpeditionAction_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleBuildExpeditionAction
struct UBP_FortExpeditionMasterWidget_C_HandleBuildExpeditionAction_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleBuildExpeditionAction_PassThrough;  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Present Reward UI
struct UBP_FortExpeditionMasterWidget_C_Present_Reward_UI_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Show Input Action
struct UBP_FortExpeditionMasterWidget_C_Show_Input_Action_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Hide Input Action
struct UBP_FortExpeditionMasterWidget_C_Hide_Input_Action_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Update Master Widget
struct UBP_FortExpeditionMasterWidget_C_Update_Master_Widget_Params
{
public:
	bool                                         CallFunc_AreAnyExpeditionsComplete_ReturnValue;    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Setup Bindings
struct UBP_FortExpeditionMasterWidget_C_Setup_Bindings_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Setup Input Action Handlers
struct UBP_FortExpeditionMasterWidget_C_Setup_Input_Action_Handlers_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x40(0x10)(ZeroConstructor, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Handle Back
struct UBP_FortExpeditionMasterWidget_C_Handle_Back_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D83[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Construct
struct UBP_FortExpeditionMasterWidget_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Destruct
struct UBP_FortExpeditionMasterWidget_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleAllCompletedExpeditionsCollected
struct UBP_FortExpeditionMasterWidget_C_HandleAllCompletedExpeditionsCollected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HACK_OnActivate_UpdateMasterWidget
struct UBP_FortExpeditionMasterWidget_C_HACK_OnActivate_UpdateMasterWidget_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.OnActivated
struct UBP_FortExpeditionMasterWidget_C_OnActivated_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.ExecuteUbergraph_BP_FortExpeditionMasterWidget
struct UBP_FortExpeditionMasterWidget_C_ExecuteUbergraph_BP_FortExpeditionMasterWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D84[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue2;         // 0x30(0x8)(NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
