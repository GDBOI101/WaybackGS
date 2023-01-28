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


// Function QuestUpdatesLog.QuestUpdatesLog_C.CanDisplayAnotherObjective
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTotalDisplayedObjectives_NumObjectives               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestUpdatesLog_C::CanDisplayAnotherObjective(bool* Result, int32 CallFunc_GetTotalDisplayedObjectives_NumObjectives, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestUpdatesLog_C", "CanDisplayAnotherObjective");

	Params::UQuestUpdatesLog_C_CanDisplayAnotherObjective_Params Parms;
	Parms.CallFunc_GetTotalDisplayedObjectives_NumObjectives = CallFunc_GetTotalDisplayedObjectives_NumObjectives;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function QuestUpdatesLog.QuestUpdatesLog_C.GetTotalDisplayedObjectives
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              NumObjectives                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Result                                                           (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuestUpdateEntry_C*         K2Node_DynamicCast_AsQuest_Update_Entry                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumDisplayedObjectives_NumObjectives                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestUpdatesLog_C::GetTotalDisplayedObjectives(int32* NumObjectives, int32 Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UQuestUpdateEntry_C* K2Node_DynamicCast_AsQuest_Update_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumDisplayedObjectives_NumObjectives, int32 CallFunc_Add_IntInt_ReturnValue2)
{
	static auto Func = Class->GetFunction("QuestUpdatesLog_C", "GetTotalDisplayedObjectives");

	Params::UQuestUpdatesLog_C_GetTotalDisplayedObjectives_Params Parms;
	Parms.Result = Result;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsQuest_Update_Entry = K2Node_DynamicCast_AsQuest_Update_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetNumDisplayedObjectives_NumObjectives = CallFunc_GetNumDisplayedObjectives_NumObjectives;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (NumObjectives != nullptr)
		*NumObjectives = Parms.NumObjectives;

}


// Function QuestUpdatesLog.QuestUpdatesLog_C.CreateAnnouncementUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDynamicQuestUpdateInfo     UpdateInfo                                                       (Parm, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class AAnnounce_QuestUpdate_C*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestUpdatesLog_C::CreateAnnouncementUpdate(const struct FDynamicQuestUpdateInfo& UpdateInfo, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, class AAnnounce_QuestUpdate_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestUpdatesLog_C", "CreateAnnouncementUpdate");

	Params::UQuestUpdatesLog_C_CreateAnnouncementUpdate_Params Parms;
	Parms.UpdateInfo = UpdateInfo;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestUpdatesLog.QuestUpdatesLog_C.HandleQuestUpdateWidgetFinished
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestUpdateEntry_C*         UpdateWidget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void UQuestUpdatesLog_C::HandleQuestUpdateWidgetFinished(class UQuestUpdateEntry_C* UpdateWidget, bool CallFunc_RemoveChild_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestUpdatesLog_C", "HandleQuestUpdateWidgetFinished");

	Params::UQuestUpdatesLog_C_HandleQuestUpdateWidgetFinished_Params Parms;
	Parms.UpdateWidget = UpdateWidget;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestUpdatesLog.QuestUpdatesLog_C.GetAvailableQuestUpdateWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDynamicQuestUpdateInfo     UpdateInfo                                                       (Parm, HasGetValueTypeHash)
// class UQuestUpdateEntry_C*         AvailableWIdget                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestUpdateEntry_C*         FoundWidget                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestUpdateEntry_C*         K2Node_DynamicCast_AsQuest_Update_Entry                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanAddUpdate_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestUpdatesLog_C::GetAvailableQuestUpdateWidget(const struct FDynamicQuestUpdateInfo& UpdateInfo, class UQuestUpdateEntry_C** AvailableWIdget, class UQuestUpdateEntry_C* FoundWidget, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UQuestUpdateEntry_C* K2Node_DynamicCast_AsQuest_Update_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanAddUpdate_Result)
{
	static auto Func = Class->GetFunction("QuestUpdatesLog_C", "GetAvailableQuestUpdateWidget");

	Params::UQuestUpdatesLog_C_GetAvailableQuestUpdateWidget_Params Parms;
	Parms.UpdateInfo = UpdateInfo;
	Parms.FoundWidget = FoundWidget;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsQuest_Update_Entry = K2Node_DynamicCast_AsQuest_Update_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_CanAddUpdate_Result = CallFunc_CanAddUpdate_Result;

	UObject::ProcessEvent(Func, &Parms);

	if (AvailableWIdget != nullptr)
		*AvailableWIdget = Parms.AvailableWIdget;

}


// Function QuestUpdatesLog.QuestUpdatesLog_C.TryDisplayDynamicQuestStatusUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDynamicQuestUpdateInfo>UpdatesToRemove                                                  (Edit, ZeroConstructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanDisplayAnotherObjective_Result                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDynamicQuestUpdateInfo     CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDynamicQuestUpdateInfo     CallFunc_Array_Get_Item2                                         (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuestUpdateEntry_C*         CallFunc_GetAvailableQuestUpdateWidget_AvailableWIdget           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnReceiveQuestUpdate_Success                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestUpdatesLog_C::TryDisplayDynamicQuestStatusUpdate(const TArray<struct FDynamicQuestUpdateInfo>& UpdatesToRemove, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_CanDisplayAnotherObjective_Result, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable2, bool CallFunc_Less_IntInt_ReturnValue, const struct FDynamicQuestUpdateInfo& CallFunc_Array_Get_Item, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FDynamicQuestUpdateInfo& CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue2, class UQuestUpdateEntry_C* CallFunc_GetAvailableQuestUpdateWidget_AvailableWIdget, bool CallFunc_BooleanAND_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_HasChild_ReturnValue, bool CallFunc_OnReceiveQuestUpdate_Success, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestUpdatesLog_C", "TryDisplayDynamicQuestStatusUpdate");

	Params::UQuestUpdatesLog_C_TryDisplayDynamicQuestStatusUpdate_Params Parms;
	Parms.UpdatesToRemove = UpdatesToRemove;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_CanDisplayAnotherObjective_Result = CallFunc_CanDisplayAnotherObjective_Result;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_GetAvailableQuestUpdateWidget_AvailableWIdget = CallFunc_GetAvailableQuestUpdateWidget_AvailableWIdget;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_HasChild_ReturnValue = CallFunc_HasChild_ReturnValue;
	Parms.CallFunc_OnReceiveQuestUpdate_Success = CallFunc_OnReceiveQuestUpdate_Success;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestUpdatesLog.QuestUpdatesLog_C.CreateQuestUpdateWIdgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestUpdateEntry_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestUpdatesLog_C::CreateQuestUpdateWIdgets(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Variable, class UQuestUpdateEntry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestUpdatesLog_C", "CreateQuestUpdateWIdgets");

	Params::UQuestUpdatesLog_C_CreateQuestUpdateWIdgets_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestUpdatesLog.QuestUpdatesLog_C.HandleDisplayDynamicQuestUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo*     QuestObjective                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bDisplayStatusUpdate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bDisplayAnnouncementUpdate                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetOwningQuest_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDynamicQuestUpdateInfo     K2Node_MakeStruct_DynamicQuestUpdateInfo                         (HasGetValueTypeHash)
// struct FDynamicQuestUpdateInfo     K2Node_MakeStruct_DynamicQuestUpdateInfo2                        (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestUpdatesLog_C::HandleDisplayDynamicQuestUpdate(class UFortQuestObjectiveInfo* QuestObjective, bool bDisplayStatusUpdate, bool bDisplayAnnouncementUpdate, class UFortQuestItem* CallFunc_GetOwningQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FDynamicQuestUpdateInfo& K2Node_MakeStruct_DynamicQuestUpdateInfo, const struct FDynamicQuestUpdateInfo& K2Node_MakeStruct_DynamicQuestUpdateInfo2, bool CallFunc_IsValid_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestUpdatesLog_C", "HandleDisplayDynamicQuestUpdate");

	Params::UQuestUpdatesLog_C_HandleDisplayDynamicQuestUpdate_Params Parms;
	Parms.QuestObjective = QuestObjective;
	Parms.bDisplayStatusUpdate = bDisplayStatusUpdate;
	Parms.bDisplayAnnouncementUpdate = bDisplayAnnouncementUpdate;
	Parms.CallFunc_GetOwningQuest_ReturnValue = CallFunc_GetOwningQuest_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_DynamicQuestUpdateInfo = K2Node_MakeStruct_DynamicQuestUpdateInfo;
	Parms.K2Node_MakeStruct_DynamicQuestUpdateInfo2 = K2Node_MakeStruct_DynamicQuestUpdateInfo2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestUpdatesLog.QuestUpdatesLog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuestUpdatesLog_C::Construct()
{
	static auto Func = Class->GetFunction("QuestUpdatesLog_C", "Construct");

	Params::UQuestUpdatesLog_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestUpdatesLog.QuestUpdatesLog_C.ExecuteUbergraph_QuestUpdatesLog
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestUpdatesLog_C::ExecuteUbergraph_QuestUpdatesLog(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestUpdatesLog_C", "ExecuteUbergraph_QuestUpdatesLog");

	Params::UQuestUpdatesLog_C_ExecuteUbergraph_QuestUpdatesLog_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
