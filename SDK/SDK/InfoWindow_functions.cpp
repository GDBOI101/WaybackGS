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


// Function InfoWindow.InfoWindow_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfoWindow_C::Initialize(class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue)
{
	static auto Func = Class->GetFunction("InfoWindow_C", "Initialize");

	Params::UInfoWindow_C_Initialize_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoWindow.InfoWindow_C.AddInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItemDefinition*> Info_Items                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FText                        Title                                                            (Parm)
// TArray<class UFortItemDefinition*> NewLocalVar_0                                                    (Edit, ZeroConstructor)
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         K2Node_DynamicCast_AsFort_Item_Definition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInfoWindow_C::AddInfo(TArray<class UFortItemDefinition*>& Info_Items, class FText Title, const TArray<class UFortItemDefinition*>& NewLocalVar_0, class UObject* CallFunc_GetItemAt_ReturnValue, class UFortItemDefinition* K2Node_DynamicCast_AsFort_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("InfoWindow_C", "AddInfo");

	Params::UInfoWindow_C_AddInfo_Params Parms;
	Parms.Info_Items = Info_Items;
	Parms.Title = Title;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Item_Definition = K2Node_DynamicCast_AsFort_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoWindow.InfoWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfoWindow_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("InfoWindow_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature");

	Params::UInfoWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoWindow.InfoWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInfoWindow_C::Construct()
{
	static auto Func = Class->GetFunction("InfoWindow_C", "Construct");

	Params::UInfoWindow_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoWindow.InfoWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInfoWindow_C::Destruct()
{
	static auto Func = Class->GetFunction("InfoWindow_C", "Destruct");

	Params::UInfoWindow_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoWindow.InfoWindow_C.BndEvt__Lightbox_K2Node_ComponentBoundEvent_0_IntroEnded__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UInfoWindow_C::BndEvt__Lightbox_K2Node_ComponentBoundEvent_0_IntroEnded__DelegateSignature()
{
	static auto Func = Class->GetFunction("InfoWindow_C", "BndEvt__Lightbox_K2Node_ComponentBoundEvent_0_IntroEnded__DelegateSignature");

	Params::UInfoWindow_C_BndEvt__Lightbox_K2Node_ComponentBoundEvent_0_IntroEnded__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoWindow.InfoWindow_C.BndEvt__Lightbox_K2Node_ComponentBoundEvent_1_OutroEnded__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UInfoWindow_C::BndEvt__Lightbox_K2Node_ComponentBoundEvent_1_OutroEnded__DelegateSignature()
{
	static auto Func = Class->GetFunction("InfoWindow_C", "BndEvt__Lightbox_K2Node_ComponentBoundEvent_1_OutroEnded__DelegateSignature");

	Params::UInfoWindow_C_BndEvt__Lightbox_K2Node_ComponentBoundEvent_1_OutroEnded__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoWindow.InfoWindow_C.OnBeginOutro
// (Event, Public, BlueprintEvent)
// Parameters:

void UInfoWindow_C::OnBeginOutro()
{
	static auto Func = Class->GetFunction("InfoWindow_C", "OnBeginOutro");

	Params::UInfoWindow_C_OnBeginOutro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoWindow.InfoWindow_C.OnBeginIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UInfoWindow_C::OnBeginIntro()
{
	static auto Func = Class->GetFunction("InfoWindow_C", "OnBeginIntro");

	Params::UInfoWindow_C_OnBeginIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoWindow.InfoWindow_C.BndEvt__InfoButtons_K2Node_ComponentBoundEvent_212_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfoWindow_C::BndEvt__InfoButtons_K2Node_ComponentBoundEvent_212_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto Func = Class->GetFunction("InfoWindow_C", "BndEvt__InfoButtons_K2Node_ComponentBoundEvent_212_OnListViewItemWidgetCreated__DelegateSignature");

	Params::UInfoWindow_C_BndEvt__InfoButtons_K2Node_ComponentBoundEvent_212_OnListViewItemWidgetCreated__DelegateSignature_Params Parms;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoWindow.InfoWindow_C.Set Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*         Entry_Item_Definition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfoWindow_C::Set_Info(class UFortItemDefinition* Entry_Item_Definition)
{
	static auto Func = Class->GetFunction("InfoWindow_C", "Set Info");

	Params::UInfoWindow_C_Set_Info_Params Parms;
	Parms.Entry_Item_Definition = Entry_Item_Definition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfoWindow.InfoWindow_C.ExecuteUbergraph_InfoWindow
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInfoEntry_C*                K2Node_DynamicCast_AsInfo_Entry                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         K2Node_CustomEvent_Entry_Item_Definition                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetListWidget_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfoWindow_C::ExecuteUbergraph_InfoWindow(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UInfoEntry_C* K2Node_DynamicCast_AsInfo_Entry, bool K2Node_DynamicCast_bSuccess, class UFortItemDefinition* K2Node_CustomEvent_Entry_Item_Definition, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, class UWidget* CallFunc_GetListWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("InfoWindow_C", "ExecuteUbergraph_InfoWindow");

	Params::UInfoWindow_C_ExecuteUbergraph_InfoWindow_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_DynamicCast_AsInfo_Entry = K2Node_DynamicCast_AsInfo_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Entry_Item_Definition = K2Node_CustomEvent_Entry_Item_Definition;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.CallFunc_GetListWidget_ReturnValue = CallFunc_GetListWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
