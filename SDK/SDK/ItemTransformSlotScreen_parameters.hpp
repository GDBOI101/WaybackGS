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

// 0x18 (0x18 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.GetSlotFromIndex
struct UItemTransformSlotScreen_C_GetSlotFromIndex_Params
{
public:
	class UItemTransformSlotEntry_C*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B81[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemTransformSlotEntry_C*             K2Node_Select_Default;                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.NavigateToFirstItem
struct UItemTransformSlotScreen_C_NavigateToFirstItem_Params
{
public:
	class UItemTransformSlotEntry_C*             CallFunc_GetSlotFromIndex_ReturnValue;             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Get Transform Data
struct UItemTransformSlotScreen_C_Get_Transform_Data_Params
{
public:
	TArray<class UFortItem*>                     SacrificeItems;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor)
	int32                                        CurrentSacrificePoints;                            // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentTier;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Transform_Data_CurrentSacrificePoints; // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Transform_Data_CurrentTier;           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.ResetScreen
struct UItemTransformSlotScreen_C_ResetScreen_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B83[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             Temp_object_Variable;                              // 0x10(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.CloseItemPicker
struct UItemTransformSlotScreen_C_CloseItemPicker_Params
{
public:
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B84[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemTransformSlotEntry_C*             CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.SetupSlotScreen
struct UItemTransformSlotScreen_C_SetupSlotScreen_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B86[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemTransformSlotEntry_C*             CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B87[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue2;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue3;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue4;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue5;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OpenItemPicker
struct UItemTransformSlotScreen_C_OpenItemPicker_Params
{
public:
	class UItemTransformSlotEntry_C*             CallFunc_Array_Get_Item;                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OpenSlotScreen
struct UItemTransformSlotScreen_C_OpenSlotScreen_Params
{
public:
	class UFortItem*                             Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot1_K2Node_ComponentBoundEvent_1_OnSlotChosen__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__Slot1_K2Node_ComponentBoundEvent_1_OnSlotChosen__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_2_OnSlotChosen__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__Slot2_K2Node_ComponentBoundEvent_2_OnSlotChosen__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot3_K2Node_ComponentBoundEvent_3_OnSlotChosen__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__Slot3_K2Node_ComponentBoundEvent_3_OnSlotChosen__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot4_K2Node_ComponentBoundEvent_4_OnSlotChosen__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__Slot4_K2Node_ComponentBoundEvent_4_OnSlotChosen__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot5_K2Node_ComponentBoundEvent_5_OnSlotChosen__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__Slot5_K2Node_ComponentBoundEvent_5_OnSlotChosen__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Construct
struct UItemTransformSlotScreen_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature_Params
{
public:
	int32                                        SacrificePoints;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentTier;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature_Params
{
public:
	bool                                         TransformActive;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot1_K2Node_ComponentBoundEvent_774_OnSlotSelected__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__Slot1_K2Node_ComponentBoundEvent_774_OnSlotSelected__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_784_OnSlotSelected__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__Slot2_K2Node_ComponentBoundEvent_784_OnSlotSelected__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot3_K2Node_ComponentBoundEvent_795_OnSlotSelected__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__Slot3_K2Node_ComponentBoundEvent_795_OnSlotSelected__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot4_K2Node_ComponentBoundEvent_807_OnSlotSelected__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__Slot4_K2Node_ComponentBoundEvent_807_OnSlotSelected__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__Slot5_K2Node_ComponentBoundEvent_820_OnSlotSelected__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__Slot5_K2Node_ComponentBoundEvent_820_OnSlotSelected__DelegateSignature_Params
{
public:
};

// 0x21 (0x21 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.ExecuteUbergraph_ItemTransformSlotScreen
struct UItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B88[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             K2Node_ComponentBoundEvent_SelectedItem;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemTransformSlotEntry_C*             CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_SacrificePoints;        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_CurrentTier;            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_TransformActive;        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnItemPickerOpened__DelegateSignature
struct UItemTransformSlotScreen_C_OnItemPickerOpened__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnItemPickerClosed__DelegateSignature
struct UItemTransformSlotScreen_C_OnItemPickerClosed__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnTransformButtonUpdated__DelegateSignature
struct UItemTransformSlotScreen_C_OnTransformButtonUpdated__DelegateSignature_Params
{
public:
	bool                                         TransformActive;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnTransformConfirmed__DelegateSignature
struct UItemTransformSlotScreen_C_OnTransformConfirmed__DelegateSignature_Params
{
public:
	TArray<class UFortItem*>                     ItemsToSacrifice;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	int32                                        SacrificePoints;                                   // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentTier;                                       // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
