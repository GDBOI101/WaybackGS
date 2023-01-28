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


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.UpdateWidgetData
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement*     Announcement                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_ZoneModifiers_C::UpdateWidgetData(class AFortClientAnnouncement* Announcement)
{
	static auto Func = Class->GetFunction("Announcement_ZoneModifiers_C", "UpdateWidgetData");

	Params::UAnnouncement_ZoneModifiers_C_UpdateWidgetData_Params Parms;
	Parms.Announcement = Announcement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnDisplayTimerFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAnnouncement_ZoneModifiers_C::OnDisplayTimerFinished()
{
	static auto Func = Class->GetFunction("Announcement_ZoneModifiers_C", "OnDisplayTimerFinished");

	Params::UAnnouncement_ZoneModifiers_C_OnDisplayTimerFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnConversationDelayFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAnnouncement_ZoneModifiers_C::OnConversationDelayFinished()
{
	static auto Func = Class->GetFunction("Announcement_ZoneModifiers_C", "OnConversationDelayFinished");

	Params::UAnnouncement_ZoneModifiers_C_OnConversationDelayFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.WidgetCachingHack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAnnouncement_ZoneModifiers_C::WidgetCachingHack()
{
	static auto Func = Class->GetFunction("Announcement_ZoneModifiers_C", "WidgetCachingHack");

	Params::UAnnouncement_ZoneModifiers_C_WidgetCachingHack_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.ExecuteUbergraph_Announcement_ZoneModifiers
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue2                        (NoDestructor)
// class AFortClientAnnouncement*     K2Node_Event_Announcement                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_ZoneModifiers*K2Node_DynamicCast_AsFort_Client_Announcement_Zone_Modifiers     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation        (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue3                        (NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_ZoneModifiers_C::ExecuteUbergraph_Announcement_ZoneModifiers(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue2, class AFortClientAnnouncement* K2Node_Event_Announcement, class AFortClientAnnouncement_ZoneModifiers* K2Node_DynamicCast_AsFort_Client_Announcement_Zone_Modifiers, bool K2Node_DynamicCast_bSuccess, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue3, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess2, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue)
{
	static auto Func = Class->GetFunction("Announcement_ZoneModifiers_C", "ExecuteUbergraph_Announcement_ZoneModifiers");

	Params::UAnnouncement_ZoneModifiers_C_ExecuteUbergraph_Announcement_ZoneModifiers_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue2 = CallFunc_K2_SetTimerDelegate_ReturnValue2;
	Parms.K2Node_Event_Announcement = K2Node_Event_Announcement;
	Parms.K2Node_DynamicCast_AsFort_Client_Announcement_Zone_Modifiers = K2Node_DynamicCast_AsFort_Client_Announcement_Zone_Modifiers;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation = K2Node_MakeStruct_FortClientAnnouncementData_Conversation;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue3 = CallFunc_K2_SetTimerDelegate_ReturnValue3;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
