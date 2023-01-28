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


// Function MessageCenterWidget.MessageCenterWidget_C.HandleMessageSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINotification*         MESSAGE                                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINotification*         K2Node_DynamicCast_AsFort_UINotification                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMessageCenterWidget_C::HandleMessageSelected(class UObject* Item, bool Selected, class UFortUINotification* MESSAGE, bool Temp_bool_Variable, class UFortUINotification* K2Node_DynamicCast_AsFort_UINotification, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MessageCenterWidget_C", "HandleMessageSelected");

	Params::UMessageCenterWidget_C_HandleMessageSelected_Params Parms;
	Parms.Item = Item;
	Parms.Selected = Selected;
	Parms.MESSAGE = MESSAGE;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsFort_UINotification = K2Node_DynamicCast_AsFort_UINotification;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterWidget.MessageCenterWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMessageCenterWidget_C::Construct()
{
	static auto Func = Class->GetFunction("MessageCenterWidget_C", "Construct");

	Params::UMessageCenterWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterWidget.MessageCenterWidget_C.OnBeginIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UMessageCenterWidget_C::OnBeginIntro()
{
	static auto Func = Class->GetFunction("MessageCenterWidget_C", "OnBeginIntro");

	Params::UMessageCenterWidget_C_OnBeginIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterWidget.MessageCenterWidget_C.OnBeginOutro
// (Event, Public, BlueprintEvent)
// Parameters:

void UMessageCenterWidget_C::OnBeginOutro()
{
	static auto Func = Class->GetFunction("MessageCenterWidget_C", "OnBeginOutro");

	Params::UMessageCenterWidget_C_OnBeginOutro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterWidget.MessageCenterWidget_C.HandleIntroEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMessageCenterWidget_C::HandleIntroEnded()
{
	static auto Func = Class->GetFunction("MessageCenterWidget_C", "HandleIntroEnded");

	Params::UMessageCenterWidget_C_HandleIntroEnded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterWidget.MessageCenterWidget_C.HandleOutroEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMessageCenterWidget_C::HandleOutroEnded()
{
	static auto Func = Class->GetFunction("MessageCenterWidget_C", "HandleOutroEnded");

	Params::UMessageCenterWidget_C_HandleOutroEnded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterWidget.MessageCenterWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMessageCenterWidget_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MessageCenterWidget_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature");

	Params::UMessageCenterWidget_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterWidget.MessageCenterWidget_C.BndEvt__MessagesList_K2Node_ComponentBoundEvent_303_OnListViewItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMessageCenterWidget_C::BndEvt__MessagesList_K2Node_ComponentBoundEvent_303_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static auto Func = Class->GetFunction("MessageCenterWidget_C", "BndEvt__MessagesList_K2Node_ComponentBoundEvent_303_OnListViewItemSelected__DelegateSignature");

	Params::UMessageCenterWidget_C_BndEvt__MessagesList_K2Node_ComponentBoundEvent_303_OnListViewItemSelected__DelegateSignature_Params Parms;
	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterWidget.MessageCenterWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMessageCenterWidget_C::BndEvt__OpenButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MessageCenterWidget_C", "BndEvt__OpenButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature");

	Params::UMessageCenterWidget_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterWidget.MessageCenterWidget_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMessageCenterWidget_C::BndEvt__ClearButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MessageCenterWidget_C", "BndEvt__ClearButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature");

	Params::UMessageCenterWidget_C_BndEvt__ClearButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessageCenterWidget.MessageCenterWidget_C.ExecuteUbergraph_MessageCenterWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsSelected                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSelectedItem_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINotification*         K2Node_DynamicCast_AsFort_UINotification                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINotification*         K2Node_DynamicCast_AsFort_UINotification2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMessageCenterWidget_C::ExecuteUbergraph_MessageCenterWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UObject* CallFunc_GetSelectedItem_ReturnValue, class UObject* CallFunc_GetSelectedItem_ReturnValue2, class UFortUINotification* K2Node_DynamicCast_AsFort_UINotification, bool K2Node_DynamicCast_bSuccess, class UFortUINotification* K2Node_DynamicCast_AsFort_UINotification2, bool K2Node_DynamicCast_bSuccess2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2)
{
	static auto Func = Class->GetFunction("MessageCenterWidget_C", "ExecuteUbergraph_MessageCenterWidget");

	Params::UMessageCenterWidget_C_ExecuteUbergraph_MessageCenterWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_bIsSelected = K2Node_ComponentBoundEvent_bIsSelected;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetSelectedItem_ReturnValue = CallFunc_GetSelectedItem_ReturnValue;
	Parms.CallFunc_GetSelectedItem_ReturnValue2 = CallFunc_GetSelectedItem_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_UINotification = K2Node_DynamicCast_AsFort_UINotification;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_UINotification2 = K2Node_DynamicCast_AsFort_UINotification2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue2 = CallFunc_GetUIManagerWidget_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
