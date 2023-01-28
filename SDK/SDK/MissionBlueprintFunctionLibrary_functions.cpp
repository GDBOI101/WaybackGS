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


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuestObjectiveHandle
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItemDefinition*    QuestReference                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         QuestBackendObjectiveHandle                                      (Parm, NoDestructor)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       PlayerControllerOut                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CompletedQuestObjective                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HasCompletedObjective                                            (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedObjective_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionBlueprintFunctionLibrary_C::HasPlayerCompletedQuestObjectiveHandle(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* QuestReference, const struct FDataTableRowHandle& QuestBackendObjectiveHandle, class UObject* __WorldContext, class AFortPlayerController** PlayerControllerOut, bool* CompletedQuestObjective, bool HasCompletedObjective, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_HasCompletedObjective_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "HasPlayerCompletedQuestObjectiveHandle");

	Params::UMissionBlueprintFunctionLibrary_C_HasPlayerCompletedQuestObjectiveHandle_Params Parms;
	Parms.PlayerController = PlayerController;
	Parms.QuestReference = QuestReference;
	Parms.QuestBackendObjectiveHandle = QuestBackendObjectiveHandle;
	Parms.__WorldContext = __WorldContext;
	Parms.HasCompletedObjective = HasCompletedObjective;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_HasCompletedObjective_ReturnValue = CallFunc_HasCompletedObjective_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerControllerOut != nullptr)
		*PlayerControllerOut = Parms.PlayerControllerOut;

	if (CompletedQuestObjective != nullptr)
		*CompletedQuestObjective = Parms.CompletedQuestObjective;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesAnyPlayerRequireQuestObjective
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition*    QuestReference                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         QuestObjectiveHandle                                             (Parm, NoDestructor)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>PlayerControllersWhoRequireObjective                             (Parm, OutParm, ZeroConstructor)
// bool                               SomebodyRequiresObjective                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>ControllersWhoRequireObjective                                   (Edit, ZeroConstructor, DisableEditOnTemplate)
// bool                               SomebodyNeededTheObjective                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>CallFunc_GetAllFortPlayerControllers_ReturnValue                 (ZeroConstructor, ReferenceParm)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedObjective_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionBlueprintFunctionLibrary_C::DoesAnyPlayerRequireQuestObjective(class UFortQuestItemDefinition* QuestReference, const struct FDataTableRowHandle& QuestObjectiveHandle, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayerControllersWhoRequireObjective, bool* SomebodyRequiresObjective, const TArray<class AFortPlayerController*>& ControllersWhoRequireObjective, bool SomebodyNeededTheObjective, int32 Temp_int_Array_Index_Variable, TArray<class AFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_HasCompletedObjective_ReturnValue, bool CallFunc_IsValid_ReturnValue3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "DoesAnyPlayerRequireQuestObjective");

	Params::UMissionBlueprintFunctionLibrary_C_DoesAnyPlayerRequireQuestObjective_Params Parms;
	Parms.QuestReference = QuestReference;
	Parms.QuestObjectiveHandle = QuestObjectiveHandle;
	Parms.__WorldContext = __WorldContext;
	Parms.ControllersWhoRequireObjective = ControllersWhoRequireObjective;
	Parms.SomebodyNeededTheObjective = SomebodyNeededTheObjective;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAllFortPlayerControllers_ReturnValue = CallFunc_GetAllFortPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_HasCompletedObjective_ReturnValue = CallFunc_HasCompletedObjective_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerControllersWhoRequireObjective != nullptr)
		*PlayerControllersWhoRequireObjective = Parms.PlayerControllersWhoRequireObjective;

	if (SomebodyRequiresObjective != nullptr)
		*SomebodyRequiresObjective = Parms.SomebodyRequiresObjective;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HideParticleComponentsAttachedToMesh
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        MeshComponent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SuccessfullyDeactivatedParticle                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FoundParticle                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    K2Node_DynamicCast_AsParticle_System_Component                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionBlueprintFunctionLibrary_C::HideParticleComponentsAttachedToMesh(class UStaticMeshComponent* MeshComponent, class UObject* __WorldContext, bool* SuccessfullyDeactivatedParticle, bool FoundParticle, bool CallFunc_IsValid_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 Temp_int_Array_Index_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, class UParticleSystemComponent* K2Node_DynamicCast_AsParticle_System_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "HideParticleComponentsAttachedToMesh");

	Params::UMissionBlueprintFunctionLibrary_C_HideParticleComponentsAttachedToMesh_Params Parms;
	Parms.MeshComponent = MeshComponent;
	Parms.__WorldContext = __WorldContext;
	Parms.FoundParticle = FoundParticle;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsParticle_System_Component = K2Node_DynamicCast_AsParticle_System_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SuccessfullyDeactivatedParticle != nullptr)
		*SuccessfullyDeactivatedParticle = Parms.SuccessfullyDeactivatedParticle;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuestObjective
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItemDefinition*    QuestReference                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        QuestBackendObjectiveName                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       PlayerControllerOut                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CompletedQuestObjective                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HasCompletedObjective                                            (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedObjectiveWithName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionBlueprintFunctionLibrary_C::HasPlayerCompletedQuestObjective(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* QuestReference, class FName QuestBackendObjectiveName, class UObject* __WorldContext, class AFortPlayerController** PlayerControllerOut, bool* CompletedQuestObjective, bool HasCompletedObjective, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "HasPlayerCompletedQuestObjective");

	Params::UMissionBlueprintFunctionLibrary_C_HasPlayerCompletedQuestObjective_Params Parms;
	Parms.PlayerController = PlayerController;
	Parms.QuestReference = QuestReference;
	Parms.QuestBackendObjectiveName = QuestBackendObjectiveName;
	Parms.__WorldContext = __WorldContext;
	Parms.HasCompletedObjective = HasCompletedObjective;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_HasCompletedObjectiveWithName_ReturnValue = CallFunc_HasCompletedObjectiveWithName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerControllerOut != nullptr)
		*PlayerControllerOut = Parms.PlayerControllerOut;

	if (CompletedQuestObjective != nullptr)
		*CompletedQuestObjective = Parms.CompletedQuestObjective;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetContributingControllersNearActor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Distance                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>PlayerControllersNearby                                          (Parm, OutParm, ZeroConstructor)
// bool                               SuccessfullyFoundPlayer                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>ControllersNearbyArray                                           (Edit, ZeroConstructor, DisableEditOnTemplate)
// bool                               FoundPlayer                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AnyPlayerNearActor_IsPlayerNearActor                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerPawn*>     CallFunc_AnyPlayerNearActor_PlayersNearActor                     (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionBlueprintFunctionLibrary_C::GetContributingControllersNearActor(float Distance, class AActor* Actor, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayerControllersNearby, bool* SuccessfullyFoundPlayer, const TArray<class AFortPlayerController*>& ControllersNearbyArray, bool FoundPlayer, bool CallFunc_AnyPlayerNearActor_IsPlayerNearActor, TArray<class AFortPlayerPawn*>& CallFunc_AnyPlayerNearActor_PlayersNearActor, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AFortPlayerPawn* CallFunc_Array_Get_Item, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "GetContributingControllersNearActor");

	Params::UMissionBlueprintFunctionLibrary_C_GetContributingControllersNearActor_Params Parms;
	Parms.Distance = Distance;
	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;
	Parms.ControllersNearbyArray = ControllersNearbyArray;
	Parms.FoundPlayer = FoundPlayer;
	Parms.CallFunc_AnyPlayerNearActor_IsPlayerNearActor = CallFunc_AnyPlayerNearActor_IsPlayerNearActor;
	Parms.CallFunc_AnyPlayerNearActor_PlayersNearActor = CallFunc_AnyPlayerNearActor_PlayersNearActor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerControllersNearby != nullptr)
		*PlayerControllersNearby = Parms.PlayerControllersNearby;

	if (SuccessfullyFoundPlayer != nullptr)
		*SuccessfullyFoundPlayer = Parms.SuccessfullyFoundPlayer;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.PointLocationsBetweenTwoVectors
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Vector_1                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Vector_2                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HowManyPoints                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             VectorPoints                                                     (Parm, OutParm, ZeroConstructor)
// bool                               SuccessfullyFoundPoints                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               WasSuccessful                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FVector>             ResultVectorArray                                                (Edit, ZeroConstructor)
// struct FVector                     DifferenceVector                                                 (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorInt_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionBlueprintFunctionLibrary_C::PointLocationsBetweenTwoVectors(const struct FVector& Vector_1, const struct FVector& Vector_2, int32 HowManyPoints, class UObject* __WorldContext, TArray<struct FVector>* VectorPoints, bool* SuccessfullyFoundPoints, bool WasSuccessful, const TArray<struct FVector>& ResultVectorArray, const struct FVector& DifferenceVector, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Divide_VectorInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue2, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "PointLocationsBetweenTwoVectors");

	Params::UMissionBlueprintFunctionLibrary_C_PointLocationsBetweenTwoVectors_Params Parms;
	Parms.Vector_1 = Vector_1;
	Parms.Vector_2 = Vector_2;
	Parms.HowManyPoints = HowManyPoints;
	Parms.__WorldContext = __WorldContext;
	Parms.WasSuccessful = WasSuccessful;
	Parms.ResultVectorArray = ResultVectorArray;
	Parms.DifferenceVector = DifferenceVector;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Divide_VectorInt_ReturnValue = CallFunc_Divide_VectorInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue2 = CallFunc_GreaterEqual_IntInt_ReturnValue2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue = CallFunc_Multiply_VectorInt_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (VectorPoints != nullptr)
		*VectorPoints = Parms.VectorPoints;

	if (SuccessfullyFoundPoints != nullptr)
		*SuccessfullyFoundPoints = Parms.SuccessfullyFoundPoints;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetCurrentDifficulty
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Difficulty                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateZone*          K2Node_DynamicCast_AsFort_Game_State_Zone                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameDifficulty_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionBlueprintFunctionLibrary_C::GetCurrentDifficulty(class UObject* __WorldContext, float* Difficulty, bool* Success, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetGameDifficulty_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "GetCurrentDifficulty");

	Params::UMissionBlueprintFunctionLibrary_C_GetCurrentDifficulty_Params Parms;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Zone = K2Node_DynamicCast_AsFort_Game_State_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameDifficulty_ReturnValue = CallFunc_GetGameDifficulty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Difficulty != nullptr)
		*Difficulty = Parms.Difficulty;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.ApplyDifficultyOffset
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BaseDifficulty                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEvaluateCurveTableResultCallFunc_EvaluateCurveTableRow_OutResult                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentDifficulty_Difficulty                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentDifficulty_Success                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionBlueprintFunctionLibrary_C::ApplyDifficultyOffset(class FName RowName, float BaseDifficulty, class UObject* __WorldContext, bool* Success, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, float CallFunc_GetCurrentDifficulty_Difficulty, bool CallFunc_GetCurrentDifficulty_Success, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "ApplyDifficultyOffset");

	Params::UMissionBlueprintFunctionLibrary_C_ApplyDifficultyOffset_Params Parms;
	Parms.RowName = RowName;
	Parms.BaseDifficulty = BaseDifficulty;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_EvaluateCurveTableRow_OutResult = CallFunc_EvaluateCurveTableRow_OutResult;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY = CallFunc_EvaluateCurveTableRow_OutXY;
	Parms.CallFunc_GetCurrentDifficulty_Difficulty = CallFunc_GetCurrentDifficulty_Difficulty;
	Parms.CallFunc_GetCurrentDifficulty_Success = CallFunc_GetCurrentDifficulty_Success;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DistanceBetweenTwoVectors
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Vector1                                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Vector2                                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Distance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionBlueprintFunctionLibrary_C::DistanceBetweenTwoVectors(const struct FVector& Vector1, const struct FVector& Vector2, class UObject* __WorldContext, float* Distance, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "DistanceBetweenTwoVectors");

	Params::UMissionBlueprintFunctionLibrary_C_DistanceBetweenTwoVectors_Params Parms;
	Parms.Vector1 = Vector1;
	Parms.Vector2 = Vector2;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Distance != nullptr)
		*Distance = Parms.Distance;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuest
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItemDefinition*    QuestReference                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        QuestBackendName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       PlayerControllerOut                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CompletedQuest                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HasCompletedQuest                                                (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedObjectiveWithName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionBlueprintFunctionLibrary_C::HasPlayerCompletedQuest(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* QuestReference, class FName QuestBackendName, class UObject* __WorldContext, class AFortPlayerController** PlayerControllerOut, bool* CompletedQuest, bool HasCompletedQuest, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "HasPlayerCompletedQuest");

	Params::UMissionBlueprintFunctionLibrary_C_HasPlayerCompletedQuest_Params Parms;
	Parms.PlayerController = PlayerController;
	Parms.QuestReference = QuestReference;
	Parms.QuestBackendName = QuestBackendName;
	Parms.__WorldContext = __WorldContext;
	Parms.HasCompletedQuest = HasCompletedQuest;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;
	Parms.CallFunc_HasCompletedObjectiveWithName_ReturnValue = CallFunc_HasCompletedObjectiveWithName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerControllerOut != nullptr)
		*PlayerControllerOut = Parms.PlayerControllerOut;

	if (CompletedQuest != nullptr)
		*CompletedQuest = Parms.CompletedQuest;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.SeperatePlayersWhoNeedQuest
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition*    QuestItemReference                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        QuestObjectiveBackendName                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>PlayersWhoNeedQuest                                              (Parm, OutParm, ZeroConstructor)
// TArray<class AFortPlayerController*>PlayersWhoDoNotNeedQuest                                         (Parm, OutParm, ZeroConstructor)
// TArray<class AFortPlayerController*>NotRequireQuest                                                  (Edit, ZeroConstructor, DisableEditOnTemplate)
// TArray<class AFortPlayerController*>RequireQuest                                                     (Edit, ZeroConstructor, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>CallFunc_GetAllFortPlayerControllers_ReturnValue                 (ZeroConstructor, ReferenceParm)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedObjectiveWithName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionBlueprintFunctionLibrary_C::SeperatePlayersWhoNeedQuest(class UFortQuestItemDefinition* QuestItemReference, class FName QuestObjectiveBackendName, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayersWhoNeedQuest, TArray<class AFortPlayerController*>* PlayersWhoDoNotNeedQuest, const TArray<class AFortPlayerController*>& NotRequireQuest, const TArray<class AFortPlayerController*>& RequireQuest, int32 Temp_int_Array_Index_Variable, TArray<class AFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue2, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue2, int32 CallFunc_Array_AddUnique_ReturnValue3)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "SeperatePlayersWhoNeedQuest");

	Params::UMissionBlueprintFunctionLibrary_C_SeperatePlayersWhoNeedQuest_Params Parms;
	Parms.QuestItemReference = QuestItemReference;
	Parms.QuestObjectiveBackendName = QuestObjectiveBackendName;
	Parms.__WorldContext = __WorldContext;
	Parms.NotRequireQuest = NotRequireQuest;
	Parms.RequireQuest = RequireQuest;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAllFortPlayerControllers_ReturnValue = CallFunc_GetAllFortPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_HasCompletedObjectiveWithName_ReturnValue = CallFunc_HasCompletedObjectiveWithName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue2 = CallFunc_Array_AddUnique_ReturnValue2;
	Parms.CallFunc_Array_AddUnique_ReturnValue3 = CallFunc_Array_AddUnique_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayersWhoNeedQuest != nullptr)
		*PlayersWhoNeedQuest = Parms.PlayersWhoNeedQuest;

	if (PlayersWhoDoNotNeedQuest != nullptr)
		*PlayersWhoDoNotNeedQuest = Parms.PlayersWhoDoNotNeedQuest;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.BasicBuildingItemDrop
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EnumEventWorldItemDrop  Item_Drop_Level                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LootDropLocation                                                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemsToSpawnPerRoll                                              (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SpawnVector                                                      (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPickup*                 CallFunc_K2_SpawnPickupInWorld_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPickup*                 CallFunc_K2_SpawnPickupInWorld_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_FirstRun                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_Data                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_ScratchBool                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_ScratchIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue3                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPickup*                 CallFunc_K2_SpawnPickupInWorld_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionBlueprintFunctionLibrary_C::BasicBuildingItemDrop(enum class EnumEventWorldItemDrop Item_Drop_Level, const struct FVector& LootDropLocation, class UObject* __WorldContext, int32 ItemsToSpawnPerRoll, const struct FVector& SpawnVector, float CallFunc_RandomFloatInRange_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_RandomFloatInRange_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue3, float CallFunc_RandomFloatInRange_ReturnValue4, float CallFunc_RandomFloatInRange_ReturnValue5, float CallFunc_RandomFloatInRange_ReturnValue6, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue5, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue6, class AFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, class AFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue2, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, float CallFunc_Add_FloatFloat_ReturnValue7, float CallFunc_Add_FloatFloat_ReturnValue8, float CallFunc_Add_FloatFloat_ReturnValue9, const struct FVector& CallFunc_MakeVector_ReturnValue3, class AFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue3)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "BasicBuildingItemDrop");

	Params::UMissionBlueprintFunctionLibrary_C_BasicBuildingItemDrop_Params Parms;
	Parms.Item_Drop_Level = Item_Drop_Level;
	Parms.LootDropLocation = LootDropLocation;
	Parms.__WorldContext = __WorldContext;
	Parms.ItemsToSpawnPerRoll = ItemsToSpawnPerRoll;
	Parms.SpawnVector = SpawnVector;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_RandomFloatInRange_ReturnValue2 = CallFunc_RandomFloatInRange_ReturnValue2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue3 = CallFunc_RandomFloatInRange_ReturnValue3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue4 = CallFunc_RandomFloatInRange_ReturnValue4;
	Parms.CallFunc_RandomFloatInRange_ReturnValue5 = CallFunc_RandomFloatInRange_ReturnValue5;
	Parms.CallFunc_RandomFloatInRange_ReturnValue6 = CallFunc_RandomFloatInRange_ReturnValue6;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue3 = CallFunc_Add_FloatFloat_ReturnValue3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue4 = CallFunc_Add_FloatFloat_ReturnValue4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue5 = CallFunc_Add_FloatFloat_ReturnValue5;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue6 = CallFunc_Add_FloatFloat_ReturnValue6;
	Parms.CallFunc_K2_SpawnPickupInWorld_ReturnValue = CallFunc_K2_SpawnPickupInWorld_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_K2_SpawnPickupInWorld_ReturnValue2 = CallFunc_K2_SpawnPickupInWorld_ReturnValue2;
	Parms.CallFunc_BreakVector_X3 = CallFunc_BreakVector_X3;
	Parms.CallFunc_BreakVector_Y3 = CallFunc_BreakVector_Y3;
	Parms.CallFunc_BreakVector_Z3 = CallFunc_BreakVector_Z3;
	Parms.K2Node_MultiGate_FirstRun = K2Node_MultiGate_FirstRun;
	Parms.K2Node_MultiGate_Data = K2Node_MultiGate_Data;
	Parms.K2Node_MultiGate_ScratchBool = K2Node_MultiGate_ScratchBool;
	Parms.K2Node_MultiGate_ScratchIndex = K2Node_MultiGate_ScratchIndex;
	Parms.CallFunc_Add_FloatFloat_ReturnValue7 = CallFunc_Add_FloatFloat_ReturnValue7;
	Parms.CallFunc_Add_FloatFloat_ReturnValue8 = CallFunc_Add_FloatFloat_ReturnValue8;
	Parms.CallFunc_Add_FloatFloat_ReturnValue9 = CallFunc_Add_FloatFloat_ReturnValue9;
	Parms.CallFunc_MakeVector_ReturnValue3 = CallFunc_MakeVector_ReturnValue3;
	Parms.CallFunc_K2_SpawnPickupInWorld_ReturnValue3 = CallFunc_K2_SpawnPickupInWorld_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GrantSurvivorBadge
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LootLevelIn                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESurvivorBadgeTypes     BadgeType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItemDefinition*> GoldBadges                                                       (Edit, ZeroConstructor)
// TArray<class UFortItemDefinition*> SilverBadges                                                     (Edit, ZeroConstructor)
// TArray<class UFortItemDefinition*> BronzeBadges                                                     (Edit, ZeroConstructor)
// TArray<class UFortItemDefinition*> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortItemDefinition*> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// TArray<class UFortItemDefinition*> K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// class UFortItemDefinition*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItemDefinition*    K2Node_DynamicCast_AsFort_World_Item_Definition                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorldItemDefinition*    K2Node_DynamicCast_AsFort_World_Item_Definition2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItemDefinition*    K2Node_DynamicCast_AsFort_World_Item_Definition3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)

void UMissionBlueprintFunctionLibrary_C::GrantSurvivorBadge(int32 LootLevelIn, enum class ESurvivorBadgeTypes BadgeType, class UObject* __WorldContext, const TArray<class UFortItemDefinition*>& GoldBadges, const TArray<class UFortItemDefinition*>& SilverBadges, const TArray<class UFortItemDefinition*>& BronzeBadges, TArray<class UFortItemDefinition*>& K2Node_MakeArray_Array, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UFortItemDefinition*>& K2Node_MakeArray_Array2, TArray<class UFortItemDefinition*>& K2Node_MakeArray_Array3, class UFortItemDefinition* CallFunc_Array_Get_Item, class UFortItemDefinition* CallFunc_Array_Get_Item2, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition, bool K2Node_DynamicCast_bSuccess, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition2, bool K2Node_DynamicCast_bSuccess2, class UFortItemDefinition* CallFunc_Array_Get_Item3, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition3, bool K2Node_DynamicCast_bSuccess3, const class FString& CallFunc_GetDisplayName_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "GrantSurvivorBadge");

	Params::UMissionBlueprintFunctionLibrary_C_GrantSurvivorBadge_Params Parms;
	Parms.LootLevelIn = LootLevelIn;
	Parms.BadgeType = BadgeType;
	Parms.__WorldContext = __WorldContext;
	Parms.GoldBadges = GoldBadges;
	Parms.SilverBadges = SilverBadges;
	Parms.BronzeBadges = BronzeBadges;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.K2Node_DynamicCast_AsFort_World_Item_Definition = K2Node_DynamicCast_AsFort_World_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_World_Item_Definition2 = K2Node_DynamicCast_AsFort_World_Item_Definition2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.K2Node_DynamicCast_AsFort_World_Item_Definition3 = K2Node_DynamicCast_AsFort_World_Item_Definition3;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetBuildingRecommendation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BuildingCount                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RowFound                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentDifficulty_Difficulty                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentDifficulty_Success                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEvaluateCurveTableResultCallFunc_EvaluateCurveTableRow_OutResult                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionBlueprintFunctionLibrary_C::GetBuildingRecommendation(class FName RowName, class UObject* __WorldContext, int32* BuildingCount, bool* RowFound, float CallFunc_GetCurrentDifficulty_Difficulty, bool CallFunc_GetCurrentDifficulty_Success, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, int32 CallFunc_Round_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "GetBuildingRecommendation");

	Params::UMissionBlueprintFunctionLibrary_C_GetBuildingRecommendation_Params Parms;
	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCurrentDifficulty_Difficulty = CallFunc_GetCurrentDifficulty_Difficulty;
	Parms.CallFunc_GetCurrentDifficulty_Success = CallFunc_GetCurrentDifficulty_Success;
	Parms.CallFunc_EvaluateCurveTableRow_OutResult = CallFunc_EvaluateCurveTableRow_OutResult;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY = CallFunc_EvaluateCurveTableRow_OutXY;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (BuildingCount != nullptr)
		*BuildingCount = Parms.BuildingCount;

	if (RowFound != nullptr)
		*RowFound = Parms.RowFound;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.Random_360_VectorInRange
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              MinDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Random_Vector_Result_                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionBlueprintFunctionLibrary_C::Random_360_VectorInRange(float MinDistance, float MaxDistance, class UObject* __WorldContext, struct FVector* Random_Vector_Result_, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "Random_360_VectorInRange");

	Params::UMissionBlueprintFunctionLibrary_C_Random_360_VectorInRange_Params Parms;
	Parms.MinDistance = MinDistance;
	Parms.MaxDistance = MaxDistance;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue2 = CallFunc_RandomFloatInRange_ReturnValue2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Random_Vector_Result_ != nullptr)
		*Random_Vector_Result_ = Parms.Random_Vector_Result_;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.AnyPawnNearActor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DistanceToCheck                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPawnNearActor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPawn*>           PawnsNearActor                                                   (Parm, OutParm, ZeroConstructor)
// TArray<class AFortPawn*>           Pawns                                                            (Edit, ZeroConstructor, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPawn*>           CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class AFortPawn*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionBlueprintFunctionLibrary_C::AnyPawnNearActor(float DistanceToCheck, class AActor* Actor, class UObject* __WorldContext, bool* IsPawnNearActor, TArray<class AFortPawn*>* PawnsNearActor, const TArray<class AFortPawn*>& Pawns, int32 Temp_int_Array_Index_Variable, TArray<class AFortPawn*>& CallFunc_GetAllActorsOfClass_OutActors, class AFortPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "AnyPawnNearActor");

	Params::UMissionBlueprintFunctionLibrary_C_AnyPawnNearActor_Params Parms;
	Parms.DistanceToCheck = DistanceToCheck;
	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;
	Parms.Pawns = Pawns;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPawnNearActor != nullptr)
		*IsPawnNearActor = Parms.IsPawnNearActor;

	if (PawnsNearActor != nullptr)
		*PawnsNearActor = Parms.PawnsNearActor;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GiveQuestUpdateToPlayers
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition*    Quest_Reference                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Quest_Objective_Backend_Name                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         ObjectiveStatEvent                                               (Parm, NoDestructor)
// TArray<class AFortPlayerController*>PlayerControllersForUpdate                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedObjectiveWithName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionBlueprintFunctionLibrary_C::GiveQuestUpdateToPlayers(class UFortQuestItemDefinition* Quest_Reference, class FName Quest_Objective_Backend_Name, const struct FDataTableRowHandle& ObjectiveStatEvent, TArray<class AFortPlayerController*>& PlayerControllersForUpdate, class UObject* __WorldContext, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "GiveQuestUpdateToPlayers");

	Params::UMissionBlueprintFunctionLibrary_C_GiveQuestUpdateToPlayers_Params Parms;
	Parms.Quest_Reference = Quest_Reference;
	Parms.Quest_Objective_Backend_Name = Quest_Objective_Backend_Name;
	Parms.ObjectiveStatEvent = ObjectiveStatEvent;
	Parms.PlayerControllersForUpdate = PlayerControllersForUpdate;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_HasCompletedObjectiveWithName_ReturnValue = CallFunc_HasCompletedObjectiveWithName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DropChance
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DropPercentChance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DropResult                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionBlueprintFunctionLibrary_C::DropChance(float DropPercentChance, class UObject* __WorldContext, bool* DropResult, float CallFunc_FClamp_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "DropChance");

	Params::UMissionBlueprintFunctionLibrary_C_DropChance_Params Parms;
	Parms.DropPercentChance = DropPercentChance;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DropResult != nullptr)
		*DropResult = Parms.DropResult;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.AnyPlayerNearActor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DistanceToCheck                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPlayerNearActor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerPawn*>     PlayersNearActor                                                 (Parm, OutParm, ZeroConstructor)
// TArray<class AFortPlayerPawn*>     PlayerPawns                                                      (Edit, ZeroConstructor, DisableEditOnTemplate)
// TArray<class AFortPlayerPawn*>     CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns                (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionBlueprintFunctionLibrary_C::AnyPlayerNearActor(float DistanceToCheck, class AActor* Actor, class UObject* __WorldContext, bool* IsPlayerNearActor, TArray<class AFortPlayerPawn*>* PlayersNearActor, const TArray<class AFortPlayerPawn*>& PlayerPawns, TArray<class AFortPlayerPawn*>& CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AFortPlayerPawn* CallFunc_Array_Get_Item, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "AnyPlayerNearActor");

	Params::UMissionBlueprintFunctionLibrary_C_AnyPlayerNearActor_Params Parms;
	Parms.DistanceToCheck = DistanceToCheck;
	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;
	Parms.PlayerPawns = PlayerPawns;
	Parms.CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns = CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlayerNearActor != nullptr)
		*IsPlayerNearActor = Parms.IsPlayerNearActor;

	if (PlayersNearActor != nullptr)
		*PlayersNearActor = Parms.PlayersNearActor;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.FlashObjectiveUI
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*          Objective_Reference                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue             ()

void UMissionBlueprintFunctionLibrary_C::FlashObjectiveUI(class AFortObjectiveBase* Objective_Reference, class UObject* __WorldContext, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "FlashObjectiveUI");

	Params::UMissionBlueprintFunctionLibrary_C_FlashObjectiveUI_Params Parms;
	Parms.Objective_Reference = Objective_Reference;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_DroneStopRescue
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Instigator                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_SurvivorScriptedAbilitiesSurvivorAbilityStruct                                            (Edit, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()

void UMissionBlueprintFunctionLibrary_C::NPC_DroneStopRescue(class AActor* Actor, class AActor* Instigator, class UObject* __WorldContext, const struct FStruct_SurvivorScriptedAbilities& SurvivorAbilityStruct, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "NPC_DroneStopRescue");

	Params::UMissionBlueprintFunctionLibrary_C_NPC_DroneStopRescue_Params Parms;
	Parms.Actor = Actor;
	Parms.Instigator = Instigator;
	Parms.__WorldContext = __WorldContext;
	Parms.SurvivorAbilityStruct = SurvivorAbilityStruct;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_DroneStartRescue
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Instigator                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_SurvivorScriptedAbilitiesSurvivorAbilityStruct                                            (Edit, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()

void UMissionBlueprintFunctionLibrary_C::NPC_DroneStartRescue(class AActor* Actor, class AActor* Instigator, class UObject* __WorldContext, const struct FStruct_SurvivorScriptedAbilities& SurvivorAbilityStruct, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "NPC_DroneStartRescue");

	Params::UMissionBlueprintFunctionLibrary_C_NPC_DroneStartRescue_Params Parms;
	Parms.Actor = Actor;
	Parms.Instigator = Instigator;
	Parms.__WorldContext = __WorldContext;
	Parms.SurvivorAbilityStruct = SurvivorAbilityStruct;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.ListPlayersWhoNeedQuest
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition*    Quest_Reference                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Quest_Backend_Name                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>Player_Controllers_Who_Require_The_Quest                         (Parm, OutParm, ZeroConstructor)
// bool                               DoesAnyoneRequireTheQuest                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PlayerNeededTheQuest                                             (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>PlayersWhoRequireQuest                                           (Edit, ZeroConstructor, DisableEditOnTemplate)
// TArray<class AFortPlayerController*>CallFunc_GetAllFortPlayerControllers_ReturnValue                 (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedObjectiveWithName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionBlueprintFunctionLibrary_C::ListPlayersWhoNeedQuest(class UFortQuestItemDefinition* Quest_Reference, class FName Quest_Backend_Name, class UObject* __WorldContext, TArray<class AFortPlayerController*>* Player_Controllers_Who_Require_The_Quest, bool* DoesAnyoneRequireTheQuest, bool PlayerNeededTheQuest, const TArray<class AFortPlayerController*>& PlayersWhoRequireQuest, TArray<class AFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 Temp_int_Array_Index_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_GreaterEqual_IntInt_ReturnValue2)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "ListPlayersWhoNeedQuest");

	Params::UMissionBlueprintFunctionLibrary_C_ListPlayersWhoNeedQuest_Params Parms;
	Parms.Quest_Reference = Quest_Reference;
	Parms.Quest_Backend_Name = Quest_Backend_Name;
	Parms.__WorldContext = __WorldContext;
	Parms.PlayerNeededTheQuest = PlayerNeededTheQuest;
	Parms.PlayersWhoRequireQuest = PlayersWhoRequireQuest;
	Parms.CallFunc_GetAllFortPlayerControllers_ReturnValue = CallFunc_GetAllFortPlayerControllers_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_HasCompletedObjectiveWithName_ReturnValue = CallFunc_HasCompletedObjectiveWithName_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue2 = CallFunc_GreaterEqual_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (Player_Controllers_Who_Require_The_Quest != nullptr)
		*Player_Controllers_Who_Require_The_Quest = Parms.Player_Controllers_Who_Require_The_Quest;

	if (DoesAnyoneRequireTheQuest != nullptr)
		*DoesAnyoneRequireTheQuest = Parms.DoesAnyoneRequireTheQuest;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesAnyoneRequireQuest
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition*    QuestReference                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Quest_Backend_Name                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SomePlayerNeedsTheQuest                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PlayerNeedsQuest                                                 (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>CallFunc_GetAllFortPlayerControllers_ReturnValue                 (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedObjectiveWithName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionBlueprintFunctionLibrary_C::DoesAnyoneRequireQuest(class UFortQuestItemDefinition* QuestReference, class FName Quest_Backend_Name, class UObject* __WorldContext, bool* SomePlayerNeedsTheQuest, bool PlayerNeedsQuest, int32 Temp_int_Array_Index_Variable, TArray<class AFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "DoesAnyoneRequireQuest");

	Params::UMissionBlueprintFunctionLibrary_C_DoesAnyoneRequireQuest_Params Parms;
	Parms.QuestReference = QuestReference;
	Parms.Quest_Backend_Name = Quest_Backend_Name;
	Parms.__WorldContext = __WorldContext;
	Parms.PlayerNeedsQuest = PlayerNeedsQuest;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAllFortPlayerControllers_ReturnValue = CallFunc_GetAllFortPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasCompletedObjectiveWithName_ReturnValue = CallFunc_HasCompletedObjectiveWithName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SomePlayerNeedsTheQuest != nullptr)
		*SomePlayerNeedsTheQuest = Parms.SomePlayerNeedsTheQuest;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.QuestObjectiveCountAchieved
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerControllerReference                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItemDefinition*    Quest_Item_Reference                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         ObjectiveStatHandle                                              (Parm, NoDestructor)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Quest_Count_Achieved                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Quest_Count_Required                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SuccessfullyFoundCount                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSuccessfullyFoundStage                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestObjectiveInfo*     CallFunc_GetObjectiveInfo_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionBlueprintFunctionLibrary_C::QuestObjectiveCountAchieved(class AFortPlayerController* PlayerControllerReference, class UFortQuestItemDefinition* Quest_Item_Reference, const struct FDataTableRowHandle& ObjectiveStatHandle, class UObject* __WorldContext, int32* Quest_Count_Achieved, int32* Quest_Count_Required, bool* SuccessfullyFoundCount, bool bSuccessfullyFoundStage, bool CallFunc_IsValid_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, class UFortQuestObjectiveInfo* CallFunc_GetObjectiveInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue2)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "QuestObjectiveCountAchieved");

	Params::UMissionBlueprintFunctionLibrary_C_QuestObjectiveCountAchieved_Params Parms;
	Parms.PlayerControllerReference = PlayerControllerReference;
	Parms.Quest_Item_Reference = Quest_Item_Reference;
	Parms.ObjectiveStatHandle = ObjectiveStatHandle;
	Parms.__WorldContext = __WorldContext;
	Parms.bSuccessfullyFoundStage = bSuccessfullyFoundStage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_GetObjectiveInfo_ReturnValue = CallFunc_GetObjectiveInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (Quest_Count_Achieved != nullptr)
		*Quest_Count_Achieved = Parms.Quest_Count_Achieved;

	if (Quest_Count_Required != nullptr)
		*Quest_Count_Required = Parms.Quest_Count_Required;

	if (SuccessfullyFoundCount != nullptr)
		*SuccessfullyFoundCount = Parms.SuccessfullyFoundCount;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HighlightQuestActor
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToHighlight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HighlightEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingActor*              K2Node_DynamicCast_AsBuilding_Actor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScalarParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingSMActor*            K2Node_DynamicCast_AsBuilding_SMActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetBuildingMeshComponent_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetBuildingMeshComponent_ReturnValue2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScalarParameterValue_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionBlueprintFunctionLibrary_C::HighlightQuestActor(class AActor* ActorToHighlight, bool HighlightEnabled, class UObject* __WorldContext, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetScalarParameterValue_ReturnValue, class ABuildingSMActor* K2Node_DynamicCast_AsBuilding_SMActor, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_FTrunc_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue2, float CallFunc_GetScalarParameterValue_ReturnValue2, int32 CallFunc_FTrunc_ReturnValue2)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "HighlightQuestActor");

	Params::UMissionBlueprintFunctionLibrary_C_HighlightQuestActor_Params Parms;
	Parms.ActorToHighlight = ActorToHighlight;
	Parms.HighlightEnabled = HighlightEnabled;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsBuilding_Actor = K2Node_DynamicCast_AsBuilding_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue = CallFunc_GetScalarParameterValue_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_SMActor = K2Node_DynamicCast_AsBuilding_SMActor;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetBuildingMeshComponent_ReturnValue = CallFunc_GetBuildingMeshComponent_ReturnValue;
	Parms.CallFunc_GetBuildingMeshComponent_ReturnValue2 = CallFunc_GetBuildingMeshComponent_ReturnValue2;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue2 = CallFunc_GetScalarParameterValue_ReturnValue2;
	Parms.CallFunc_FTrunc_ReturnValue2 = CallFunc_FTrunc_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesPlayerHaveQuest
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItemDefinition*    Quest_Item_Reference                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Quest_Item_Objective_Backend_Name                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               QuestValid                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       PlayerControllerRef                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedObjectiveWithName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionBlueprintFunctionLibrary_C::DoesPlayerHaveQuest(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* Quest_Item_Reference, class FName Quest_Item_Objective_Backend_Name, class UObject* __WorldContext, bool* QuestValid, class AFortPlayerController** PlayerControllerRef, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "DoesPlayerHaveQuest");

	Params::UMissionBlueprintFunctionLibrary_C_DoesPlayerHaveQuest_Params Parms;
	Parms.PlayerController = PlayerController;
	Parms.Quest_Item_Reference = Quest_Item_Reference;
	Parms.Quest_Item_Objective_Backend_Name = Quest_Item_Objective_Backend_Name;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_HasCompletedObjectiveWithName_ReturnValue = CallFunc_HasCompletedObjectiveWithName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestValid != nullptr)
		*QuestValid = Parms.QuestValid;

	if (PlayerControllerRef != nullptr)
		*PlayerControllerRef = Parms.PlayerControllerRef;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetObjectiveBadgeIconBrush
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*          Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                RewardTag                                                        (Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 IconBrush                                                        (Parm, OutParm)
// class UFortBadgeItemDefinition*    BadgeItem                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortWorldItemDefinition*>CallFunc_GetRewardItemsByTag_OutRewardItems                      (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItemDefinition*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortBadgeItemDefinition*    K2Node_DynamicCast_AsFort_Badge_Item_Definition                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetSmallPreviewImageBrush_ReturnValue                   ()
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionBlueprintFunctionLibrary_C::GetObjectiveBadgeIconBrush(class AFortObjectiveBase* Objective, const struct FGameplayTag& RewardTag, class UObject* __WorldContext, struct FSlateBrush* IconBrush, class UFortBadgeItemDefinition* BadgeItem, bool Temp_bool_True_if_break_was_hit_Variable, TArray<class UFortWorldItemDefinition*>& CallFunc_GetRewardItemsByTag_OutRewardItems, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortWorldItemDefinition* CallFunc_Array_Get_Item, class UFortBadgeItemDefinition* K2Node_DynamicCast_AsFort_Badge_Item_Definition, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, const struct FSlateBrush& CallFunc_GetSmallPreviewImageBrush_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "GetObjectiveBadgeIconBrush");

	Params::UMissionBlueprintFunctionLibrary_C_GetObjectiveBadgeIconBrush_Params Parms;
	Parms.Objective = Objective;
	Parms.RewardTag = RewardTag;
	Parms.__WorldContext = __WorldContext;
	Parms.BadgeItem = BadgeItem;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_GetRewardItemsByTag_OutRewardItems = CallFunc_GetRewardItemsByTag_OutRewardItems;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsFort_Badge_Item_Definition = K2Node_DynamicCast_AsFort_Badge_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetSmallPreviewImageBrush_ReturnValue = CallFunc_GetSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IconBrush != nullptr)
		*IconBrush = Parms.IconBrush;

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.UnRegisterUI UpdatesWithDamageEvents
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToUnRegisterWith                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortMissionState*           MissionState                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingActor*              K2Node_DynamicCast_AsBuilding_Actor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionBlueprintFunctionLibrary_C::UnRegisterUI_UpdatesWithDamageEvents(class AActor* ActorToUnRegisterWith, class AFortMissionState* MissionState, class UObject* __WorldContext, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess2)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "UnRegisterUI UpdatesWithDamageEvents");

	Params::UMissionBlueprintFunctionLibrary_C_UnRegisterUI_UpdatesWithDamageEvents_Params Parms;
	Parms.ActorToUnRegisterWith = ActorToUnRegisterWith;
	Parms.MissionState = MissionState;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsBuilding_Actor = K2Node_DynamicCast_AsBuilding_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.RegisterUI UpdatesWithDamageEvents
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToRegisterWith                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortMissionState*           MissionState                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingActor*              K2Node_DynamicCast_AsBuilding_Actor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionBlueprintFunctionLibrary_C::RegisterUI_UpdatesWithDamageEvents(class AActor* ActorToRegisterWith, class AFortMissionState* MissionState, class UObject* __WorldContext, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess2)
{
	static auto Func = Class->GetFunction("MissionBlueprintFunctionLibrary_C", "RegisterUI UpdatesWithDamageEvents");

	Params::UMissionBlueprintFunctionLibrary_C_RegisterUI_UpdatesWithDamageEvents_Params Parms;
	Parms.ActorToRegisterWith = ActorToRegisterWith;
	Parms.MissionState = MissionState;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsBuilding_Actor = K2Node_DynamicCast_AsBuilding_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
