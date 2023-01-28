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

// 0xC9 (0xC9 - 0x0)
// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnDrop
struct UAthenaInventoryFortItemTileButton_C_OnDrop_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         PointerEvent;                                      // 0x38(0x78)(Parm)
	class UDragDropOperation*                    Operation;                                         // 0xB0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xB8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         ValidDrop;                                         // 0xB9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29C8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             K2Node_DynamicCast_AsFort_Item;                    // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B0 (0x1B0 - 0x0)
// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnFocusReceived
struct UAthenaInventoryFortItemTileButton_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x34(0x8)(Parm, NoDestructor)
	uint8                                        Pad_29C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0xF8(0xB8)()
};

// 0x3A0 (0x3A0 - 0x0)
// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.On_ItemWidgetHolder_MouseButtonDown
struct UAthenaInventoryFortItemTileButton_C_On_ItemWidgetHolder_MouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x168(0xB8)()
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                           CallFunc_DetectDrag_ReturnValue;                   // 0x228(0xB8)()
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29CB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue2;                   // 0x2E8(0xB8)()
};

// 0x2D (0x2D - 0x0)
// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.UpdateInteractionWidgetVisibility
struct UAthenaInventoryFortItemTileButton_C_UpdateInteractionWidgetVisibility_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29CC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetData_ReturnValue;                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             K2Node_DynamicCast_AsFort_Item;                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 CallFunc_GetOwningController_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesMatchSearchString_ReturnValue;        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsEquipable_ReturnValue;                  // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.SetEquipSlotOverlay
struct UAthenaInventoryFortItemTileButton_C_SetEquipSlotOverlay_Params
{
public:
	int32                                        EquipSlot;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_MathExpression_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Temp_object_Variable;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable2;                             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable3;                             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable4;                             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable5;                             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_Select_Default;                             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnDragDetected
struct UAthenaInventoryFortItemTileButton_C_OnDragDetected_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         PointerEvent;                                      // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                    Operation;                                         // 0xB0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaInventoryDragDrop_C*            CallFunc_CreateDragDropOperation_ReturnValue;      // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputEvent                           CallFunc_GetInputEventFromPointerEvent_ReturnValue; // 0xC0(0x20)()
	bool                                         CallFunc_InputEvent_IsShiftDown_ReturnValue;       // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemCardSize                 CallFunc_GetCardSize_ReturnValue;                  // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29D1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaInventoryDragVisual_C*          CallFunc_Create_ReturnValue;                       // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.UpdateStyle
struct UAthenaInventoryFortItemTileButton_C_UpdateStyle_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.HandleEquipSlotChanged
struct UAthenaInventoryFortItemTileButton_C_HandleEquipSlotChanged_Params
{
public:
	int32                                        EquipSlot;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnInventoryItemSelected_Event_0
struct UAthenaInventoryFortItemTileButton_C_OnInventoryItemSelected_Event_0_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.Construct
struct UAthenaInventoryFortItemTileButton_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.Destruct
struct UAthenaInventoryFortItemTileButton_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnSelected
struct UAthenaInventoryFortItemTileButton_C_OnSelected_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.ExecuteUbergraph_AthenaInventoryFortItemTileButton
struct UAthenaInventoryFortItemTileButton_C_ExecuteUbergraph_AthenaInventoryFortItemTileButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_EquipSlot;                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             K2Node_CustomEvent_Item;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
