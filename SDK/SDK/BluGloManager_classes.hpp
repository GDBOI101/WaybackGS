#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x480 - 0x420)
// BlueprintGeneratedClass BluGloManager.BluGloManager_C
class ABluGloManager_C : public AFortBluGloManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x428(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ATiered_BluGlo_Parent_C*>       PossibleSpawnLocationsArray;                       // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ATiered_BluGlo_Parent_C*>       OccupiedNodes;                                     // 0x440(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        AmountOfBluGloToSpawn;                             // 0x450(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DEC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                QueryActor;                                        // 0x458(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         _1stRequestArraySet;                               // 0x460(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BluGloNavigablePointRadius;                        // 0x464(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Reward_Start_Sound;                                // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Reward_Appear_Sound;                               // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LocationLength;                                    // 0x478(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BluGloSpawnAnimationTime;                          // 0x47C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BluGloManager_C");
		return Clss;
	}

	void IssueBluGloRequestForMission(class AFortMission* Mission, class AActor* ActorToSpawnBluGloFrom, int32 CallFunc_GetCurrentBluGloRewards_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void StartSpawnFXAndAudio(const struct FVector& SpawnCenter, class UParticleSystemComponent** SpawnFXEmitter, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
	void SpawnBluGloGroup(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, enum class EEnvQueryStatus QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int32 NumBluGloToSpawn, const struct FVector& CallFunc_ChooseSpawnCenter_SpawnCenter, int32 Temp_int_Array_Index_Variable, TArray<struct FVector>& CallFunc_BuildSpawnLocations_LocationsForSpawningBluGlo, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ChooseSpawnCenter(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFrom, struct FVector* SpawnCenter, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void BuildSpawnLocationsRandomly(const struct FVector& LocationToSpawnFrom, int32 NumBluGloToSpawn, TArray<struct FVector>* LocationsForSpawningBluGlo, int32 LastIndex, const struct FVector& SpawnCenter, const TArray<struct FVector>& LocationsToSpawnTo, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_GetRandomPointInNavigableRadius_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void BuildSpawnLocationsFromQueryLocations(int32 NumBluGloToSpawn, TArray<struct FVector>& QueryResultLocations, TArray<struct FVector>* LocationsForSpawningBluGlo, const TArray<struct FVector>& LocationsToSpawnTo, int32 LastIndex, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void BuildSpawnLocations(enum class EEnvQueryStatus QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int32 NumBluGloToSpawn, const struct FVector& SpawnCenter, TArray<struct FVector>* LocationsForSpawningBluGlo, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<struct FVector>& CallFunc_BuildSpawnLocationsRandomly_LocationsForSpawningBluGlo, TArray<struct FVector>& CallFunc_GetResultsAsLocations_ReturnValue, TArray<struct FVector>& CallFunc_BuildSpawnLocationsFromQueryLocations_LocationsForSpawningBluGlo, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void IssueBluGloRequest(int32 NumBluGloToSpawn, class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBluGloRequestHandler_C* K2Node_DynamicCast_AsBlu_Glo_Request_Handler, bool K2Node_DynamicCast_bSuccess);
	void SpawnBluGlo(const struct FVector& SpawnLocation, const struct FVector& SpawnFromLocation, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABluGlo_Node_C* CallFunc_FinishSpawningActor_ReturnValue);
	void RemoveOccupiedNodes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ATiered_BluGlo_Parent_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void RequestedBluGo(class AFortMission* Mission, const struct FVector& EQS_Start_Location, class AActor* Actor, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetCurrentBluGloRewards_ReturnValue);
	void UserConstructionScript();
	void HandleMissionEvent_RequestBluGloSpawnUseActor(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent);
	void StopSpawnFX(bool Off);
	void OnBluGloQueryFinished(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, enum class EEnvQueryStatus QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int32 NumBluGloToSpawn);
	void SpawnFXComplete(class UParticleSystemComponent* PSystem);
	void SpawnBluGloGroupEvent(const struct FVector& SpawnCenter);
	void AddMoreBluGloInWorld(class AFortMission* Mission);
	void HandleMissionEvent_RequestBluGloSpawnUseEQS(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent);
	void ExecuteUbergraph_BluGloManager(int32 EntryPoint, const struct FGuid& K2Node_HandleMissionEvent_MissionGuid, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* K2Node_HandleMissionEvent_EventFocus, class UDataAsset* K2Node_HandleMissionEvent_EventContent, class AActor* K2Node_HandleMissionEvent_EventInstigator, int32 K2Node_HandleMissionEvent_GenericInt, float K2Node_HandleMissionEvent_GenericFloat, class FText K2Node_HandleMissionEvent_GenericText, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent, const struct FGuid& K2Node_HandleMissionEvent_MissionGuid2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle2, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params2, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2, class UObject* K2Node_HandleMissionEvent_EventFocus2, class UDataAsset* K2Node_HandleMissionEvent_EventContent2, class AActor* K2Node_HandleMissionEvent_EventInstigator2, int32 K2Node_HandleMissionEvent_GenericInt2, float K2Node_HandleMissionEvent_GenericFloat2, class FText K2Node_HandleMissionEvent_GenericText2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags2, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent2, bool K2Node_CustomEvent_On_off, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, TArray<class ATiered_BluGlo_Parent_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Less_IntInt_ReturnValue, class ATiered_BluGlo_Parent_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable2, class AActor* K2Node_CustomEvent_ActorToSpawnFrom, const struct FVector& K2Node_CustomEvent_LocationToSpawnFromIfActorInvalid, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, int32 K2Node_CustomEvent_NumBluGloToSpawn, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class ATiered_BluGlo_Parent_C* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Add_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, class UParticleSystemComponent* K2Node_CustomEvent_PSystem, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, class ABluGlo_Node_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& K2Node_CustomEvent_SpawnCenter, bool CallFunc_BooleanAND_ReturnValue, class UParticleSystemComponent* CallFunc_StartSpawnFXAndAudio_SpawnFXEmitter, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortMission* K2Node_CustomEvent_Mission);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
