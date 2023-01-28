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


// Function XpBoostRow.XpBoostRow_C.HasBoost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortAccountItemDefinition*  AccountItemDef                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_GetAccountItemWithDefinition_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UXpBoostRow_C::HasBoost(class UFortAccountItemDefinition* AccountItemDef, bool* Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("XpBoostRow_C", "HasBoost");

	Params::UXpBoostRow_C_HasBoost_Params Parms;
	Parms.AccountItemDef = AccountItemDef;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAccountItemWithDefinition_ReturnValue = CallFunc_GetAccountItemWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function XpBoostRow.XpBoostRow_C.Update Boost Material
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Other_Boosted                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

void UXpBoostRow_C::Update_Boost_Material(bool Other_Boosted)
{
	static auto Func = Class->GetFunction("XpBoostRow_C", "Update Boost Material");

	Params::UXpBoostRow_C_Update_Boost_Material_Params Parms;
	Parms.Other_Boosted = Other_Boosted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBoostRow.XpBoostRow_C.Center On Row
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBoostRow_C::Center_On_Row(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("XpBoostRow_C", "Center On Row");

	Params::UXpBoostRow_C_Center_On_Row_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBoostRow.XpBoostRow_C.Update Party Member
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Row_Has_Party_Member                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTeamMemberInfo         Party_Members_Info                                               (Parm)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasBoost_Result                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasBoost_Result2                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            ()
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayersUniqueID_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayersXPPercentContributionToLocalPlayer_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayersXPPercentContributionToLocalPlayer_ReturnValue2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue2                                     ()
// class FText                        CallFunc_Format_ReturnValue3                                     ()

void UXpBoostRow_C::Update_Party_Member(bool Row_Has_Party_Member, const struct FFortTeamMemberInfo& Party_Members_Info, class UFortMcpContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_HasBoost_Result, bool CallFunc_HasBoost_Result2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsLocalPlayersUniqueID_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, int32 CallFunc_GetPlayersXPPercentContributionToLocalPlayer_ReturnValue, int32 CallFunc_GetPlayersXPPercentContributionToLocalPlayer_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array3, class FText CallFunc_Format_ReturnValue2, class FText CallFunc_Format_ReturnValue3)
{
	static auto Func = Class->GetFunction("XpBoostRow_C", "Update Party Member");

	Params::UXpBoostRow_C_Update_Party_Member_Params Parms;
	Parms.Row_Has_Party_Member = Row_Has_Party_Member;
	Parms.Party_Members_Info = Party_Members_Info;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_HasBoost_Result = CallFunc_HasBoost_Result;
	Parms.CallFunc_HasBoost_Result2 = CallFunc_HasBoost_Result2;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsLocalPlayersUniqueID_ReturnValue = CallFunc_IsLocalPlayersUniqueID_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetPlayersXPPercentContributionToLocalPlayer_ReturnValue = CallFunc_GetPlayersXPPercentContributionToLocalPlayer_ReturnValue;
	Parms.CallFunc_GetPlayersXPPercentContributionToLocalPlayer_ReturnValue2 = CallFunc_GetPlayersXPPercentContributionToLocalPlayer_ReturnValue2;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;
	Parms.CallFunc_Format_ReturnValue3 = CallFunc_Format_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBoostRow.XpBoostRow_C.OnMCPRequestComplete_13866D8D449A2AA167E306B6A172BD62
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UXpBoostRow_C::OnMCPRequestComplete_13866D8D449A2AA167E306B6A172BD62()
{
	static auto Func = Class->GetFunction("XpBoostRow_C", "OnMCPRequestComplete_13866D8D449A2AA167E306B6A172BD62");

	Params::UXpBoostRow_C_OnMCPRequestComplete_13866D8D449A2AA167E306B6A172BD62_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBoostRow.XpBoostRow_C.DialogResult_9BF60C804C82DAA0C1A2839132130883
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBoostRow_C::DialogResult_9BF60C804C82DAA0C1A2839132130883(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("XpBoostRow_C", "DialogResult_9BF60C804C82DAA0C1A2839132130883");

	Params::UXpBoostRow_C_DialogResult_9BF60C804C82DAA0C1A2839132130883_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBoostRow.XpBoostRow_C.DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBoostRow_C::DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("XpBoostRow_C", "DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0");

	Params::UXpBoostRow_C_DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBoostRow.XpBoostRow_C.OnMCPRequestComplete_59B43F5044B96A114CC64595A3818F3C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UXpBoostRow_C::OnMCPRequestComplete_59B43F5044B96A114CC64595A3818F3C()
{
	static auto Func = Class->GetFunction("XpBoostRow_C", "OnMCPRequestComplete_59B43F5044B96A114CC64595A3818F3C");

	Params::UXpBoostRow_C_OnMCPRequestComplete_59B43F5044B96A114CC64595A3818F3C_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBoostRow.XpBoostRow_C.BndEvt__GiveXPButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBoostRow_C::BndEvt__GiveXPButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("XpBoostRow_C", "BndEvt__GiveXPButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UXpBoostRow_C_BndEvt__GiveXPButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBoostRow.XpBoostRow_C.ExecuteUbergraph_XpBoostRow
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       K2Node_CustomEvent_Result2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_GetAccountItemWithDefinition_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            ()
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_GetAccountItemWithDefinition_ReturnValue2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_MCPContextConsumeItem*CallFunc_ConsumeItem_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_MCPContextConsumeItem*CallFunc_ConsumeItem_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UXpBoostRow_C::ExecuteUbergraph_XpBoostRow(int32 EntryPoint, enum class EFortDialogResult K2Node_CustomEvent_Result2, class FName K2Node_CustomEvent_ResultName2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class FName Temp_name_Variable2, enum class EFortDialogResult Temp_byte_Variable2, bool K2Node_SwitchEnum2_CmpSuccess, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue2, class UFortAsyncAction_MCPContextConsumeItem* CallFunc_ConsumeItem_ReturnValue, class UFortAsyncAction_MCPContextConsumeItem* CallFunc_ConsumeItem_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4)
{
	static auto Func = Class->GetFunction("XpBoostRow_C", "ExecuteUbergraph_XpBoostRow");

	Params::UXpBoostRow_C_ExecuteUbergraph_XpBoostRow_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Result2 = K2Node_CustomEvent_Result2;
	Parms.K2Node_CustomEvent_ResultName2 = K2Node_CustomEvent_ResultName2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.Temp_name_Variable2 = Temp_name_Variable2;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAccountItemWithDefinition_ReturnValue = CallFunc_GetAccountItemWithDefinition_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2 = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetAccountItemWithDefinition_ReturnValue2 = CallFunc_GetAccountItemWithDefinition_ReturnValue2;
	Parms.CallFunc_ConsumeItem_ReturnValue = CallFunc_ConsumeItem_ReturnValue;
	Parms.CallFunc_ConsumeItem_ReturnValue2 = CallFunc_ConsumeItem_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpBoostRow.XpBoostRow_C.Give Boost Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            Player_to_Boost                                                  (Parm, HasGetValueTypeHash)

void UXpBoostRow_C::Give_Boost_Clicked__DelegateSignature(const struct FUniqueNetIdRepl& Player_to_Boost)
{
	static auto Func = Class->GetFunction("XpBoostRow_C", "Give Boost Clicked__DelegateSignature");

	Params::UXpBoostRow_C_Give_Boost_Clicked__DelegateSignature_Params Parms;
	Parms.Player_to_Boost = Player_to_Boost;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
