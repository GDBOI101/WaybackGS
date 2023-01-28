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


// Function EulaWidget.EulaWidget_C.SetViewOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bViewOnly                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEulaWidget_C::SetViewOnly(bool bViewOnly, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("EulaWidget_C", "SetViewOnly");

	Params::UEulaWidget_C_SetViewOnly_Params Parms;
	Parms.bViewOnly = bViewOnly;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EulaWidget.EulaWidget_C.SetEulaText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        EULA                                                             (Parm)

void UEulaWidget_C::SetEulaText(class FText EULA)
{
	static auto Func = Class->GetFunction("EulaWidget_C", "SetEulaText");

	Params::UEulaWidget_C_SetEulaText_Params Parms;
	Parms.EULA = EULA;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EulaWidget.EulaWidget_C.BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEulaWidget_C::BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("EulaWidget_C", "BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature");

	Params::UEulaWidget_C_BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EulaWidget.EulaWidget_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEulaWidget_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("EulaWidget_C", "BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UEulaWidget_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EulaWidget.EulaWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UEulaWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("EulaWidget_C", "Destruct");

	Params::UEulaWidget_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EulaWidget.EulaWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UEulaWidget_C::Construct()
{
	static auto Func = Class->GetFunction("EulaWidget_C", "Construct");

	Params::UEulaWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EulaWidget.EulaWidget_C.ExecuteUbergraph_EulaWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEulaWidget_C::ExecuteUbergraph_EulaWidget(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2)
{
	static auto Func = Class->GetFunction("EulaWidget_C", "ExecuteUbergraph_EulaWidget");

	Params::UEulaWidget_C_ExecuteUbergraph_EulaWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EulaWidget.EulaWidget_C.OnEulaResponse__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Accepted                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEulaWidget_C::OnEulaResponse__DelegateSignature(bool Accepted)
{
	static auto Func = Class->GetFunction("EulaWidget_C", "OnEulaResponse__DelegateSignature");

	Params::UEulaWidget_C_OnEulaResponse__DelegateSignature_Params Parms;
	Parms.Accepted = Accepted;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
