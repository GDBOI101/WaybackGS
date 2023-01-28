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
// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Get Mcp Relative Utc Now
struct UBP_FortExpeditionReturnsWidget_C_Get_Mcp_Relative_Utc_Now_Params
{
public:
	struct FDateTime                             UtcNow;                                            // 0x0(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             CallFunc_GetMcpRelativeUtcNow_ReturnValue;         // 0x20(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Get Expedition Item Definition
struct UBP_FortExpeditionReturnsWidget_C_Get_Expedition_Item_Definition_Params
{
public:
	class UFortExpeditionItem*                   Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionItemDefinition*         ItemDef;                                           // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionItemDefinition*         K2Node_DynamicCast_AsFort_Expedition_Item_Definition; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Set Expedition Return Progress
struct UBP_FortExpeditionReturnsWidget_C_Set_Expedition_Return_Progress_Params
{
public:
	class UFortExpeditionItem*                   Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionItemDefinition*         CallFunc_Get_Expedition_Item_Definition_ItemDef;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                             CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow;          // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimespan                             CallFunc_GetRemainingExpeditionDuration_ReturnValue; // 0x20(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTotalSeconds_ReturnValue;              // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FCeil_ReturnValue;                        // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Set Expedition Return Time
struct UBP_FortExpeditionReturnsWidget_C_Set_Expedition_Return_Time_Params
{
public:
	class UFortExpeditionItem*                   Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                             CallFunc_MakeTimespan_ReturnValue;                 // 0x8(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsExpeditionCompleted_ReturnValue;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FTimespan                             CallFunc_GetRemainingExpeditionDuration_ReturnValue; // 0x20(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FTimespan                             CallFunc_Add_TimespanTimespan_ReturnValue;         // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetTimespanAsText_ReturnValue;            // 0x30(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x48(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x88(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x98(0x18)()
};

// 0x9 (0x9 - 0x0)
// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Refresh In Progress Widgets
struct UBP_FortExpeditionReturnsWidget_C_Refresh_In_Progress_Widgets_Params
{
public:
	class UFortExpeditionItem*                   Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsExpeditionInProgress_ReturnValue;       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.OnExpeditionInProgressUpdated
struct UBP_FortExpeditionReturnsWidget_C_OnExpeditionInProgressUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Construct
struct UBP_FortExpeditionReturnsWidget_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.SetData
struct UBP_FortExpeditionReturnsWidget_C_SetData_Params
{
public:
	class UFortExpeditionItem*                   InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.PreConstruct
struct UBP_FortExpeditionReturnsWidget_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B (0x1B - 0x0)
// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.ExecuteUbergraph_BP_FortExpeditionReturnsWidget
struct UBP_FortExpeditionReturnsWidget_C_ExecuteUbergraph_BP_FortExpeditionReturnsWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow;          // 0x8(0x8)(NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionItem*                   K2Node_Event_InItem;                               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsExpeditionCompleted_ReturnValue;        // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.OnExpeditionCompleted__DelegateSignature
struct UBP_FortExpeditionReturnsWidget_C_OnExpeditionCompleted__DelegateSignature_Params
{
public:
	class UFortExpeditionItem*                   Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
