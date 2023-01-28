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


// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.SetSlotSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformSlotEntry_C::SetSlotSelection(bool Selected)
{
	static auto Func = Class->GetFunction("ItemTransformSlotEntry_C", "SetSlotSelection");

	Params::UItemTransformSlotEntry_C_SetSlotSelection_Params Parms;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.SetSacrificeItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   SelectedSacrificeItem                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransmogSacrifice          CallFunc_GetTransmogSacrificeDataFromItemDefintion_OutTransmogData()
// bool                               CallFunc_GetTransmogSacrificeDataFromItemDefintion_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotEntry_C::SetSacrificeItem(class UFortItem* SelectedSacrificeItem, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, const struct FTransmogSacrifice& CallFunc_GetTransmogSacrificeDataFromItemDefintion_OutTransmogData, bool CallFunc_GetTransmogSacrificeDataFromItemDefintion_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformSlotEntry_C", "SetSacrificeItem");

	Params::UItemTransformSlotEntry_C_SetSacrificeItem_Params Parms;
	Parms.SelectedSacrificeItem = SelectedSacrificeItem;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetTransmogSacrificeDataFromItemDefintion_OutTransmogData = CallFunc_GetTransmogSacrificeDataFromItemDefintion_OutTransmogData;
	Parms.CallFunc_GetTransmogSacrificeDataFromItemDefintion_ReturnValue = CallFunc_GetTransmogSacrificeDataFromItemDefintion_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotEntry_C::BndEvt__PanelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemTransformSlotEntry_C", "BndEvt__PanelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UItemTransformSlotEntry_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformSlotEntry_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ItemTransformSlotEntry_C", "PreConstruct");

	Params::UItemTransformSlotEntry_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformSlotEntry_C::BndEvt__PanelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemTransformSlotEntry_C", "BndEvt__PanelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature");

	Params::UItemTransformSlotEntry_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_115_CommonSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformSlotEntry_C::BndEvt__PanelButton_K2Node_ComponentBoundEvent_115_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected)
{
	static auto Func = Class->GetFunction("ItemTransformSlotEntry_C", "BndEvt__PanelButton_K2Node_ComponentBoundEvent_115_CommonSelectedStateChanged__DelegateSignature");

	Params::UItemTransformSlotEntry_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_115_CommonSelectedStateChanged__DelegateSignature_Params Parms;
	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.ExecuteUbergraph_ItemTransformSlotEntry
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformSlotEntry_C::ExecuteUbergraph_ItemTransformSlotEntry(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button3, bool K2Node_Event_IsDesignTime, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_Selected, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformSlotEntry_C", "ExecuteUbergraph_ItemTransformSlotEntry");

	Params::UItemTransformSlotEntry_C_ExecuteUbergraph_ItemTransformSlotEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_Selected = K2Node_ComponentBoundEvent_Selected;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsUsingGamepad_ReturnValue2 = CallFunc_IsUsingGamepad_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.OnSlotSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransformSlotEntry_C::OnSlotSelected__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemTransformSlotEntry_C", "OnSlotSelected__DelegateSignature");

	Params::UItemTransformSlotEntry_C_OnSlotSelected__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformSlotEntry.ItemTransformSlotEntry_C.OnSlotChosen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemTransformSlotEntry_C::OnSlotChosen__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemTransformSlotEntry_C", "OnSlotChosen__DelegateSignature");

	Params::UItemTransformSlotEntry_C_OnSlotChosen__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
