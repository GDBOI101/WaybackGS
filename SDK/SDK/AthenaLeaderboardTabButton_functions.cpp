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


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ShowText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLeaderboardTabButton_C::ShowText()
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "ShowText");

	Params::UAthenaLeaderboardTabButton_C_ShowText_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 IconBrush                                                        (Parm)

void UAthenaLeaderboardTabButton_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "Set Icon");

	Params::UAthenaLeaderboardTabButton_C_Set_Icon_Params Parms;
	Parms.IconBrush = IconBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (Parm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLeaderboardTabButton_C::Set_Text(class FText ButtonText, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "Set Text");

	Params::UAthenaLeaderboardTabButton_C_Set_Text_Params Parms;
	Parms.ButtonText = ButtonText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLeaderboardTabButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "PreConstruct");

	Params::UAthenaLeaderboardTabButton_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLeaderboardTabButton_C::OnCurrentTextStyleChanged()
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "OnCurrentTextStyleChanged");

	Params::UAthenaLeaderboardTabButton_C_OnCurrentTextStyleChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.SetTabLabelInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo     TabLabelInfo                                                     (ConstParm, Parm, OutParm, ReferenceParm)

void UAthenaLeaderboardTabButton_C::SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "SetTabLabelInfo");

	Params::UAthenaLeaderboardTabButton_C_SetTabLabelInfo_Params Parms;
	Parms.TabLabelInfo = TabLabelInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLeaderboardTabButton_C::OnSelected()
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "OnSelected");

	Params::UAthenaLeaderboardTabButton_C_OnSelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLeaderboardTabButton_C::OnDeselected()
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "OnDeselected");

	Params::UAthenaLeaderboardTabButton_C_OnDeselected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaLeaderboardTabButton_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "Construct");

	Params::UAthenaLeaderboardTabButton_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLeaderboardTabButton_C::OnHovered()
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "OnHovered");

	Params::UAthenaLeaderboardTabButton_C_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLeaderboardTabButton_C::OnUnhovered()
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "OnUnhovered");

	Params::UAthenaLeaderboardTabButton_C_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ExecuteUbergraph_AthenaLeaderboardTabButton
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

void UAthenaLeaderboardTabButton_C::ExecuteUbergraph_AthenaLeaderboardTabButton(int32 EntryPoint, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue2, bool K2Node_Event_IsDesignTime, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetSelected_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "ExecuteUbergraph_AthenaLeaderboardTabButton");

	Params::UAthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton_Params Parms;
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
