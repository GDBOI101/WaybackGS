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


// Function SignInWidget.SignInWidget_C.HandleTextCommited
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETextCommit             TextCommitType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonBorder*               HighlightBorder                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonBorder*               NormalBorder                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasKeyboardFocus_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasKeyboardFocus_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USignInWidget_C::HandleTextCommited(enum class ETextCommit TextCommitType, class UCommonBorder* HighlightBorder, class UCommonBorder* NormalBorder, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool CallFunc_HasKeyboardFocus_ReturnValue, bool CallFunc_HasKeyboardFocus_ReturnValue2, class UClass* K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UClass* K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("SignInWidget_C", "HandleTextCommited");

	Params::USignInWidget_C_HandleTextCommited_Params Parms;
	Parms.TextCommitType = TextCommitType;
	Parms.HighlightBorder = HighlightBorder;
	Parms.NormalBorder = NormalBorder;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_HasKeyboardFocus_ReturnValue = CallFunc_HasKeyboardFocus_ReturnValue;
	Parms.CallFunc_HasKeyboardFocus_ReturnValue2 = CallFunc_HasKeyboardFocus_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SignInWidget.SignInWidget_C.BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_86_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USignInWidget_C::BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_86_OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static auto Func = Class->GetFunction("SignInWidget_C", "BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_86_OnEditableTextCommittedEvent__DelegateSignature");

	Params::USignInWidget_C_BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_86_OnEditableTextCommittedEvent__DelegateSignature_Params Parms;
	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SignInWidget.SignInWidget_C.BndEvt__EmailEditText_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USignInWidget_C::BndEvt__EmailEditText_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static auto Func = Class->GetFunction("SignInWidget_C", "BndEvt__EmailEditText_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature");

	Params::USignInWidget_C_BndEvt__EmailEditText_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params Parms;
	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SignInWidget.SignInWidget_C.BndEvt__EmailEditText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm)

void USignInWidget_C::BndEvt__EmailEditText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(class FText& Text)
{
	static auto Func = Class->GetFunction("SignInWidget_C", "BndEvt__EmailEditText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature");

	Params::USignInWidget_C_BndEvt__EmailEditText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params Parms;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SignInWidget.SignInWidget_C.BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm)

void USignInWidget_C::BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(class FText& Text)
{
	static auto Func = Class->GetFunction("SignInWidget_C", "BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature");

	Params::USignInWidget_C_BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature_Params Parms;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SignInWidget.SignInWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void USignInWidget_C::OnActivated()
{
	static auto Func = Class->GetFunction("SignInWidget_C", "OnActivated");

	Params::USignInWidget_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SignInWidget.SignInWidget_C.BndEvt__SignInButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USignInWidget_C::BndEvt__SignInButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SignInWidget_C", "BndEvt__SignInButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature");

	Params::USignInWidget_C_BndEvt__SignInButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SignInWidget.SignInWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USignInWidget_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SignInWidget_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature");

	Params::USignInWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SignInWidget.SignInWidget_C.ExecuteUbergraph_SignInWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text4                                 (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text3                                 (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text2                                 (ConstParm)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USignInWidget_C::ExecuteUbergraph_SignInWidget(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text4, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod2, class FText K2Node_ComponentBoundEvent_Text3, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class FText K2Node_ComponentBoundEvent_Text2, class FText K2Node_ComponentBoundEvent_Text, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("SignInWidget_C", "ExecuteUbergraph_SignInWidget");

	Params::USignInWidget_C_ExecuteUbergraph_SignInWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Text4 = K2Node_ComponentBoundEvent_Text4;
	Parms.K2Node_ComponentBoundEvent_CommitMethod2 = K2Node_ComponentBoundEvent_CommitMethod2;
	Parms.K2Node_ComponentBoundEvent_Text3 = K2Node_ComponentBoundEvent_Text3;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text2 = K2Node_ComponentBoundEvent_Text2;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
