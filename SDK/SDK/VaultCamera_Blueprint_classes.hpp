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

// 0x20 (0x8E0 - 0x8C0)
// BlueprintGeneratedClass VaultCamera_Blueprint.VaultCamera_Blueprint_C
class AVaultCamera_Blueprint_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8C0(0x8)(Transient, DuplicateTransient)
	class AFortPlayerPawn*                       CachedPawn;                                        // 0x8C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MouseDown;                                         // 0x8D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4046[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AVaultCamera_Blueprint_C*              VaultActor;                                        // 0x8D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VaultCamera_Blueprint_C");
		return Clss;
	}

	void UserConstructionScript();
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void ReceiveTick(float DeltaSeconds);
	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_VaultCamera_Blueprint(int32 EntryPoint, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& Temp_struct_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnByIndex_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key3, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetInputMouseDelta_DeltaX, float CallFunc_GetInputMouseDelta_DeltaY, float CallFunc_Multiply_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue2, const struct FKey& K2Node_InputKeyEvent_Key4, const struct FKey& K2Node_InputKeyEvent_Key2, const struct FKey& Temp_struct_Variable2, bool CallFunc_IsValid_ReturnValue2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue3, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Subtract_FloatFloat_ReturnValue, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_K2_SetActorRotation_ReturnValue, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
