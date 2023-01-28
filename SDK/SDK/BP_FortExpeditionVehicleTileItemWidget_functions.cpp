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


// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SquadId                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHomebaseSquad              CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad                ()
// bool                               CallFunc_TryGetHomebaseSquadData_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionVehicleTileItemWidget_C::Set_Name(class FName SquadId, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, const struct FHomebaseSquad& CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad, bool CallFunc_TryGetHomebaseSquadData_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionVehicleTileItemWidget_C", "Set Name");

	Params::UBP_FortExpeditionVehicleTileItemWidget_C_Set_Name_Params Parms;
	Parms.SquadId = SquadId;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad = CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad;
	Parms.CallFunc_TryGetHomebaseSquadData_ReturnValue = CallFunc_TryGetHomebaseSquadData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Rating
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SquadId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetExpeditionSquadPower_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionVehicleTileItemWidget_C::Set_Rating(class FName& SquadId, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetExpeditionSquadPower_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionVehicleTileItemWidget_C", "Set Rating");

	Params::UBP_FortExpeditionVehicleTileItemWidget_C_Set_Rating_Params Parms;
	Parms.SquadId = SquadId;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetExpeditionSquadPower_ReturnValue = CallFunc_GetExpeditionSquadPower_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Icon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SquadId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHomebaseUIContext*      CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortMultiSizeBrush         CallFunc_GetSquadIcon_ReturnValue                                ()

void UBP_FortExpeditionVehicleTileItemWidget_C::Set_Icon(class FName& SquadId, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, const struct FFortMultiSizeBrush& CallFunc_GetSquadIcon_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionVehicleTileItemWidget_C", "Set Icon");

	Params::UBP_FortExpeditionVehicleTileItemWidget_C_Set_Icon_Params Parms;
	Parms.SquadId = SquadId;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSquadIcon_ReturnValue = CallFunc_GetSquadIcon_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InData                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionVehicleTileItemWidget_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionVehicleTileItemWidget_C", "SetData");

	Params::UBP_FortExpeditionVehicleTileItemWidget_C_SetData_Params Parms;
	Parms.InData = InData;
	Parms.OwningList = OwningList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionVehicleTileItemWidget_C::OnClicked()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionVehicleTileItemWidget_C", "OnClicked");

	Params::UBP_FortExpeditionVehicleTileItemWidget_C_OnClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_InData                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             K2Node_Event_OwningList                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVehicleObject_C*            K2Node_DynamicCast_AsVehicle_Object                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionVehicleTileItemWidget_C::ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget(int32 EntryPoint, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, class UVehicleObject_C* K2Node_DynamicCast_AsVehicle_Object, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionVehicleTileItemWidget_C", "ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget");

	Params::UBP_FortExpeditionVehicleTileItemWidget_C_ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InData = K2Node_Event_InData;
	Parms.K2Node_Event_OwningList = K2Node_Event_OwningList;
	Parms.K2Node_DynamicCast_AsVehicle_Object = K2Node_DynamicCast_AsVehicle_Object;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.OnVehicleSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SquadId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionVehicleTileItemWidget_C::OnVehicleSelected__DelegateSignature(class FName SquadId)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionVehicleTileItemWidget_C", "OnVehicleSelected__DelegateSignature");

	Params::UBP_FortExpeditionVehicleTileItemWidget_C_OnVehicleSelected__DelegateSignature_Params Parms;
	Parms.SquadId = SquadId;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
