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


// Function IconTabButton.IconTabButton_C.Update Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bBangEnabled                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTabButton_C::Update_Bang_State(bool bBangEnabled, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2)
{
	static auto Func = Class->GetFunction("IconTabButton_C", "Update Bang State");

	Params::UIconTabButton_C_Update_Bang_State_Params Parms;
	Parms.bBangEnabled = bBangEnabled;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButton.IconTabButton_C.SetTutorialBorderStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      BorderStyle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTabButton_C::SetTutorialBorderStyle(class UClass* BorderStyle)
{
	static auto Func = Class->GetFunction("IconTabButton_C", "SetTutorialBorderStyle");

	Params::UIconTabButton_C_SetTutorialBorderStyle_Params Parms;
	Parms.BorderStyle = BorderStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButton.IconTabButton_C.ShowText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UIconTabButton_C::ShowText()
{
	static auto Func = Class->GetFunction("IconTabButton_C", "ShowText");

	Params::UIconTabButton_C_ShowText_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButton.IconTabButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 IconBrush                                                        (Parm)

void UIconTabButton_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto Func = Class->GetFunction("IconTabButton_C", "Set Icon");

	Params::UIconTabButton_C_Set_Icon_Params Parms;
	Parms.IconBrush = IconBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButton.IconTabButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (Parm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTabButton_C::Set_Text(class FText ButtonText, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static auto Func = Class->GetFunction("IconTabButton_C", "Set Text");

	Params::UIconTabButton_C_Set_Text_Params Parms;
	Parms.ButtonText = ButtonText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButton.IconTabButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTabButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("IconTabButton_C", "PreConstruct");

	Params::UIconTabButton_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButton.IconTabButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButton_C::OnCurrentTextStyleChanged()
{
	static auto Func = Class->GetFunction("IconTabButton_C", "OnCurrentTextStyleChanged");

	Params::UIconTabButton_C_OnCurrentTextStyleChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButton.IconTabButton_C.SetTabLabelInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo     TabLabelInfo                                                     (ConstParm, Parm, OutParm, ReferenceParm)

void UIconTabButton_C::SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto Func = Class->GetFunction("IconTabButton_C", "SetTabLabelInfo");

	Params::UIconTabButton_C_SetTabLabelInfo_Params Parms;
	Parms.TabLabelInfo = TabLabelInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButton.IconTabButton_C.OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButton_C::OnSelected()
{
	static auto Func = Class->GetFunction("IconTabButton_C", "OnSelected");

	Params::UIconTabButton_C_OnSelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButton.IconTabButton_C.OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButton_C::OnDeselected()
{
	static auto Func = Class->GetFunction("IconTabButton_C", "OnDeselected");

	Params::UIconTabButton_C_OnDeselected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButton.IconTabButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UIconTabButton_C::Construct()
{
	static auto Func = Class->GetFunction("IconTabButton_C", "Construct");

	Params::UIconTabButton_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButton.IconTabButton_C.OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButton_C::OnHovered()
{
	static auto Func = Class->GetFunction("IconTabButton_C", "OnHovered");

	Params::UIconTabButton_C_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButton.IconTabButton_C.OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButton_C::OnUnhovered()
{
	static auto Func = Class->GetFunction("IconTabButton_C", "OnUnhovered");

	Params::UIconTabButton_C_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButton.IconTabButton_C.OnEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButton_C::OnEnabled()
{
	static auto Func = Class->GetFunction("IconTabButton_C", "OnEnabled");

	Params::UIconTabButton_C_OnEnabled_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButton.IconTabButton_C.OnDisabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButton_C::OnDisabled()
{
	static auto Func = Class->GetFunction("IconTabButton_C", "OnDisabled");

	Params::UIconTabButton_C_OnDisabled_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButton.IconTabButton_C.ExecuteUbergraph_IconTabButton
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_Event_TabLabelInfo                                        (ConstParm)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSelected_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTabButton_C::ExecuteUbergraph_IconTabButton(int32 EntryPoint, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue2, bool K2Node_Event_IsDesignTime, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetSelected_ReturnValue2)
{
	static auto Func = Class->GetFunction("IconTabButton_C", "ExecuteUbergraph_IconTabButton");

	Params::UIconTabButton_C_ExecuteUbergraph_IconTabButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue = CallFunc_GetCurrentTextStyleClass_ReturnValue;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue2 = CallFunc_GetCurrentTextStyleClass_ReturnValue2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_TabLabelInfo = K2Node_Event_TabLabelInfo;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.CallFunc_GetSelected_ReturnValue2 = CallFunc_GetSelected_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
