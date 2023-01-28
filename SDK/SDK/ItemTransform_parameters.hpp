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
// Function ItemTransform.ItemTransform_C.HandleClosePicker
struct UItemTransform_C_HandleClosePicker_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransform.ItemTransform_C.OnItemPickerOpened
struct UItemTransform_C_OnItemPickerOpened_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemTransform.ItemTransform_C.OnItemPickerClosed
struct UItemTransform_C_OnItemPickerClosed_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ItemTransform.ItemTransform_C.UpdateTransformAction
struct UItemTransform_C_UpdateTransformAction_Params
{
public:
	bool                                         TransformActive;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransform.ItemTransform_C.Handle Transform Activated
struct UItemTransform_C_Handle_Transform_Activated_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ItemTransform.ItemTransform_C.Handle Select Key Activated
struct UItemTransform_C_Handle_Select_Key_Activated_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3081[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_Get_Selected_Item_SelectedKey;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransform.ItemTransform_C.DisableTransformAction
struct UItemTransform_C_DisableTransformAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemTransform.ItemTransform_C.HideTransformAction
struct UItemTransform_C_HideTransformAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemTransform.ItemTransform_C.ShowTransformAction
struct UItemTransform_C_ShowTransformAction_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ItemTransform.ItemTransform_C.UpdateSelectKeyAction
struct UItemTransform_C_UpdateSelectKeyAction_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransform.ItemTransform_C.DisableSelectKeyAction
struct UItemTransform_C_DisableSelectKeyAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemTransform.ItemTransform_C.HideSelectKeyAction
struct UItemTransform_C_HideSelectKeyAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemTransform.ItemTransform_C.ShowSelectKeyAction
struct UItemTransform_C_ShowSelectKeyAction_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function ItemTransform.ItemTransform_C.HandleSelectKeyAction
struct UItemTransform_C_HandleSelectKeyAction_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleSelect_PassThrough;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function ItemTransform.ItemTransform_C.HandleTransformAction
struct UItemTransform_C_HandleTransformAction_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3082[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortItem*>                     CallFunc_Get_Transform_Data_SacrificeItems;        // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Get_Transform_Data_CurrentSacrificePoints; // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Transform_Data_CurrentTier;           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ItemTransform.ItemTransform_C.ResetItemTransform
struct UItemTransform_C_ResetItemTransform_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3083[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3084[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             Temp_object_Variable;                              // 0x10(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ItemTransform.ItemTransform_C.HandleTransformFailed
struct UItemTransform_C_HandleTransformFailed_Params
{
public:
	class FText                                  ErrorMessage;                                      // 0x0(0x18)(Parm, OutParm, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function ItemTransform.ItemTransform_C.HandleTransformSucceeded
struct UItemTransform_C_HandleTransformSucceeded_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> RewardedItems;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FFortItemInstanceQuantityPair> SacrificedItems;                                   // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransform.ItemTransform_C.HandleTransformContinue
struct UItemTransform_C_HandleTransformContinue_Params
{
public:
};

// 0x59 (0x59 - 0x0)
// Function ItemTransform.ItemTransform_C.OpenResult
struct UItemTransform_C_OpenResult_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> RewardItems;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FFortItemInstanceQuantityPair> SacrificeItems;                                    // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetCachedWidget_ReturnValue;              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemTransformResultModal_C*           K2Node_DynamicCast_AsItem_Transform_Result_Modal;  // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function ItemTransform.ItemTransform_C.HandleTransformConfirm
struct UItemTransform_C_HandleTransformConfirm_Params
{
public:
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortConversionControlItemDefinition*  K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransform.ItemTransform_C.HandleTransformCancel
struct UItemTransform_C_HandleTransformCancel_Params
{
public:
};

// 0x39 (0x39 - 0x0)
// Function ItemTransform.ItemTransform_C.OpenConfirmation
struct UItemTransform_C_OpenConfirmation_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UItemTransformConfirmationModal_C*     CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function ItemTransform.ItemTransform_C.HandleSelect
struct UItemTransform_C_HandleSelect_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3085[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x15 (0x15 - 0x0)
// Function ItemTransform.ItemTransform_C.HandleBack
struct UItemTransform_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3086[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function ItemTransform.ItemTransform_C.SetupActionHandlers
struct UItemTransform_C_SetupActionHandlers_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x40(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x50(0x10)(ZeroConstructor, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransform.ItemTransform_C.OpenSlotScreen
struct UItemTransform_C_OpenSlotScreen_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemTransform.ItemTransform_C.OpenKeyScreen
struct UItemTransform_C_OpenKeyScreen_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ItemTransform.ItemTransform_C.OpenItemTransform
struct UItemTransform_C_OpenItemTransform_Params
{
public:
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemTransform.ItemTransform_C.BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature
struct UItemTransform_C_BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature_Params
{
public:
	class UFortItem*                             Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function ItemTransform.ItemTransform_C.BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature
struct UItemTransform_C_BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature_Params
{
public:
	class UWidget*                               ActiveWidget;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ActiveWidgetIndex;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransform.ItemTransform_C.OnActivated
struct UItemTransform_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemTransform.ItemTransform_C.BndEvt__KeyScreen_K2Node_ComponentBoundEvent_513_OnKeyConfirmed__DelegateSignature
struct UItemTransform_C_BndEvt__KeyScreen_K2Node_ComponentBoundEvent_513_OnKeyConfirmed__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ItemTransform.ItemTransform_C.BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature
struct UItemTransform_C_BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature_Params
{
public:
	bool                                         TransformActive;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransform.ItemTransform_C.Construct
struct UItemTransform_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemTransform.ItemTransform_C.OnRequestCloseItemPicker
struct UItemTransform_C_OnRequestCloseItemPicker_Params
{
public:
};

// 0x9D (0x9D - 0x0)
// Function ItemTransform.ItemTransform_C.ExecuteUbergraph_ItemTransform
struct UItemTransform_C_ExecuteUbergraph_ItemTransform_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HandleClosePicker_PassThrough;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3087[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             K2Node_ComponentBoundEvent_Key;                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             Temp_object_Variable;                              // 0x10(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3088[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_ComponentBoundEvent_ActiveWidget;           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_ActiveWidgetIndex;      // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleSelect_PassThrough;                 // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_TransformActive;        // 0x56(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3089[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_308A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x60(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x70(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Variable;                                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_308B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue2;                  // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_308C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue2;        // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue2;           // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
