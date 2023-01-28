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


// Function HBOnboardingFlow.HBOnboardingFlow_C.CanAccessManagementFeatures
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Can_Manage                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortFrontEndFeatureStateCallFunc_GetFeatureState_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortFrontEndFeatureStateCallFunc_GetFeatureState_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortFrontEndFeatureStateCallFunc_GetFeatureState_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHBOnboardingFlow_C::CanAccessManagementFeatures(bool* Can_Manage, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, enum class EFortFrontEndFeatureState CallFunc_GetFeatureState_ReturnValue, enum class EFortFrontEndFeatureState CallFunc_GetFeatureState_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, enum class EFortFrontEndFeatureState CallFunc_GetFeatureState_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "CanAccessManagementFeatures");

	Params::AHBOnboardingFlow_C_CanAccessManagementFeatures_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFeatureState_ReturnValue = CallFunc_GetFeatureState_ReturnValue;
	Parms.CallFunc_GetFeatureState_ReturnValue2 = CallFunc_GetFeatureState_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_GetFeatureState_ReturnValue3 = CallFunc_GetFeatureState_ReturnValue3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

	if (Can_Manage != nullptr)
		*Can_Manage = Parms.Can_Manage;

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.RecheckNeedToPlayEventMovie
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WaitingToCheckAgain                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHBOnboardingFlow_C::RecheckNeedToPlayEventMovie(bool* WaitingToCheckAgain, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "RecheckNeedToPlayEventMovie");

	Params::AHBOnboardingFlow_C_RecheckNeedToPlayEventMovie_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WaitingToCheckAgain != nullptr)
		*WaitingToCheckAgain = Parms.WaitingToCheckAgain;

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.NeedsToPlayEventMovie
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileApp_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuestInProgress_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AHBOnboardingFlow_C::NeedsToPlayEventMovie(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsQuestInProgress_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "NeedsToPlayEventMovie");

	Params::AHBOnboardingFlow_C_NeedsToPlayEventMovie_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsMobileApp_ReturnValue = CallFunc_IsMobileApp_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsQuestInProgress_ReturnValue = CallFunc_IsQuestInProgress_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Failed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewLocalVar_0                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void AHBOnboardingFlow_C::Handle_Client_Quest_Login_Failed(int32 NewLocalVar_0, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "Handle Client Quest Login Failed");

	Params::AHBOnboardingFlow_C_Handle_Client_Quest_Login_Failed_Params Parms;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.ShowBannerSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBannerSelectionWidget_C*    K2Node_DynamicCast_AsBanner_Selection_Widget                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHBOnboardingFlow_C::ShowBannerSelect(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UBannerSelectionWidget_C* K2Node_DynamicCast_AsBanner_Selection_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "ShowBannerSelect");

	Params::AHBOnboardingFlow_C_ShowBannerSelect_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsBanner_Selection_Widget = K2Node_DynamicCast_AsBanner_Selection_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleMcpFailure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandleMcpFailure()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleMcpFailure");

	Params::AHBOnboardingFlow_C_HandleMcpFailure_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.UpdateVariableCache
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHBOnboardingFlow_C::UpdateVariableCache(bool* Success, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "UpdateVariableCache");

	Params::AHBOnboardingFlow_C_UpdateVariableCache_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "UserConstructionScript");

	Params::AHBOnboardingFlow_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_C2C889344301B8DBF8F046A2A175D133
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnCanceled_C2C889344301B8DBF8F046A2A175D133()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnCanceled_C2C889344301B8DBF8F046A2A175D133");

	Params::AHBOnboardingFlow_C_OnCanceled_C2C889344301B8DBF8F046A2A175D133_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133");

	Params::AHBOnboardingFlow_C_OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B301E90D33
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnCanceled_856A325D44ECC73B857CE5B301E90D33()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnCanceled_856A325D44ECC73B857CE5B301E90D33");

	Params::AHBOnboardingFlow_C_OnCanceled_856A325D44ECC73B857CE5B301E90D33_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33");

	Params::AHBOnboardingFlow_C_OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_0A5ABC9C483947108FD9FB9980E7C62F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnFailure_0A5ABC9C483947108FD9FB9980E7C62F()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnFailure_0A5ABC9C483947108FD9FB9980E7C62F");

	Params::AHBOnboardingFlow_C_OnFailure_0A5ABC9C483947108FD9FB9980E7C62F_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F");

	Params::AHBOnboardingFlow_C_OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F");

	Params::AHBOnboardingFlow_C_OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_F17CF9054AFDDDAF314AC4911BC9818F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnFailure_F17CF9054AFDDDAF314AC4911BC9818F()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnFailure_F17CF9054AFDDDAF314AC4911BC9818F");

	Params::AHBOnboardingFlow_C_OnFailure_F17CF9054AFDDDAF314AC4911BC9818F_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F");

	Params::AHBOnboardingFlow_C_OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F");

	Params::AHBOnboardingFlow_C_OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0");

	Params::AHBOnboardingFlow_C_OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B35313D7CD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnCanceled_856A325D44ECC73B857CE5B35313D7CD()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnCanceled_856A325D44ECC73B857CE5B35313D7CD");

	Params::AHBOnboardingFlow_C_OnCanceled_856A325D44ECC73B857CE5B35313D7CD_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD");

	Params::AHBOnboardingFlow_C_OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251");

	Params::AHBOnboardingFlow_C_OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6");

	Params::AHBOnboardingFlow_C_OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_99CD286F4BDD72A81163058464B73990
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnStateEntered_99CD286F4BDD72A81163058464B73990()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnStateEntered_99CD286F4BDD72A81163058464B73990");

	Params::AHBOnboardingFlow_C_OnStateEntered_99CD286F4BDD72A81163058464B73990_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_74930F274B5470B17CF720953FE7E260
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnFailure_74930F274B5470B17CF720953FE7E260()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnFailure_74930F274B5470B17CF720953FE7E260");

	Params::AHBOnboardingFlow_C_OnFailure_74930F274B5470B17CF720953FE7E260_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_74930F274B5470B17CF720953FE7E260
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnSuccess_74930F274B5470B17CF720953FE7E260()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnSuccess_74930F274B5470B17CF720953FE7E260");

	Params::AHBOnboardingFlow_C_OnSuccess_74930F274B5470B17CF720953FE7E260_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0");

	Params::AHBOnboardingFlow_C_OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_7FBC276641DD576B7417ED97A4734318
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnStateEntered_7FBC276641DD576B7417ED97A4734318()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnStateEntered_7FBC276641DD576B7417ED97A4734318");

	Params::AHBOnboardingFlow_C_OnStateEntered_7FBC276641DD576B7417ED97A4734318_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2");

	Params::AHBOnboardingFlow_C_OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.DialogResult_1D81E4B94CE33A3425130BABD5A7283B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHBOnboardingFlow_C::DialogResult_1D81E4B94CE33A3425130BABD5A7283B(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "DialogResult_1D81E4B94CE33A3425130BABD5A7283B");

	Params::AHBOnboardingFlow_C_DialogResult_1D81E4B94CE33A3425130BABD5A7283B_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515");

	Params::AHBOnboardingFlow_C_OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_50CD26324B96B121A5B49DA66113AE5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnFailure_50CD26324B96B121A5B49DA66113AE5D()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnFailure_50CD26324B96B121A5B49DA66113AE5D");

	Params::AHBOnboardingFlow_C_OnFailure_50CD26324B96B121A5B49DA66113AE5D_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_50CD26324B96B121A5B49DA66113AE5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnIgnored_50CD26324B96B121A5B49DA66113AE5D()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnIgnored_50CD26324B96B121A5B49DA66113AE5D");

	Params::AHBOnboardingFlow_C_OnIgnored_50CD26324B96B121A5B49DA66113AE5D_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_50CD26324B96B121A5B49DA66113AE5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnSuccess_50CD26324B96B121A5B49DA66113AE5D()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnSuccess_50CD26324B96B121A5B49DA66113AE5D");

	Params::AHBOnboardingFlow_C_OnSuccess_50CD26324B96B121A5B49DA66113AE5D_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_7D1C261A4BE47E3567B8D2885C9E298B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnFailure_7D1C261A4BE47E3567B8D2885C9E298B()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnFailure_7D1C261A4BE47E3567B8D2885C9E298B");

	Params::AHBOnboardingFlow_C_OnFailure_7D1C261A4BE47E3567B8D2885C9E298B_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_7D1C261A4BE47E3567B8D2885C9E298B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::OnSuccess_7D1C261A4BE47E3567B8D2885C9E298B()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnSuccess_7D1C261A4BE47E3567B8D2885C9E298B");

	Params::AHBOnboardingFlow_C_OnSuccess_7D1C261A4BE47E3567B8D2885C9E298B_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.StartPlaySatelliteCine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::StartPlaySatelliteCine()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "StartPlaySatelliteCine");

	Params::AHBOnboardingFlow_C_StartPlaySatelliteCine_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.StartNameHomebase
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::StartNameHomebase()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "StartNameHomebase");

	Params::AHBOnboardingFlow_C_StartNameHomebase_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_HomebasePersonalized
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void AHBOnboardingFlow_C::HandleClientEvent_HomebasePersonalized(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleClientEvent_HomebasePersonalized");

	Params::AHBOnboardingFlow_C_HandleClientEvent_HomebasePersonalized_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.StartOnboardingZone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::StartOnboardingZone()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "StartOnboardingZone");

	Params::AHBOnboardingFlow_C_StartOnboardingZone_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.StartFlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::StartFlow()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "StartFlow");

	Params::AHBOnboardingFlow_C_StartFlow_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.RejoinCheckCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERejoinStatus           RejoinStatus                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHBOnboardingFlow_C::RejoinCheckCompleted(enum class ERejoinStatus RejoinStatus)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "RejoinCheckCompleted");

	Params::AHBOnboardingFlow_C_RejoinCheckCompleted_Params Parms;
	Parms.RejoinStatus = RejoinStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleCheckExistingSession
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandleCheckExistingSession()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleCheckExistingSession");

	Params::AHBOnboardingFlow_C_HandleCheckExistingSession_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleCheckOnboardingZoneComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandleCheckOnboardingZoneComplete()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleCheckOnboardingZoneComplete");

	Params::AHBOnboardingFlow_C_HandleCheckOnboardingZoneComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleSwitchToHomeBase
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandleSwitchToHomeBase()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleSwitchToHomeBase");

	Params::AHBOnboardingFlow_C_HandleSwitchToHomeBase_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandlePlaySatelliteCine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandlePlaySatelliteCine()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandlePlaySatelliteCine");

	Params::AHBOnboardingFlow_C_HandlePlaySatelliteCine_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleNameHomebase
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandleNameHomebase()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleNameHomebase");

	Params::AHBOnboardingFlow_C_HandleNameHomebase_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Failed Retry
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::Handle_Client_Quest_Login_Failed_Retry()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "Handle Client Quest Login Failed Retry");

	Params::AHBOnboardingFlow_C_Handle_Client_Quest_Login_Failed_Retry_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Retries Exhausted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::Handle_Client_Quest_Login_Retries_Exhausted()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "Handle Client Quest Login Retries Exhausted");

	Params::AHBOnboardingFlow_C_Handle_Client_Quest_Login_Retries_Exhausted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_SubGameSelected
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void AHBOnboardingFlow_C::HandleClientEvent_SubGameSelected(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleClientEvent_SubGameSelected");

	Params::AHBOnboardingFlow_C_HandleClientEvent_SubGameSelected_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleSubGameSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandleSubGameSelection()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleSubGameSelection");

	Params::AHBOnboardingFlow_C_HandleSubGameSelection_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_OnRejoinGameAbandoned
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void AHBOnboardingFlow_C::HandleClientEvent_OnRejoinGameAbandoned(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleClientEvent_OnRejoinGameAbandoned");

	Params::AHBOnboardingFlow_C_HandleClientEvent_OnRejoinGameAbandoned_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleCompanionAppOnboardingAbort
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandleCompanionAppOnboardingAbort()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleCompanionAppOnboardingAbort");

	Params::AHBOnboardingFlow_C_HandleCompanionAppOnboardingAbort_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleNoEntitlement
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandleNoEntitlement()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleNoEntitlement");

	Params::AHBOnboardingFlow_C_HandleNoEntitlement_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleForcedLogout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Reason_Title                                                     (Parm)
// class FText                        Reason                                                           (Parm)

void AHBOnboardingFlow_C::HandleForcedLogout(class FText Reason_Title, class FText Reason)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleForcedLogout");

	Params::AHBOnboardingFlow_C_HandleForcedLogout_Params Parms;
	Parms.Reason_Title = Reason_Title;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandlePlayEventCine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandlePlayEventCine()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandlePlayEventCine");

	Params::AHBOnboardingFlow_C_HandlePlayEventCine_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleMobileManagementRestricted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHBOnboardingFlow_C::HandleMobileManagementRestricted()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleMobileManagementRestricted");

	Params::AHBOnboardingFlow_C_HandleMobileManagementRestricted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_PlayEventMovie
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void AHBOnboardingFlow_C::HandleClientEvent_PlayEventMovie(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleClientEvent_PlayEventMovie");

	Params::AHBOnboardingFlow_C_HandleClientEvent_PlayEventMovie_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.ExecuteUbergraph_HBOnboardingFlow
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateVariableCache_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AutoSelectSubGame_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileApp_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileApp_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileApp_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate11                           (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CanPlay_DenialReason                                    ()
// bool                               CallFunc_CanPlay_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate13                           (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue16                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue17                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue18                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsJoinableGameAvailable_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue19                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NeedToCheckRejoinStatus_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate14                           (ZeroConstructor, NoDestructor)
// class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue2                              (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate15                           (ZeroConstructor, NoDestructor)
// class AFortClientAnnouncement*     CallFunc_FinishSpawningActor_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate16                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class UFortAsyncAction_SendQuestStatEvent*CallFunc_SendClientStatEvent_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate17                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent4                            (ConstParm, NoDestructor)
// class UFortAsyncAction_SendQuestStatEvent*CallFunc_SendClientStatEvent_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue3                              (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement*     CallFunc_FinishSpawningActor_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate18                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue20                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIState            CallFunc__BPGetCurrentUIState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue21                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortHomeBaseInfo           CallFunc_GetHomeBaseInfo_Result                                  ()
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedOnboardingObjective_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedOnboardingObjective_ReturnValue2            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedOnboardingObjective_ReturnValue3            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate19                           (ZeroConstructor, NoDestructor)
// enum class ERejoinStatus           K2Node_CustomEvent_RejoinStatus                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_EnsureClientQuestLogin*CallFunc_SendEnsureClientQuestLogin_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate20                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate21                           (ZeroConstructor, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIState            CallFunc__BPGetCurrentUIState_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate22                           (ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent3                            (ConstParm, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate23                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateVariableCache_Success2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent2                            (ConstParm, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate24                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasCompletedOnboardingObjective_ReturnValue4            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate25                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_Reason_Title                                  ()
// class FText                        K2Node_CustomEvent_Reason                                        ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            ()
// bool                               CallFunc_IsValid_ReturnValue17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue3                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue4                            ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate26                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_NeedsToPlayEventMovie_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_SendQuestStatEvent*CallFunc_SendClientStatEvent_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate27                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain2        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue5                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue6                            ()
// bool                               CallFunc_CanAccessManagementFeatures_Can_Manage                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate28                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent                             (ConstParm, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_LoadCampaignProfiles*CallFunc_LoadCampaignProfiles_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate29                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHBOnboardingFlow_C::ExecuteUbergraph_HBOnboardingFlow(int32 EntryPoint, bool CallFunc_UpdateVariableCache_Success, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_AutoSelectSubGame_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, bool CallFunc_IsValid_ReturnValue2, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsValid_ReturnValue3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue5, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue6, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue7, enum class ESubGame CallFunc_GetSubGame_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue8, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue9, bool CallFunc_IsMobileApp_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue11, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue13, bool CallFunc_IsMobileApp_ReturnValue3, enum class ESubGame CallFunc_GetSubGame_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue14, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue15, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue, bool CallFunc_IsValid_ReturnValue6, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue16, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue17, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue18, bool CallFunc_IsJoinableGameAvailable_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue19, bool CallFunc_NeedToCheckRejoinStatus_ReturnValue, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue5, bool CallFunc_IsValid_ReturnValue7, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue6, bool CallFunc_IsValid_ReturnValue8, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, class AFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue2, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue7, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue2, bool CallFunc_IsValid_ReturnValue9, bool CallFunc_IsValid_ReturnValue10, bool CallFunc_ClassIsChildOf_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, bool CallFunc_Not_PreBool_ReturnValue, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array2, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate17, bool CallFunc_IsValid_ReturnValue11, class UObject* K2Node_HandleClientEvent_EventSource4, class UObject* K2Node_HandleClientEvent_EventFocus4, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent4, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue2, bool CallFunc_IsValid_ReturnValue12, const struct FTransform& CallFunc_MakeTransform_ReturnValue3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3, class AFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue3, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate18, bool CallFunc_IsValid_ReturnValue13, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue20, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, class UFortMcpContext* CallFunc_GetContext_ReturnValue21, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfo_Result, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue3, bool Temp_bool_IsClosed_Variable, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue8, bool CallFunc_IsValid_ReturnValue14, bool CallFunc_IsValid_ReturnValue15, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue4, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue5, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate19, enum class ERejoinStatus K2Node_CustomEvent_RejoinStatus, class UFortAsyncAction_EnsureClientQuestLogin* CallFunc_SendEnsureClientQuestLogin_ReturnValue, bool CallFunc_IsValid_ReturnValue16, bool CallFunc_HasCompletedQuest_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate20, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate21, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_Not_PreBool_ReturnValue6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate22, class UObject* K2Node_HandleClientEvent_EventSource3, class UObject* K2Node_HandleClientEvent_EventFocus3, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate23, bool CallFunc_ClassIsChildOf_ReturnValue2, bool CallFunc_UpdateVariableCache_Success2, class UObject* K2Node_HandleClientEvent_EventSource2, class UObject* K2Node_HandleClientEvent_EventFocus2, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate24, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue4, bool CallFunc_Not_PreBool_ReturnValue7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate25, bool CallFunc_BooleanAND_ReturnValue, class FText K2Node_CustomEvent_Reason_Title, class FText K2Node_CustomEvent_Reason, class FText CallFunc_MakeLiteralText_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, bool CallFunc_IsValid_ReturnValue17, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText CallFunc_MakeLiteralText_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate26, bool CallFunc_NeedsToPlayEventMovie_ReturnValue, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue3, bool CallFunc_IsValid_ReturnValue18, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate27, bool CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain, bool CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain2, class FText CallFunc_MakeLiteralText_ReturnValue5, class FText CallFunc_MakeLiteralText_ReturnValue6, bool CallFunc_CanAccessManagementFeatures_Can_Manage, bool CallFunc_Not_PreBool_ReturnValue8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate28, bool CallFunc_BooleanAND_ReturnValue2, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortAsyncAction_LoadCampaignProfiles* CallFunc_LoadCampaignProfiles_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate29, bool CallFunc_IsValid_ReturnValue19)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "ExecuteUbergraph_HBOnboardingFlow");

	Params::AHBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_UpdateVariableCache_Success = CallFunc_UpdateVariableCache_Success;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_SetUIState_ReturnValue = CallFunc_SetUIState_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_AutoSelectSubGame_ReturnValue = CallFunc_AutoSelectSubGame_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_SetUIState_ReturnValue2 = CallFunc_SetUIState_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_SetUIState_ReturnValue3 = CallFunc_SetUIState_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.CallFunc_GetSubGame_ReturnValue2 = CallFunc_GetSubGame_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue8 = CallFunc_GetContext_ReturnValue8;
	Parms.CallFunc_GetContext_ReturnValue9 = CallFunc_GetContext_ReturnValue9;
	Parms.CallFunc_IsMobileApp_ReturnValue = CallFunc_IsMobileApp_ReturnValue;
	Parms.CallFunc_IsMobileApp_ReturnValue2 = CallFunc_IsMobileApp_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue10 = CallFunc_GetContext_ReturnValue10;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_SetUIState_ReturnValue4 = CallFunc_SetUIState_ReturnValue4;
	Parms.CallFunc_GetContext_ReturnValue11 = CallFunc_GetContext_ReturnValue11;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_GetContext_ReturnValue13 = CallFunc_GetContext_ReturnValue13;
	Parms.CallFunc_IsMobileApp_ReturnValue3 = CallFunc_IsMobileApp_ReturnValue3;
	Parms.CallFunc_GetSubGame_ReturnValue3 = CallFunc_GetSubGame_ReturnValue3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.K2Node_CreateDelegate_OutputDelegate11 = K2Node_CreateDelegate_OutputDelegate11;
	Parms.CallFunc_GetContext_ReturnValue14 = CallFunc_GetContext_ReturnValue14;
	Parms.CallFunc_CanPlay_DenialReason = CallFunc_CanPlay_DenialReason;
	Parms.CallFunc_CanPlay_ReturnValue = CallFunc_CanPlay_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate13 = K2Node_CreateDelegate_OutputDelegate13;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue15 = CallFunc_GetContext_ReturnValue15;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue = CallFunc_WaitForClientAnnouncement_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_GetContext_ReturnValue16 = CallFunc_GetContext_ReturnValue16;
	Parms.CallFunc_GetContext_ReturnValue17 = CallFunc_GetContext_ReturnValue17;
	Parms.CallFunc_GetContext_ReturnValue18 = CallFunc_GetContext_ReturnValue18;
	Parms.CallFunc_IsJoinableGameAvailable_ReturnValue = CallFunc_IsJoinableGameAvailable_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue19 = CallFunc_GetContext_ReturnValue19;
	Parms.CallFunc_NeedToCheckRejoinStatus_ReturnValue = CallFunc_NeedToCheckRejoinStatus_ReturnValue;
	Parms.CallFunc_SetUIState_ReturnValue5 = CallFunc_SetUIState_ReturnValue5;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate14 = K2Node_CreateDelegate_OutputDelegate14;
	Parms.CallFunc_SetUIState_ReturnValue6 = CallFunc_SetUIState_ReturnValue6;
	Parms.CallFunc_IsValid_ReturnValue8 = CallFunc_IsValid_ReturnValue8;
	Parms.CallFunc_MakeTransform_ReturnValue2 = CallFunc_MakeTransform_ReturnValue2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate15 = K2Node_CreateDelegate_OutputDelegate15;
	Parms.CallFunc_FinishSpawningActor_ReturnValue2 = CallFunc_FinishSpawningActor_ReturnValue2;
	Parms.CallFunc_SetUIState_ReturnValue7 = CallFunc_SetUIState_ReturnValue7;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue2 = CallFunc_WaitForClientAnnouncement_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue9 = CallFunc_IsValid_ReturnValue9;
	Parms.CallFunc_IsValid_ReturnValue10 = CallFunc_IsValid_ReturnValue10;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate16 = K2Node_CreateDelegate_OutputDelegate16;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_SendClientStatEvent_ReturnValue = CallFunc_SendClientStatEvent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate17 = K2Node_CreateDelegate_OutputDelegate17;
	Parms.CallFunc_IsValid_ReturnValue11 = CallFunc_IsValid_ReturnValue11;
	Parms.K2Node_HandleClientEvent_EventSource4 = K2Node_HandleClientEvent_EventSource4;
	Parms.K2Node_HandleClientEvent_EventFocus4 = K2Node_HandleClientEvent_EventFocus4;
	Parms.K2Node_HandleClientEvent_ClientEvent4 = K2Node_HandleClientEvent_ClientEvent4;
	Parms.CallFunc_SendClientStatEvent_ReturnValue2 = CallFunc_SendClientStatEvent_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue12 = CallFunc_IsValid_ReturnValue12;
	Parms.CallFunc_MakeTransform_ReturnValue3 = CallFunc_MakeTransform_ReturnValue3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3;
	Parms.CallFunc_FinishSpawningActor_ReturnValue3 = CallFunc_FinishSpawningActor_ReturnValue3;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue3 = CallFunc_WaitForClientAnnouncement_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate18 = K2Node_CreateDelegate_OutputDelegate18;
	Parms.CallFunc_IsValid_ReturnValue13 = CallFunc_IsValid_ReturnValue13;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue20 = CallFunc_GetContext_ReturnValue20;
	Parms.CallFunc__BPGetCurrentUIState_ReturnValue = CallFunc__BPGetCurrentUIState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue21 = CallFunc_GetContext_ReturnValue21;
	Parms.CallFunc_GetHomeBaseInfo_Result = CallFunc_GetHomeBaseInfo_Result;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_HasCompletedOnboardingObjective_ReturnValue = CallFunc_HasCompletedOnboardingObjective_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue3 = CallFunc_Not_PreBool_ReturnValue3;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_SetUIState_ReturnValue8 = CallFunc_SetUIState_ReturnValue8;
	Parms.CallFunc_IsValid_ReturnValue14 = CallFunc_IsValid_ReturnValue14;
	Parms.CallFunc_IsValid_ReturnValue15 = CallFunc_IsValid_ReturnValue15;
	Parms.CallFunc_HasCompletedOnboardingObjective_ReturnValue2 = CallFunc_HasCompletedOnboardingObjective_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue4 = CallFunc_Not_PreBool_ReturnValue4;
	Parms.CallFunc_HasCompletedOnboardingObjective_ReturnValue3 = CallFunc_HasCompletedOnboardingObjective_ReturnValue3;
	Parms.CallFunc_Not_PreBool_ReturnValue5 = CallFunc_Not_PreBool_ReturnValue5;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.K2Node_CreateDelegate_OutputDelegate19 = K2Node_CreateDelegate_OutputDelegate19;
	Parms.K2Node_CustomEvent_RejoinStatus = K2Node_CustomEvent_RejoinStatus;
	Parms.CallFunc_SendEnsureClientQuestLogin_ReturnValue = CallFunc_SendEnsureClientQuestLogin_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue16 = CallFunc_IsValid_ReturnValue16;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate20 = K2Node_CreateDelegate_OutputDelegate20;
	Parms.K2Node_CreateDelegate_OutputDelegate21 = K2Node_CreateDelegate_OutputDelegate21;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue2 = CallFunc_GetUIManagerWidget_ReturnValue2;
	Parms.CallFunc__BPGetCurrentUIState_ReturnValue2 = CallFunc__BPGetCurrentUIState_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue4 = CallFunc_EqualEqual_ByteByte_ReturnValue4;
	Parms.CallFunc_Not_PreBool_ReturnValue6 = CallFunc_Not_PreBool_ReturnValue6;
	Parms.K2Node_CreateDelegate_OutputDelegate22 = K2Node_CreateDelegate_OutputDelegate22;
	Parms.K2Node_HandleClientEvent_EventSource3 = K2Node_HandleClientEvent_EventSource3;
	Parms.K2Node_HandleClientEvent_EventFocus3 = K2Node_HandleClientEvent_EventFocus3;
	Parms.K2Node_HandleClientEvent_ClientEvent3 = K2Node_HandleClientEvent_ClientEvent3;
	Parms.K2Node_CreateDelegate_OutputDelegate23 = K2Node_CreateDelegate_OutputDelegate23;
	Parms.CallFunc_ClassIsChildOf_ReturnValue2 = CallFunc_ClassIsChildOf_ReturnValue2;
	Parms.CallFunc_UpdateVariableCache_Success2 = CallFunc_UpdateVariableCache_Success2;
	Parms.K2Node_HandleClientEvent_EventSource2 = K2Node_HandleClientEvent_EventSource2;
	Parms.K2Node_HandleClientEvent_EventFocus2 = K2Node_HandleClientEvent_EventFocus2;
	Parms.K2Node_HandleClientEvent_ClientEvent2 = K2Node_HandleClientEvent_ClientEvent2;
	Parms.K2Node_CreateDelegate_OutputDelegate24 = K2Node_CreateDelegate_OutputDelegate24;
	Parms.CallFunc_HasCompletedOnboardingObjective_ReturnValue4 = CallFunc_HasCompletedOnboardingObjective_ReturnValue4;
	Parms.CallFunc_Not_PreBool_ReturnValue7 = CallFunc_Not_PreBool_ReturnValue7;
	Parms.K2Node_CreateDelegate_OutputDelegate25 = K2Node_CreateDelegate_OutputDelegate25;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_Reason_Title = K2Node_CustomEvent_Reason_Title;
	Parms.K2Node_CustomEvent_Reason = K2Node_CustomEvent_Reason;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue17 = CallFunc_IsValid_ReturnValue17;
	Parms.CallFunc_MakeLiteralText_ReturnValue3 = CallFunc_MakeLiteralText_ReturnValue3;
	Parms.CallFunc_MakeLiteralText_ReturnValue4 = CallFunc_MakeLiteralText_ReturnValue4;
	Parms.K2Node_CreateDelegate_OutputDelegate26 = K2Node_CreateDelegate_OutputDelegate26;
	Parms.CallFunc_NeedsToPlayEventMovie_ReturnValue = CallFunc_NeedsToPlayEventMovie_ReturnValue;
	Parms.CallFunc_SendClientStatEvent_ReturnValue3 = CallFunc_SendClientStatEvent_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue18 = CallFunc_IsValid_ReturnValue18;
	Parms.K2Node_CreateDelegate_OutputDelegate27 = K2Node_CreateDelegate_OutputDelegate27;
	Parms.CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain = CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain;
	Parms.CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain2 = CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain2;
	Parms.CallFunc_MakeLiteralText_ReturnValue5 = CallFunc_MakeLiteralText_ReturnValue5;
	Parms.CallFunc_MakeLiteralText_ReturnValue6 = CallFunc_MakeLiteralText_ReturnValue6;
	Parms.CallFunc_CanAccessManagementFeatures_Can_Manage = CallFunc_CanAccessManagementFeatures_Can_Manage;
	Parms.CallFunc_Not_PreBool_ReturnValue8 = CallFunc_Not_PreBool_ReturnValue8;
	Parms.K2Node_CreateDelegate_OutputDelegate28 = K2Node_CreateDelegate_OutputDelegate28;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.K2Node_HandleClientEvent_EventSource = K2Node_HandleClientEvent_EventSource;
	Parms.K2Node_HandleClientEvent_EventFocus = K2Node_HandleClientEvent_EventFocus;
	Parms.K2Node_HandleClientEvent_ClientEvent = K2Node_HandleClientEvent_ClientEvent;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LoadCampaignProfiles_ReturnValue = CallFunc_LoadCampaignProfiles_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate29 = K2Node_CreateDelegate_OutputDelegate29;
	Parms.CallFunc_IsValid_ReturnValue19 = CallFunc_IsValid_ReturnValue19;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
