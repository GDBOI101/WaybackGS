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


// Function TabAccountLinkage.TabAccountLinkage_C.InitializeWebsiteConfiguration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// bool                               CallFunc_IsAccountLinkingUIURLButtonEnabled_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetAccountLinkingUIURL_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortAccountLinkingUIConfigCallFunc_GetAccountLinkingUIConfig_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select2_Default                                           ()

void UTabAccountLinkage_C::InitializeWebsiteConfiguration(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, class FText Temp_text_Variable, class FText Temp_text_Variable2, bool CallFunc_IsAccountLinkingUIURLButtonEnabled_ReturnValue, const class FString& CallFunc_GetAccountLinkingUIURL_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EFortAccountLinkingUIConfig CallFunc_GetAccountLinkingUIConfig_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("TabAccountLinkage_C", "InitializeWebsiteConfiguration");

	Params::UTabAccountLinkage_C_InitializeWebsiteConfiguration_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.CallFunc_IsAccountLinkingUIURLButtonEnabled_ReturnValue = CallFunc_IsAccountLinkingUIURLButtonEnabled_ReturnValue;
	Parms.CallFunc_GetAccountLinkingUIURL_ReturnValue = CallFunc_GetAccountLinkingUIURL_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetAccountLinkingUIConfig_ReturnValue = CallFunc_GetAccountLinkingUIConfig_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccountLinkage.TabAccountLinkage_C.Build Player Id Analytic Attribute
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortAnalyticsEventAttributeReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringForUniqueId_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// struct FFortAnalyticsEventAttributeCallFunc_ConstructAnalyticsAttribute_ReturnValue                 ()

struct FFortAnalyticsEventAttribute UTabAccountLinkage_C::Build_Player_Id_Analytic_Attribute(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, const class FString& CallFunc_GetDebugStringForUniqueId_ReturnValue, const struct FFortAnalyticsEventAttribute& CallFunc_ConstructAnalyticsAttribute_ReturnValue)
{
	static auto Func = Class->GetFunction("TabAccountLinkage_C", "Build Player Id Analytic Attribute");

	Params::UTabAccountLinkage_C_Build_Player_Id_Analytic_Attribute_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;
	Parms.CallFunc_GetDebugStringForUniqueId_ReturnValue = CallFunc_GetDebugStringForUniqueId_ReturnValue;
	Parms.CallFunc_ConstructAnalyticsAttribute_ReturnValue = CallFunc_ConstructAnalyticsAttribute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TabAccountLinkage.TabAccountLinkage_C.Build Player Name Analytic Attribute
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortAnalyticsEventAttributeReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)
// class UFortRegisteredPlayerInfo*   CallFunc_GetPlayerInfoFromUniqueID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FFortAnalyticsEventAttributeCallFunc_ConstructAnalyticsAttribute_ReturnValue                 ()

struct FFortAnalyticsEventAttribute UTabAccountLinkage_C::Build_Player_Name_Analytic_Attribute(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, class UFortRegisteredPlayerInfo* CallFunc_GetPlayerInfoFromUniqueID_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, const struct FFortAnalyticsEventAttribute& CallFunc_ConstructAnalyticsAttribute_ReturnValue)
{
	static auto Func = Class->GetFunction("TabAccountLinkage_C", "Build Player Name Analytic Attribute");

	Params::UTabAccountLinkage_C_Build_Player_Name_Analytic_Attribute_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;
	Parms.CallFunc_GetPlayerInfoFromUniqueID_ReturnValue = CallFunc_GetPlayerInfoFromUniqueID_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_ConstructAnalyticsAttribute_ReturnValue = CallFunc_ConstructAnalyticsAttribute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TabAccountLinkage.TabAccountLinkage_C.Fire Enter Live Stream Analytic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortAnalyticsEventAttributeCallFunc_Build_Player_Id_Analytic_Attribute_ReturnValue          ()
// struct FFortAnalyticsEventAttributeCallFunc_Build_Player_Name_Analytic_Attribute_ReturnValue        ()
// TArray<struct FFortAnalyticsEventAttribute>K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)

void UTabAccountLinkage_C::Fire_Enter_Live_Stream_Analytic(const struct FFortAnalyticsEventAttribute& CallFunc_Build_Player_Id_Analytic_Attribute_ReturnValue, const struct FFortAnalyticsEventAttribute& CallFunc_Build_Player_Name_Analytic_Attribute_ReturnValue, TArray<struct FFortAnalyticsEventAttribute>& K2Node_MakeArray_Array)
{
	static auto Func = Class->GetFunction("TabAccountLinkage_C", "Fire Enter Live Stream Analytic");

	Params::UTabAccountLinkage_C_Fire_Enter_Live_Stream_Analytic_Params Parms;
	Parms.CallFunc_Build_Player_Id_Analytic_Attribute_ReturnValue = CallFunc_Build_Player_Id_Analytic_Attribute_ReturnValue;
	Parms.CallFunc_Build_Player_Name_Analytic_Attribute_ReturnValue = CallFunc_Build_Player_Name_Analytic_Attribute_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccountLinkage.TabAccountLinkage_C.Initialize Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortAccountLinkingUIConfigCallFunc_GetAccountLinkingUIConfig_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccountLinkage_C::Initialize_Data(bool Temp_bool_Variable, enum class EFortAccountLinkingUIConfig CallFunc_GetAccountLinkingUIConfig_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("TabAccountLinkage_C", "Initialize Data");

	Params::UTabAccountLinkage_C_Initialize_Data_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetAccountLinkingUIConfig_ReturnValue = CallFunc_GetAccountLinkingUIConfig_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccountLinkage.TabAccountLinkage_C.Update Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabAccountLinkage_C::Update_Data()
{
	static auto Func = Class->GetFunction("TabAccountLinkage_C", "Update Data");

	Params::UTabAccountLinkage_C_Update_Data_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccountLinkage.TabAccountLinkage_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabAccountLinkage_C::UpdateOptionsTab()
{
	static auto Func = Class->GetFunction("TabAccountLinkage_C", "UpdateOptionsTab");

	Params::UTabAccountLinkage_C_UpdateOptionsTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccountLinkage.TabAccountLinkage_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabAccountLinkage_C::CenterOnTab()
{
	static auto Func = Class->GetFunction("TabAccountLinkage_C", "CenterOnTab");

	Params::UTabAccountLinkage_C_CenterOnTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccountLinkage.TabAccountLinkage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTabAccountLinkage_C::Construct()
{
	static auto Func = Class->GetFunction("TabAccountLinkage_C", "Construct");

	Params::UTabAccountLinkage_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccountLinkage.TabAccountLinkage_C.BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        NewTooltipText                                                   (Parm)

void UTabAccountLinkage_C::BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature(class FText NewTooltipText)
{
	static auto Func = Class->GetFunction("TabAccountLinkage_C", "BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature");

	Params::UTabAccountLinkage_C_BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature_Params Parms;
	Parms.NewTooltipText = NewTooltipText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccountLinkage.TabAccountLinkage_C.BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccountLinkage_C::BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("TabAccountLinkage_C", "BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature");

	Params::UTabAccountLinkage_C_BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccountLinkage.TabAccountLinkage_C.ExecuteUbergraph_TabAccountLinkage
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAccountLinkingUIURLButtonEnabled_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_NewTooltipText                        ()
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetAccountLinkingUIURL_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShowWebURL_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabAccountLinkage_C::ExecuteUbergraph_TabAccountLinkage(int32 EntryPoint, bool CallFunc_IsAccountLinkingUIURLButtonEnabled_ReturnValue, class FText K2Node_ComponentBoundEvent_NewTooltipText, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const class FString& CallFunc_GetAccountLinkingUIURL_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ShowWebURL_ReturnValue)
{
	static auto Func = Class->GetFunction("TabAccountLinkage_C", "ExecuteUbergraph_TabAccountLinkage");

	Params::UTabAccountLinkage_C_ExecuteUbergraph_TabAccountLinkage_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsAccountLinkingUIURLButtonEnabled_ReturnValue = CallFunc_IsAccountLinkingUIURLButtonEnabled_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewTooltipText = K2Node_ComponentBoundEvent_NewTooltipText;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue = CallFunc_GetWidgetAtIndex_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetAccountLinkingUIURL_ReturnValue = CallFunc_GetAccountLinkingUIURL_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_ShowWebURL_ReturnValue = CallFunc_ShowWebURL_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
