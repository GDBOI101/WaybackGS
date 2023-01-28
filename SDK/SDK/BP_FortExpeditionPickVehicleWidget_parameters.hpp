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

// 0x1A (0x1A - 0x0)
// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Pre Select for Console
struct UBP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console_Params
{
public:
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3378[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetItemAt_ReturnValue;                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetSelectedItem_ReturnValue;              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7D (0x7D - 0x0)
// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Determine Available Expedition Squads
struct UBP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads_Params
{
public:
	struct FGameplayTagContainer                 RequirementTags;                                   // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3379[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVehicleObject_C*                      CallFunc_SpawnObject_ReturnValue;                  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetExpeditionSquadsThatMatchRequirements_OutExpeditionSquadIds; // 0x50(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_GetExpeditionSquadsThatMatchRequirements_ReturnValue; // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSquadOnExpedition_ReturnValue;          // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Get Expedition Item Definition
struct UBP_FortExpeditionPickVehicleWidget_C_Get_Expedition_Item_Definition_Params
{
public:
	class UFortItem*                             ItemDef;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionItemDefinition*         AsFort_Expedition_Item_Definition;                 // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionItemDefinition*         K2Node_DynamicCast_AsFort_Expedition_Item_Definition; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Setup Input Action Handlers
struct UBP_FortExpeditionPickVehicleWidget_C_Setup_Input_Action_Handlers_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleBack
struct UBP_FortExpeditionPickVehicleWidget_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Construct
struct UBP_FortExpeditionPickVehicleWidget_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.SetData
struct UBP_FortExpeditionPickVehicleWidget_C_SetData_Params
{
public:
	class UFortExpeditionItem*                   InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.OnActivated
struct UBP_FortExpeditionPickVehicleWidget_C_OnActivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature
struct UBP_FortExpeditionPickVehicleWidget_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehicleSelected
struct UBP_FortExpeditionPickVehicleWidget_C_HandleVehicleSelected_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HACK_GetMeOutOfSelectContext
struct UBP_FortExpeditionPickVehicleWidget_C_HACK_GetMeOutOfSelectContext_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehicleButtonHovered
struct UBP_FortExpeditionPickVehicleWidget_C_HandleVehicleButtonHovered_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehcileButtonUnhovered
struct UBP_FortExpeditionPickVehicleWidget_C_HandleVehcileButtonUnhovered_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget
struct UBP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_337E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           K2Node_ComponentBoundEvent_Widget;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_FortExpeditionVehicleTileItemWidget_C* K2Node_DynamicCast_AsBP_Fort_Expedition_Vehicle_Tile_Item_Widget; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_SquadId;                        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HandleBack_PassThrough;                   // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3380[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortExpeditionItem*                   K2Node_Event_InItem;                               // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionItemDefinition*         CallFunc_Get_Expedition_Item_Definition_AsFort_Expedition_Item_Definition; // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_GetRequiredTags_ReturnValue;              // 0x50(0x20)()
	class UCommonButton*                         K2Node_CustomEvent_Button2;                        // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_FortExpeditionVehicleTileItemWidget_C* K2Node_DynamicCast_AsBP_Fort_Expedition_Vehicle_Tile_Item_Widget2; // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3381[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x88(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x98(0x10)(ZeroConstructor, NoDestructor)
	class UCommonButton*                         K2Node_CustomEvent_Button;                         // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0xB0(0x8)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0xB8(0x10)(ZeroConstructor, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.OnVehicleSelected__DelegateSignature
struct UBP_FortExpeditionPickVehicleWidget_C_OnVehicleSelected__DelegateSignature_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
