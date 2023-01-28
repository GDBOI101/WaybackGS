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


// Function FullPartyBarAthena.FullPartyBarAthena_C.GetHoverText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Output                                                           (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_StartsWith_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateAthena*      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()

void UFullPartyBarAthena_C::GetHoverText(int32 PlayerIndex, class FText* Output, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable2, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_StartsWith_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, class AFortPlayerStateAthena* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "GetHoverText");

	Params::UFullPartyBarAthena_C_GetHoverText_Params Parms;
	Parms.PlayerIndex = PlayerIndex;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_StartsWith_ReturnValue = CallFunc_StartsWith_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.GetTooltipStat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Token                                                            (ConstParm, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFortDisplayAttribute       OutDisplayAttribute                                              (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContextWithSource_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)
// class UFortRegisteredPlayerInfo*   CallFunc_GetPlayerInfoFromUniqueID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortDisplayAttribute       CallFunc_GetTooltipStat_OutDisplayAttribute                      ()
// bool                               CallFunc_GetTooltipStat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UFullPartyBarAthena_C::GetTooltipStat(const struct FGameplayTag& Token, struct FFortDisplayAttribute* OutDisplayAttribute, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, class UFortRegisteredPlayerInfo* CallFunc_GetPlayerInfoFromUniqueID_ReturnValue, const struct FFortDisplayAttribute& CallFunc_GetTooltipStat_OutDisplayAttribute, bool CallFunc_GetTooltipStat_ReturnValue)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "GetTooltipStat");

	Params::UFullPartyBarAthena_C_GetTooltipStat_Params Parms;
	Parms.Token = Token;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_SpawnTooltipContextWithSource_ReturnValue = CallFunc_SpawnTooltipContextWithSource_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;
	Parms.CallFunc_GetPlayerInfoFromUniqueID_ReturnValue = CallFunc_GetPlayerInfoFromUniqueID_ReturnValue;
	Parms.CallFunc_GetTooltipStat_OutDisplayAttribute = CallFunc_GetTooltipStat_OutDisplayAttribute;
	Parms.CallFunc_GetTooltipStat_ReturnValue = CallFunc_GetTooltipStat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDisplayAttribute != nullptr)
		*OutDisplayAttribute = Parms.OutDisplayAttribute;

	return Parms.ReturnValue;

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Get_Tech_ToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortDisplayAttribute       CallFunc_GetTooltipStat_OutDisplayAttribute                      ()
// bool                               CallFunc_GetTooltipStat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UFullPartyBarAthena_C::Get_Tech_ToolTipWidget(const struct FFortDisplayAttribute& CallFunc_GetTooltipStat_OutDisplayAttribute, bool CallFunc_GetTooltipStat_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "Get_Tech_ToolTipWidget");

	Params::UFullPartyBarAthena_C_Get_Tech_ToolTipWidget_Params Parms;
	Parms.CallFunc_GetTooltipStat_OutDisplayAttribute = CallFunc_GetTooltipStat_OutDisplayAttribute;
	Parms.CallFunc_GetTooltipStat_ReturnValue = CallFunc_GetTooltipStat_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Get_Resistance_ToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortDisplayAttribute       CallFunc_GetTooltipStat_OutDisplayAttribute                      ()
// bool                               CallFunc_GetTooltipStat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UFullPartyBarAthena_C::Get_Resistance_ToolTipWidget(const struct FFortDisplayAttribute& CallFunc_GetTooltipStat_OutDisplayAttribute, bool CallFunc_GetTooltipStat_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "Get_Resistance_ToolTipWidget");

	Params::UFullPartyBarAthena_C_Get_Resistance_ToolTipWidget_Params Parms;
	Parms.CallFunc_GetTooltipStat_OutDisplayAttribute = CallFunc_GetTooltipStat_OutDisplayAttribute;
	Parms.CallFunc_GetTooltipStat_ReturnValue = CallFunc_GetTooltipStat_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Get_Offense_ToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortDisplayAttribute       CallFunc_GetTooltipStat_OutDisplayAttribute                      ()
// bool                               CallFunc_GetTooltipStat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UFullPartyBarAthena_C::Get_Offense_ToolTipWidget(const struct FFortDisplayAttribute& CallFunc_GetTooltipStat_OutDisplayAttribute, bool CallFunc_GetTooltipStat_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "Get_Offense_ToolTipWidget");

	Params::UFullPartyBarAthena_C_Get_Offense_ToolTipWidget_Params Parms;
	Parms.CallFunc_GetTooltipStat_OutDisplayAttribute = CallFunc_GetTooltipStat_OutDisplayAttribute;
	Parms.CallFunc_GetTooltipStat_ReturnValue = CallFunc_GetTooltipStat_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Get_Fortitude_ToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortDisplayAttribute       CallFunc_GetTooltipStat_OutDisplayAttribute                      ()
// bool                               CallFunc_GetTooltipStat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UFullPartyBarAthena_C::Get_Fortitude_ToolTipWidget(const struct FFortDisplayAttribute& CallFunc_GetTooltipStat_OutDisplayAttribute, bool CallFunc_GetTooltipStat_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "Get_Fortitude_ToolTipWidget");

	Params::UFullPartyBarAthena_C_Get_Fortitude_ToolTipWidget_Params Parms;
	Parms.CallFunc_GetTooltipStat_OutDisplayAttribute = CallFunc_GetTooltipStat_OutDisplayAttribute;
	Parms.CallFunc_GetTooltipStat_ReturnValue = CallFunc_GetTooltipStat_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.GetTotalNumFriendCodes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Num_Codes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumFriendCodesToIssue_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyBarAthena_C::GetTotalNumFriendCodes(int32* Num_Codes, class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumFriendCodesToIssue_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "GetTotalNumFriendCodes");

	Params::UFullPartyBarAthena_C_GetTotalNumFriendCodes_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetNumFriendCodesToIssue_ReturnValue = CallFunc_GetNumFriendCodesToIssue_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Num_Codes != nullptr)
		*Num_Codes = Parms.Num_Codes;

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.isTeammateSlotPopulated
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InSlotNUmber                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateAthena*      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UFullPartyBarAthena_C::IsTeammateSlotPopulated(int32 InSlotNUmber, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, class AFortPlayerStateAthena* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "isTeammateSlotPopulated");

	Params::UFullPartyBarAthena_C_IsTeammateSlotPopulated_Params Parms;
	Parms.InSlotNUmber = InSlotNUmber;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.OpenPartyPrivacy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyBarAthena_C::OpenPartyPrivacy(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "OpenPartyPrivacy");

	Params::UFullPartyBarAthena_C_OpenPartyPrivacy_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.HandlePartybarUIFeatureChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortUIFeature          Feature                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIFeatureState     FeatureState                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIFeatureState     Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFullPartyBarAthena_C::HandlePartybarUIFeatureChanged(enum class EFortUIFeature Feature, enum class EFortUIFeatureState FeatureState, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class EFortUIFeatureState Temp_byte_Variable5, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "HandlePartybarUIFeatureChanged");

	Params::UFullPartyBarAthena_C_HandlePartybarUIFeatureChanged_Params Parms;
	Parms.Feature = Feature;
	Parms.FeatureState = FeatureState;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ArePartyFeaturesEnabled_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFullPartyBarAthena_C::Initialize(class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue, bool CallFunc_ArePartyFeaturesEnabled_ReturnValue)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "Initialize");

	Params::UFullPartyBarAthena_C_Initialize_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_ArePartyFeaturesEnabled_ReturnValue = CallFunc_ArePartyFeaturesEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyBarAthena_C::BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "BindDelegates");

	Params::UFullPartyBarAthena_C_BindDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFullPartyBarAthena_C::Construct()
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "Construct");

	Params::UFullPartyBarAthena_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyBarAthena_C::BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature");

	Params::UFullPartyBarAthena_C_BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyBarAthena_C::BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UFullPartyBarAthena_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyBarAthena_C::BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UFullPartyBarAthena_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyBarAthena_C::BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UFullPartyBarAthena_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFullPartyBarAthena_C::Destruct()
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "Destruct");

	Params::UFullPartyBarAthena_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyBarAthena_C::BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature");

	Params::UFullPartyBarAthena_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyBarAthena_C::BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature");

	Params::UFullPartyBarAthena_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyBarAthena_C::BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature");

	Params::UFullPartyBarAthena_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyBarAthena_C::BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature");

	Params::UFullPartyBarAthena_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyBarAthena_C::BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature");

	Params::UFullPartyBarAthena_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyBarAthena_C::BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature");

	Params::UFullPartyBarAthena_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyBarAthena_C::BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature");

	Params::UFullPartyBarAthena_C_BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_178_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyBarAthena_C::BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_178_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_178_CommonButtonClicked__DelegateSignature");

	Params::UFullPartyBarAthena_C_BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_178_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyBarAthena_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "Tick");

	Params::UFullPartyBarAthena_C_Tick_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.ExecuteUbergraph_FullPartyBarAthena
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                ()
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetHoverText_Output                                     ()
// class FText                        CallFunc_GetHoverText_Output2                                    ()
// class FText                        CallFunc_GetHoverText_Output3                                    ()
// class FText                        CallFunc_GetHoverText_Output4                                    ()
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyBarAthena_C::ExecuteUbergraph_FullPartyBarAthena(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class UCommonButton* K2Node_ComponentBoundEvent_Button11, class UCommonButton* K2Node_ComponentBoundEvent_Button10, class UCommonButton* K2Node_ComponentBoundEvent_Button9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetEmptyText_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button8, class UCommonButton* K2Node_ComponentBoundEvent_Button7, enum class ESlateVisibility K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class UCommonButton* K2Node_ComponentBoundEvent_Button5, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button, class FText CallFunc_GetHoverText_Output, class FText CallFunc_GetHoverText_Output2, class FText CallFunc_GetHoverText_Output3, class FText CallFunc_GetHoverText_Output4, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "ExecuteUbergraph_FullPartyBarAthena");

	Params::UFullPartyBarAthena_C_ExecuteUbergraph_FullPartyBarAthena_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_ComponentBoundEvent_Button12 = K2Node_ComponentBoundEvent_Button12;
	Parms.K2Node_ComponentBoundEvent_Button11 = K2Node_ComponentBoundEvent_Button11;
	Parms.K2Node_ComponentBoundEvent_Button10 = K2Node_ComponentBoundEvent_Button10;
	Parms.K2Node_ComponentBoundEvent_Button9 = K2Node_ComponentBoundEvent_Button9;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button8 = K2Node_ComponentBoundEvent_Button8;
	Parms.K2Node_ComponentBoundEvent_Button7 = K2Node_ComponentBoundEvent_Button7;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_Button6 = K2Node_ComponentBoundEvent_Button6;
	Parms.K2Node_ComponentBoundEvent_Button5 = K2Node_ComponentBoundEvent_Button5;
	Parms.K2Node_ComponentBoundEvent_Button4 = K2Node_ComponentBoundEvent_Button4;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetHoverText_Output = CallFunc_GetHoverText_Output;
	Parms.CallFunc_GetHoverText_Output2 = CallFunc_GetHoverText_Output2;
	Parms.CallFunc_GetHoverText_Output3 = CallFunc_GetHoverText_Output3;
	Parms.CallFunc_GetHoverText_Output4 = CallFunc_GetHoverText_Output4;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.OnButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        HelpText                                                         (Parm)

void UFullPartyBarAthena_C::OnButtonHovered__DelegateSignature(class FText HelpText)
{
	static auto Func = Class->GetFunction("FullPartyBarAthena_C", "OnButtonHovered__DelegateSignature");

	Params::UFullPartyBarAthena_C_OnButtonHovered__DelegateSignature_Params Parms;
	Parms.HelpText = HelpText;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
