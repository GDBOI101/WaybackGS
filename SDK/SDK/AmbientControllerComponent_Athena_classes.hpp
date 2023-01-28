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

// 0x78 (0x168 - 0xF0)
// BlueprintGeneratedClass AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C
class UAmbientControllerComponent_Athena_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF0(0x8)(Transient, DuplicateTransient)
	class USoundBase*                            Loop_Morning;                                      // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Loop_Evening;                                      // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Loop_Indoors;                                      // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Loop_Night;                                        // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Loop_Day;                                          // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AmbientMixA;                                       // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AmbientMixB;                                       // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bActiveMixIsA;                                     // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B13[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CheckFrequency;                                    // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsInsidePrevious;                                 // 0x138(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsInsideCurrent;                                  // 0x139(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B14[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       AmbientMixIndoor;                                  // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     PlayerController;                                  // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetLPFFreq;                                     // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentLPFFreq;                                    // 0x154(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InsideLPFFreq;                                     // 0x158(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OutsideLPFFreq;                                    // 0x15C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CurrentOneShot;                                    // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AmbientControllerComponent_Athena_C");
		return Clss;
	}

	void SetTargetLPFFreq(float Target);
	void SetIndoorMixEnabled(bool Enabled, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
	bool Trace(const struct FVector& Start, const struct FVector& Direction, TArray<class AFortPlayerPawn*>& CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue);
	void Crossfade(class USoundBase* NewSound, class USoundBase* NewSoundLocal, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue2);
	void RegisterTimeOfDayCallbacks();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnCheckIfSurrounded();
	void Evaluate_Inside_State();
	void On_Day_Phase_Change(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void ReceiveTick(float DeltaSeconds);
	void On_Game_Phase_Change(enum class EAthenaGamePhase GamePhase);
	void On_Game_Phase_Step_Change(enum class EAthenaGamePhaseStep GamePhaseStep);
	void Set_Storm_Amb_Layer_Enabled(bool Enabled);
	void ExecuteUbergraph_AmbientControllerComponent_Athena(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, enum class EFortDayPhase Temp_byte_Variable, enum class EFortDayPhase Temp_byte_Variable2, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue3, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue4, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, enum class EFortDayPhase K2Node_CustomEvent_CurrentDayPhase, enum class EFortDayPhase K2Node_CustomEvent_PreviousDayPhase, bool K2Node_CustomEvent_bAtCreation, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class USoundBase* K2Node_Select_Default, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue2, class AActor* CallFunc_GetViewTarget_ReturnValue2, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, class USoundBase* K2Node_Select2_Default, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, bool CallFunc_Trace_ReturnValue, bool CallFunc_Trace_ReturnValue2, bool CallFunc_Trace_ReturnValue3, bool CallFunc_Trace_ReturnValue4, bool CallFunc_Trace_ReturnValue5, float K2Node_Event_DeltaSeconds, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess2, enum class EAthenaGamePhase K2Node_CustomEvent_GamePhase, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool K2Node_SwitchEnum_CmpSuccess, enum class EAthenaGamePhaseStep K2Node_CustomEvent_GamePhaseStep, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, bool K2Node_SwitchEnum2_CmpSuccess, bool K2Node_CustomEvent_Enabled);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
