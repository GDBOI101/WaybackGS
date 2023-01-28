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


// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.OnRep_bIsRiftArcsActive?
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_DtB_FloatingRift_C::OnRep_bIsRiftArcsActive_()
{
	static auto Func = Class->GetFunction("B_DtB_FloatingRift_C", "OnRep_bIsRiftArcsActive?");

	Params::AB_DtB_FloatingRift_C_OnRep_bIsRiftArcsActive__Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_DtB_FloatingRift_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_DtB_FloatingRift_C", "UserConstructionScript");

	Params::AB_DtB_FloatingRift_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_DtB_FloatingRift_C::BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("B_DtB_FloatingRift_C", "BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AB_DtB_FloatingRift_C_BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;
	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_DtB_FloatingRift_C::BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static auto Func = Class->GetFunction("B_DtB_FloatingRift_C", "BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	Params::AB_DtB_FloatingRift_C_BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params Parms;
	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_DtB_FloatingRift_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_DtB_FloatingRift_C", "ReceiveBeginPlay");

	Params::AB_DtB_FloatingRift_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.BndEvt__KillVolume_K2Node_ComponentBoundEvent_84_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_DtB_FloatingRift_C::BndEvt__KillVolume_K2Node_ComponentBoundEvent_84_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("B_DtB_FloatingRift_C", "BndEvt__KillVolume_K2Node_ComponentBoundEvent_84_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AB_DtB_FloatingRift_C_BndEvt__KillVolume_K2Node_ComponentBoundEvent_84_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;
	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.HandleMissionEvent_NewPlayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       MissionGuid                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ObjectiveHandle                                                  (Parm)
// class UFortMissionEventParams*     Params                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  EventContent                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EventInstigator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GenericInt                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GenericFloat                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        GenericText                                                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer       GameplayTags                                                     (Parm)
// struct FFortMissionEvent           MissionEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm)

void AB_DtB_FloatingRift_C::HandleMissionEvent_NewPlayer(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static auto Func = Class->GetFunction("B_DtB_FloatingRift_C", "HandleMissionEvent_NewPlayer");

	Params::AB_DtB_FloatingRift_C_HandleMissionEvent_NewPlayer_Params Parms;
	Parms.MissionGuid = MissionGuid;
	Parms.ObjectiveHandle = ObjectiveHandle;
	Parms.Params = Params;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = GenericText;
	Parms.GameplayTags = GameplayTags;
	Parms.MissionEvent = MissionEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.BndEvt__DispatcherCallOutVolume_K2Node_ComponentBoundEvent_70_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_DtB_FloatingRift_C::BndEvt__DispatcherCallOutVolume_K2Node_ComponentBoundEvent_70_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("B_DtB_FloatingRift_C", "BndEvt__DispatcherCallOutVolume_K2Node_ComponentBoundEvent_70_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AB_DtB_FloatingRift_C_BndEvt__DispatcherCallOutVolume_K2Node_ComponentBoundEvent_70_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;
	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.BndEvt__P_DtBRiftCore_K2Node_ComponentBoundEvent_12_ParticleBurstSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        EventName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EmitterTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ParticleCount                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_DtB_FloatingRift_C::BndEvt__P_DtBRiftCore_K2Node_ComponentBoundEvent_12_ParticleBurstSignature__DelegateSignature(class FName EventName, float EmitterTime, int32 ParticleCount)
{
	static auto Func = Class->GetFunction("B_DtB_FloatingRift_C", "BndEvt__P_DtBRiftCore_K2Node_ComponentBoundEvent_12_ParticleBurstSignature__DelegateSignature");

	Params::AB_DtB_FloatingRift_C_BndEvt__P_DtBRiftCore_K2Node_ComponentBoundEvent_12_ParticleBurstSignature__DelegateSignature_Params Parms;
	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.ParticleCount = ParticleCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.ExecuteUbergraph_B_DtB_FloatingRift
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult3                          (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult2                          (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGuid                       K2Node_HandleMissionEvent_MissionGuid                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_ObjectiveHandle                        ()
// class UFortMissionEventParams*     K2Node_HandleMissionEvent_Params                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleMissionEvent_EventFocus                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  K2Node_HandleMissionEvent_EventContent                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_HandleMissionEvent_EventInstigator                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_HandleMissionEvent_GenericInt                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_HandleMissionEvent_GenericFloat                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_HandleMissionEvent_GenericText                            (ConstParm)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_GameplayTags                           ()
// struct FFortMissionEvent           K2Node_HandleMissionEvent_MissionEvent                           (ConstParm)
// bool                               CallFunc_DoesAnyoneRequireQuest_SomePlayerNeedsTheQuest          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesAnyoneRequireQuest_SomePlayerNeedsTheQuest2         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_EventName                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_EmitterTime                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_ParticleCount                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_DtB_FloatingRift_C::ExecuteUbergraph_B_DtB_FloatingRift(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent4, class AActor* K2Node_ComponentBoundEvent_OtherActor4, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp4, int32 K2Node_ComponentBoundEvent_OtherBodyIndex4, bool K2Node_ComponentBoundEvent_bFromSweep3, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent3, class AActor* K2Node_ComponentBoundEvent_OtherActor3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex3, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn2, bool K2Node_DynamicCast_bSuccess2, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent2, class AActor* K2Node_ComponentBoundEvent_OtherActor2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex2, bool K2Node_ComponentBoundEvent_bFromSweep2, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn3, bool K2Node_DynamicCast_bSuccess3, const struct FGuid& K2Node_HandleMissionEvent_MissionGuid, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* K2Node_HandleMissionEvent_EventFocus, class UDataAsset* K2Node_HandleMissionEvent_EventContent, class AActor* K2Node_HandleMissionEvent_EventInstigator, int32 K2Node_HandleMissionEvent_GenericInt, float K2Node_HandleMissionEvent_GenericFloat, class FText K2Node_HandleMissionEvent_GenericText, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent, bool CallFunc_DoesAnyoneRequireQuest_SomePlayerNeedsTheQuest, bool CallFunc_DoesAnyoneRequireQuest_SomePlayerNeedsTheQuest2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn4, bool K2Node_DynamicCast_bSuccess4, class FName K2Node_ComponentBoundEvent_EventName, float K2Node_ComponentBoundEvent_EmitterTime, int32 K2Node_ComponentBoundEvent_ParticleCount, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static auto Func = Class->GetFunction("B_DtB_FloatingRift_C", "ExecuteUbergraph_B_DtB_FloatingRift");

	Params::AB_DtB_FloatingRift_C_ExecuteUbergraph_B_DtB_FloatingRift_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent4 = K2Node_ComponentBoundEvent_OverlappedComponent4;
	Parms.K2Node_ComponentBoundEvent_OtherActor4 = K2Node_ComponentBoundEvent_OtherActor4;
	Parms.K2Node_ComponentBoundEvent_OtherComp4 = K2Node_ComponentBoundEvent_OtherComp4;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex4 = K2Node_ComponentBoundEvent_OtherBodyIndex4;
	Parms.K2Node_ComponentBoundEvent_bFromSweep3 = K2Node_ComponentBoundEvent_bFromSweep3;
	Parms.K2Node_ComponentBoundEvent_SweepResult3 = K2Node_ComponentBoundEvent_SweepResult3;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent3 = K2Node_ComponentBoundEvent_OverlappedComponent3;
	Parms.K2Node_ComponentBoundEvent_OtherActor3 = K2Node_ComponentBoundEvent_OtherActor3;
	Parms.K2Node_ComponentBoundEvent_OtherComp3 = K2Node_ComponentBoundEvent_OtherComp3;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex3 = K2Node_ComponentBoundEvent_OtherBodyIndex3;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn2 = K2Node_DynamicCast_AsFort_Player_Pawn2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent2 = K2Node_ComponentBoundEvent_OverlappedComponent2;
	Parms.K2Node_ComponentBoundEvent_OtherActor2 = K2Node_ComponentBoundEvent_OtherActor2;
	Parms.K2Node_ComponentBoundEvent_OtherComp2 = K2Node_ComponentBoundEvent_OtherComp2;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex2 = K2Node_ComponentBoundEvent_OtherBodyIndex2;
	Parms.K2Node_ComponentBoundEvent_bFromSweep2 = K2Node_ComponentBoundEvent_bFromSweep2;
	Parms.K2Node_ComponentBoundEvent_SweepResult2 = K2Node_ComponentBoundEvent_SweepResult2;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn3 = K2Node_DynamicCast_AsFort_Player_Pawn3;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_HandleMissionEvent_MissionGuid = K2Node_HandleMissionEvent_MissionGuid;
	Parms.K2Node_HandleMissionEvent_ObjectiveHandle = K2Node_HandleMissionEvent_ObjectiveHandle;
	Parms.K2Node_HandleMissionEvent_Params = K2Node_HandleMissionEvent_Params;
	Parms.K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW = K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.K2Node_HandleMissionEvent_EventFocus = K2Node_HandleMissionEvent_EventFocus;
	Parms.K2Node_HandleMissionEvent_EventContent = K2Node_HandleMissionEvent_EventContent;
	Parms.K2Node_HandleMissionEvent_EventInstigator = K2Node_HandleMissionEvent_EventInstigator;
	Parms.K2Node_HandleMissionEvent_GenericInt = K2Node_HandleMissionEvent_GenericInt;
	Parms.K2Node_HandleMissionEvent_GenericFloat = K2Node_HandleMissionEvent_GenericFloat;
	Parms.K2Node_HandleMissionEvent_GenericText = K2Node_HandleMissionEvent_GenericText;
	Parms.K2Node_HandleMissionEvent_GameplayTags = K2Node_HandleMissionEvent_GameplayTags;
	Parms.K2Node_HandleMissionEvent_MissionEvent = K2Node_HandleMissionEvent_MissionEvent;
	Parms.CallFunc_DoesAnyoneRequireQuest_SomePlayerNeedsTheQuest = CallFunc_DoesAnyoneRequireQuest_SomePlayerNeedsTheQuest;
	Parms.CallFunc_DoesAnyoneRequireQuest_SomePlayerNeedsTheQuest2 = CallFunc_DoesAnyoneRequireQuest_SomePlayerNeedsTheQuest2;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn4 = K2Node_DynamicCast_AsFort_Player_Pawn4;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.K2Node_ComponentBoundEvent_EventName = K2Node_ComponentBoundEvent_EventName;
	Parms.K2Node_ComponentBoundEvent_EmitterTime = K2Node_ComponentBoundEvent_EmitterTime;
	Parms.K2Node_ComponentBoundEvent_ParticleCount = K2Node_ComponentBoundEvent_ParticleCount;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.CallOutVolumeOverlap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             FortPlayerPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_DtB_FloatingRift_C::CallOutVolumeOverlap__DelegateSignature(class AFortPlayerPawn* FortPlayerPawn)
{
	static auto Func = Class->GetFunction("B_DtB_FloatingRift_C", "CallOutVolumeOverlap__DelegateSignature");

	Params::AB_DtB_FloatingRift_C_CallOutVolumeOverlap__DelegateSignature_Params Parms;
	Parms.FortPlayerPawn = FortPlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.RiftLocated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             FortPlayPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_DtB_FloatingRift_C::RiftLocated__DelegateSignature(class AFortPlayerPawn* FortPlayPawn)
{
	static auto Func = Class->GetFunction("B_DtB_FloatingRift_C", "RiftLocated__DelegateSignature");

	Params::AB_DtB_FloatingRift_C_RiftLocated__DelegateSignature_Params Parms;
	Parms.FortPlayPawn = FortPlayPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
