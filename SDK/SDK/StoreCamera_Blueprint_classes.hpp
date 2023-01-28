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

// 0x80 (0x940 - 0x8C0)
// BlueprintGeneratedClass StoreCamera_Blueprint.StoreCamera_Blueprint_C
class AStoreCamera_Blueprint_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8C0(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Mesh_DarkenBG;                                     // 0x8C8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      CameraPlaceholderGround;                           // 0x8D0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ChoicePack_NewTrack_0_ACA3841D4D5084BE3482FA8EBB7CE9C0; // 0x8D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ChoicePack__Direction_ACA3841D4D5084BE3482FA8EBB7CE9C0; // 0x8DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2481[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ChoicePack;                                        // 0x8E0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_NewTrack_0_6555812E4B246E6144D3C99FC49F7FE9; // 0x8E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_6555812E4B246E6144D3C99FC49F7FE9; // 0x8EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2482[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x8F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraGroundLoc;                                   // 0x8F8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CameraGroundRot;                                   // 0x904(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               CameraOriginalLoc;                                 // 0x910(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CameraOriginalRot;                                 // 0x91C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CameraInStartPos;                                  // 0x928(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MouseDown;                                         // 0x929(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2483[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AStorePinataMaster_BP_C*               PinataInLevel;                                     // 0x930(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStoreCardReveal_BP_C*                 CardRevealInLevel;                                 // 0x938(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StoreCamera_Blueprint_C");
		return Clss;
	}

	void UserConstructionScript(const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue2);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ChoicePack__FinishedFunc();
	void ChoicePack__UpdateFunc();
	void OnActivated();
	void OnDeactivated();
	void OpeningCameraTransition();
	void ResetCamera();
	void DarkenBGVisibility(bool Enable);
	void ChoicePackFOV_Out();
	void ChoicePackFOV_In();
	void ExecuteUbergraph_StoreCamera_Blueprint(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Lerp_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, int32 Temp_int_Array_Index_Variable2, bool K2Node_CustomEvent_Enable, TArray<class AStorePinataMaster_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, TArray<class AStoreCardReveal_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors2, class AStoreCardReveal_BP_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue2, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Loop_Counter_Variable3, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors3, int32 Temp_int_Array_Index_Variable3, class ATVPostProcessBP_C* CallFunc_Array_Get_Item2, class AStorePinataMaster_BP_C* CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue3, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
