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


// Function OptionsMenuInput.OptionsMenuInput_C.DoesItemHaveChildren
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UOptionsMenuInput_C::DoesItemHaveChildren()
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "DoesItemHaveChildren");

	Params::UOptionsMenuInput_C_DoesItemHaveChildren_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenuInput.OptionsMenuInput_C.GetIndentLevel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UOptionsMenuInput_C::GetIndentLevel()
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "GetIndentLevel");

	Params::UOptionsMenuInput_C_GetIndentLevel_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenuInput.OptionsMenuInput_C.IsItemExpanded
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UOptionsMenuInput_C::IsItemExpanded()
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "IsItemExpanded");

	Params::UOptionsMenuInput_C_IsItemExpanded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenuInput.OptionsMenuInput_C.GetData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UOptionsMenuInput_C::GetData()
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "GetData");

	Params::UOptionsMenuInput_C_GetData_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenuInput.OptionsMenuInput_C.Change Key
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Primary_Key                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Key_To_Sets                                                      (Parm)

void UOptionsMenuInput_C::Change_Key(bool Primary_Key, class FText Key_To_Sets)
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "Change Key");

	Params::UOptionsMenuInput_C_Change_Key_Params Parms;
	Parms.Primary_Key = Primary_Key;
	Parms.Key_To_Sets = Key_To_Sets;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInput.OptionsMenuInput_C.Center on Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuInput_C::Center_on_Widget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "Center on Widget");

	Params::UOptionsMenuInput_C_Center_on_Widget_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInput.OptionsMenuInput_C.OnAcquireFromPool
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOptionsMenuInput_C::OnAcquireFromPool()
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "OnAcquireFromPool");

	Params::UOptionsMenuInput_C_OnAcquireFromPool_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInput.OptionsMenuInput_C.OnReleaseToPool
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOptionsMenuInput_C::OnReleaseToPool()
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "OnReleaseToPool");

	Params::UOptionsMenuInput_C_OnReleaseToPool_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInput.OptionsMenuInput_C.Private_OnExpanderArrowShiftClicked
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenuInput_C::Private_OnExpanderArrowShiftClicked()
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "Private_OnExpanderArrowShiftClicked");

	Params::UOptionsMenuInput_C_Private_OnExpanderArrowShiftClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInput.OptionsMenuInput_C.RegisterOnClicked
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)

void UOptionsMenuInput_C::RegisterOnClicked(UDelegateProperty_& Callback)
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "RegisterOnClicked");

	Params::UOptionsMenuInput_C_RegisterOnClicked_Params Parms;
	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInput.OptionsMenuInput_C.SetExpanded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bExpanded                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuInput_C::SetExpanded(bool bExpanded)
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "SetExpanded");

	Params::UOptionsMenuInput_C_SetExpanded_Params Parms;
	Parms.bExpanded = bExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInput.OptionsMenuInput_C.SetIndexInList
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InIndexInList                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuInput_C::SetIndexInList(int32 InIndexInList)
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "SetIndexInList");

	Params::UOptionsMenuInput_C_SetIndexInList_Params Parms;
	Parms.InIndexInList = InIndexInList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInput.OptionsMenuInput_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuInput_C::SetSelected(bool bSelected)
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "SetSelected");

	Params::UOptionsMenuInput_C_SetSelected_Params Parms;
	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInput.OptionsMenuInput_C.ToggleExpansion
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenuInput_C::ToggleExpansion()
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "ToggleExpansion");

	Params::UOptionsMenuInput_C_ToggleExpansion_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInput.OptionsMenuInput_C.Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenuInput_C::Reset()
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "Reset");

	Params::UOptionsMenuInput_C_Reset_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInput.OptionsMenuInput_C.BndEvt__PrimaryInput_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuInput_C::BndEvt__PrimaryInput_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "BndEvt__PrimaryInput_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature");

	Params::UOptionsMenuInput_C_BndEvt__PrimaryInput_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInput.OptionsMenuInput_C.BndEvt__SecondaryInput_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuInput_C::BndEvt__SecondaryInput_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "BndEvt__SecondaryInput_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature");

	Params::UOptionsMenuInput_C_BndEvt__SecondaryInput_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInput.OptionsMenuInput_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InData                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuInput_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "SetData");

	Params::UOptionsMenuInput_C_SetData_Params Parms;
	Parms.InData = InData;
	Parms.OwningList = OwningList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInput.OptionsMenuInput_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void UOptionsMenuInput_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "OnMouseLeave");

	Params::UOptionsMenuInput_C_OnMouseLeave_Params Parms;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInput.OptionsMenuInput_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void UOptionsMenuInput_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "OnMouseEnter");

	Params::UOptionsMenuInput_C_OnMouseEnter_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInput.OptionsMenuInput_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuInput_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature");

	Params::UOptionsMenuInput_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInput.OptionsMenuInput_C.ExecuteUbergraph_OptionsMenuInput
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_Event_Callback                                            (ConstParm, ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bExpanded                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_InIndexInList                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelected                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_InData                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             K2Node_Event_OwningList                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortOptionsMenuInputData*   K2Node_DynamicCast_AsFort_Options_Menu_Input_Data                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// struct FPointerEvent               K2Node_Event_MouseEvent2                                         (ConstParm)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuInput_C::ExecuteUbergraph_OptionsMenuInput(int32 EntryPoint, UDelegateProperty_ K2Node_Event_Callback, bool K2Node_Event_bExpanded, int32 K2Node_Event_InIndexInList, bool K2Node_Event_bSelected, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, class UFortOptionsMenuInputData* K2Node_DynamicCast_AsFort_Options_Menu_Input_Data, bool K2Node_DynamicCast_bSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FPointerEvent& K2Node_Event_MouseEvent2, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "ExecuteUbergraph_OptionsMenuInput");

	Params::UOptionsMenuInput_C_ExecuteUbergraph_OptionsMenuInput_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Callback = K2Node_Event_Callback;
	Parms.K2Node_Event_bExpanded = K2Node_Event_bExpanded;
	Parms.K2Node_Event_InIndexInList = K2Node_Event_InIndexInList;
	Parms.K2Node_Event_bSelected = K2Node_Event_bSelected;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_Event_InData = K2Node_Event_InData;
	Parms.K2Node_Event_OwningList = K2Node_Event_OwningList;
	Parms.K2Node_DynamicCast_AsFort_Options_Menu_Input_Data = K2Node_DynamicCast_AsFort_Options_Menu_Input_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Event_MouseEvent2 = K2Node_Event_MouseEvent2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInput.OptionsMenuInput_C.UnbindClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number_in_List                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuInput_C::UnbindClicked__DelegateSignature(int32 Number_in_List)
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "UnbindClicked__DelegateSignature");

	Params::UOptionsMenuInput_C_UnbindClicked__DelegateSignature_Params Parms;
	Parms.Number_in_List = Number_in_List;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInput.OptionsMenuInput_C.Input Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number_in_List                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Primary_Button                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuInput_C::Input_Clicked__DelegateSignature(int32 Number_in_List, bool Is_Primary_Button)
{
	static auto Func = Class->GetFunction("OptionsMenuInput_C", "Input Clicked__DelegateSignature");

	Params::UOptionsMenuInput_C_Input_Clicked__DelegateSignature_Params Parms;
	Parms.Number_in_List = Number_in_List;
	Parms.Is_Primary_Button = Is_Primary_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
