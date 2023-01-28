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


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.Get Mcp Relative Utc Now
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime                   UtcNow                                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_GetMcpRelativeUtcNow_ReturnValue                        (NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionExpiresWidget_C::Get_Mcp_Relative_Utc_Now(struct FDateTime* UtcNow, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FDateTime& CallFunc_GetMcpRelativeUtcNow_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionExpiresWidget_C", "Get Mcp Relative Utc Now");

	Params::UBP_FortExpeditionExpiresWidget_C_Get_Mcp_Relative_Utc_Now_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMcpRelativeUtcNow_ReturnValue = CallFunc_GetMcpRelativeUtcNow_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UtcNow != nullptr)
		*UtcNow = Parms.UtcNow;

}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.Refresh Expiration Timer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow                         (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_GetRemainingExpeditionExpirationDuration_ReturnValue    (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTimespanAsText_ReturnValue                           ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UBP_FortExpeditionExpiresWidget_C::Refresh_Expiration_Timer(class UFortExpeditionItem* Item, const struct FDateTime& CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow, const struct FTimespan& CallFunc_GetRemainingExpeditionExpirationDuration_ReturnValue, class FText CallFunc_GetTimespanAsText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionExpiresWidget_C", "Refresh Expiration Timer");

	Params::UBP_FortExpeditionExpiresWidget_C_Refresh_Expiration_Timer_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow = CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow;
	Parms.CallFunc_GetRemainingExpeditionExpirationDuration_ReturnValue = CallFunc_GetRemainingExpeditionExpirationDuration_ReturnValue;
	Parms.CallFunc_GetTimespanAsText_ReturnValue = CallFunc_GetTimespanAsText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         InItem                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionExpiresWidget_C::SetData(class UFortExpeditionItem* InItem)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionExpiresWidget_C", "SetData");

	Params::UBP_FortExpeditionExpiresWidget_C_SetData_Params Parms;
	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.OnExpeditionExpirationUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionExpiresWidget_C::OnExpeditionExpirationUpdated()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionExpiresWidget_C", "OnExpeditionExpirationUpdated");

	Params::UBP_FortExpeditionExpiresWidget_C_OnExpeditionExpirationUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionExpiresWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionExpiresWidget_C", "PreConstruct");

	Params::UBP_FortExpeditionExpiresWidget_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.ExecuteUbergraph_BP_FortExpeditionExpiresWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItem*         K2Node_Event_InItem                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionExpiresWidget_C::ExecuteUbergraph_BP_FortExpeditionExpiresWidget(int32 EntryPoint, class UFortExpeditionItem* K2Node_Event_InItem, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionExpiresWidget_C", "ExecuteUbergraph_BP_FortExpeditionExpiresWidget");

	Params::UBP_FortExpeditionExpiresWidget_C_ExecuteUbergraph_BP_FortExpeditionExpiresWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InItem = K2Node_Event_InItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
