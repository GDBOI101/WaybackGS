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


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.GetHeightEstimate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetHeightEstimate_Height                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UMissionTrackerSubEntry_C::GetHeightEstimate(class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetHeightEstimate_Height, bool CallFunc_IsValid_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionTrackerSubEntry_C", "GetHeightEstimate");

	Params::UMissionTrackerSubEntry_C_GetHeightEstimate_Params Parms;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface = K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHeightEstimate_Height = CallFunc_GetHeightEstimate_Height;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.CreateCompletionAnnouncement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_BasicK2Node_MakeStruct_FortClientAnnouncementData_Basic               ()
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class AFortClientAnnouncement_Basic*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionTrackerSubEntry_C::CreateCompletionAnnouncement(bool CallFunc_IsVisible_ReturnValue, const struct FFortClientAnnouncementData_Basic& K2Node_MakeStruct_FortClientAnnouncementData_Basic, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, class AFortClientAnnouncement_Basic* CallFunc_FinishSpawningActor_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionTrackerSubEntry_C", "CreateCompletionAnnouncement");

	Params::UMissionTrackerSubEntry_C_CreateCompletionAnnouncement_Params Parms;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Basic = K2Node_MakeStruct_FortClientAnnouncementData_Basic;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleMissionUIEvent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMissionState*           MissionElement                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       EventTags                                                        (Parm, OutParm, ReferenceParm)
// class AFortObjectiveBase*          K2Node_DynamicCast_AsFort_Objective_Base                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue           ()
// bool                               CallFunc_HasAllTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionTrackerSubEntry_C::HandleMissionUIEvent(class AFortMissionState* MissionElement, struct FGameplayTagContainer& EventTags, class AFortObjectiveBase* K2Node_DynamicCast_AsFort_Objective_Base, bool K2Node_DynamicCast_bSuccess, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, bool CallFunc_HasAllTags_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionTrackerSubEntry_C", "HandleMissionUIEvent");

	Params::UMissionTrackerSubEntry_C_HandleMissionUIEvent_Params Parms;
	Parms.MissionElement = MissionElement;
	Parms.EventTags = EventTags;
	Parms.K2Node_DynamicCast_AsFort_Objective_Base = K2Node_DynamicCast_AsFort_Objective_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	Parms.CallFunc_HasAllTags_ReturnValue = CallFunc_HasAllTags_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.DrawAttention
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionTrackerSubEntry_C::DrawAttention()
{
	static auto Func = Class->GetFunction("MissionTrackerSubEntry_C", "DrawAttention");

	Params::UMissionTrackerSubEntry_C_DrawAttention_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UInterfaceProperty_                K2Node_DynamicCast_AsMission_Objective_Widget_Provider_Interface (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetObjectiveBulletIcon_BulletIcon                       ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()

void UMissionTrackerSubEntry_C::Update(UInterfaceProperty_ K2Node_DynamicCast_AsMission_Objective_Widget_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, const struct FSlateBrush& CallFunc_GetObjectiveBulletIcon_BulletIcon, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static auto Func = Class->GetFunction("MissionTrackerSubEntry_C", "Update");

	Params::UMissionTrackerSubEntry_C_Update_Params Parms;
	Parms.K2Node_DynamicCast_AsMission_Objective_Widget_Provider_Interface = K2Node_DynamicCast_AsMission_Objective_Widget_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_GetObjectiveBulletIcon_BulletIcon = CallFunc_GetObjectiveBulletIcon_BulletIcon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HideObjectiveCompletionIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionTrackerSubEntry_C::HideObjectiveCompletionIcon()
{
	static auto Func = Class->GetFunction("MissionTrackerSubEntry_C", "HideObjectiveCompletionIcon");

	Params::UMissionTrackerSubEntry_C_HideObjectiveCompletionIcon_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.ShowObjectiveWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsAlreadyVisible                                                (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionTrackerSubEntry_C::ShowObjectiveWidget(bool bIsAlreadyVisible, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_IsVisible_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionTrackerSubEntry_C", "ShowObjectiveWidget");

	Params::UMissionTrackerSubEntry_C_ShowObjectiveWidget_Params Parms;
	Parms.bIsAlreadyVisible = bIsAlreadyVisible;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HanldeObjectiveVisiblityOverrideChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*          Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortMissionVisibilityOverrideNew_Visibility_Override                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionTrackerSubEntry_C::HanldeObjectiveVisiblityOverrideChanged(class AFortObjectiveBase* Objective, enum class EFortMissionVisibilityOverride New_Visibility_Override, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("MissionTrackerSubEntry_C", "HanldeObjectiveVisiblityOverrideChanged");

	Params::UMissionTrackerSubEntry_C_HanldeObjectiveVisiblityOverrideChanged_Params Parms;
	Parms.Objective = Objective;
	Parms.New_Visibility_Override = New_Visibility_Override;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.CreateObjectiveContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDefaultObjectiveContentWidget_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesImplementInterface_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                K2Node_DynamicCast_AsMission_Objective_Widget_Provider_Interface (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectiveContentWidgetClass_Objective_WIdget_Class   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUserWidget*             CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface2 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue3                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionTrackerSubEntry_C::CreateObjectiveContentWidget(class UWidget* CallFunc_GetChildAt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue2, bool CallFunc_HasAnyChildren_ReturnValue2, class UClass* CallFunc_GetObjectClass_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDefaultObjectiveContentWidget_C* CallFunc_Create_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue2, UInterfaceProperty_ K2Node_DynamicCast_AsMission_Objective_Widget_Provider_Interface, bool K2Node_DynamicCast_bSuccess2, class UClass* CallFunc_GetObjectiveContentWidgetClass_Objective_WIdget_Class, bool CallFunc_NotEqual_ClassClass_ReturnValue2, bool CallFunc_IsValidClass_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UFortUserWidget* CallFunc_Create_ReturnValue2, UInterfaceProperty_ K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface2, bool K2Node_DynamicCast_bSuccess3, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue2, bool CallFunc_DoesImplementInterface_ReturnValue3)
{
	static auto Func = Class->GetFunction("MissionTrackerSubEntry_C", "CreateObjectiveContentWidget");

	Params::UMissionTrackerSubEntry_C_CreateObjectiveContentWidget_Params Parms;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue2 = CallFunc_GetChildAt_ReturnValue2;
	Parms.CallFunc_HasAnyChildren_ReturnValue2 = CallFunc_HasAnyChildren_ReturnValue2;
	Parms.CallFunc_GetObjectClass_ReturnValue2 = CallFunc_GetObjectClass_ReturnValue2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface = K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue2 = CallFunc_DoesImplementInterface_ReturnValue2;
	Parms.K2Node_DynamicCast_AsMission_Objective_Widget_Provider_Interface = K2Node_DynamicCast_AsMission_Objective_Widget_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetObjectiveContentWidgetClass_Objective_WIdget_Class = CallFunc_GetObjectiveContentWidgetClass_Objective_WIdget_Class;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue2 = CallFunc_NotEqual_ClassClass_ReturnValue2;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface2 = K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface2;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue2 = CallFunc_AddChild_ReturnValue2;
	Parms.CallFunc_DoesImplementInterface_ReturnValue3 = CallFunc_DoesImplementInterface_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.StartEndingAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionTrackerSubEntry_C::StartEndingAnimations(class UWidgetAnimation* Animation, bool CallFunc_IsVisible_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionTrackerSubEntry_C", "StartEndingAnimations");

	Params::UMissionTrackerSubEntry_C_StartEndingAnimations_Params Parms;
	Parms.Animation = Animation;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HideObjectiveWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionTrackerSubEntry_C::HideObjectiveWidget(bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionTrackerSubEntry_C", "HideObjectiveWidget");

	Params::UMissionTrackerSubEntry_C_HideObjectiveWidget_Params Parms;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMissionState*           Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionTrackerSubEntry_C::HandleUpdate(class AFortMissionState* Objective)
{
	static auto Func = Class->GetFunction("MissionTrackerSubEntry_C", "HandleUpdate");

	Params::UMissionTrackerSubEntry_C_HandleUpdate_Params Parms;
	Parms.Objective = Objective;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleObjectiveVisibilityChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*          Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewVisibility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionTrackerSubEntry_C::HandleObjectiveVisibilityChanged(class AFortObjectiveBase* Objective, bool NewVisibility)
{
	static auto Func = Class->GetFunction("MissionTrackerSubEntry_C", "HandleObjectiveVisibilityChanged");

	Params::UMissionTrackerSubEntry_C_HandleObjectiveVisibilityChanged_Params Parms;
	Parms.Objective = Objective;
	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleObjectiveStatusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*          Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortObjectiveStatus    NewStatus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetAnimation*            Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetAnimation*            Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortObjectiveStatus    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionTrackerSubEntry_C::HandleObjectiveStatusChanged(class AFortObjectiveBase* Objective, enum class EFortObjectiveStatus NewStatus, class UWidgetAnimation* Temp_object_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UWidgetAnimation* Temp_object_Variable2, class UWidgetAnimation* Temp_object_Variable3, enum class EFortObjectiveStatus Temp_byte_Variable, class UWidgetAnimation* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MissionTrackerSubEntry_C", "HandleObjectiveStatusChanged");

	Params::UMissionTrackerSubEntry_C_HandleObjectiveStatusChanged_Params Parms;
	Parms.Objective = Objective;
	Parms.NewStatus = NewStatus;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*          Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)

void UMissionTrackerSubEntry_C::Setup(class AFortObjectiveBase* Objective, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5)
{
	static auto Func = Class->GetFunction("MissionTrackerSubEntry_C", "Setup");

	Params::UMissionTrackerSubEntry_C_Setup_Params Parms;
	Parms.Objective = Objective;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.OnObjectiveSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMissionTrackerSubEntry_C::OnObjectiveSet()
{
	static auto Func = Class->GetFunction("MissionTrackerSubEntry_C", "OnObjectiveSet");

	Params::UMissionTrackerSubEntry_C_OnObjectiveSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.OnHiddenByHeightConstraintChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMissionTrackerSubEntry_C::OnHiddenByHeightConstraintChanged()
{
	static auto Func = Class->GetFunction("MissionTrackerSubEntry_C", "OnHiddenByHeightConstraintChanged");

	Params::UMissionTrackerSubEntry_C_OnHiddenByHeightConstraintChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.ExecuteUbergraph_MissionTrackerSubEntry
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionTrackerSubEntry_C::ExecuteUbergraph_MissionTrackerSubEntry(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("MissionTrackerSubEntry_C", "ExecuteUbergraph_MissionTrackerSubEntry");

	Params::UMissionTrackerSubEntry_C_ExecuteUbergraph_MissionTrackerSubEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.WidgetVisibilityChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionTrackerSubEntry_C::WidgetVisibilityChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("MissionTrackerSubEntry_C", "WidgetVisibilityChanged__DelegateSignature");

	Params::UMissionTrackerSubEntry_C_WidgetVisibilityChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
