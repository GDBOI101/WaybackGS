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


// Function BluGloManager.BluGloManager_C.IssueBluGloRequestForMission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMission*                Mission                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ActorToSpawnBluGloFrom                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentBluGloRewards_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::IssueBluGloRequestForMission(class AFortMission* Mission, class AActor* ActorToSpawnBluGloFrom, int32 CallFunc_GetCurrentBluGloRewards_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("BluGloManager_C", "IssueBluGloRequestForMission");

	Params::ABluGloManager_C_IssueBluGloRequestForMission_Params Parms;
	Parms.Mission = Mission;
	Parms.ActorToSpawnBluGloFrom = ActorToSpawnBluGloFrom;
	Parms.CallFunc_GetCurrentBluGloRewards_ReturnValue = CallFunc_GetCurrentBluGloRewards_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloManager.BluGloManager_C.StartSpawnFXAndAudio
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     SpawnCenter                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    SpawnFXEmitter                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::StartSpawnFXAndAudio(const struct FVector& SpawnCenter, class UParticleSystemComponent** SpawnFXEmitter, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("BluGloManager_C", "StartSpawnFXAndAudio");

	Params::ABluGloManager_C_StartSpawnFXAndAudio_Params Parms;
	Parms.SpawnCenter = SpawnCenter;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnFXEmitter != nullptr)
		*SpawnFXEmitter = Parms.SpawnFXEmitter;

}


// Function BluGloManager.BluGloManager_C.SpawnBluGloGroup
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToSpawnFrom                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LocationToSpawnFromIfActorInvalid                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         QueryStatus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumBluGloToSpawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_ChooseSpawnCenter_SpawnCenter                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             CallFunc_BuildSpawnLocations_LocationsForSpawningBluGlo          (ZeroConstructor, ReferenceParm)
// struct FVector                     CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::SpawnBluGloGroup(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, enum class EEnvQueryStatus QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int32 NumBluGloToSpawn, const struct FVector& CallFunc_ChooseSpawnCenter_SpawnCenter, int32 Temp_int_Array_Index_Variable, TArray<struct FVector>& CallFunc_BuildSpawnLocations_LocationsForSpawningBluGlo, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BluGloManager_C", "SpawnBluGloGroup");

	Params::ABluGloManager_C_SpawnBluGloGroup_Params Parms;
	Parms.ActorToSpawnFrom = ActorToSpawnFrom;
	Parms.LocationToSpawnFromIfActorInvalid = LocationToSpawnFromIfActorInvalid;
	Parms.QueryStatus = QueryStatus;
	Parms.QueryInstance = QueryInstance;
	Parms.NumBluGloToSpawn = NumBluGloToSpawn;
	Parms.CallFunc_ChooseSpawnCenter_SpawnCenter = CallFunc_ChooseSpawnCenter_SpawnCenter;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_BuildSpawnLocations_LocationsForSpawningBluGlo = CallFunc_BuildSpawnLocations_LocationsForSpawningBluGlo;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloManager.BluGloManager_C.ChooseSpawnCenter
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToSpawnFrom                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LocationToSpawnFrom                                              (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SpawnCenter                                                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::ChooseSpawnCenter(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFrom, struct FVector* SpawnCenter, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("BluGloManager_C", "ChooseSpawnCenter");

	Params::ABluGloManager_C_ChooseSpawnCenter_Params Parms;
	Parms.ActorToSpawnFrom = ActorToSpawnFrom;
	Parms.LocationToSpawnFrom = LocationToSpawnFrom;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnCenter != nullptr)
		*SpawnCenter = Parms.SpawnCenter;

}


// Function BluGloManager.BluGloManager_C.BuildSpawnLocationsRandomly
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LocationToSpawnFrom                                              (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumBluGloToSpawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             LocationsForSpawningBluGlo                                       (Parm, OutParm, ZeroConstructor)
// int32                              LastIndex                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SpawnCenter                                                      (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             LocationsToSpawnTo                                               (Edit, ZeroConstructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetRandomPointInNavigableRadius_ReturnValue             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::BuildSpawnLocationsRandomly(const struct FVector& LocationToSpawnFrom, int32 NumBluGloToSpawn, TArray<struct FVector>* LocationsForSpawningBluGlo, int32 LastIndex, const struct FVector& SpawnCenter, const TArray<struct FVector>& LocationsToSpawnTo, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_GetRandomPointInNavigableRadius_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("BluGloManager_C", "BuildSpawnLocationsRandomly");

	Params::ABluGloManager_C_BuildSpawnLocationsRandomly_Params Parms;
	Parms.LocationToSpawnFrom = LocationToSpawnFrom;
	Parms.NumBluGloToSpawn = NumBluGloToSpawn;
	Parms.LastIndex = LastIndex;
	Parms.SpawnCenter = SpawnCenter;
	Parms.LocationsToSpawnTo = LocationsToSpawnTo;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetRandomPointInNavigableRadius_ReturnValue = CallFunc_GetRandomPointInNavigableRadius_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LocationsForSpawningBluGlo != nullptr)
		*LocationsForSpawningBluGlo = Parms.LocationsForSpawningBluGlo;

}


// Function BluGloManager.BluGloManager_C.BuildSpawnLocationsFromQueryLocations
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumBluGloToSpawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             QueryResultLocations                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>             LocationsForSpawningBluGlo                                       (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>             LocationsToSpawnTo                                               (Edit, ZeroConstructor)
// int32                              LastIndex                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABluGloManager_C::BuildSpawnLocationsFromQueryLocations(int32 NumBluGloToSpawn, TArray<struct FVector>& QueryResultLocations, TArray<struct FVector>* LocationsForSpawningBluGlo, const TArray<struct FVector>& LocationsToSpawnTo, int32 LastIndex, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BluGloManager_C", "BuildSpawnLocationsFromQueryLocations");

	Params::ABluGloManager_C_BuildSpawnLocationsFromQueryLocations_Params Parms;
	Parms.NumBluGloToSpawn = NumBluGloToSpawn;
	Parms.QueryResultLocations = QueryResultLocations;
	Parms.LocationsToSpawnTo = LocationsToSpawnTo;
	Parms.LastIndex = LastIndex;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LocationsForSpawningBluGlo != nullptr)
		*LocationsForSpawningBluGlo = Parms.LocationsForSpawningBluGlo;

}


// Function BluGloManager.BluGloManager_C.BuildSpawnLocations
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEnvQueryStatus         QueryStatus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumBluGloToSpawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SpawnCenter                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             LocationsForSpawningBluGlo                                       (Parm, OutParm, ZeroConstructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FVector>             CallFunc_BuildSpawnLocationsRandomly_LocationsForSpawningBluGlo  (ZeroConstructor, ReferenceParm)
// TArray<struct FVector>             CallFunc_GetResultsAsLocations_ReturnValue                       (ZeroConstructor, ReferenceParm)
// TArray<struct FVector>             CallFunc_BuildSpawnLocationsFromQueryLocations_LocationsForSpawningBluGlo(ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABluGloManager_C::BuildSpawnLocations(enum class EEnvQueryStatus QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int32 NumBluGloToSpawn, const struct FVector& SpawnCenter, TArray<struct FVector>* LocationsForSpawningBluGlo, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<struct FVector>& CallFunc_BuildSpawnLocationsRandomly_LocationsForSpawningBluGlo, TArray<struct FVector>& CallFunc_GetResultsAsLocations_ReturnValue, TArray<struct FVector>& CallFunc_BuildSpawnLocationsFromQueryLocations_LocationsForSpawningBluGlo, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("BluGloManager_C", "BuildSpawnLocations");

	Params::ABluGloManager_C_BuildSpawnLocations_Params Parms;
	Parms.QueryStatus = QueryStatus;
	Parms.QueryInstance = QueryInstance;
	Parms.NumBluGloToSpawn = NumBluGloToSpawn;
	Parms.SpawnCenter = SpawnCenter;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BuildSpawnLocationsRandomly_LocationsForSpawningBluGlo = CallFunc_BuildSpawnLocationsRandomly_LocationsForSpawningBluGlo;
	Parms.CallFunc_GetResultsAsLocations_ReturnValue = CallFunc_GetResultsAsLocations_ReturnValue;
	Parms.CallFunc_BuildSpawnLocationsFromQueryLocations_LocationsForSpawningBluGlo = CallFunc_BuildSpawnLocationsFromQueryLocations_LocationsForSpawningBluGlo;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LocationsForSpawningBluGlo != nullptr)
		*LocationsForSpawningBluGlo = Parms.LocationsForSpawningBluGlo;

}


// Function BluGloManager.BluGloManager_C.IssueBluGloRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumBluGloToSpawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ActorToSpawnFrom                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LocationToSpawnFromIfActorInvalid                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*CallFunc_RunEQSQuery_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UBluGloRequestHandler_C*     K2Node_DynamicCast_AsBlu_Glo_Request_Handler                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABluGloManager_C::IssueBluGloRequest(int32 NumBluGloToSpawn, class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBluGloRequestHandler_C* K2Node_DynamicCast_AsBlu_Glo_Request_Handler, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BluGloManager_C", "IssueBluGloRequest");

	Params::ABluGloManager_C_IssueBluGloRequest_Params Parms;
	Parms.NumBluGloToSpawn = NumBluGloToSpawn;
	Parms.ActorToSpawnFrom = ActorToSpawnFrom;
	Parms.LocationToSpawnFromIfActorInvalid = LocationToSpawnFromIfActorInvalid;
	Parms.CallFunc_RunEQSQuery_ReturnValue = CallFunc_RunEQSQuery_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsBlu_Glo_Request_Handler = K2Node_DynamicCast_AsBlu_Glo_Request_Handler;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloManager.BluGloManager_C.SpawnBluGlo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     SpawnLocation                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SpawnFromLocation                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABluGlo_Node_C*              CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::SpawnBluGlo(const struct FVector& SpawnLocation, const struct FVector& SpawnFromLocation, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABluGlo_Node_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static auto Func = Class->GetFunction("BluGloManager_C", "SpawnBluGlo");

	Params::ABluGloManager_C_SpawnBluGlo_Params Parms;
	Parms.SpawnLocation = SpawnLocation;
	Parms.SpawnFromLocation = SpawnFromLocation;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloManager.BluGloManager_C.RemoveOccupiedNodes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATiered_BluGlo_Parent_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABluGloManager_C::RemoveOccupiedNodes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ATiered_BluGlo_Parent_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static auto Func = Class->GetFunction("BluGloManager_C", "RemoveOccupiedNodes");

	Params::ABluGloManager_C_RemoveOccupiedNodes_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloManager.BluGloManager_C.RequestedBluGo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMission*                Mission                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     EQS_Start_Location                                               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentBluGloRewards_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::RequestedBluGo(class AFortMission* Mission, const struct FVector& EQS_Start_Location, class AActor* Actor, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetCurrentBluGloRewards_ReturnValue)
{
	static auto Func = Class->GetFunction("BluGloManager_C", "RequestedBluGo");

	Params::ABluGloManager_C_RequestedBluGo_Params Parms;
	Parms.Mission = Mission;
	Parms.EQS_Start_Location = EQS_Start_Location;
	Parms.Actor = Actor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentBluGloRewards_ReturnValue = CallFunc_GetCurrentBluGloRewards_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloManager.BluGloManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABluGloManager_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BluGloManager_C", "UserConstructionScript");

	Params::ABluGloManager_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloManager.BluGloManager_C.HandleMissionEvent_RequestBluGloSpawnUseActor
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

void ABluGloManager_C::HandleMissionEvent_RequestBluGloSpawnUseActor(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static auto Func = Class->GetFunction("BluGloManager_C", "HandleMissionEvent_RequestBluGloSpawnUseActor");

	Params::ABluGloManager_C_HandleMissionEvent_RequestBluGloSpawnUseActor_Params Parms;
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


// Function BluGloManager.BluGloManager_C.StopSpawnFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Off                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABluGloManager_C::StopSpawnFX(bool Off)
{
	static auto Func = Class->GetFunction("BluGloManager_C", "StopSpawnFX");

	Params::ABluGloManager_C_StopSpawnFX_Params Parms;
	Parms.Off = Off;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloManager.BluGloManager_C.OnBluGloQueryFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToSpawnFrom                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LocationToSpawnFromIfActorInvalid                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         QueryStatus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumBluGloToSpawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::OnBluGloQueryFinished(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, enum class EEnvQueryStatus QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int32 NumBluGloToSpawn)
{
	static auto Func = Class->GetFunction("BluGloManager_C", "OnBluGloQueryFinished");

	Params::ABluGloManager_C_OnBluGloQueryFinished_Params Parms;
	Parms.ActorToSpawnFrom = ActorToSpawnFrom;
	Parms.LocationToSpawnFromIfActorInvalid = LocationToSpawnFromIfActorInvalid;
	Parms.QueryStatus = QueryStatus;
	Parms.QueryInstance = QueryInstance;
	Parms.NumBluGloToSpawn = NumBluGloToSpawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloManager.BluGloManager_C.SpawnFXComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    PSystem                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::SpawnFXComplete(class UParticleSystemComponent* PSystem)
{
	static auto Func = Class->GetFunction("BluGloManager_C", "SpawnFXComplete");

	Params::ABluGloManager_C_SpawnFXComplete_Params Parms;
	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloManager.BluGloManager_C.SpawnBluGloGroupEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     SpawnCenter                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::SpawnBluGloGroupEvent(const struct FVector& SpawnCenter)
{
	static auto Func = Class->GetFunction("BluGloManager_C", "SpawnBluGloGroupEvent");

	Params::ABluGloManager_C_SpawnBluGloGroupEvent_Params Parms;
	Parms.SpawnCenter = SpawnCenter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloManager.BluGloManager_C.AddMoreBluGloInWorld
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMission*                Mission                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::AddMoreBluGloInWorld(class AFortMission* Mission)
{
	static auto Func = Class->GetFunction("BluGloManager_C", "AddMoreBluGloInWorld");

	Params::ABluGloManager_C_AddMoreBluGloInWorld_Params Parms;
	Parms.Mission = Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloManager.BluGloManager_C.HandleMissionEvent_RequestBluGloSpawnUseEQS
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

void ABluGloManager_C::HandleMissionEvent_RequestBluGloSpawnUseEQS(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static auto Func = Class->GetFunction("BluGloManager_C", "HandleMissionEvent_RequestBluGloSpawnUseEQS");

	Params::ABluGloManager_C_HandleMissionEvent_RequestBluGloSpawnUseEQS_Params Parms;
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


// Function BluGloManager.BluGloManager_C.ExecuteUbergraph_BluGloManager
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// struct FGuid                       K2Node_HandleMissionEvent_MissionGuid2                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_ObjectiveHandle2                       ()
// class UFortMissionEventParams*     K2Node_HandleMissionEvent_Params2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleMissionEvent_EventFocus2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  K2Node_HandleMissionEvent_EventContent2                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_HandleMissionEvent_EventInstigator2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_HandleMissionEvent_GenericInt2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_HandleMissionEvent_GenericFloat2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_HandleMissionEvent_GenericText2                           (ConstParm)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_GameplayTags2                          ()
// struct FFortMissionEvent           K2Node_HandleMissionEvent_MissionEvent2                          (ConstParm)
// bool                               K2Node_CustomEvent_On_off                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATiered_BluGlo_Parent_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATiered_BluGlo_Parent_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_ActorToSpawnFrom                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_LocationToSpawnFromIfActorInvalid             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         K2Node_CustomEvent_QueryStatus                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*K2Node_CustomEvent_QueryInstance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NumBluGloToSpawn                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATiered_BluGlo_Parent_C*     CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    K2Node_CustomEvent_PSystem                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABluGlo_Node_C*              CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_SpawnCenter                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_StartSpawnFXAndAudio_SpawnFXEmitter                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AFortMission*                K2Node_CustomEvent_Mission                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::ExecuteUbergraph_BluGloManager(int32 EntryPoint, const struct FGuid& K2Node_HandleMissionEvent_MissionGuid, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* K2Node_HandleMissionEvent_EventFocus, class UDataAsset* K2Node_HandleMissionEvent_EventContent, class AActor* K2Node_HandleMissionEvent_EventInstigator, int32 K2Node_HandleMissionEvent_GenericInt, float K2Node_HandleMissionEvent_GenericFloat, class FText K2Node_HandleMissionEvent_GenericText, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent, const struct FGuid& K2Node_HandleMissionEvent_MissionGuid2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle2, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params2, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2, class UObject* K2Node_HandleMissionEvent_EventFocus2, class UDataAsset* K2Node_HandleMissionEvent_EventContent2, class AActor* K2Node_HandleMissionEvent_EventInstigator2, int32 K2Node_HandleMissionEvent_GenericInt2, float K2Node_HandleMissionEvent_GenericFloat2, class FText K2Node_HandleMissionEvent_GenericText2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags2, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent2, bool K2Node_CustomEvent_On_off, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, TArray<class ATiered_BluGlo_Parent_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Less_IntInt_ReturnValue, class ATiered_BluGlo_Parent_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable2, class AActor* K2Node_CustomEvent_ActorToSpawnFrom, const struct FVector& K2Node_CustomEvent_LocationToSpawnFromIfActorInvalid, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, int32 K2Node_CustomEvent_NumBluGloToSpawn, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class ATiered_BluGlo_Parent_C* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Add_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, class UParticleSystemComponent* K2Node_CustomEvent_PSystem, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, class ABluGlo_Node_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& K2Node_CustomEvent_SpawnCenter, bool CallFunc_BooleanAND_ReturnValue, class UParticleSystemComponent* CallFunc_StartSpawnFXAndAudio_SpawnFXEmitter, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortMission* K2Node_CustomEvent_Mission)
{
	static auto Func = Class->GetFunction("BluGloManager_C", "ExecuteUbergraph_BluGloManager");

	Params::ABluGloManager_C_ExecuteUbergraph_BluGloManager_Params Parms;
	Parms.EntryPoint = EntryPoint;
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
	Parms.K2Node_HandleMissionEvent_MissionGuid2 = K2Node_HandleMissionEvent_MissionGuid2;
	Parms.K2Node_HandleMissionEvent_ObjectiveHandle2 = K2Node_HandleMissionEvent_ObjectiveHandle2;
	Parms.K2Node_HandleMissionEvent_Params2 = K2Node_HandleMissionEvent_Params2;
	Parms.K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2 = K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2;
	Parms.K2Node_HandleMissionEvent_EventFocus2 = K2Node_HandleMissionEvent_EventFocus2;
	Parms.K2Node_HandleMissionEvent_EventContent2 = K2Node_HandleMissionEvent_EventContent2;
	Parms.K2Node_HandleMissionEvent_EventInstigator2 = K2Node_HandleMissionEvent_EventInstigator2;
	Parms.K2Node_HandleMissionEvent_GenericInt2 = K2Node_HandleMissionEvent_GenericInt2;
	Parms.K2Node_HandleMissionEvent_GenericFloat2 = K2Node_HandleMissionEvent_GenericFloat2;
	Parms.K2Node_HandleMissionEvent_GenericText2 = K2Node_HandleMissionEvent_GenericText2;
	Parms.K2Node_HandleMissionEvent_GameplayTags2 = K2Node_HandleMissionEvent_GameplayTags2;
	Parms.K2Node_HandleMissionEvent_MissionEvent2 = K2Node_HandleMissionEvent_MissionEvent2;
	Parms.K2Node_CustomEvent_On_off = K2Node_CustomEvent_On_off;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.K2Node_CustomEvent_ActorToSpawnFrom = K2Node_CustomEvent_ActorToSpawnFrom;
	Parms.K2Node_CustomEvent_LocationToSpawnFromIfActorInvalid = K2Node_CustomEvent_LocationToSpawnFromIfActorInvalid;
	Parms.K2Node_CustomEvent_QueryStatus = K2Node_CustomEvent_QueryStatus;
	Parms.K2Node_CustomEvent_QueryInstance = K2Node_CustomEvent_QueryInstance;
	Parms.K2Node_CustomEvent_NumBluGloToSpawn = K2Node_CustomEvent_NumBluGloToSpawn;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.K2Node_CustomEvent_PSystem = K2Node_CustomEvent_PSystem;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_SpawnCenter = K2Node_CustomEvent_SpawnCenter;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_StartSpawnFXAndAudio_SpawnFXEmitter = CallFunc_StartSpawnFXAndAudio_SpawnFXEmitter;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Mission = K2Node_CustomEvent_Mission;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
