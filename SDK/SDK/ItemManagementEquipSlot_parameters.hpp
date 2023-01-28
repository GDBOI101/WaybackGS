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

// 0x3 (0x3 - 0x0)
// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.IsSelected
struct UItemManagementEquipSlot_C_IsSelected_Params
{
public:
	bool                                         Selected;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B0 (0x1B0 - 0x0)
// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnFocusReceived
struct UItemManagementEquipSlot_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x34(0x8)(Parm, NoDestructor)
	uint8                                        Pad_35F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xF8(0xB8)()
};

// 0x5 (0x5 - 0x0)
// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.SetSelected
struct UItemManagementEquipSlot_C_SetSelected_Params
{
public:
	bool                                         Selected;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x118 (0x118 - 0x0)
// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnDragDetected
struct UItemManagementEquipSlot_C_OnDragDetected_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         PointerEvent;                                      // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                    Operation;                                         // 0xB0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDragDropOperation*                    CallFunc_CreateDragDropOperation_ReturnValue;      // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemManagementInventoryPanel_C*       K2Node_DynamicCast_AsItem_Management_Inventory_Panel; // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35F7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetSmallPreviewImage_ReturnValue;         // 0xD0(0x20)(HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_AssetToObject_ReturnValue;           // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemDragIcon_C*                       CallFunc_Create_ReturnValue;                       // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2E9 (0x2E9 - 0x0)
// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnMouseButtonDown
struct UItemManagementEquipSlot_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x168(0xB8)()
	struct FEventReply                           CallFunc_DetectDragIfPressed_ReturnValue;          // 0x220(0xB8)()
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x2D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetItemToDetail_ReturnValue;              // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE9 (0xE9 - 0x0)
// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnDrop
struct UItemManagementEquipSlot_C_OnDrop_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35FA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         PointerEvent;                                      // 0x38(0x78)(Parm)
	class UDragDropOperation*                    Operation;                                         // 0xB0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xB8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             K2Node_DynamicCast_AsFort_Item;                    // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemManagementInventoryPanel_C*       K2Node_DynamicCast_AsItem_Management_Inventory_Panel; // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DropItemOnQuickBar_ReturnValue;           // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.RefreshItem
struct UItemManagementEquipSlot_C_RefreshItem_Params
{
public:
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetQuickBarSlottedItem_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.Construct
struct UItemManagementEquipSlot_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnFocusLost
struct UItemManagementEquipSlot_C_OnFocusLost_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(Parm, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_6_OnInputMethodChanged__DelegateSignature
struct UItemManagementEquipSlot_C_BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_6_OnInputMethodChanged__DelegateSignature_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnDragCancelled
struct UItemManagementEquipSlot_C_OnDragCancelled_Params
{
public:
	struct FPointerEvent                         PointerEvent;                                      // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                    Operation;                                         // 0x78(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB1 (0xB1 - 0x0)
// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.ExecuteUbergraph_ItemManagementEquipSlot
struct UItemManagementEquipSlot_C_ExecuteUbergraph_ItemManagementEquipSlot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35FE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x14(0x8)(NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bUsingGamepad;          // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSelected_Selected;                      // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_PointerEvent;                         // 0x20(0x78)(ConstParm)
	class UDragDropOperation*                    K2Node_Event_Operation;                            // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3600[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemManagementInventoryPanel_C*       K2Node_DynamicCast_AsItem_Management_Inventory_Panel; // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
