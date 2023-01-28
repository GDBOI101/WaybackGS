#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.UpdateTransformInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   TransformKey                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           SacrificeItems                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              SacrificePoints                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentTier                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_Array_Get_Item5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformConfirmationModal_C::UpdateTransformInfo(class UFortItem* TransformKey, TArray<class UFortItem*>& SacrificeItems, int32 SacrificePoints, int32 CurrentTier, class UFortItem* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UFortItem* CallFunc_Array_Get_Item2, bool CallFunc_IsValid_ReturnValue2, class UFortItem* CallFunc_Array_Get_Item3, bool CallFunc_IsValid_ReturnValue3, class UFortItem* CallFunc_Array_Get_Item4, bool CallFunc_IsValid_ReturnValue4, class UFortItem* CallFunc_Array_Get_Item5, bool CallFunc_IsValid_ReturnValue5)
{
	static auto Func = Class->GetFunction("ItemTransformConfirmationModal_C", "UpdateTransformInfo");

	Params::UItemTransformConfirmationModal_C_UpdateTransformInfo_Params Parms;
	Parms.TransformKey = TransformKey;
	Parms.SacrificeItems = SacrificeItems;
	Parms.SacrificePoints = SacrificePoints;
	Parms.CurrentTier = CurrentTier;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_Array_Get_Item5 = CallFunc_Array_Get_Item5;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformConfirmationModal_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemTransformConfirmationModal_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UItemTransformConfirmationModal_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformConfirmationModal_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemTransformConfirmationModal_C", "BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::UItemTransformConfirmationModal_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemTransformConfirmationModal_C::OnActivated()
{
	static auto Func = Class->GetFunction("ItemTransformConfirmationModal_C", "OnActivated");

	Params::UItemTransformConfirmationModal_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.ExecuteUbergraph_ItemTransformConfirmationModal
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformConfirmationModal_C::ExecuteUbergraph_ItemTransformConfirmationModal(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2)
{
	static auto Func = Class->GetFunction("ItemTransformConfirmationModal_C", "ExecuteUbergraph_ItemTransformConfirmationModal");

	Params::UItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue2 = CallFunc_GetUIManagerWidget_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnConfirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransformConfirmationModal_C::OnConfirm__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemTransformConfirmationModal_C", "OnConfirm__DelegateSignature");

	Params::UItemTransformConfirmationModal_C_OnConfirm__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransformConfirmationModal_C::OnCancel__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemTransformConfirmationModal_C", "OnCancel__DelegateSignature");

	Params::UItemTransformConfirmationModal_C_OnCancel__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
