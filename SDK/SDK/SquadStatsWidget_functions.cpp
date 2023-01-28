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


// Function SquadStatsWidget.SquadStatsWidget_C.HandleAbilitySystemChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAbilitySystemContext*   CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadStatsWidget_C::HandleAbilitySystemChanged(class UFortAbilitySystemContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("SquadStatsWidget_C", "HandleAbilitySystemChanged");

	Params::USquadStatsWidget_C_HandleAbilitySystemChanged_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadStatsWidget.SquadStatsWidget_C.BindToAttributeChanges
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilitySystemContext*   CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRegisteredPlayerInfo*   CallFunc_GetRegisteredPlayerInfo_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayAttribute>  CallFunc_GetTooltipAttributes_ReturnValue                        (ZeroConstructor, ReferenceParm)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void USquadStatsWidget_C::BindToAttributeChanges(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortAbilitySystemContext* CallFunc_GetContext_ReturnValue2, class UFortRegisteredPlayerInfo* CallFunc_GetRegisteredPlayerInfo_ReturnValue, TArray<struct FGameplayAttribute>& CallFunc_GetTooltipAttributes_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayAttribute& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("SquadStatsWidget_C", "BindToAttributeChanges");

	Params::USquadStatsWidget_C_BindToAttributeChanges_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetRegisteredPlayerInfo_ReturnValue = CallFunc_GetRegisteredPlayerInfo_ReturnValue;
	Parms.CallFunc_GetTooltipAttributes_ReturnValue = CallFunc_GetTooltipAttributes_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadStatsWidget.SquadStatsWidget_C.HandleActivityChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void USquadStatsWidget_C::HandleActivityChanged(bool IsActive, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("SquadStatsWidget_C", "HandleActivityChanged");

	Params::USquadStatsWidget_C_HandleActivityChanged_Params Parms;
	Parms.IsActive = IsActive;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadStatsWidget.SquadStatsWidget_C.HandleAttributeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USquadStatsWidget_C::HandleAttributeChanged()
{
	static auto Func = Class->GetFunction("SquadStatsWidget_C", "HandleAttributeChanged");

	Params::USquadStatsWidget_C_HandleAttributeChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadStatsWidget.SquadStatsWidget_C.HighlightStat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InStatIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void USquadStatsWidget_C::HighlightStat(int32 InStatIndex, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("SquadStatsWidget_C", "HighlightStat");

	Params::USquadStatsWidget_C_HighlightStat_Params Parms;
	Parms.InStatIndex = InStatIndex;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadStatsWidget.SquadStatsWidget_C.RefreshScroll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonBorder*               Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonBorder*               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadStatsWidget_C::RefreshScroll(bool Temp_bool_Variable, class UCommonBorder* Temp_object_Variable, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonBorder* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("SquadStatsWidget_C", "RefreshScroll");

	Params::USquadStatsWidget_C_RefreshScroll_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadStatsWidget.SquadStatsWidget_C.UnbindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemContext*   CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRegisteredPlayerInfo*   CallFunc_GetRegisteredPlayerInfo_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadStatsWidget_C::UnbindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortAbilitySystemContext* CallFunc_GetContext_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortRegisteredPlayerInfo* CallFunc_GetRegisteredPlayerInfo_ReturnValue)
{
	static auto Func = Class->GetFunction("SquadStatsWidget_C", "UnbindDelegates");

	Params::USquadStatsWidget_C_UnbindDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRegisteredPlayerInfo_ReturnValue = CallFunc_GetRegisteredPlayerInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadStatsWidget.SquadStatsWidget_C.ToggleBetweenStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewIndex                                                         (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void USquadStatsWidget_C::ToggleBetweenStats(int32 NewIndex, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("SquadStatsWidget_C", "ToggleBetweenStats");

	Params::USquadStatsWidget_C_ToggleBetweenStats_Params Parms;
	Parms.NewIndex = NewIndex;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadStatsWidget.SquadStatsWidget_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRegisteredPlayerInfo*   CallFunc_GetRegisteredPlayerInfo_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadStatsWidget_C::BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortRegisteredPlayerInfo* CallFunc_GetRegisteredPlayerInfo_ReturnValue)
{
	static auto Func = Class->GetFunction("SquadStatsWidget_C", "BindDelegates");

	Params::USquadStatsWidget_C_BindDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRegisteredPlayerInfo_ReturnValue = CallFunc_GetRegisteredPlayerInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadStatsWidget.SquadStatsWidget_C.InitCoreStatsWidgetArray
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortAttributeListItem_NUI*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)

void USquadStatsWidget_C::InitCoreStatsWidgetArray(TArray<class UFortAttributeListItem_NUI*>& K2Node_MakeArray_Array)
{
	static auto Func = Class->GetFunction("SquadStatsWidget_C", "InitCoreStatsWidgetArray");

	Params::USquadStatsWidget_C_InitCoreStatsWidgetArray_Params Parms;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadStatsWidget.SquadStatsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USquadStatsWidget_C::Construct()
{
	static auto Func = Class->GetFunction("SquadStatsWidget_C", "Construct");

	Params::USquadStatsWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadStatsWidget.SquadStatsWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadStatsWidget_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SquadStatsWidget_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature");

	Params::USquadStatsWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadStatsWidget.SquadStatsWidget_C.BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadStatsWidget_C::BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SquadStatsWidget_C", "BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature");

	Params::USquadStatsWidget_C_BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadStatsWidget.SquadStatsWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USquadStatsWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("SquadStatsWidget_C", "Destruct");

	Params::USquadStatsWidget_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadStatsWidget.SquadStatsWidget_C.HandleSquadSlottingPreviewStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void USquadStatsWidget_C::HandleSquadSlottingPreviewStateChanged()
{
	static auto Func = Class->GetFunction("SquadStatsWidget_C", "HandleSquadSlottingPreviewStateChanged");

	Params::USquadStatsWidget_C_HandleSquadSlottingPreviewStateChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadStatsWidget.SquadStatsWidget_C.ExecuteUbergraph_SquadStatsWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadStatsWidget_C::ExecuteUbergraph_SquadStatsWidget(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("SquadStatsWidget_C", "ExecuteUbergraph_SquadStatsWidget");

	Params::USquadStatsWidget_C_ExecuteUbergraph_SquadStatsWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadStatsWidget.SquadStatsWidget_C.DetailedStatsClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void USquadStatsWidget_C::DetailedStatsClosed__DelegateSignature()
{
	static auto Func = Class->GetFunction("SquadStatsWidget_C", "DetailedStatsClosed__DelegateSignature");

	Params::USquadStatsWidget_C_DetailedStatsClosed__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
