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


// Function HelpWidget.HelpWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InTitle                                                          (Parm)
// class FText                        InDescription                                                    (Parm)
// class FText                        InStep1_Text                                                     (Parm)
// class FText                        InStep2_Text                                                     (Parm)
// class FText                        InStep3_Text                                                     (Parm)
// class UTexture2D*                  InStep1_Picture                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  InStep2_Picture                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  InStep3_Picture                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InNumOfSteps                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHelpWidget_C::Init(class FText InTitle, class FText InDescription, class FText InStep1_Text, class FText InStep2_Text, class FText InStep3_Text, class UTexture2D* InStep1_Picture, class UTexture2D* InStep2_Picture, class UTexture2D* InStep3_Picture, int32 InNumOfSteps, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("HelpWidget_C", "Init");

	Params::UHelpWidget_C_Init_Params Parms;
	Parms.InTitle = InTitle;
	Parms.InDescription = InDescription;
	Parms.InStep1_Text = InStep1_Text;
	Parms.InStep2_Text = InStep2_Text;
	Parms.InStep3_Text = InStep3_Text;
	Parms.InStep1_Picture = InStep1_Picture;
	Parms.InStep2_Picture = InStep2_Picture;
	Parms.InStep3_Picture = InStep3_Picture;
	Parms.InNumOfSteps = InNumOfSteps;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpWidget.HelpWidget_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpWidget_C::BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("HelpWidget_C", "BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature");

	Params::UHelpWidget_C_BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpWidget.HelpWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHelpWidget_C::Construct()
{
	static auto Func = Class->GetFunction("HelpWidget_C", "Construct");

	Params::UHelpWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpWidget.HelpWidget_C.ExecuteUbergraph_HelpWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpWidget_C::ExecuteUbergraph_HelpWidget(int32 EntryPoint, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("HelpWidget_C", "ExecuteUbergraph_HelpWidget");

	Params::UHelpWidget_C_ExecuteUbergraph_HelpWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
