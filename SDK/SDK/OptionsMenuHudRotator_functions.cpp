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


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.DoesItemHaveChildren
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UOptionsMenuHudRotator_C::DoesItemHaveChildren()
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "DoesItemHaveChildren");

	Params::UOptionsMenuHudRotator_C_DoesItemHaveChildren_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.GetIndentLevel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UOptionsMenuHudRotator_C::GetIndentLevel()
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "GetIndentLevel");

	Params::UOptionsMenuHudRotator_C_GetIndentLevel_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.IsItemExpanded
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UOptionsMenuHudRotator_C::IsItemExpanded()
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "IsItemExpanded");

	Params::UOptionsMenuHudRotator_C_IsItemExpanded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.GetData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UOptionsMenuHudRotator_C::GetData()
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "GetData");

	Params::UOptionsMenuHudRotator_C_GetData_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UOptionsMenuHudRotator_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "OnFocusReceived");

	Params::UOptionsMenuHudRotator_C_OnFocusReceived_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Update Options
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                NewParam                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UOptionsMenuHudRotator_C::Update_Options(TArray<class FText>& NewParam)
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "Update Options");

	Params::UOptionsMenuHudRotator_C_Update_Options_Params Parms;
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Center on Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuHudRotator_C::Center_on_Widget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "Center on Widget");

	Params::UOptionsMenuHudRotator_C_Center_on_Widget_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Update Row Selector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Currently_Selected                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuHudRotator_C::Update_Row_Selector(int32 Currently_Selected)
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "Update Row Selector");

	Params::UOptionsMenuHudRotator_C_Update_Row_Selector_Params Parms;
	Parms.Currently_Selected = Currently_Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnAcquireFromPool
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOptionsMenuHudRotator_C::OnAcquireFromPool()
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "OnAcquireFromPool");

	Params::UOptionsMenuHudRotator_C_OnAcquireFromPool_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnReleaseToPool
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOptionsMenuHudRotator_C::OnReleaseToPool()
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "OnReleaseToPool");

	Params::UOptionsMenuHudRotator_C_OnReleaseToPool_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Private_OnExpanderArrowShiftClicked
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenuHudRotator_C::Private_OnExpanderArrowShiftClicked()
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "Private_OnExpanderArrowShiftClicked");

	Params::UOptionsMenuHudRotator_C_Private_OnExpanderArrowShiftClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.RegisterOnClicked
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)

void UOptionsMenuHudRotator_C::RegisterOnClicked(UDelegateProperty_& Callback)
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "RegisterOnClicked");

	Params::UOptionsMenuHudRotator_C_RegisterOnClicked_Params Parms;
	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetExpanded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bExpanded                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuHudRotator_C::SetExpanded(bool bExpanded)
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "SetExpanded");

	Params::UOptionsMenuHudRotator_C_SetExpanded_Params Parms;
	Parms.bExpanded = bExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetIndexInList
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InIndexInList                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuHudRotator_C::SetIndexInList(int32 InIndexInList)
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "SetIndexInList");

	Params::UOptionsMenuHudRotator_C_SetIndexInList_Params Parms;
	Parms.InIndexInList = InIndexInList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuHudRotator_C::SetSelected(bool bSelected)
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "SetSelected");

	Params::UOptionsMenuHudRotator_C_SetSelected_Params Parms;
	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.ToggleExpansion
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenuHudRotator_C::ToggleExpansion()
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "ToggleExpansion");

	Params::UOptionsMenuHudRotator_C_ToggleExpansion_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenuHudRotator_C::Reset()
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "Reset");

	Params::UOptionsMenuHudRotator_C_Reset_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOptionsMenuHudRotator_C::Construct()
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "Construct");

	Params::UOptionsMenuHudRotator_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void UOptionsMenuHudRotator_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "OnMouseLeave");

	Params::UOptionsMenuHudRotator_C_OnMouseLeave_Params Parms;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void UOptionsMenuHudRotator_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "OnMouseEnter");

	Params::UOptionsMenuHudRotator_C_OnMouseEnter_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuHudRotator_C::BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature(int32 Value)
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature");

	Params::UOptionsMenuHudRotator_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InData                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuHudRotator_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "SetData");

	Params::UOptionsMenuHudRotator_C_SetData_Params Parms;
	Parms.InData = InData;
	Parms.OwningList = OwningList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.ExecuteUbergraph_OptionsMenuHudRotator
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_Event_Callback                                            (ConstParm, ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bExpanded                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_InIndexInList                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelected                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent2                                         (ConstParm)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// int32                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_InData                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             K2Node_Event_OwningList                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDVisibilityData*      K2Node_DynamicCast_AsFort_HUDVisibility_Data                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)

void UOptionsMenuHudRotator_C::ExecuteUbergraph_OptionsMenuHudRotator(int32 EntryPoint, UDelegateProperty_ K2Node_Event_Callback, bool K2Node_Event_bExpanded, int32 K2Node_Event_InIndexInList, bool K2Node_Event_bSelected, const struct FPointerEvent& K2Node_Event_MouseEvent2, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, int32 K2Node_ComponentBoundEvent_Value, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, class UFortHUDVisibilityData* K2Node_DynamicCast_AsFort_HUDVisibility_Data, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Conv_BoolToInt_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array)
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "ExecuteUbergraph_OptionsMenuHudRotator");

	Params::UOptionsMenuHudRotator_C_ExecuteUbergraph_OptionsMenuHudRotator_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Callback = K2Node_Event_Callback;
	Parms.K2Node_Event_bExpanded = K2Node_Event_bExpanded;
	Parms.K2Node_Event_InIndexInList = K2Node_Event_InIndexInList;
	Parms.K2Node_Event_bSelected = K2Node_Event_bSelected;
	Parms.K2Node_Event_MouseEvent2 = K2Node_Event_MouseEvent2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_Event_InData = K2Node_Event_InData;
	Parms.K2Node_Event_OwningList = K2Node_Event_OwningList;
	Parms.K2Node_DynamicCast_AsFort_HUDVisibility_Data = K2Node_DynamicCast_AsFort_HUDVisibility_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Selection Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Gameplay_Tag                                                     (Parm, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuHudRotator_C::Selection_Changed__DelegateSignature(int32 Selected_Index, const struct FGameplayTag& Gameplay_Tag)
{
	static auto Func = Class->GetFunction("OptionsMenuHudRotator_C", "Selection Changed__DelegateSignature");

	Params::UOptionsMenuHudRotator_C_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;
	Parms.Gameplay_Tag = Gameplay_Tag;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
